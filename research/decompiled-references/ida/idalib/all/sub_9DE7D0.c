__int64 __fastcall sub_9DE7D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __m128 *v6; // rbx
  __int64 *v7; // r13
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  const char *v15; // rdx
  unsigned __int64 v16; // rax
  unsigned int *v17; // rdx
  __m128 **v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // r14
  unsigned int v22; // r15d
  unsigned int v23; // r9d
  __int64 *v24; // rax
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 *v31; // r15
  _QWORD *v32; // rdx
  int v33; // r11d
  _QWORD *v34; // rsi
  __int64 *v35; // rdx
  __int64 v36; // r13
  __int64 v37; // rsi
  unsigned int v38; // edi
  _QWORD *v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rsi
  int v42; // eax
  __int64 v43; // r8
  __int64 *v44; // rsi
  __int64 v45; // rdi
  int v46; // r10d
  __int64 v47; // r9
  unsigned __int64 v48; // r8
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // r11
  __int64 *v53; // r10
  __int64 v54; // r9
  _QWORD *i; // rdx
  __int64 *v56; // rax
  __int64 v57; // r15
  __int64 v58; // rdx
  unsigned int v59; // esi
  _QWORD *v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r15
  int v65; // r8d
  __int64 v66; // rdx
  _QWORD *k; // rdx
  __int64 v68; // rax
  _QWORD *j; // rax
  _QWORD *v70; // r9
  int v71; // r10d
  _QWORD *v72; // r8
  int v73; // r13d
  int v74; // r9d
  __int64 v75; // [rsp+0h] [rbp-78h] BYREF
  __int64 v76; // [rsp+8h] [rbp-70h]
  int v77; // [rsp+14h] [rbp-64h]
  __int64 *v78; // [rsp+18h] [rbp-60h]
  __int64 *v79; // [rsp+20h] [rbp-58h]
  __m128 *v80; // [rsp+28h] [rbp-50h] BYREF
  __m128 v81[4]; // [rsp+30h] [rbp-48h] BYREF

  v6 = (__m128 *)a2;
  v80 = (__m128 *)a2;
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 200) )
    {
      v7 = *(__int64 **)(a2 + 8);
      if ( !v7 && (unsigned __int8)(*(_BYTE *)a2 - 3) > 2u )
      {
        if ( a4 )
        {
          v12 = *(__int64 **)a1;
          v13 = *v12;
          v12[10] += 48;
          v6 = (__m128 *)((v13 + 15) & 0xFFFFFFFFFFFFFFF0LL);
          if ( v12[1] >= (unsigned __int64)&v6[3] && v13 )
            *v12 = (__int64)&v6[3];
          else
            v6 = (__m128 *)sub_986170((__int64)v12, 48, 48, 4, a5, a6);
          v6->m128_u64[0] = 5;
          v14 = *(_QWORD *)(a4 + 40);
          v6->m128_u64[1] = 0;
          if ( (v14 & 7) != 0 )
          {
            v16 = 0;
            v15 = &byte_22F0C30;
          }
          else
          {
            v15 = &byte_22F0C30;
            v16 = v14 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v16 )
            {
              v17 = *(unsigned int **)(v16 + 16);
              v16 = *v17;
              v15 = (const char *)(v17 + 4);
            }
          }
          v75 = a4;
          v6[1].m128_u64[0] = (unsigned __int64)v15;
          v6[1].m128_u64[1] = v16;
          v80 = v6;
          v6[2] = _mm_loadh_ps((const double *)&v75);
        }
        v18 = *(__m128 ***)(a1 + 160);
        if ( v18 == *(__m128 ***)(a1 + 168) )
        {
          sub_9DD2D0(a1 + 152, v18, (__int64 *)&v80);
        }
        else
        {
          *v18 = v6;
          *(_QWORD *)(a1 + 160) = v18 + 1;
        }
        v6 = v80;
        if ( a3 )
        {
          v19 = *(unsigned int *)(a1 + 40);
          v20 = a1 + 24;
          v21 = *(__int64 **)(a1 + 24);
          if ( !(_DWORD)v19 )
            goto LABEL_21;
          a5 = (unsigned int)(v19 - 1);
          v22 = ((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4);
          v23 = a5 & v22;
          v24 = &v21[2 * ((unsigned int)a5 & v22)];
          v25 = *v24;
          if ( a3 == *v24 )
          {
LABEL_19:
            sub_9DE760(v81, v24, &v21[2 * v19], v20, 1);
            return (__int64)v80;
          }
          v44 = nullptr;
          v46 = 1;
          if ( v25 == -4096 )
            goto LABEL_45;
          while ( 1 )
          {
            if ( v25 == -8192 && !v44 )
              v44 = v24;
            v23 = a5 & (v46 + v23);
            v24 = &v21[2 * v23];
            v25 = *v24;
            if ( a3 == *v24 )
              goto LABEL_19;
            if ( v25 == -4096 )
              break;
            ++v46;
          }
          if ( !v44 )
LABEL_45:
            v44 = v24;
          v42 = *(_DWORD *)(a1 + 32) + 1;
          a6 = (unsigned int)(4 * v42);
          if ( (unsigned int)a6 < 3 * (int)v19 )
          {
            v47 = (unsigned int)v19 >> 3;
            if ( (int)v19 - *(_DWORD *)(a1 + 36) - v42 > (unsigned int)v47 )
            {
              v45 = *v44;
              goto LABEL_38;
            }
            LODWORD(v76) = *(_DWORD *)(a1 + 40);
            v75 = a1 + 24;
            v48 = (a5 >> 1) | a5;
            v49 = (((((((v48 | (v48 >> 2)) >> 4) | v48 | (v48 >> 2)) >> 8) | ((v48 | (v48 >> 2)) >> 4)
                                                                           | v48
                                                                           | (v48 >> 2)) >> 16)
                 | ((((v48 | (v48 >> 2)) >> 4) | v48 | (v48 >> 2)) >> 8)
                 | ((v48 | (v48 >> 2)) >> 4)
                 | v48
                 | (v48 >> 2))
                + 1;
            if ( (unsigned int)v49 < 0x40 )
              LODWORD(v49) = 64;
            *(_DWORD *)(a1 + 40) = v49;
            v50 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v49, 8, v19, v20, v48, v47);
            v20 = v75;
            v51 = (unsigned int)v76;
            v52 = v50;
            *(_QWORD *)(a1 + 24) = v50;
            if ( v21 )
            {
              *(_QWORD *)(a1 + 32) = 0;
              v76 = 16 * v51;
              v53 = &v21[2 * v51];
              v54 = *(unsigned int *)(a1 + 40);
              for ( i = &v50[2 * v54]; i != v50; v50 += 2 )
                *v50 = -4096;
              v79 = nullptr;
              v56 = v21;
              LODWORD(v75) = v54 - 1;
              LODWORD(v78) = ((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4);
              v57 = v20;
              do
              {
                v58 = *v56;
                if ( *v56 != -8192 && v58 != -4096 )
                {
                  if ( !(_DWORD)v54 )
                  {
                    *(_QWORD *)&dword_0 = *v56;
                    BUG();
                  }
                  v59 = v75 & (((unsigned int)v58 >> 9) ^ ((unsigned int)v58 >> 4));
                  v60 = &v52[2 * v59];
                  v61 = *v60;
                  if ( v58 != *v60 )
                  {
                    v72 = nullptr;
                    v73 = 1;
                    if ( v61 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( !v72 && v61 == -8192 )
                          v72 = v60;
                        v59 = v75 & (v73 + v59);
                        v77 = v73 + 1;
                        v60 = &v52[2 * v59];
                        v61 = *v60;
                        if ( v58 == *v60 )
                          break;
                        if ( v61 == -4096 )
                        {
                          if ( v72 )
                            v60 = v72;
                          break;
                        }
                        v73 = v77;
                      }
                    }
                  }
                  *v60 = v58;
                  v62 = v56[1];
                  ++*(_DWORD *)(a1 + 32);
                  v60[1] = v62;
                }
                v56 += 2;
              }
              while ( v53 != v56 );
              v63 = v57;
              v22 = (unsigned int)v78;
              v7 = v79;
              v75 = v63;
              operator delete(v21, v76, 8);
              v20 = v75;
            }
            else
            {
              v68 = *(unsigned int *)(a1 + 40);
              *(_QWORD *)(a1 + 32) = 0;
              for ( j = &v52[2 * v68]; j != v52; v52 += 2 )
                *v52 = -4096;
            }
            v19 = *(unsigned int *)(a1 + 40);
            v42 = *(_DWORD *)(a1 + 32) + 1;
            if ( (_DWORD)v19 )
            {
              v21 = *(__int64 **)(a1 + 24);
              LODWORD(v64) = (v19 - 1) & v22;
              v44 = &v21[2 * (unsigned int)v64];
              v45 = *v44;
              if ( a3 == *v44 )
              {
LABEL_38:
                *(_DWORD *)(a1 + 32) = v42;
                if ( v45 != -4096 )
                  --*(_DWORD *)(a1 + 36);
                goto LABEL_40;
              }
              v65 = 1;
              if ( v45 != -4096 )
              {
                while ( 1 )
                {
                  if ( v45 == -8192 && !v7 )
                    v7 = v44;
                  v64 = ((_DWORD)v19 - 1) & (unsigned int)(v64 + v65);
                  v44 = &v21[2 * v64];
                  v45 = *v44;
                  if ( a3 == *v44 )
                    goto LABEL_38;
                  if ( v45 == -4096 )
                    goto LABEL_104;
                  ++v65;
                }
              }
LABEL_65:
              *(_DWORD *)(a1 + 32) = v42;
LABEL_40:
              v75 = (__int64)v6;
              *(__m128 *)v44 = _mm_loadh_ps((const double *)&v75);
              sub_9DE760(v81, v44, &v21[2 * v19], v20, 1);
              return (__int64)v80;
            }
          }
          else
          {
LABEL_21:
            v76 = a1 + 24;
            LODWORD(v75) = v19;
            v26 = (((((((unsigned int)(2 * v19 - 1) | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v19 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 4)
                  | (((unsigned int)(2 * v19 - 1) | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v19 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 8)
                | (((((unsigned int)(2 * v19 - 1) | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v19 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 4)
                | (((unsigned int)(2 * v19 - 1) | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v19 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1);
            v27 = ((v26 >> 16) | v26) + 1;
            if ( (unsigned int)v27 < 0x40 )
              LODWORD(v27) = 64;
            *(_DWORD *)(a1 + 40) = v27;
            v28 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v27, 8, v19, v20, a5, a6);
            v29 = (unsigned int)v75;
            v20 = v76;
            *(_QWORD *)(a1 + 24) = v28;
            if ( v21 )
            {
              v30 = *(unsigned int *)(a1 + 40);
              *(_QWORD *)(a1 + 32) = 0;
              v76 = 16 * v29;
              v31 = &v21[2 * v29];
              v32 = v28;
              v33 = v30;
              v34 = &v28[2 * v30];
              if ( v28 != v34 )
              {
                do
                {
                  *v32 = -4096;
                  v32 += 2;
                }
                while ( v34 != v32 );
              }
              v35 = v21;
              LODWORD(v75) = v33 - 1;
              if ( v21 != v31 )
              {
                v78 = nullptr;
                v36 = v20;
                do
                {
                  v37 = *v35;
                  if ( *v35 != -8192 && v37 != -4096 )
                  {
                    if ( !v33 )
                    {
                      *(_QWORD *)&dword_0 = *v35;
                      BUG();
                    }
                    v38 = v75 & (((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4));
                    v39 = &v28[2 * v38];
                    v40 = *v39;
                    if ( v37 != *v39 )
                    {
                      v70 = nullptr;
                      v71 = 1;
                      if ( v40 != -4096 )
                      {
                        while ( 1 )
                        {
                          if ( v40 == -8192 && !v70 )
                            v70 = v39;
                          v38 = v75 & (v71 + v38);
                          v77 = v71 + 1;
                          v39 = &v28[2 * v38];
                          v40 = *v39;
                          if ( v37 == *v39 )
                            break;
                          if ( v40 == -4096 )
                          {
                            if ( v70 )
                              v39 = v70;
                            break;
                          }
                          v71 = v77;
                        }
                      }
                    }
                    *v39 = v37;
                    v41 = v35[1];
                    ++*(_DWORD *)(a1 + 32);
                    v39[1] = v41;
                  }
                  v35 += 2;
                }
                while ( v31 != v35 );
                v20 = v36;
                v7 = v78;
              }
              v75 = v20;
              operator delete(v21, v76, 8);
              v20 = v75;
            }
            else
            {
              v66 = *(unsigned int *)(a1 + 40);
              *(_QWORD *)(a1 + 32) = 0;
              for ( k = &v28[2 * v66]; k != v28; v28 += 2 )
                *v28 = -4096;
            }
            v19 = *(unsigned int *)(a1 + 40);
            v42 = *(_DWORD *)(a1 + 32) + 1;
            if ( (_DWORD)v19 )
            {
              v21 = *(__int64 **)(a1 + 24);
              LODWORD(v43) = (v19 - 1) & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
              v44 = &v21[2 * (unsigned int)v43];
              v45 = *v44;
              if ( a3 == *v44 )
                goto LABEL_38;
              v74 = 1;
              if ( v45 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v7 && v45 == -8192 )
                    v7 = v44;
                  v43 = ((_DWORD)v19 - 1) & (unsigned int)(v43 + v74);
                  v44 = &v21[2 * v43];
                  v45 = *v44;
                  if ( a3 == *v44 )
                    goto LABEL_38;
                  if ( v45 == -4096 )
                  {
LABEL_104:
                    if ( !v7 )
                      goto LABEL_65;
                    v45 = *v7;
                    v44 = v7;
                    goto LABEL_38;
                  }
                  ++v74;
                }
              }
              goto LABEL_65;
            }
          }
          ++*(_DWORD *)(a1 + 32);
          BUG();
        }
      }
    }
  }
  return (__int64)v6;
}
