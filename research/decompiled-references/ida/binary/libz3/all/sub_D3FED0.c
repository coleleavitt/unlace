__int64 __fastcall sub_D3FED0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 **a5, double a6)
{
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 result; // rax
  __int64 *v17; // rbx
  unsigned int v18; // r14d
  __int64 v19; // rax
  unsigned int v20; // eax
  int v21; // edx
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 *v26; // r15
  char v27; // al
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rsi
  __int64 v31; // rdi
  bool v32; // zf
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // r9
  __int64 v36; // rax
  int v37; // ecx
  __int64 *v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  char i; // al
  unsigned int v44; // eax
  int v45; // eax
  __int64 *v46; // rsi
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // rsi
  __int64 v50; // rdi
  unsigned int v51; // [rsp+8h] [rbp-100h]
  __int64 *v52; // [rsp+8h] [rbp-100h]
  __int64 v53; // [rsp+10h] [rbp-F8h]
  unsigned int v54; // [rsp+10h] [rbp-F8h]
  __int64 v55; // [rsp+18h] [rbp-F0h]
  __int64 v56; // [rsp+18h] [rbp-F0h]
  __int64 v57; // [rsp+30h] [rbp-D8h]
  __int64 v58; // [rsp+30h] [rbp-D8h]
  __int64 v59; // [rsp+30h] [rbp-D8h]
  __int64 v60; // [rsp+30h] [rbp-D8h]
  __int64 v61; // [rsp+30h] [rbp-D8h]
  __int64 v62; // [rsp+38h] [rbp-D0h]
  __int64 v63; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+48h] [rbp-C0h]
  __int64 v65; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+58h] [rbp-B0h]
  _BYTE v67[16]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v68[32]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v69[120]; // [rsp+90h] [rbp-78h] BYREF

  v11 = *a2;
  if ( !*a2 )
    goto LABEL_8;
  v12 = 0;
  do
  {
    if ( v12 >= *(_DWORD *)(v11 - 4) )
      break;
    v13 = *a5;
    v14 = *(_QWORD *)(a1 + 16);
    v15 = **a5;
    if ( (*((_BYTE *)*a5 + 123) & 0x20) != 0 )
    {
      result = *(_QWORD *)(v15 + 864);
      goto LABEL_6;
    }
    v35 = *(unsigned int *)(v11 + 4LL * v12);
    v36 = v13[9];
    v37 = 17;
    while ( 1 )
    {
      if ( *(char *)(v36 + 3) < 0 )
      {
        if ( *(_BYTE *)(v36 + 3) >> 6 != 2 )
        {
          v38 = (__int64 *)(*(_QWORD *)(v36 + 16) + 8 * v35);
          goto LABEL_42;
        }
        goto LABEL_44;
      }
      if ( (_DWORD)v35 == *(_DWORD *)(v36 + 4) )
        break;
LABEL_44:
      v36 = *(_QWORD *)(v36 + 16);
      if ( !--v37 )
      {
        v56 = *(_QWORD *)(a1 + 16);
        v54 = v35;
        v52 = *a5;
        sub_233F80((__int64 *)(v15 + 616), (_DWORD *)v13 + 18);
        v14 = v56;
        v38 = (__int64 *)(*(_QWORD *)(v52[9] + 16) + 8LL * v54);
        goto LABEL_42;
      }
    }
    v38 = (__int64 *)(v36 + 8);
LABEL_42:
    result = *v38;
LABEL_6:
    if ( *(_QWORD *)(v14 + 856) == result )
      return result;
    v11 = *a2;
    ++v12;
  }
  while ( *a2 );
