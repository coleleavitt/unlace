__int64 __fastcall sub_9C0360(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rdx
  _QWORD *v6; // rbp
  void **v8; // rsi
  unsigned __int64 v9; // rbx
  int v10; // r13d
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // eax
  _QWORD *v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 *v18; // r15
  __int64 *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r13
  int v25; // eax
  __int64 v26; // rsi
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r13
  unsigned int v32; // edx
  unsigned int v33; // edi
  unsigned __int64 v34; // rsi
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  char *v37; // rdx
  char *v38; // r9
  int *v39; // r8
  int v40; // esi
  int v41; // ecx
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  char *v45; // rax
  int v46; // edi
  _QWORD *v47; // r14
  _QWORD *v48; // rbx
  __int64 v49; // r9
  __int64 v50; // rdi
  unsigned __int64 v51; // rax
  unsigned int v52; // edx
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 v55; // r15
  int v56; // eax
  __int64 v57; // rdx
  unsigned int v58; // esi
  unsigned __int64 v59; // rdi
  unsigned int v60; // ebx
  __int64 v61; // rcx
  __int64 *v62; // r13
  __int64 *v63; // rbx
  __int64 v64; // rax
  _WORD *v65; // rbp
  _WORD *v66; // r12
  __int64 v67; // rcx
  unsigned __int64 v68; // r14
  _QWORD *v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  unsigned __int64 v72; // r12
  _QWORD *v73; // rcx
  unsigned __int64 v74; // rdx
  __int64 v75; // [rsp+0h] [rbp-238h]
  __int64 i; // [rsp+0h] [rbp-238h]
  __int64 v78; // [rsp+18h] [rbp-220h]
  unsigned __int64 v79; // [rsp+28h] [rbp-210h]
  __int64 v80; // [rsp+30h] [rbp-208h]
  _QWORD *v81; // [rsp+38h] [rbp-200h]
  _QWORD *v82; // [rsp+40h] [rbp-1F8h]
  _QWORD *v83; // [rsp+48h] [rbp-1F0h]
  __int64 v84; // [rsp+50h] [rbp-1E8h]
  __int64 v85; // [rsp+58h] [rbp-1E0h]
  __int64 v86; // [rsp+58h] [rbp-1E0h]
  void *ptr; // [rsp+60h] [rbp-1D8h] BYREF
  __int64 v88; // [rsp+68h] [rbp-1D0h]
  void *v89[16]; // [rsp+70h] [rbp-1C8h] BYREF
  void *v90; // [rsp+F0h] [rbp-148h] BYREF
  __int64 v91; // [rsp+F8h] [rbp-140h]
  _BYTE v92[312]; // [rsp+100h] [rbp-138h] BYREF

  *(_QWORD *)a1 = a3;
  v78 = a1 + 32;
  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_WORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 10) = a5 == 2;
  *(_WORD *)(a1 + 11) = 0;
  *(_QWORD *)(a1 + 24) = 0x200000000LL;
  if ( a5 != 2 )
  {
    v5 = a2[1];
    v6 = a2;
    v8 = v89;
    v9 = *(unsigned int *)(v5 + 24);
    v90 = v92;
    v91 = 0x2000000000LL;
    v10 = v9;
    ptr = v89;
    v88 = 0x2000000000LL;
    if ( v9 > 0x20 )
    {
      sub_22134E0(&ptr, v89, v9, 4);
      memset(ptr, 0, 4 * v9);
      v12 = (unsigned int)v91;
      LODWORD(v88) = v9;
      v11 = v6[2];
      v74 = (unsigned int)v91 + 1LL;
      if ( HIDWORD(v91) < v74 )
      {
        sub_22134E0(&v90, v92, v74, 8);
        v12 = (unsigned int)v91;
      }
    }
    else
    {
      if ( v9 )
      {
        v60 = 4 * v9;
        if ( v60 >= 8 )
        {
          v61 = v60 >> 3;
          memset(v89, 0, 8 * v61);
          v8 = &v89[v61];
        }
        if ( (v60 & 4) != 0 )
          *(_DWORD *)v8 = 0;
      }
      LODWORD(v88) = v10;
      v11 = v6[2];
      v12 = 0;
    }
    *((_QWORD *)v90 + v12) = v11;
    v13 = v6[2];
    LODWORD(v91) = v91 + 1;
    *((_DWORD *)ptr + *(unsigned int *)(v13 + 48)) = (__int64)(*(_QWORD *)(v13 + 88) - *(_QWORD *)(v13 + 80)) >> 4;
LABEL_6:
    v14 = v91;
    while ( 1 )
    {
      v15 = (_QWORD *)v6[1];
      if ( !v14 )
        break;
      v16 = v14--;
      v17 = *((_QWORD *)v90 + v16 - 1);
      LODWORD(v91) = v14;
      v75 = v17;
      if ( v17 == *v15 )
        *(_BYTE *)(a1 + 8) = 1;
      v18 = *(__int64 **)(v17 + 56);
      v19 = *(__int64 **)(v17 + 64);
      if ( v18 != v19 )
      {
        while ( 1 )
        {
          v23 = *v18;
          if ( !*v18 )
            goto LABEL_14;
          v24 = *v6;
          v25 = sub_9C0140(*v6 + 96LL, a4);
          v26 = *(unsigned int *)(v23 + 48);
          v27 = (unsigned int)(2 * v25);
          v28 = *(_QWORD *)(*(_QWORD *)(v24 + 8) + 8 * v26);
          v29 = (unsigned int)(v27 + 1);
          if ( (v28 & 1) != 0 )
          {
            v30 = ~(-1LL << (v28 >> 58)) & (v28 >> 1);
            if ( !_bittest64(&v30, v27) )
              goto LABEL_24;
            if ( !_bittest64(&v30, v29) )
              goto LABEL_14;
          }
          else
          {
            v20 = *(_QWORD *)v28;
            v21 = *(_QWORD *)(*(_QWORD *)v28 + 8LL * ((unsigned int)v27 >> 6));
            if ( !_bittest64(&v21, v27 & 0x3F) )
              goto LABEL_24;
            v22 = *(_QWORD *)(v20 + 8LL * ((unsigned int)v29 >> 6));
            if ( !_bittest64(&v22, v29) )
              goto LABEL_14;
          }
          v31 = *v6;
          v32 = 2 * sub_9C0140(*v6 + 96LL, a4);
          v33 = v32 + 1;
          v34 = *(_QWORD *)(*(_QWORD *)(v31 + 8) + 8LL * *(unsigned int *)(v75 + 48));
          if ( (v34 & 1) != 0 )
          {
            v36 = (v34 >> 1) & ~(-1LL << (v34 >> 58));
            v35 = (v36 >> v32) & 1;
            LOBYTE(v36) = (v36 >> v33) & 1;
          }
          else
          {
            v35 = (*(_QWORD *)(*(_QWORD *)v34 + 8LL * (v32 >> 6)) >> (v32 & 0x3F)) & 1LL;
            v36 = (*(_QWORD *)(*(_QWORD *)v34 + 8LL * (v33 >> 6)) >> v33) & 1LL;
          }
          if ( !(_BYTE)v36 || (_DWORD)v35 )
          {
            v26 = *(unsigned int *)(v23 + 48);
LABEL_24:
            v37 = *(char **)(v23 + 88);
            v38 = *(char **)(v23 + 80);
            v39 = (int *)((char *)ptr + 4 * v26);
            v40 = *v39;
            v41 = *v39 + 1;
            if ( !*v39 )
            {
              if ( v38 == v37 )
              {
                v41 = 1;
              }
              else
              {
                v45 = *(char **)(v23 + 80);
                while ( 1 )
                {
                  if ( !*(_QWORD *)v45 )
                  {
                    v46 = v40 + 2;
                    *v39 = v41;
                    v40 = v41;
                    v41 = v46;
                  }
                  v45 += 16;
                  if ( v45 == v37 )
                    break;
                  v41 = v40 + 1;
                }
              }
            }
            *v39 = v41;
            if ( v41 == (unsigned int)((v37 - v38) >> 4) )
            {
              v42 = (unsigned int)v91;
              v43 = (unsigned int)v91 + 1LL;
              if ( v43 > HIDWORD(v91) )
              {
                sub_22134E0(&v90, v92, v43, 8);
                v42 = (unsigned int)v91;
              }
              *((_QWORD *)v90 + v42) = v23;
              LODWORD(v91) = v91 + 1;
            }
            goto LABEL_14;
          }
          *(_BYTE *)(a1 + 9) = 1;
LABEL_14:
          v18 += 2;
          if ( v19 == v18 )
            goto LABEL_6;
        }
      }
    }
    v47 = (_QWORD *)v15[6];
    v48 = (_QWORD *)v15[5];
    for ( i = a1 + 16; v47 != v48; ++v48 )
    {
      v54 = *v6;
      v55 = *v48;
      v56 = sub_9C0140(*v6 + 96LL, a4);
      v57 = *(unsigned int *)(v55 + 48);
      v58 = 2 * v56;
      v59 = *(_QWORD *)(*(_QWORD *)(v54 + 8) + 8 * v57);
      if ( (v59 & 1) != 0 )
      {
        v51 = (v59 >> 1) & ~(-1LL << (v59 >> 58));
        v50 = (v51 >> v58) & 1;
        LOBYTE(v51) = (v51 >> ((unsigned __int8)v58 + 1)) & 1;
      }
      else
      {
        v49 = *(_QWORD *)v59;
        v50 = (*(_QWORD *)(*(_QWORD *)v59 + 8LL * (v58 >> 6)) >> (v58 & 0x3F)) & 1LL;
        v51 = (*(_QWORD *)(v49 + 8LL * ((v58 + 1) >> 6)) >> ((unsigned __int8)v58 + 1)) & 1LL;
      }
      if ( (_BYTE)v51 )
      {
        if ( !(_DWORD)v50 )
        {
          v52 = *((_DWORD *)ptr + v57);
          if ( v52 )
          {
            v53 = *(_QWORD *)(v55 + 80);
            if ( v52 < (unsigned int)((*(_QWORD *)(v55 + 88) - v53) >> 4)
              && (*(_QWORD *)(v55 + 32) & 0xFFFFFFFFFFFFFFF8LL) != 0
              && v53 != *(_QWORD *)(v55 + 88) )
            {
              v81 = v48;
              v62 = *(__int64 **)(v55 + 80);
              v63 = *(__int64 **)(v55 + 88);
              v64 = v55;
              v83 = v6;
              v65 = (_WORD *)(*(_QWORD *)(v55 + 32) & 0xFFFFFFFFFFFFFFF8LL);
              v82 = v47;
              v84 = a4;
              do
              {
                v70 = *v62;
                if ( *v62
                  && *((_DWORD *)ptr + *(unsigned int *)(v70 + 48)) >= (unsigned int)((__int64)(*(_QWORD *)(v70 + 88)
                                                                                              - *(_QWORD *)(v70 + 80)) >> 4) )
                {
                  if ( (*v65 & 0x1FF) == 0x83 )
                  {
                    v66 = *(_WORD **)(v70 + 24);
                    if ( v66 && (*v66 & 0x1FFu) - 132 <= 1 )
                    {
                      v67 = *(unsigned int *)(a1 + 24);
                      v68 = v80 & 0xFFFFFFFF00000000LL;
                      v80 &= 0xFFFFFFFF00000000LL;
                      if ( v67 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
                      {
                        v86 = v64;
                        sub_22134E0(i, v78, v67 + 1, 16);
                        v67 = *(unsigned int *)(a1 + 24);
                        v64 = v86;
                      }
                      v69 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * v67);
                      *v69 = v66;
                      v69[1] = v68;
                      ++*(_DWORD *)(a1 + 24);
                    }
                  }
                  else
                  {
                    v71 = *(unsigned int *)(a1 + 24);
                    v72 = (unsigned int)(((__int64)v62 - *(_QWORD *)(v64 + 80)) >> 4) | v79 & 0xFFFFFFFF00000000LL;
                    v79 = v72;
                    if ( v71 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
                    {
                      v85 = v64;
                      sub_22134E0(i, v78, v71 + 1, 16);
                      v71 = *(unsigned int *)(a1 + 24);
                      v64 = v85;
                    }
                    v73 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * v71);
                    *v73 = v65;
                    v73[1] = v72;
                    ++*(_DWORD *)(a1 + 24);
                  }
                }
                v62 += 2;
              }
              while ( v62 != v63 );
              v48 = v81;
              v47 = v82;
              v6 = v83;
              a4 = v84;
            }
          }
        }
      }
    }
    if ( ptr != v89 )
      free(ptr);
    if ( v90 != v92 )
      free(v90);
  }
  return a1;
}

