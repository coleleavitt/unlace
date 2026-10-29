__int64 __fastcall sub_778E80(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v3; // rbp
  __int64 v4; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // rdx
  void *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // r13
  __int64 v15; // rax
  _DWORD *i; // r14
  int v17; // eax
  bool v18; // zf
  _QWORD *v19; // rsi
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __m128 *v23; // rdx
  __int64 v24; // r12
  char v25; // al
  _DWORD *v26; // rbx
  unsigned int v27; // r14d
  size_t v28; // rdi
  __int64 v29; // rax
  _QWORD *v30; // rcx
  _DWORD *v31; // r10
  __int64 v32; // r9
  __int64 v33; // rdx
  int v34; // r11d
  _QWORD *v35; // rax
  _QWORD *v36; // rdi
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 *v40; // r9
  _QWORD *v41; // r12
  __int64 *v42; // rbx
  __int64 *v43; // rbp
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // r12
  __int64 *v49; // r12
  __int64 *v50; // r13
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // r12
  __int64 *v59; // r12
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rsi
  __int64 v63; // rdi
  _QWORD *v64; // rax
  char **exception; // r13
  unsigned __int64 v66; // [rsp+0h] [rbp-110h]
  unsigned int v67; // [rsp+8h] [rbp-108h]
  unsigned int v68; // [rsp+Ch] [rbp-104h]
  __int64 v69; // [rsp+10h] [rbp-100h] BYREF
  void *v70; // [rsp+18h] [rbp-F8h]
  __int64 v71; // [rsp+20h] [rbp-F0h] BYREF
  _QWORD *v72; // [rsp+28h] [rbp-E8h]
  __int64 *v73; // [rsp+30h] [rbp-E0h]
  __int64 v74; // [rsp+38h] [rbp-D8h]
  _QWORD *v75; // [rsp+40h] [rbp-D0h]
  _DWORD *v76; // [rsp+48h] [rbp-C8h]
  _DWORD *v77; // [rsp+50h] [rbp-C0h]
  _QWORD *v78; // [rsp+58h] [rbp-B8h]
  _BYTE *v79; // [rsp+60h] [rbp-B0h]
  _BYTE v80[32]; // [rsp+78h] [rbp-98h] BYREF
  _QWORD v81[2]; // [rsp+98h] [rbp-78h] BYREF
  _QWORD v82[2]; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v83[11]; // [rsp+B8h] [rbp-58h] BYREF

  result = a1[5];
  if ( result )
  {
    if ( *(_DWORD *)(result - 4) )
    {
      v3 = a2;
      result = *a2;
      if ( *a2 )
      {
        if ( *(_DWORD *)(result - 4) )
        {
          v4 = a1[4];
          v81[0] = 0;
          v81[1] = 0;
          v82[0] = 1;
          v82[1] = 0;
          v79 = v80;
          v70 = v81;
          sub_16744A0(v80, v4);
          v6 = (_QWORD *)*v3;
          v68 = 0;
          v70 = v81;
          if ( v6 )
          {
            while ( 1 )
            {
              if ( v68 >= *((_DWORD *)v6 - 1) )
                goto LABEL_12;
              v7 = v6[4 * v68];
              v72 = &v6[4 * v68];
              if ( !*(_WORD *)(v7 + 4) && !*(_DWORD *)(v7 + 24) )
              {
                v8 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
                if ( !v8 || *v8 == -1 )
                  break;
              }
LABEL_11:
              ++v68;
              if ( !v6 )
                goto LABEL_12;
            }
            if ( !(unsigned __int8)sub_1673C40(v79, v72[2], v70)
              || (v10 = a1[5]) == 0
              || (v11 = *(unsigned int *)(v10 - 4), !(_DWORD)v11) )
            {
LABEL_16:
              v6 = (_QWORD *)*v3;
              goto LABEL_11;
            }
            v66 = 0;
            v74 = 8 * v11;
            while ( 1 )
            {
              if ( *(_QWORD *)(*v72 + 16LL) == *(_QWORD *)(v10 + v66) )
              {
                v12 = a1[4];
                v13 = *(_QWORD *)(a1[7] + v66);
                v71 = v12;
                v14 = (__int64 *)(v13 + 32);
                v15 = *(unsigned int *)(v13 + 24);
                v73 = &v14[v15];
                if ( v15 * 8 )
                {
                  v67 = 0;
                  for ( i = nullptr; ; i = v26 )
                  {
                    v69 = v12;
                    v24 = *v14;
                    v25 = sub_182E3A0(qword_1C7F2C0, v70, v67);
                    v26 = *(_DWORD **)(v69 + 864);
                    if ( v25 )
                      v26 = *(_DWORD **)(v69 + 856);
                    if ( v26 )
                    {
                      v17 = v26[2] + 1;
                      v26[2] = v17;
                      if ( !i )
                      {
                        v69 = a1[4];
                        if ( v24 )
                        {
                          ++*(_DWORD *)(v24 + 8);
LABEL_31:
                          v17 = v26[2];
                        }
                        v26[2] = v17 + 1;
                        goto LABEL_33;
                      }
                    }
                    else if ( !i )
                    {
                      v69 = a1[4];
                      if ( v24 )
                        ++*(_DWORD *)(v24 + 8);
                      goto LABEL_33;
                    }
                    v18 = i[2]-- == 1;
                    if ( v18 )
                      sub_15D7BC0(v71, i);
                    v69 = a1[4];
                    if ( v24 )
                      ++*(_DWORD *)(v24 + 8);
                    if ( v26 )
                      goto LABEL_31;
LABEL_33:
                    v19 = (_QWORD *)*v3;
                    if ( *v3 )
                    {
                      v20 = *((_DWORD *)v19 - 1);
                      if ( v20 == *((_DWORD *)v19 - 2) )
                      {
                        v27 = (3 * v20 + 1) >> 1;
                        v28 = 32 * v27 + 8;
                        if ( 32 * v20 + 8 >= (unsigned int)v28 || v20 >= v27 )
                        {
                          exception = (char **)__cxa_allocate_exception(0x28u);
                          sub_24ABB0(v83, "Overflow encountered when expanding vector");
                          *exception = (char *)off_1C63128;
                          sub_2333C0(exception + 1, v83);
                          sub_233E40((__int64)v83);
                          __cxa_throw(
                            exception,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v29 = sub_186B270(v28);
                        v30 = (_QWORD *)*v3;
                        v31 = (_DWORD *)v29;
                        v19 = (_QWORD *)(v29 + 8);
                        if ( *v3 )
                        {
                          v32 = *((unsigned int *)v30 - 1);
                          v33 = v29 + 8;
                          *(_DWORD *)(v29 + 4) = v32;
                          v34 = v32;
                          v35 = v30;
                          v36 = &v30[4 * v32];
                          if ( v30 != v36 )
                          {
                            do
                            {
                              v37 = v35[1];
                              v35 += 4;
                              v33 += 32;
                              *(_QWORD *)(v33 - 24) = v37;
                              v38 = *(v35 - 4);
                              *(v35 - 4) = 0;
                              *(_QWORD *)(v33 - 32) = v38;
                              *(_QWORD *)(v33 - 8) = *(v35 - 1);
                              v39 = *(v35 - 2);
                              *(v35 - 2) = 0;
                              *(_QWORD *)(v33 - 16) = v39;
                            }
                            while ( v36 != v35 );
                          }
                          v40 = &v30[4 * v32];
                          if ( v34 )
                          {
                            v75 = (_QWORD *)v24;
                            v41 = v19;
                            v76 = v26;
                            v42 = v30;
                            v78 = v3;
                            v43 = v40;
                            v77 = v31;
                            do
                            {
                              while ( 1 )
                              {
                                v46 = v42[2];
                                if ( v46 )
                                {
                                  v47 = v42[3];
                                  v18 = (*(_DWORD *)(v46 + 8))-- == 1;
                                  if ( v18 )
                                    sub_15D7BC0(v47, v46);
                                }
                                v44 = *v42;
                                if ( *v42 )
                                {
                                  v45 = v42[1];
                                  v18 = (*(_DWORD *)(v44 + 8))-- == 1;
                                  if ( v18 )
                                    break;
                                }
                                v42 += 4;
                                if ( v42 == v43 )
                                  goto LABEL_58;
                              }
                              sub_15D7BC0(v45, v44);
                              v42 += 4;
                            }
                            while ( v42 != v43 );
LABEL_58:
                            v3 = v78;
                            v19 = v41;
                            v26 = v76;
                            v31 = v77;
                            v30 = (_QWORD *)*v78;
                          }
                          v76 = v31;
                          v75 = v19;
                          sub_186B220(v30 - 1);
                          v31 = v76;
                          v19 = v75;
                          v23 = (__m128 *)&v75[4 * (unsigned int)v76[1]];
                          v22 = v76[1] + 1;
                        }
                        else
                        {
                          *(_DWORD *)(v29 + 4) = 0;
                          v23 = (__m128 *)(v29 + 8);
                          v22 = 1;
                        }
                        *v3 = v19;
                        *v31 = v27;
                      }
                      else
                      {
                        v21 = v20;
                        v22 = v20 + 1;
                        v23 = (__m128 *)&v19[4 * v21];
                      }
                    }
                    else
                    {
                      v64 = (_QWORD *)sub_186B270(0x48u);
                      v19 = v64 + 1;
                      *v3 = v64 + 1;
                      v23 = (__m128 *)(v64 + 1);
                      *v64 = 2;
                      v22 = 1;
                    }
                    ++v67;
                    ++v14;
                    *v23 = _mm_loadh_ps((const double *)&v69);
                    v23[1] = _mm_loadh_ps((const double *)&v71);
                    *((_DWORD *)v19 - 1) = v22;
                    if ( v73 == v14 )
                      goto LABEL_64;
                    v12 = a1[4];
                  }
                }
                v26 = (_DWORD *)*v3;
                if ( *v3 )
                {
                  v19 = (_QWORD *)*v3;
                  v26 = nullptr;
LABEL_64:
                  v48 = 4LL * (unsigned int)(*((_DWORD *)v19 - 1) - 1);
                }
                else
                {
                  v48 = 0x3FFFFFFFCLL;
                  v19 = nullptr;
                }
                v49 = &v19[v48];
                v50 = &v19[v66 / 2];
                v51 = *v49;
                v52 = *v50;
                if ( *v50 != *v49 )
                {
                  if ( v52 )
                  {
                    v53 = v50[1];
                    v18 = (*(_DWORD *)(v52 + 8))-- == 1;
                    if ( v18 )
                    {
                      sub_15D7BC0(v53, v52);
                      v51 = *v49;
                    }
                  }
                  *v50 = v51;
                  if ( v51 )
                    ++*(_DWORD *)(v51 + 8);
                }
                v54 = v50[2];
                v55 = v49[2];
                if ( v54 != v55 )
                {
                  if ( v54 )
                  {
                    v56 = v50[3];
                    v18 = (*(_DWORD *)(v54 + 8))-- == 1;
                    if ( v18 )
                    {
                      sub_15D7BC0(v56, v54);
                      v55 = v49[2];
                    }
                  }
                  v50[2] = v55;
                  if ( v55 )
                    ++*(_DWORD *)(v55 + 8);
                }
                v57 = 0x1FFFFFFFE0LL;
                v58 = *v3;
                if ( *v3 )
                  v57 = 32LL * (unsigned int)(*(_DWORD *)(v58 - 4) - 1);
                v59 = (__int64 *)(v57 + v58);
                v60 = v59[2];
                if ( v60 )
                {
                  v61 = v59[3];
                  v18 = (*(_DWORD *)(v60 + 8))-- == 1;
                  if ( v18 )
                    sub_15D7BC0(v61, v60);
                }
                v62 = *v59;
                if ( *v59 )
                {
                  v63 = v59[1];
                  v18 = (*(_DWORD *)(v62 + 8))-- == 1;
                  if ( v18 )
                    sub_15D7BC0(v63, v62);
                }
                --*(_DWORD *)(*v3 - 4LL);
                if ( v26 )
                {
                  v18 = v26[2]-- == 1;
                  if ( v18 )
                    sub_15D7BC0(v71, v26);
                }
              }
              v66 += 8LL;
              if ( v74 == v66 )
                goto LABEL_16;
              v10 = a1[5];
            }
          }
LABEL_12:
          v9 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v70);
          return sub_182CBA0(v9, v82);
        }
      }
    }
  }
  return result;
}

