void __fastcall sub_7BEDD0(__int64 a1, unsigned __int8 *a2, double a3)
{
  __int64 v4; // rdi
  int v5; // eax
  int v6; // r12d
  __int64 v7; // rax
  unsigned int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r15
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // r15
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // r15
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rdi
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // ebp
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdi
  unsigned int v39; // ebp
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // rax
  __int64 v49; // rbp
  __int64 v50; // rbp
  __int64 v51; // r12
  __int64 v52; // r12

  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v4 + 3612) )
  {
    sub_11C7890(v4);
    v4 = *(_QWORD *)(a1 + 24);
  }
  if ( !*(_BYTE *)(v4 + 3184) )
  {
    v5 = *(_DWORD *)(v4 + 3612);
    v6 = 10;
LABEL_5:
    if ( !v5 )
      goto LABEL_6;
    while ( 1 )
    {
      v8 = **(_DWORD **)(v4 + 3856);
LABEL_8:
      v9 = *(_QWORD *)(a1 + 744);
      *(_BYTE *)(a1 + 954) = 0;
      *(_WORD *)(a1 + 952) = 0;
      if ( v9 )
      {
        v10 = *(unsigned int *)(v9 - 4);
        if ( (_DWORD)v10 )
        {
          v11 = 8 * v10;
          v12 = 0;
          while ( 1 )
          {
            a2 = *(unsigned __int8 **)(v9 + v12);
            v12 += 8;
            sub_7BE270(a1, a2, a3);
            if ( v11 == v12 )
              break;
            v9 = *(_QWORD *)(a1 + 744);
          }
        }
      }
      v13 = *(_QWORD *)(a1 + 752);
      if ( v13 )
      {
        v14 = *(unsigned int *)(v13 - 4);
        if ( (_DWORD)v14 )
        {
          v15 = 8 * v14;
          v16 = 0;
          while ( 1 )
          {
            a2 = *(unsigned __int8 **)(v13 + v16);
            v16 += 8;
            sub_7BE270(a1, a2, a3);
            if ( v15 == v16 )
              break;
            v13 = *(_QWORD *)(a1 + 752);
          }
        }
      }
      sub_7B6CD0((_QWORD *)a1);
      sub_7B28B0((_QWORD *)a1, a3);
      sub_7B2C80((_QWORD *)a1, a3);
      v17 = *(_QWORD *)(a1 + 744);
      if ( v17 )
      {
        v18 = *(unsigned int *)(v17 - 4);
        if ( (_DWORD)v18 )
          break;
      }
LABEL_31:
      v24 = *(_QWORD *)(a1 + 752);
      if ( v24 )
      {
        v25 = *(unsigned int *)(v24 - 4);
        if ( (_DWORD)v25 )
        {
          v26 = 8 * v25;
          v27 = 0;
          while ( 2 )
          {
            v29 = *(_QWORD *)(v24 + v27);
            if ( !*(_BYTE *)(v29 + 12) && *(_DWORD *)(v29 + 60) > 1u )
            {
              v30 = *(_DWORD *)(v29 + 8);
              if ( !v30 )
              {
                v27 += 8;
                a2 = (unsigned __int8 *)sub_828140(v29);
                sub_7BBB20(a1, (__int64)a2, a3);
                if ( v26 == v27 )
                  break;
                goto LABEL_39;
              }
              if ( v30 == 1 )
              {
                v28 = sub_81AF20(v29);
                if ( !*(_BYTE *)(v28 + 12) && *(_DWORD *)(v28 + 16) == -2 )
                {
                  a2 = (unsigned __int8 *)v28;
                  sub_7B78E0(a1, v28, a3);
                }
              }
            }
            v27 += 8;
            if ( v26 == v27 )
              break;
LABEL_39:
            v24 = *(_QWORD *)(a1 + 752);
            continue;
          }
        }
      }
      if ( *(_BYTE *)(a1 + 953) )
      {
        sub_7B2F50(a1, (_QWORD **)(*(_QWORD *)(a1 + 24) + 3224LL));
        a2 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 3232LL);
        sub_7B2F50(a1, (_QWORD **)a2);
      }
      if ( *(_BYTE *)(a1 + 954) )
      {
        sub_7B7C50(a1, (__int64 *)(a1 + 744), 0);
        a2 = (unsigned __int8 *)(a1 + 752);
        sub_7B7C50(a1, (__int64 *)(a1 + 752), 1);
        *(_BYTE *)(a1 + 954) = 0;
      }
      if ( !--v6 )
        goto LABEL_53;
      v4 = *(_QWORD *)(a1 + 24);
      v5 = *(_DWORD *)(v4 + 3612);
      if ( *(_BYTE *)(a1 + 952) )
        goto LABEL_5;
      if ( !v5 )
      {
        v31 = *(_QWORD *)(v4 + 3784);
        if ( !v31 || v8 >= *(_DWORD *)(v31 - 4) )
        {
LABEL_53:
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1);
          if ( (unsigned int)sub_180B130(a1) )
          {
            if ( (unsigned __int8)sub_186A530(a3) )
            {
              sub_186A4C0(a3);
              v32 = *(_DWORD *)(a1 + 196) + *(_DWORD *)(a1 + 188) + *(_DWORD *)(a1 + 192);
              v33 = sub_180B150(a1, a2);
              std::__ostream_insert<char,std::char_traits<char>>();
              std::__ostream_insert<char,std::char_traits<char>>();
              v34 = *(_QWORD *)(a1 + 744);
              if ( v34 )
                v35 = *(unsigned int *)(v34 - 4);
              else
                v35 = 0;
              v36 = v33;
              std::ostream::_M_insert<unsigned long>();
              v37 = *(_QWORD *)(a1 + 752);
              if ( v37 )
              {
                v35 = *(unsigned int *)(v37 - 4);
                if ( (_DWORD)v35 )
                {
                  v45 = sub_180B150(v33, v35);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v46 = *(_QWORD *)(a1 + 752);
                  if ( v46 )
                    v35 = *(unsigned int *)(v46 - 4);
                  else
                    v35 = 0;
                  v36 = v45;
                  std::ostream::_M_insert<unsigned long>();
                }
              }
              if ( v32 )
              {
                v51 = sub_180B150(v36, v35);
                std::__ostream_insert<char,std::char_traits<char>>();
                v35 = v32;
                v36 = v51;
                std::ostream::_M_insert<unsigned long>();
              }
              if ( *(_DWORD *)(a1 + 208) )
              {
                v50 = sub_180B150(v36, v35);
                std::__ostream_insert<char,std::char_traits<char>>();
                v35 = *(unsigned int *)(a1 + 208);
                v36 = v50;
                std::ostream::_M_insert<unsigned long>();
              }
              v38 = sub_180B150(v36, v35);
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_186A500(v38, ")\n");
            }
            else
            {
              v39 = *(_DWORD *)(a1 + 196) + *(_DWORD *)(a1 + 188) + *(_DWORD *)(a1 + 192);
              v40 = sub_180B150(a1, a2);
              std::__ostream_insert<char,std::char_traits<char>>();
              std::__ostream_insert<char,std::char_traits<char>>();
              v41 = *(_QWORD *)(a1 + 744);
              if ( v41 )
                v42 = *(unsigned int *)(v41 - 4);
              else
                v42 = 0;
              v43 = v40;
              std::ostream::_M_insert<unsigned long>();
              v44 = *(_QWORD *)(a1 + 752);
              if ( v44 && *(_DWORD *)(v44 - 4) )
              {
                v47 = sub_180B150(v40, v42);
                std::__ostream_insert<char,std::char_traits<char>>();
                v48 = *(_QWORD *)(a1 + 752);
                if ( v48 )
                  v42 = *(unsigned int *)(v48 - 4);
                else
                  v42 = 0;
                v43 = v47;
                std::ostream::_M_insert<unsigned long>();
              }
              if ( v39 )
              {
                v52 = sub_180B150(v43, v42);
                std::__ostream_insert<char,std::char_traits<char>>();
                v42 = v39;
                v43 = v52;
                std::ostream::_M_insert<unsigned long>();
              }
              if ( *(_DWORD *)(a1 + 208) )
              {
                v49 = sub_180B150(v43, v42);
                std::__ostream_insert<char,std::char_traits<char>>();
                v42 = *(unsigned int *)(a1 + 208);
                v43 = v49;
                std::ostream::_M_insert<unsigned long>();
              }
              sub_180B150(v43, v42);
              std::__ostream_insert<char,std::char_traits<char>>();
            }
          }
          return;
        }
LABEL_6:
        v7 = *(_QWORD *)(v4 + 3784);
        if ( v7 )
          v8 = *(_DWORD *)(v7 - 4);
        else
          v8 = 0;
        goto LABEL_8;
      }
      if ( v8 >= **(_DWORD **)(v4 + 3856) )
        goto LABEL_53;
    }
    v19 = 8 * v18;
    v20 = 0;
    while ( 1 )
    {
      v22 = *(_QWORD *)(v17 + v20);
      if ( *(_BYTE *)(v22 + 12) || *(_DWORD *)(v22 + 60) <= 1u )
        goto LABEL_25;
      v23 = *(_DWORD *)(v22 + 8);
      if ( v23 )
        break;
      v20 += 8;
      a2 = (unsigned __int8 *)sub_828140(v22);
      sub_7BBB20(a1, (__int64)a2, a3);
      if ( v20 == v19 )
        goto LABEL_31;
LABEL_26:
      v17 = *(_QWORD *)(a1 + 744);
    }
    if ( v23 == 1 )
    {
      v21 = sub_81AF20(v22);
      if ( !*(_BYTE *)(v21 + 12) && *(_DWORD *)(v21 + 16) == -2 )
      {
        a2 = (unsigned __int8 *)v21;
        sub_7B78E0(a1, v21, a3);
      }
    }
LABEL_25:
    v20 += 8;
    if ( v20 == v19 )
      goto LABEL_31;
    goto LABEL_26;
  }
}

