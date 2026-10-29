/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deserialize_dynamic_register_set
// Address: 0x00000000000B4A70

//----- (00000000000B4A70) ----------------------------------------------------
unsigned __int64 __fastcall deserialize_dynamic_register_set(__int64 a1, unsigned __int64 *a2)
{
  char *v4; // rdi
  char *v5; // r13
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r12
  __int64 i; // rbp
  void *v9; // rdi
  void *v10; // rdi
  char *v11; // r13
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r12
  __int64 j; // rbp
  void *v15; // rdi
  unsigned __int64 v16; // rsi
  unsigned int v17; // eax
  __int64 k; // r15
  __int64 v19; // rax
  _QWORD *v20; // rbp
  __int64 v21; // r12
  char **v22; // rdx
  const char *v23; // r13
  _BYTE *v24; // rax
  bool v25; // zf
  size_t v26; // rax
  unsigned __int64 v27; // rdx
  bool v28; // cf
  char *v29; // rax
  const char *v30; // r12
  char *v31; // rax
  __int64 v32; // rdi
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  char *v35; // rax
  __int64 v36; // rdi
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rdx
  char *v39; // rax
  void *v40; // rdx
  unsigned int v41; // ebp
  __int64 v42; // rax
  char *v43; // r12
  unsigned int v44; // ebp
  unsigned __int64 v45; // r13
  unsigned __int64 v46; // rbp
  const char *v47; // rsi
  _BYTE *v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rcx
  __int128 v52; // xmm0
  __int64 v53; // rdx
  const char *v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rax
  __int64 v57; // r15
  unsigned __int64 v58; // rdx
  _BYTE *v59; // rax
  __int64 v60; // rsi
  _QWORD *v61; // rbp
  __int64 v62; // r13
  const char *v63; // r12
  _BYTE *v64; // rax
  size_t v65; // rax
  unsigned __int64 v66; // rdx
  char *v67; // rax
  const char *v68; // rax
  __int64 v69; // r15
  unsigned int v70; // eax
  bool v72; // [rsp+Fh] [rbp-99h]
  char **v73; // [rsp+10h] [rbp-98h]
  char **v74; // [rsp+18h] [rbp-90h]
  __int64 v75; // [rsp+18h] [rbp-90h]
  char **v76; // [rsp+20h] [rbp-88h]
  unsigned __int64 v77; // [rsp+20h] [rbp-88h]
  _BYTE *v78; // [rsp+20h] [rbp-88h]
  size_t n; // [rsp+28h] [rbp-80h]
  char **na; // [rsp+28h] [rbp-80h]
  __int64 v81; // [rsp+30h] [rbp-78h]
  __int64 v82; // [rsp+30h] [rbp-78h]
  __int64 v83; // [rsp+30h] [rbp-78h]
  char **v84; // [rsp+38h] [rbp-70h]
  size_t v85; // [rsp+40h] [rbp-68h]
  size_t v86; // [rsp+40h] [rbp-68h]
  unsigned __int64 v87; // [rsp+48h] [rbp-60h]
  void *ptr[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v89; // [rsp+60h] [rbp-48h]
  unsigned __int64 v90; // [rsp+70h] [rbp-38h]

  v90 = __readfsqword(0x28u);
  if ( a1 )
  {
    v4 = *(char **)a1;
    if ( v4 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v4);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    v73 = (char **)(a1 + 24);
    v5 = *(char **)(a1 + 24);
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 32);
      if ( v6 )
      {
        v7 = 1;
        for ( i = 0; ; i += 24 )
        {
          v9 = *(void **)&v5[i];
          if ( v9 )
          {
            *(_QWORD *)&v5[i + 8] = 0;
            qfree(v9);
            *(_QWORD *)&v5[i] = 0;
            *(_QWORD *)&v5[i + 16] = 0;
          }
          if ( v7 >= v6 )
            break;
          v5 = *v73;
          ++v7;
        }
        v5 = *v73;
      }
      *(_QWORD *)(a1 + 32) = 0;
      qfree(v5);
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
    v10 = *(void **)(a1 + 48);
    if ( v10 )
    {
      *(_QWORD *)(a1 + 56) = 0;
      qfree(v10);
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 64) = 0;
    }
    v84 = (char **)(a1 + 72);
    v11 = *(char **)(a1 + 72);
    if ( v11 )
    {
      v12 = *(_QWORD *)(a1 + 80);
      if ( v12 )
      {
        v13 = 1;
        for ( j = 0; ; j += 24 )
        {
          v15 = *(void **)&v11[j];
          if ( v15 )
          {
            *(_QWORD *)&v11[j + 8] = 0;
            qfree(v15);
            *(_QWORD *)&v11[j] = 0;
            *(_QWORD *)&v11[j + 16] = 0;
          }
          if ( v13 >= v12 )
            break;
          v11 = *v84;
          ++v13;
        }
        v11 = *v84;
      }
      *(_QWORD *)(a1 + 80) = 0;
      qfree(v11);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
    v16 = a2[1];
    if ( *a2 < v16 )
    {
      v17 = unpack_dd(a2, v16);
      v72 = v17 > 0xFFFFFEFF && (_BYTE)v17 != 0;
      if ( v72 )
        v17 = unpack_dd(a2, a2[1]);
      if ( v17 )
      {
        v81 = v17;
        v74 = (char **)(a1 + 48);
        for ( k = 0; k != v81; ++k )
        {
          v19 = *(_QWORD *)(a1 + 32);
          if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)(v19 + 1) )
          {
            v20 = *v73;
          }
          else
          {
            v20 = qvector_reserve((__int64)v73, *(char **)(a1 + 24), v19 + 1, 0x18u);
            *(_QWORD *)(a1 + 24) = v20;
            v19 = *(_QWORD *)(a1 + 32);
          }
          v21 = 3 * v19;
          *(_OWORD *)&v20[v21] = 0;
          v20[v21 + 2] = 0;
          ++*(_QWORD *)(a1 + 32);
          v22 = (char **)&v20[3 * v19];
          v23 = (const char *)*a2;
          v24 = (_BYTE *)*a2;
          do
          {
            if ( (unsigned __int64)v24 >= a2[1] )
              goto LABEL_41;
            v25 = *v24++ == 0;
          }
          while ( !v25 );
          *a2 = (unsigned __int64)v24;
          if ( !v23 || (v76 = v22, (v26 = strlen(v23)) == 0) )
          {
LABEL_41:
            v20[v21 + 1] = 0;
            v30 = s1;
            goto LABEL_42;
          }
          n = v26;
          v27 = v26 + 1;
          v28 = v20[v21 + 2] < v26 + 1;
          v29 = *v76;
          if ( v28 )
          {
            v85 = v27;
            v29 = (char *)qvector_reserve((__int64)v76, *v76, v27, 1u);
            v27 = v85;
            *v76 = v29;
          }
          v20[v21 + 1] = v27;
          memmove(v29, v23, n);
          (*v76)[n] = 0;
          v25 = v20[v21 + 1] == 0;
          v30 = s1;
          if ( !v25 )
            v30 = *v76;
LABEL_42:
          ptr[0] = (void *)v30;
          v31 = *(char **)(a1 + 48);
          v32 = *(_QWORD *)(a1 + 56);
          v33 = *(_QWORD *)(a1 + 64);
          v34 = v32 + 1;
          if ( v31 > (char *)ptr || &v31[8 * v33] <= (char *)ptr )
          {
            if ( v33 < v34 )
            {
              v31 = (char *)qvector_reserve((__int64)v74, v31, v34, 8u);
              *(_QWORD *)(a1 + 48) = v31;
              v32 = *(_QWORD *)(a1 + 56);
              v30 = (const char *)ptr[0];
            }
          }
          else if ( v33 < v34 )
          {
            v31 = (char *)qvector_reserve((__int64)v74, v31, v34, 8u);
            *(_QWORD *)(a1 + 48) = v31;
            v32 = *(_QWORD *)(a1 + 56);
          }
          *(_QWORD *)&v31[8 * v32] = v30;
          ++*(_QWORD *)(a1 + 56);
        }
      }
      else
      {
        v74 = (char **)(a1 + 48);
      }
      ptr[0] = nullptr;
      v35 = *(char **)(a1 + 48);
      v36 = *(_QWORD *)(a1 + 56);
      v37 = *(_QWORD *)(a1 + 64);
      v38 = v36 + 1;
      if ( v35 > (char *)ptr || &v35[8 * v37] <= (char *)ptr )
      {
        if ( v37 >= v38 )
        {
          v40 = nullptr;
        }
        else
        {
          v35 = (char *)qvector_reserve((__int64)v74, v35, v38, 8u);
          *v74 = v35;
          v36 = *(_QWORD *)(a1 + 56);
          v40 = ptr[0];
        }
        v39 = &v35[8 * v36];
      }
      else
      {
        if ( v37 < v38 )
        {
          v35 = (char *)qvector_reserve((__int64)v74, v35, v38, 8u);
          *v74 = v35;
          v36 = *(_QWORD *)(a1 + 56);
        }
        v39 = &v35[8 * v36];
        v40 = nullptr;
      }
      *(_QWORD *)v39 = v40;
      ++*(_QWORD *)(a1 + 56);
      v41 = unpack_dd(a2, a2[1]);
      v77 = v41;
      sub_B5360((__int64)v84, v41);
      if ( v41 )
      {
        v42 = 0;
        do
        {
          v82 = v42;
          v43 = &(*v84)[24 * v42];
          v44 = unpack_dd(a2, a2[1]);
          v45 = v44;
          ptr[0] = nullptr;
          sub_4B430((__int64)v43, v44, (char *)ptr);
          if ( v44 )
          {
            v46 = 0;
            do
            {
              v47 = (const char *)*a2;
              v48 = (_BYTE *)*a2;
              while ( (unsigned __int64)v48 < a2[1] )
              {
                v25 = *v48++ == 0;
                if ( v25 )
                {
                  *a2 = (unsigned __int64)v48;
                  goto LABEL_69;
                }
              }
              v47 = nullptr;
LABEL_69:
              sub_37F60((__int64)ptr, v47);
              if ( ptr[1] >= (char *)&dword_0 + 2 )
              {
                v49 = *(_QWORD *)(a1 + 32);
                if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)(v49 + 1) )
                {
                  v50 = *v73;
                }
                else
                {
                  v50 = qvector_reserve((__int64)v73, *v73, v49 + 1, 0x18u);
                  *(_QWORD *)(a1 + 24) = v50;
                  v49 = *(_QWORD *)(a1 + 32);
                }
                v51 = 3 * v49;
                *(_OWORD *)&v50[v51] = 0;
                v50[v51 + 2] = 0;
                ++*(_QWORD *)(a1 + 32);
                v52 = *(_OWORD *)&v50[v51];
                v53 = v50[v51 + 2];
                v50[v51] = ptr[0];
                v50[v51 + 1] = ptr[1];
                v50[v51 + 2] = v89;
                *(_OWORD *)ptr = v52;
                v89 = v53;
                v54 = s1;
                if ( v50[v51 + 1] )
                  v54 = (const char *)v50[v51];
                *(_QWORD *)(*(_QWORD *)v43 + 8 * v46) = v54;
              }
              if ( ptr[0] )
              {
                ptr[1] = nullptr;
                qfree(ptr[0]);
                ptr[0] = nullptr;
                v89 = 0;
              }
              ++v46;
            }
            while ( v46 < v45 );
          }
          v42 = v82 + 1;
        }
        while ( v82 + 1 < v77 );
      }
      v55 = unpack_dd(a2, a2[1]);
      if ( v55 )
      {
        v75 = v55;
        v56 = 0;
        do
        {
          v57 = *(_QWORD *)(a1 + 8);
          v58 = v57 + 1;
          v83 = v56;
          if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v57 + 1) )
          {
            v59 = *(_BYTE **)a1;
          }
          else
          {
            v59 = qvector_reserve(a1, *(char **)a1, v58, 0x20u);
            *(_QWORD *)a1 = v59;
            v57 = *(_QWORD *)(a1 + 8);
            v58 = v57 + 1;
          }
          *(_QWORD *)(a1 + 8) = v58;
          v60 = *(_QWORD *)(a1 + 32);
          v78 = v59;
          if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)(v60 + 1) )
          {
            v61 = *v73;
          }
          else
          {
            v61 = qvector_reserve((__int64)v73, *(char **)(a1 + 24), v60 + 1, 0x18u);
            *(_QWORD *)(a1 + 24) = v61;
            v60 = *(_QWORD *)(a1 + 32);
          }
          v62 = 3 * v60;
          *(_OWORD *)&v61[v62] = 0;
          v61[v62 + 2] = 0;
          ++*(_QWORD *)(a1 + 32);
          v63 = (const char *)*a2;
          v64 = (_BYTE *)*a2;
          do
          {
            if ( (unsigned __int64)v64 >= a2[1] )
              goto LABEL_97;
            v25 = *v64++ == 0;
          }
          while ( !v25 );
          *a2 = (unsigned __int64)v64;
          if ( !v63 || (na = (char **)&v61[3 * v60], (v65 = strlen(v63)) == 0) )
          {
LABEL_97:
            v61[3 * v60 + 1] = 0;
            v68 = s1;
            goto LABEL_98;
          }
          v86 = v65;
          v66 = v65 + 1;
          v28 = v61[3 * v60 + 2] < v65 + 1;
          v67 = *na;
          if ( v28 )
          {
            v87 = v66;
            v67 = (char *)qvector_reserve((__int64)na, *na, v66, 1u);
            v66 = v87;
            *na = v67;
          }
          v61[3 * v60 + 1] = v66;
          memmove(v67, v63, v86);
          (*na)[v86] = 0;
          v68 = s1;
          if ( v61[3 * v60 + 1] )
            v68 = *na;
LABEL_98:
          v69 = 32 * v57;
          *(_QWORD *)&v78[v69] = v68;
          *(_DWORD *)&v78[v69 + 8] = unpack_dd(a2, a2[1]);
          v78[v69 + 12] = unpack_dd(a2, a2[1]);
          v78[v69 + 13] = unpack_dd(a2, a2[1]);
          v70 = unpack_dd(a2, a2[1]);
          if ( v70 && *(_QWORD *)(a1 + 80) >= (unsigned __int64)v70 )
            *(_QWORD *)&v78[v69 + 16] = *(_QWORD *)&(*v84)[24 * v70 - 24];
          else
            *(_QWORD *)&v78[v69 + 16] = 0;
          *(_QWORD *)&v78[v69 + 24] = unpack_dq(a2, a2[1]) - 1;
          v56 = v83 + 1;
        }
        while ( v83 + 1 != v75 );
      }
      if ( v72 )
        *(_DWORD *)(a1 + 96) = unpack_dd(a2, a2[1]);
    }
  }
  return __readfsqword(0x28u);
}
// 0: using guessed type int dword_0;
