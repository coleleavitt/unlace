void __fastcall sub_36F110(__int64 a1)
{
  char **exception; // rbp
  char **v2; // rbp
  _QWORD *v4; // rbp
  unsigned int v5; // eax
  void *v6; // rdi
  void *v7; // rdi
  _QWORD *v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // r12
  __int64 *v11; // rbp
  __int64 *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // r12
  unsigned __int64 v17; // rdx
  __int64 *v18; // r13
  __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  __int64 v21; // r12
  unsigned __int64 **v22; // r15
  __int64 *v23; // r14
  unsigned __int64 *v24; // rax
  unsigned int v25; // ecx
  unsigned __int64 *v26; // rbp
  unsigned __int64 *v27; // r14
  unsigned __int64 *v28; // rbp
  unsigned __int64 *v29; // r15
  __int64 *v30; // rbp
  __int64 v31; // r13
  unsigned int **v32; // r12
  unsigned int **v33; // r15
  unsigned int **v34; // rax
  char v35; // r8
  unsigned int v36; // ecx
  __int64 *v37; // r13
  unsigned int v38; // eax
  __int64 *v39; // r12
  __int64 *v40; // rbp
  __int64 *v41; // r14
  __int64 v42; // rsi
  __int64 v43; // rdi
  unsigned int v44; // r14d
  _QWORD *v45; // r15
  __int64 v46; // rax
  _QWORD *v47; // r12
  __int64 v48; // rdx
  _QWORD *v49; // rdx
  unsigned int v50; // r14d
  __int64 v51; // r15
  unsigned int v52; // eax
  __int64 v53; // rdi
  int v54; // eax
  unsigned int v55; // r8d
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rsi
  unsigned int v59; // edx
  __int64 *v60; // r14
  __int64 v61; // r12
  _DWORD *v62; // rdx
  __int64 *v63; // rax
  __int64 *v64; // rdi
  __int64 v65; // rsi
  __int64 v66; // rsi
  __int64 *v67; // r12
  __int64 *v68; // r13
  __int64 v69; // rsi
  __int64 v70; // rdi
  _QWORD *v71; // rax
  __int64 v72; // rdi
  __int64 *v73; // [rsp+8h] [rbp-90h]
  __int64 *v74; // [rsp+10h] [rbp-88h]
  unsigned int v75; // [rsp+18h] [rbp-80h]
  __int64 *v76; // [rsp+18h] [rbp-80h]
  unsigned int *v77; // [rsp+20h] [rbp-78h]
  unsigned int v78; // [rsp+2Ch] [rbp-6Ch]
  _QWORD *v79; // [rsp+38h] [rbp-60h] BYREF
  __int64 v80[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(_QWORD **)(a1 + 128);
  if ( v4 )
  {
    v5 = *((_DWORD *)v4 - 1);
    if ( v5 )
    {
      if ( *(_BYTE *)(a1 + 72) )
      {
        v16 = 2LL * v5;
        v73 = &v4[v16];
        _BitScanReverse64(&v17, (v16 * 8) >> 4);
        sub_36C040(*(char **)(a1 + 128), (char *)&v4[v16], 2LL * (int)v17);
        if ( (unsigned __int64)v16 > 32 )
        {
          v18 = v4 + 32;
          v19 = (__int64)v4;
          v20 = (unsigned __int64)(v4 + 32);
          sub_36BD40(v4, v4 + 32);
          while ( 1 )
          {
            v21 = v18[1];
            v22 = (unsigned __int64 **)(v18 + 1);
            v18[1] = 0;
            v23 = v18;
            if ( v21 )
              break;
            while ( 1 )
            {
              v24 = *(v22 - 2);
              v25 = 0;
              if ( !v24 )
                break;
LABEL_28:
              if ( v25 >= *((_DWORD *)v24 - 1) )
                break;
              if ( v23 != (__int64 *)(v22 - 3) )
              {
                v26 = *v22;
                if ( *v22 )
                {
                  v27 = &v26[*((unsigned int *)v26 - 1)];
                  if ( v26 >= v27 )
                    goto LABEL_38;
                  do
                  {
                    while ( 1 )
                    {
                      v20 = *v26;
                      if ( *v26 )
                      {
                        v19 = (__int64)*(v22 - 1);
                        v15 = (*(_DWORD *)(v20 + 8))-- == 1;
                        if ( v15 )
                          break;
                      }
                      if ( ++v26 >= v27 )
                        goto LABEL_37;
                    }
                    sub_15D7BC0(v19, v20);
                    ++v26;
                  }
                  while ( v26 < v27 );
LABEL_37:
                  v26 = *v22;
                  if ( *v22 )
                  {
LABEL_38:
                    *((_DWORD *)v26 - 1) = 0;
                    v19 = (__int64)(v26 - 1);
                    sub_186B220(v26 - 1);
                  }
                  v24 = *(v22 - 2);
                }
                *v22 = v24;
                *(v22 - 2) = nullptr;
              }
              v22 -= 2;
              v23 = (__int64 *)(v22 - 1);
              if ( v21 )
                goto LABEL_27;
            }
LABEL_43:
            v28 = (unsigned __int64 *)v23[1];
            if ( v28 )
            {
              v29 = &v28[*((unsigned int *)v28 - 1)];
              if ( v28 >= v29 )
                goto LABEL_51;
              do
              {
                while ( 1 )
                {
                  v20 = *v28;
                  if ( *v28 )
                  {
                    v19 = *v23;
                    v15 = (*(_DWORD *)(v20 + 8))-- == 1;
                    if ( v15 )
                      break;
                  }
                  if ( ++v28 >= v29 )
                    goto LABEL_50;
                }
                sub_15D7BC0(v19, v20);
                ++v28;
              }
              while ( v28 < v29 );
LABEL_50:
              v28 = (unsigned __int64 *)v23[1];
              if ( v28 )
              {
LABEL_51:
                *((_DWORD *)v28 - 1) = 0;
                v19 = (__int64)(v28 - 1);
                sub_186B220(v28 - 1);
              }
            }
            v18 += 2;
            v23[1] = v21;
            if ( v18 == v73 )
              goto LABEL_53;
          }
LABEL_27:
          v24 = *(v22 - 2);
          v25 = *(_DWORD *)(v21 - 4);
          if ( !v24 )
            goto LABEL_43;
          goto LABEL_28;
        }
        v20 = (unsigned __int64)&v4[v16];
        v19 = (__int64)v4;
        sub_36BD40(v4, v73);
LABEL_53:
        v79 = nullptr;
        v30 = *(__int64 **)(a1 + 128);
        if ( v30 )
        {
          v31 = 2LL * *((unsigned int *)v30 - 1);
          v74 = &v30[v31];
          if ( v30 != &v30[v31] )
          {
            while ( 1 )
            {
              v32 = (unsigned int **)v30[1];
              if ( !v32 )
                goto LABEL_83;
              v33 = &v32[*((unsigned int *)v32 - 1)];
              if ( v33 == v32 )
                goto LABEL_83;
              v19 = *(unsigned int *)(a1 + 144);
              v34 = (unsigned int **)v30[1];
              v35 = 0;
              do
              {
                v36 = **v34;
                if ( v36 < (unsigned int)v19 )
                {
                  v20 = v36 >> 5;
                  v35 |= (*(_DWORD *)(*(_QWORD *)(a1 + 152) + 4 * v20) & (1 << v36)) != 0;
                }
                ++v34;
              }
              while ( v34 != v33 );
              if ( !v35 )
                break;
LABEL_62:
              v30 += 2;
              if ( v74 == v30 )
                goto LABEL_63;
            }
            while ( 1 )
            {
              v44 = **v32;
              if ( v44 >= (unsigned int)v19 )
              {
                v19 = a1 + 144;
                sub_186B510(a1 + 144, v44 + 1, 0);
              }
              ++v32;
              *(_DWORD *)(*(_QWORD *)(a1 + 152) + 4LL * (v44 >> 5)) |= 1 << v44;
              if ( v33 == v32 )
                break;
              v19 = *(unsigned int *)(a1 + 144);
            }
LABEL_83:
            v45 = v79;
            if ( v79 )
            {
              LODWORD(v46) = *((_DWORD *)v79 - 1);
              v47 = &v79[2 * (unsigned int)v46];
              if ( (_DWORD)v46 == *((_DWORD *)v79 - 2) )
              {
                v78 = (unsigned int)(3 * v46 + 1) >> 1;
                v59 = 16 * v78 + 8;
                if ( 16 * (int)v46 + 8 >= v59 || (unsigned int)v46 >= (unsigned int)(3 * v46 + 1) >> 1 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v80, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v80);
                  sub_233E40((__int64)v80);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v60 = v79;
                v77 = (unsigned int *)sub_186B270(v59);
                v45 = v77 + 2;
                v61 = *((unsigned int *)v79 - 1);
                v62 = v77 + 2;
                v77[1] = v61;
                v63 = v60;
                v64 = &v60[2 * v61];
                if ( v60 != v64 )
                {
                  do
                  {
                    v65 = *v63;
                    v63 += 2;
                    v62 += 4;
                    *((_QWORD *)v62 - 2) = v65;
                    v66 = *(v63 - 1);
                    *(v63 - 1) = 0;
                    *((_QWORD *)v62 - 1) = v66;
                  }
                  while ( v63 != v64 );
                }
                v76 = &v60[2 * v61];
                if ( (_DWORD)v61 )
                {
                  do
                  {
                    v67 = (__int64 *)v60[1];
                    if ( v67 )
                    {
                      v68 = &v67[*((unsigned int *)v67 - 1)];
                      if ( v67 >= v68 )
                        goto LABEL_112;
                      do
                      {
                        while ( 1 )
                        {
                          v69 = *v67;
                          if ( *v67 )
                          {
                            v70 = *v60;
                            v15 = (*(_DWORD *)(v69 + 8))-- == 1;
                            if ( v15 )
                              break;
                          }
                          if ( ++v67 >= v68 )
                            goto LABEL_111;
                        }
                        sub_15D7BC0(v70, v69);
                        ++v67;
                      }
                      while ( v67 < v68 );
LABEL_111:
                      v67 = (__int64 *)v60[1];
                      if ( v67 )
LABEL_112:
                        sub_186B220(v67 - 1);
                    }
                    v60 += 2;
                  }
                  while ( v60 != v76 );
                  v60 = v79;
                }
                v19 = (__int64)(v60 - 1);
                sub_186B220(v60 - 1);
                v46 = v77[1];
                v47 = &v45[2 * v46];
                v79 = v77 + 2;
                *v77 = v78;
              }
            }
            else
            {
              v19 = 40;
              v46 = sub_186B270(0x28u);
              v45 = (_QWORD *)(v46 + 8);
              *(_QWORD *)v46 = 2;
              LODWORD(v46) = 0;
              v79 = v45;
              v47 = v45;
            }
            v48 = *v30;
            v47[1] = 0;
            v20 = v30[1];
            *v47 = v48;
            if ( v20 )
            {
              v49 = nullptr;
              v50 = 0;
              do
              {
                if ( v50 >= *(_DWORD *)(v20 - 4) )
                  break;
                v51 = *(_QWORD *)(v20 + 8LL * v50);
                if ( v51 )
                  ++*(_DWORD *)(v51 + 8);
                if ( v49 )
                {
                  v52 = *((_DWORD *)v49 - 1);
                  if ( v52 == *((_DWORD *)v49 - 2) )
                  {
                    v55 = (3 * v52 + 1) >> 1;
                    v56 = 8 * v55 + 8;
                    if ( 8 * v52 + 8 >= (unsigned int)v56 || v52 >= v55 )
                    {
                      v2 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v80, "Overflow encountered when expanding vector");
                      *v2 = (char *)off_1C63128;
                      sub_2333C0(v2 + 1, v80);
                      sub_233E40((__int64)v80);
                      __cxa_throw(
                        v2,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v75 = (3 * v52 + 1) >> 1;
                    v57 = (unsigned int *)sub_186B300(v49 - 1, v56);
                    v58 = v57[1];
                    v49 = v57 + 2;
                    v47[1] = v57 + 2;
                    *v57 = v75;
                    LODWORD(v57) = v58;
                    v19 = (__int64)&v49[v58];
                    v20 = v30[1];
                    v54 = (_DWORD)v57 + 1;
                  }
                  else
                  {
                    v53 = v52;
                    v54 = v52 + 1;
                    v19 = (__int64)&v49[v53];
                  }
                }
                else
                {
                  v71 = (_QWORD *)sub_186B270(0x18u);
                  v49 = v71 + 1;
                  *v71 = 2;
                  v19 = (__int64)v49;
                  v54 = 1;
                  v47[1] = v49;
                  v20 = v30[1];
                }
                *(_QWORD *)v19 = v51;
                ++v50;
                *((_DWORD *)v49 - 1) = v54;
              }
              while ( v20 );
              v45 = v79;
              LODWORD(v46) = *((_DWORD *)v79 - 1);
            }
            *((_DWORD *)v45 - 1) = v46 + 1;
            goto LABEL_62;
          }
        }
LABEL_63:
        if ( (unsigned int)sub_180B130(v19) > 1 )
        {
          if ( (unsigned __int8)sub_186A530() )
          {
            sub_186A4C0();
            sub_180B150(v19, v20);
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            v72 = std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_186A500(v72, "\n");
          }
          else
          {
            sub_180B150(v19, v20);
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
          }
        }
        (*(void (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), &v79);
        v37 = v79;
        if ( v79 )
        {
          v38 = *((_DWORD *)v79 - 1);
          if ( v38 )
          {
            v39 = &v79[2 * v38];
            do
            {
              v40 = (__int64 *)v37[1];
              if ( v40 )
              {
                v41 = &v40[*((unsigned int *)v40 - 1)];
                if ( v40 >= v41 )
                  goto LABEL_75;
                do
                {
                  while ( 1 )
                  {
                    v42 = *v40;
                    if ( *v40 )
                    {
                      v43 = *v37;
                      v15 = (*(_DWORD *)(v42 + 8))-- == 1;
                      if ( v15 )
                        break;
                    }
                    if ( ++v40 >= v41 )
                      goto LABEL_74;
                  }
                  sub_15D7BC0(v43, v42);
                  ++v40;
                }
                while ( v40 < v41 );
LABEL_74:
                v40 = (__int64 *)v37[1];
                if ( v40 )
LABEL_75:
                  sub_186B220(v40 - 1);
              }
              v37 += 2;
            }
            while ( v37 != v39 );
            v37 = v79;
          }
          sub_186B220(v37 - 1);
        }
      }
    }
  }
  v6 = *(void **)(a1 + 152);
  if ( v6 )
    memset(v6, 0, 4LL * *(unsigned int *)(a1 + 148));
  v7 = *(void **)(a1 + 176);
  *(_DWORD *)(a1 + 144) = 0;
  if ( v7 )
    memset(v7, 0, 4LL * *(unsigned int *)(a1 + 172));
  v8 = *(_QWORD **)(a1 + 128);
  *(_DWORD *)(a1 + 168) = 0;
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    if ( (_DWORD)v9 )
    {
      v10 = &v8[2 * v9];
      do
      {
        v11 = (__int64 *)v8[1];
        if ( v11 )
        {
          v12 = &v11[*((unsigned int *)v11 - 1)];
          if ( v11 >= v12 )
            goto LABEL_18;
          do
          {
            while ( 1 )
            {
              v13 = *v11;
              if ( *v11 )
              {
                v14 = *v8;
                v15 = (*(_DWORD *)(v13 + 8))-- == 1;
                if ( v15 )
                  break;
              }
              if ( ++v11 >= v12 )
                goto LABEL_17;
            }
            sub_15D7BC0(v14, v13);
            ++v11;
          }
          while ( v11 < v12 );
LABEL_17:
          v11 = (__int64 *)v8[1];
          if ( v11 )
LABEL_18:
            sub_186B220(v11 - 1);
        }
        v8 += 2;
      }
      while ( v8 != v10 );
      v8 = *(_QWORD **)(a1 + 128);
    }
    *((_DWORD *)v8 - 1) = 0;
  }
}

