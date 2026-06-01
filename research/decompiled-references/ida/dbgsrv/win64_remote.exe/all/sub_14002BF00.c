/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002BF00
// Address: 0x000000014002BF00

//----- (000000014002BF00) ----------------------------------------------------
const char *__fastcall sub_14002BF00(__int64 a1, const void *a2, int a3)
{
  int v3; // r14d
  _QWORD *v5; // r12
  unsigned __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // r15
  size_t v9; // rax
  const char *result; // rax
  const char *v11; // rcx
  __int64 v12; // r13
  int v13; // ebp
  unsigned __int64 v14; // r12
  const char ***v15; // r14
  __int64 v16; // rsi
  const char **v17; // rbx
  const char **v18; // rdi
  int v19; // edx
  unsigned __int64 v20; // r8
  _DWORD *v21; // rcx
  __int64 v22; // r15
  _QWORD *v23; // rcx
  __int64 i; // rsi
  int v25; // edx
  unsigned __int64 v26; // r8
  _DWORD *v27; // rcx
  __int64 v28; // rbx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rbx
  char *v31; // rax
  char *v32; // rbp
  __int64 v33; // r14
  const char ***v34; // rbx
  __int64 v35; // rsi
  char *v36; // rdi
  const char **v37; // rcx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rbx
  char *v40; // rax
  char *v41; // rbp
  __int64 v42; // r14
  const char ***v43; // rbx
  __int64 v44; // rsi
  char *v45; // rdi
  const char **v46; // rcx
  const char *v47[11]; // [rsp+30h] [rbp-58h] BYREF
  const char *v49; // [rsp+98h] [rbp+10h]
  const char ***v51; // [rsp+A8h] [rbp+20h]

  v3 = a3;
  v5 = (_QWORD *)a1;
  v6 = *(_QWORD *)(a1 + 24) + 1LL;
  if ( v6 > *(_QWORD *)(a1 + 32) )
    *(_QWORD *)(a1 + 16) = sub_14005ABE0(a1 + 16, *(void **)(a1 + 16), v6, 0x18u);
  v7 = v5[2] + 24LL * v5[3];
  v8 = 0;
  *(_QWORD *)v7 = 0;
  *(_QWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 16) = 0;
  ++v5[3];
  if ( a2 && (v9 = strlen((const char *)a2)) != 0 )
    sub_140001810(v7, a2, v9);
  else
    *(_QWORD *)(v7 + 8) = 0;
  result = sub_140062340(*(char **)v7, (char *)Control, v47);
  v11 = result;
  v49 = result;
  if ( result )
  {
    v12 = (__int64)(v5 + 5);
    do
    {
      v13 = 0;
      v14 = v5[6];
      if ( v14 )
      {
        v15 = *(const char ****)v12;
        v51 = *(const char ****)v12;
        while ( 1 )
        {
          v16 = (__int64)v15[1];
          v17 = *v15;
          v18 = &(*v15)[v16];
          if ( *v15 != v18 )
            break;
LABEL_14:
          ++v13;
          ++v8;
          v15 += 4;
          if ( v13 >= v14 )
          {
            v3 = a3;
            goto LABEL_16;
          }
        }
        while ( strcmp(*v17, v11) )
        {
          ++v17;
          v11 = v49;
          if ( v17 == v18 )
            goto LABEL_14;
        }
        v22 = 4 * v8;
        v3 = a3;
        if ( LODWORD(v51[v22 + 3]) == a3 )
        {
          v5 = (_QWORD *)a1;
          v8 = 0;
          goto LABEL_50;
        }
        v23 = v17 + 1;
        for ( i = (((__int64)v51[v22] + v16 * 8 - (__int64)v17) >> 3) - 2; i >= 0; --i )
        {
          *(v23 - 1) = *v23;
          ++v23;
        }
        v51[v22 + 1] = (const char **)((char *)v51[v22 + 1] - 1);
        v8 = 0;
        v25 = 0;
        v5 = (_QWORD *)a1;
        v26 = *(_QWORD *)(a1 + 48);
        if ( !v26 )
          goto LABEL_30;
        v27 = (_DWORD *)(*(_QWORD *)v12 + 24LL);
        while ( *v27 != a3 )
        {
          ++v25;
          v27 += 8;
          if ( v25 >= v26 )
            goto LABEL_30;
        }
        v28 = *(_QWORD *)v12 + 32LL * v25;
        if ( !v28 )
        {
LABEL_30:
          v29 = *(_QWORD *)(v12 + 8) + 1LL;
          v30 = *(_QWORD *)(v12 + 16);
          if ( v29 > v30 )
          {
            v31 = (char *)sub_14005ABE0(v12, nullptr, v29, 0x20u);
            v32 = v31;
            v33 = *(_QWORD *)(v12 + 16);
            *(_QWORD *)(v12 + 16) = v30;
            v34 = *(const char ****)v12;
            v35 = *(_QWORD *)(v12 + 8) - 1LL;
            if ( v35 >= 0 )
            {
              v36 = v31 + 16;
              do
              {
                *((_QWORD *)v36 - 2) = *v34;
                *v34 = nullptr;
                *((_QWORD *)v36 - 1) = v34[1];
                v34[1] = nullptr;
                *(_QWORD *)v36 = v34[2];
                v34[2] = nullptr;
                *((_DWORD *)v36 + 2) = *((_DWORD *)v34 + 6);
                v37 = *v34;
                if ( *v34 )
                {
                  v34[1] = nullptr;
                  j_free(v37);
                  *v34 = nullptr;
                  v34[2] = nullptr;
                }
                v34 += 4;
                v36 += 32;
                --v35;
              }
              while ( v35 >= 0 );
            }
            j_free(*(void **)v12);
            *(_QWORD *)v12 = v32;
            *(_QWORD *)(a1 + 56) = v33;
            v3 = a3;
          }
          v28 = *(_QWORD *)v12 + 32LL * *(_QWORD *)(a1 + 48);
          *(_QWORD *)v28 = 0;
          *(_QWORD *)(v28 + 8) = 0;
          *(_QWORD *)(v28 + 16) = 0;
          ++*(_QWORD *)(a1 + 48);
          *(_DWORD *)(v28 + 24) = v3;
        }
      }
      else
      {
LABEL_16:
        v8 = 0;
        v19 = 0;
        v5 = (_QWORD *)a1;
        v20 = *(_QWORD *)(a1 + 48);
        if ( !v20 )
          goto LABEL_40;
        v21 = (_DWORD *)(*(_QWORD *)v12 + 24LL);
        while ( *v21 != v3 )
        {
          ++v19;
          v21 += 8;
          if ( v19 >= v20 )
            goto LABEL_40;
        }
        v28 = *(_QWORD *)v12 + 32LL * v19;
        if ( !v28 )
        {
LABEL_40:
          v38 = *(_QWORD *)(v12 + 8) + 1LL;
          v39 = *(_QWORD *)(v12 + 16);
          if ( v38 > v39 )
          {
            v40 = (char *)sub_14005ABE0(v12, nullptr, v38, 0x20u);
            v41 = v40;
            v42 = *(_QWORD *)(v12 + 16);
            *(_QWORD *)(v12 + 16) = v39;
            v43 = *(const char ****)v12;
            v44 = *(_QWORD *)(v12 + 8) - 1LL;
            if ( v44 >= 0 )
            {
              v45 = v40 + 16;
              do
              {
                *((_QWORD *)v45 - 2) = *v43;
                *v43 = nullptr;
                *((_QWORD *)v45 - 1) = v43[1];
                v43[1] = nullptr;
                *(_QWORD *)v45 = v43[2];
                v43[2] = nullptr;
                *((_DWORD *)v45 + 2) = *((_DWORD *)v43 + 6);
                v46 = *v43;
                if ( *v43 )
                {
                  v43[1] = nullptr;
                  j_free(v46);
                  *v43 = nullptr;
                  v43[2] = nullptr;
                }
                v43 += 4;
                v45 += 32;
                --v44;
              }
              while ( v44 >= 0 );
            }
            j_free(*(void **)v12);
            *(_QWORD *)v12 = v41;
            *(_QWORD *)(a1 + 56) = v42;
            v3 = a3;
          }
          v28 = *(_QWORD *)v12 + 32LL * *(_QWORD *)(a1 + 48);
          *(_QWORD *)v28 = 0;
          *(_QWORD *)(v28 + 8) = 0;
          *(_QWORD *)(v28 + 16) = 0;
          ++*(_QWORD *)(a1 + 48);
          *(_DWORD *)(v28 + 24) = v3;
        }
      }
      sub_14002E420(v28, *(_QWORD *)(v28 + 8) + 1LL);
      *(_QWORD *)(*(_QWORD *)v28 + 8LL * (*(_QWORD *)(v28 + 8))++) = v49;
LABEL_50:
      result = sub_140062340(nullptr, (char *)Control, v47);
      v11 = result;
      v49 = result;
    }
    while ( result );
  }
  return result;
}