LABEL_8:
  sub_1694970(v69, *(_QWORD *)(a1 + 16));
  sub_1692DB0(v69, a3, a4, 0, 0);
  v63 = 0;
  v64 = *(_QWORD *)(a1 + 16);
  v55 = a1 + 152;
  sub_14B64E0(a1 + 152, v69);
  v17 = *a5;
  v18 = 0;
  if ( (*((_BYTE *)*a5 + 123) & 0x20) != 0 )
    goto LABEL_33;
  while ( 2 )
  {
    v19 = *a2;
    if ( !*a2 || v18 >= *(_DWORD *)(v19 - 4) )
      break;
    v20 = *(_DWORD *)(v19 + 4LL * v18);
    v21 = 18;
    v65 = 0;
    v51 = v20;
    v53 = *(_QWORD *)(a1 + 16);
    v66 = v53;
    v22 = v17[9];
    while ( 2 )
    {
      if ( !--v21 )
      {
        sub_233F80((__int64 *)(*v17 + 616), (_DWORD *)v17 + 18);
        v23 = (__int64 *)(*(_QWORD *)(v17[9] + 16) + 8LL * v51);
        v24 = *(_QWORD *)(a1 + 16);
        goto LABEL_16;
      }
      if ( *(char *)(v22 + 3) < 0 )
      {
        if ( *(_BYTE *)(v22 + 3) >> 6 != 2 )
        {
          v23 = (__int64 *)(*(_QWORD *)(v22 + 16) + 8LL * v51);
          v24 = v53;
          goto LABEL_16;
        }
        goto LABEL_47;
      }
      if ( v51 != *(_DWORD *)(v22 + 4) )
      {
LABEL_47:
        v22 = *(_QWORD *)(v22 + 16);
        continue;
      }
      break;
    }
    v24 = v53;
    v23 = (__int64 *)(v22 + 8);
LABEL_16:
    v25 = *v23;
    if ( *v23 )
    {
      ++*(_DWORD *)(v25 + 8);
      if ( v25 != *(_QWORD *)(v24 + 856) )
        goto LABEL_18;
      v30 = v65;
      if ( v65 )
      {
        v31 = v66;
        v32 = (*(_DWORD *)(v65 + 8))-- == 1;
        if ( v32 )
        {
LABEL_53:
          sub_15D7BC0(v31, v30);
          goto LABEL_29;
        }
      }
      goto LABEL_30;
    }
    if ( *(_QWORD *)(v24 + 856) )
    {
LABEL_18:
      sub_14BB8A0(v55, v25, &v63, &v65);
      if ( v63 != v25 )
      {
        if ( (unsigned int)sub_180B130(v55) > 2 )
        {
          if ( (unsigned __int8)sub_186A530(a6) )
          {
            sub_186A4C0(a6);
            v57 = sub_180B150(v55, v25);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(v67, v25, *(_QWORD *)(a1 + 16), 0, 0, 0);
            v58 = sub_160E8B0(v57, v67);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_160EBE0(v58, &v63);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_18572D0(v68);
            sub_186A500(v68, "\n");
          }
          else
          {
            v59 = sub_180B150(v55, v25);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(v67, v25, *(_QWORD *)(a1 + 16), 0, 0, 0);
            v60 = sub_160E8B0(v59, v67);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_160EBE0(v60, &v63);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_18572D0(v68);
          }
        }
        v26 = *a5;
        v27 = *((_BYTE *)*a5 + 123);
        if ( (v27 & 8) != 0 )
        {
          v39 = v26[11];
          v40 = *(_QWORD *)(a1 + 16);
          v41 = v65;
          if ( v39 )
          {
            v42 = v26[11];
            for ( i = *(_BYTE *)(v39 + 3) >> 6; !i; i = *(_BYTE *)(v42 + 3) >> 6 )
              v42 = *(_QWORD *)(v42 + 16);
            if ( i == 1 )
            {
              v44 = *(_DWORD *)(v42 + 4) + 1;
            }
            else if ( i == 2 )
            {
              v44 = *(_DWORD *)(v42 + 4) - 1;
            }
            else
            {
              v44 = *(_DWORD *)(v42 + 4);
            }
            if ( v51 >= v44 )
            {
              v39 = 0;
            }
            else
            {
              v45 = 18;
              while ( --v45 )
              {
                if ( *(char *)(v39 + 3) >= 0 )
                {
                  if ( v51 == *(_DWORD *)(v39 + 4) )
                  {
                    v46 = (__int64 *)(v39 + 8);
                    goto LABEL_69;
                  }
                }
                else if ( *(_BYTE *)(v39 + 3) >> 6 != 2 )
                {
                  v46 = (__int64 *)(*(_QWORD *)(v39 + 16) + 8LL * v51);
                  goto LABEL_69;
                }
                v39 = *(_QWORD *)(v39 + 16);
              }
              v62 = *(_QWORD *)(a1 + 16);
              v61 = v65;
              sub_233F80((__int64 *)(*v26 + 616), (_DWORD *)v26 + 22);
              v41 = v61;
              v40 = v62;
              v46 = (__int64 *)(*(_QWORD *)(v26[11] + 16) + 8LL * v51);
LABEL_69:
              v39 = *v46;
            }
          }
          v47 = sub_15DE0E0(v40, v39, v41);
          v48 = v47;
          if ( v47 )
            ++*(_DWORD *)(v47 + 8);
          v49 = v65;
          if ( v65 )
          {
            v50 = v66;
            v32 = (*(_DWORD *)(v65 + 8))-- == 1;
            if ( v32 )
              sub_15D7BC0(v50, v49);
          }
          v65 = v48;
          v26 = *a5;
          v27 = *((_BYTE *)*a5 + 123);
        }
        if ( (v27 & 0x10) != 0 )
        {
          v28 = v26[13];
          v29 = 18;
          while ( --v29 )
          {
            if ( *(char *)(v28 + 3) >= 0 )
            {
              if ( v51 == *(_DWORD *)(v28 + 4) )
                goto LABEL_26;
            }
            else if ( *(_BYTE *)(v28 + 3) >> 6 != 2 )
            {
              goto LABEL_26;
            }
            v28 = *(_QWORD *)(v28 + 16);
          }
          sub_236900((_QWORD *)(*v26 + 672), v26 + 13);
        }
LABEL_26:
        sub_EDBFA0((int)v26);
        *(_BYTE *)(a1 + 144) = 1;
      }
      v30 = v65;
      if ( v65 )
      {
        v31 = v66;
        v32 = (*(_DWORD *)(v65 + 8))-- == 1;
        if ( v32 )
          goto LABEL_53;
      }
LABEL_29:
      if ( v25 )
      {
LABEL_30:
        v32 = (*(_DWORD *)(v25 + 8))-- == 1;
        if ( v32 )
          sub_15D7BC0(v53, v25);
      }
    }
    else
    {
      v30 = v65;
      if ( v65 )
      {
        v31 = v66;
        v32 = (*(_DWORD *)(v65 + 8))-- == 1;
        if ( v32 )
          goto LABEL_53;
      }
    }
    v17 = *a5;
    ++v18;
    if ( (*((_BYTE *)*a5 + 123) & 0x20) == 0 )
      continue;
    break;
  }
LABEL_33:
  sub_14B64E0(v55, 0);
  v33 = v63;
  if ( v63 )
  {
    v34 = v64;
    v32 = (*(_DWORD *)(v63 + 8))-- == 1;
    if ( v32 )
      sub_15D7BC0(v34, v33);
  }
  return sub_1695230(v69);
}

