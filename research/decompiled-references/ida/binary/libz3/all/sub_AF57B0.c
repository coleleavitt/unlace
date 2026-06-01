__int64 __fastcall sub_AF57B0(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  char **v4; // rbp
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 v12; // rax
  unsigned int *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ebx
  unsigned int v16; // r13d
  __int64 v17; // rax
  unsigned int v18; // ebp
  unsigned int v19; // r14d
  __int64 v20; // r13
  __int64 v21; // r15
  unsigned int *v22; // rax
  unsigned __int8 v23; // al
  unsigned int v24; // ecx
  unsigned __int8 v25; // dl
  _QWORD *v26; // r10
  unsigned int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned int *v31; // rax
  unsigned __int8 v32; // dl
  unsigned int v33; // ecx
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rcx
  _QWORD *v37; // rcx
  __int64 v38; // rax
  unsigned int *v39; // rax
  size_t v40; // rdi
  __int64 v41; // rax
  _QWORD *v42; // r11
  __int64 v43; // rdi
  __int64 v44; // rax
  _QWORD *v45; // rsi
  _QWORD *v46; // rdi
  _QWORD *i; // rax
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // rsi
  _QWORD *v51; // rbx
  _QWORD *v52; // rbp
  unsigned __int8 v53; // r12
  unsigned int v54; // r13d
  _QWORD *v55; // r15
  __int64 v56; // rdi
  unsigned int v57; // r8d
  size_t v58; // rsi
  unsigned int *v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // [rsp+0h] [rbp-D0h]
  __int64 v64; // [rsp+8h] [rbp-C8h]
  unsigned __int8 v65; // [rsp+8h] [rbp-C8h]
  unsigned __int8 v66; // [rsp+8h] [rbp-C8h]
  unsigned int v67; // [rsp+10h] [rbp-C0h]
  __int64 v68; // [rsp+10h] [rbp-C0h]
  unsigned __int8 v69; // [rsp+10h] [rbp-C0h]
  unsigned int v70; // [rsp+10h] [rbp-C0h]
  unsigned __int8 v71; // [rsp+10h] [rbp-C0h]
  unsigned int v72; // [rsp+10h] [rbp-C0h]
  __int64 *v73; // [rsp+18h] [rbp-B8h]
  unsigned int v74; // [rsp+28h] [rbp-A8h]
  unsigned int v75; // [rsp+28h] [rbp-A8h]
  _DWORD *v76; // [rsp+28h] [rbp-A8h]
  unsigned __int8 v77; // [rsp+28h] [rbp-A8h]
  __int64 v78; // [rsp+30h] [rbp-A0h]
  int v79; // [rsp+38h] [rbp-98h]
  unsigned __int8 v80; // [rsp+38h] [rbp-98h]
  unsigned __int8 v81; // [rsp+38h] [rbp-98h]
  unsigned int v82; // [rsp+3Ch] [rbp-94h]
  unsigned int v83; // [rsp+40h] [rbp-90h]
  unsigned int v84; // [rsp+44h] [rbp-8Ch]
  unsigned int v85; // [rsp+44h] [rbp-8Ch]
  unsigned int v86; // [rsp+44h] [rbp-8Ch]
  unsigned int v87; // [rsp+48h] [rbp-88h]
  unsigned int v88; // [rsp+48h] [rbp-88h]
  _QWORD *v89; // [rsp+48h] [rbp-88h]
  __int64 v90; // [rsp+50h] [rbp-80h]
  unsigned int v91; // [rsp+50h] [rbp-80h]
  __int64 v92; // [rsp+58h] [rbp-78h]
  __int64 v93; // [rsp+60h] [rbp-70h]
  unsigned int v94; // [rsp+74h] [rbp-5Ch] BYREF
  __int64 v95[11]; // [rsp+78h] [rbp-58h] BYREF

  result = *(_QWORD *)(a2 + 48);
  if ( result )
  {
    result = *(unsigned int *)(result - 4);
    if ( (_DWORD)result )
    {
      v8 = 0;
      v9 = a2;
      v78 = 8 * result;
      do
      {
LABEL_4:
        v10 = *(_QWORD *)(v8 + *(_QWORD *)(v9 + 56));
        v73 = (__int64 *)(v8 + *(_QWORD *)(v9 + 56));
        if ( v10 )
        {
          v11 = 0;
          while ( v11 < *(_DWORD *)(v10 - 4) )
          {
            while ( 1 )
            {
              v12 = v11++;
              v13 = (unsigned int *)(*(_QWORD *)(v9 + 40) + 32LL * *(unsigned int *)(v10 + 4 * v12));
              if ( !*((_BYTE *)v13 + 24) )
                break;
              v14 = *v13;
              v15 = v11;
              v16 = v14;
              v63 = 8 * v14;
              v17 = v9;
              v18 = v11;
              v19 = v16;
              v20 = a1;
              v21 = v17;
              if ( v15 < *(_DWORD *)(v10 - 4) )
              {
                while ( 1 )
                {
                  v22 = (unsigned int *)(*(_QWORD *)(v21 + 40) + 32LL * *(unsigned int *)(v10 + 4LL * v15));
                  if ( *((_BYTE *)v22 + 24) )
                  {
                    v64 = 8LL * *v22;
                    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 32) + v64) + 8LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 32) + v63)
                                                                                                  + 8LL) )
                    {
                      v67 = *v22;
                      v23 = sub_AF2720(v20, (_QWORD *)v21, v19, *v22);
                      v24 = v67;
                      v25 = v23;
                      if ( v23 )
                      {
                        v26 = *(_QWORD **)(v21 + 40);
                        v79 = *(_DWORD *)(v21 + 128);
                        if ( v26 )
                        {
                          v27 = *((_DWORD *)v26 - 1);
                          v82 = v27;
                          v94 = v27;
                          if ( v27 == *((_DWORD *)v26 - 2) )
                          {
                            v83 = (3 * v27 + 1) >> 1;
                            v40 = 32 * v83 + 8;
                            if ( 32 * v27 + 8 >= (unsigned int)v40 || v27 >= (3 * v27 + 1) >> 1 )
                            {
                              exception = (char **)__cxa_allocate_exception(0x28u);
                              sub_140FB4(v95, "Overflow encountered when expanding vector", v3);
                              *exception = (char *)off_1C63128;
                              sub_2333C0(exception + 1, v95);
                              sub_233E40((__int64)v95);
                              __cxa_throw(
                                exception,
                                (struct type_info *)&`typeinfo for'default_exception,
                                (void (*)(void *))sub_230E50);
                            }
                            v87 = v27;
                            v84 = v67;
                            v69 = v23;
                            v41 = sub_186B270(v40);
                            v42 = *(_QWORD **)(v21 + 40);
                            v25 = v69;
                            v76 = (_DWORD *)v41;
                            v24 = v84;
                            v43 = v41;
                            v26 = (_QWORD *)(v41 + 8);
                            v27 = v87;
                            if ( v42 )
                            {
                              v44 = *((unsigned int *)v42 - 1);
                              v45 = v26;
                              *(_DWORD *)(v43 + 4) = v44;
                              v46 = &v42[4 * v44];
                              for ( i = v42; i != v46; *((_BYTE *)v45 - 8) = *((_BYTE *)i - 8) )
                              {
                                v48 = *i;
                                i += 4;
                                v45 += 4;
                                *(v45 - 4) = v48;
                                *((_DWORD *)v45 - 6) = *((_DWORD *)i - 6);
                                *((_DWORD *)v45 - 5) = *((_DWORD *)i - 5);
                                v49 = *(i - 2);
                                *(i - 2) = 0;
                                *(v45 - 2) = v49;
                              }
                              v50 = *((unsigned int *)v42 - 1);
                              if ( (_DWORD)v50 )
                              {
                                v85 = v15;
                                v51 = v42;
                                v88 = v18;
                                v52 = &v42[4 * v50];
                                v90 = v8;
                                v53 = v69;
                                v92 = v20;
                                v54 = v24;
                                v93 = v21;
                                v55 = v26;
                                do
                                {
                                  while ( 1 )
                                  {
                                    v56 = v51[2];
                                    if ( !v56 )
                                      break;
                                    v51 += 4;
                                    v70 = v27;
                                    sub_186B220((void *)(v56 - 8));
                                    v27 = v70;
                                    if ( v52 == v51 )
                                      goto LABEL_42;
                                  }
                                  v51 += 4;
                                }
                                while ( v51 != v52 );
LABEL_42:
                                v26 = v55;
                                v21 = v93;
                                v25 = v53;
                                v24 = v54;
                                v15 = v85;
                                v18 = v88;
                                v8 = v90;
                                v20 = v92;
                                v42 = *(_QWORD **)(v93 + 40);
                              }
                              v91 = v27;
                              v89 = v26;
                              v86 = v24;
                              v71 = v25;
                              sub_186B220(v42 - 1);
                              v26 = v89;
                              v27 = v91;
                              v24 = v86;
                              v25 = v71;
                              v28 = (__int64)&v89[4 * (unsigned int)v76[1]];
                            }
                            else
                            {
                              *(_DWORD *)(v41 + 4) = 0;
                              v28 = v41 + 8;
                            }
                            *(_QWORD *)(v21 + 40) = v26;
                            *v76 = v83;
                            v68 = 4LL * v27;
                          }
                          else
                          {
                            v68 = 4LL * v27;
                            v28 = (__int64)&v26[v68];
                          }
                        }
                        else
                        {
                          v77 = v23;
                          v94 = 0;
                          v61 = (_QWORD *)sub_186B270(0x48u);
                          v25 = v77;
                          v27 = 0;
                          v26 = v61 + 1;
                          v82 = 0;
                          *v61 = 2;
                          v24 = v67;
                          v28 = (__int64)v26;
                          *(_QWORD *)(v21 + 40) = v26;
                          v68 = 0;
                        }
                        *(_DWORD *)(v28 + 8) = -1;
                        *(_QWORD *)(v28 + 16) = 0;
                        *(_DWORD *)(v28 + 12) = v79;
                        *(_BYTE *)(v28 + 24) = 0;
                        *(_QWORD *)v28 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v19), _mm_cvtsi32_si128(v24)).m128i_u64[0];
                        v29 = *(_QWORD *)(v21 + 184);
                        ++*((_DWORD *)v26 - 1);
                        if ( !v29 || (v30 = *(unsigned int *)(v29 - 4), (_DWORD)v30 == *(_DWORD *)(v29 - 8)) )
                        {
                          v75 = v27;
                          v81 = v25;
                          sub_2FD3F0((unsigned int **)(v21 + 184));
                          v27 = v75;
                          v25 = v81;
                          v29 = *(_QWORD *)(v21 + 184);
                          v30 = *(unsigned int *)(v29 - 4);
                        }
                        *(_DWORD *)(v29 + 4 * v30) = 0;
                        ++*(_DWORD *)(v29 - 4);
                        v74 = v27;
                        v80 = v25;
                        sub_AF0D60((_QWORD *)(*(_QWORD *)(v21 + 48) + v63), &v94);
                        sub_AF0D60((_QWORD *)(*(_QWORD *)(v21 + 56) + v64), &v94);
                        v31 = (unsigned int *)(*(_QWORD *)(v21 + 40) + v68 * 8);
                        v32 = v80;
                        if ( !*((_BYTE *)v31 + 24) )
                        {
                          v33 = *(_DWORD *)(v21 + 128);
                          v34 = *(_QWORD *)(v21 + 24);
                          *((_BYTE *)v31 + 24) = 1;
                          v35 = *v31;
                          v31[3] = v33;
                          *(_DWORD *)(v21 + 128) = v33 + 1;
                          v36 = v31[1];
                          *(_DWORD *)(v21 + 132) = v74;
                          if ( *(_DWORD *)(v34 + 4 * v36) - *(_DWORD *)(v34 + 4 * v35) > (int)v31[2] )
                            v32 = sub_AFB440(v21, v82, v80);
                          v37 = *(_QWORD **)(v21 + 136);
                          if ( v37 )
                          {
                            v38 = *((unsigned int *)v37 - 1);
                            if ( (_DWORD)v38 == *((_DWORD *)v37 - 2) )
                            {
                              v57 = (unsigned int)(3 * v38 + 1) >> 1;
                              v58 = 4 * v57 + 8;
                              if ( 4 * (int)v38 + 8 >= (unsigned int)v58 || (unsigned int)v38 >= v57 )
                              {
                                v4 = (char **)__cxa_allocate_exception(0x28u);
                                sub_140FB4(v95, "Overflow encountered when expanding vector", v5);
                                *v4 = (char *)off_1C63128;
                                sub_2333C0(v4 + 1, v95);
                                sub_233E40((__int64)v95);
                                __cxa_throw(
                                  v4,
                                  (struct type_info *)&`typeinfo for'default_exception,
                                  (void (*)(void *))sub_230E50);
                              }
                              v72 = (unsigned int)(3 * v38 + 1) >> 1;
                              v65 = v32;
                              v59 = (unsigned int *)sub_186B300(v37 - 1, v58);
                              v32 = v65;
                              v37 = v59 + 2;
                              *v59 = v72;
                              v60 = v59[1];
                              *(_QWORD *)(v21 + 136) = v37;
                              v39 = (unsigned int *)v37 + v60;
                            }
                            else
                            {
                              v39 = (unsigned int *)v37 + v38;
                            }
                          }
                          else
                          {
                            v66 = v32;
                            v62 = (_QWORD *)sub_186B270(0x10u);
                            v32 = v66;
                            *v62 = 2;
                            v37 = v62 + 1;
                            *(_QWORD *)(v21 + 136) = v62 + 1;
                            v39 = (unsigned int *)(v62 + 1);
                          }
                          *v39 = v82;
                          ++*((_DWORD *)v37 - 1);
                          if ( !v32 )
                          {
                            sub_1872CE0("");
                            sub_1873130(114, 747);
                          }
                        }
                      }
                      v10 = *v73;
                      if ( !*v73 )
                        break;
                    }
                  }
                  if ( ++v15 >= *(_DWORD *)(v10 - 4) )
                    goto LABEL_14;
                }
                result = v78;
                v8 += 8;
                v9 = v21;
                a1 = v20;
                if ( v8 != v78 )
                  goto LABEL_4;
                return result;
              }
LABEL_14:
              v11 = v18;
              v9 = v21;
              a1 = v20;
              if ( v11 >= *(_DWORD *)(v10 - 4) )
                goto LABEL_15;
            }
          }
        }
LABEL_15:
        result = v78;
        v8 += 8;
      }
      while ( v8 != v78 );
    }
  }
  return result;
}

