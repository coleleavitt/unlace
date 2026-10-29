/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D9B0
// Address: 0x000000000006D9B0

//----- (000000000006D9B0) ----------------------------------------------------
__int64 __fastcall sub_6D9B0(__int64 a1, _QWORD *a2, __int64 a3, double a4, __m128 a5)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  const char *v8; // r13
  __int64 v9; // r14
  __int64 v10; // rbp
  const char *v11; // rdi
  int v12; // eax
  bool v13; // zf
  const char *v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rbp
  int v17; // ebx
  char *v18; // rbp
  void *v19; // r13
  char *v20; // r15
  __int64 v21; // rbx
  size_t v22; // r13
  char *v23; // rbp
  void *v24; // rax
  char *v25; // rbx
  const char *v26; // rsi
  void *v27; // rbp
  void *v31[2]; // [rsp+10h] [rbp-78h] BYREF
  char *v32; // [rsp+20h] [rbp-68h]
  void *ptr[2]; // [rsp+30h] [rbp-58h] BYREF
  void *v34; // [rsp+40h] [rbp-48h]
  int v35; // [rsp+48h] [rbp-40h]
  unsigned __int64 v36; // [rsp+50h] [rbp-38h]

  v5 = a3;
  v36 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 8);
  if ( !v7 )
    goto LABEL_17;
  v8 = s1;
  if ( *(_QWORD *)(a3 + 8) )
    v8 = *(const char **)a3;
  v9 = a1 + 8;
  v10 = a1 + 8;
  do
  {
    v11 = s1;
    if ( *(_QWORD *)(v7 + 40) )
      v11 = *(const char **)(v7 + 32);
    v12 = strcmp(v11, v8);
    if ( v12 >= 0 )
      v10 = v7;
    v7 = *(_QWORD *)(v7 + 8LL * (v12 < 0));
  }
  while ( v7 );
  v13 = v10 == v9;
  v5 = a3;
  if ( v13 || (!*(_QWORD *)(v10 + 40) ? (v14 = s1) : (v14 = *(const char **)(v10 + 32)), strcmp(v8, v14) < 0) )
  {
LABEL_17:
    *(_OWORD *)v31 = 0;
    v32 = nullptr;
    v18 = *(char **)(a1 + 40);
    if ( v18 )
    {
      v19 = qalloc_or_throw(*(_QWORD *)(a1 + 40));
      v31[0] = v19;
      v32 = v18;
      memcpy(v19, *(const void **)(a1 + 32), (size_t)v18);
      v31[1] = v18;
      v20 = v18 - 1;
    }
    else
    {
      v19 = nullptr;
      v20 = nullptr;
    }
    if ( v18 < v20 + 2 )
    {
      v19 = qvector_reserve((__int64)v31, (char *)v19, (unsigned __int64)(v20 + 2), 1u);
      v31[0] = v19;
    }
    v31[1] = v20 + 2;
    v20[(_QWORD)v19] = 46;
    *((_BYTE *)v31[0] + (unsigned __int64)v20 + 1) = 0;
    v21 = *(_QWORD *)(v5 + 8);
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v21 != 1 )
      {
        v23 = (char *)v31[1] - 1;
        if ( !v31[1] )
          v23 = nullptr;
        v24 = v31[0];
        v25 = &v23[v21];
        if ( v32 < v25 )
        {
          v24 = qvector_reserve((__int64)v31, (char *)v31[0], (unsigned __int64)v25, 1u);
          v31[0] = v24;
        }
        v31[1] = v25;
        v23[v22 + (_QWORD)v24] = 0;
        memcpy((char *)v31[0] + (unsigned __int64)v23, *(const void **)v5, v22);
      }
    }
    if ( v31[1] )
      v26 = (const char *)v31[0];
    else
      v26 = s1;
    v17 = sub_6CC60((__int64)a2, v26, 0.0, a5);
    *(_OWORD *)ptr = 0;
    v34 = nullptr;
    v27 = *(void **)(v5 + 8);
    if ( v27 )
    {
      ptr[0] = qalloc_or_throw(*(_QWORD *)(v5 + 8));
      v34 = v27;
      memcpy(ptr[0], *(const void **)v5, (size_t)v27);
      ptr[1] = v27;
    }
    v35 = v17;
    sub_70300((__int64 **)a1, (__int64)ptr, (__int128 *)ptr);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v34 = nullptr;
    }
    if ( v31[0] )
    {
      v31[1] = nullptr;
      qfree(v31[0]);
      v31[0] = nullptr;
      v32 = nullptr;
    }
  }
  else
  {
    v15 = *(int *)(v10 + 56);
    v16 = *(_QWORD *)(*a2 + 8 * v15);
    v17 = -1;
    if ( !*(_DWORD *)(v16 + 136) )
    {
      sub_6CDF0(*(_QWORD *)(*a2 + 8 * v15), a4, a5);
      *(_DWORD *)(v16 + 136) = -1;
      return (int)v15;
    }
  }
  return v17;
}
