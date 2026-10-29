/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9E1B0
// Address: 0x000000000009E1B0

//----- (000000000009E1B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_9E1B0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rbx
  unsigned __int64 v6; // r15
  char *v7; // rbp
  void *v8; // rdi
  char *v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r13
  __int64 v14; // rbx
  char *v15; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  unsigned __int64 v19; // rbp
  char *v20; // rax
  int v21; // [rsp+0h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+8h] [rbp-50h]
  __int64 v23; // [rsp+18h] [rbp-40h]
  unsigned __int64 v24; // [rsp+20h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 > a2 )
  {
    v5 = 32 * a2;
    v6 = a2;
    do
    {
      v7 = *(char **)a1;
      if ( *(int *)(*(_QWORD *)a1 + v5) >= -1 )
      {
        v8 = *(void **)&v7[v5 + 8];
        if ( v8 )
        {
          *(_QWORD *)&v7[v5 + 16] = 0;
          qfree(v8);
          *(_QWORD *)&v7[v5 + 8] = 0;
          *(_QWORD *)&v7[v5 + 24] = 0;
        }
        *(_DWORD *)&v7[v5] = -2;
      }
      ++v6;
      v5 += 32;
    }
    while ( v6 < v4 );
LABEL_8:
    *(_QWORD *)(a1 + 8) = a2;
    return __readfsqword(0x28u);
  }
  if ( v4 >= a2 )
    return __readfsqword(0x28u);
  v10 = *(char **)a1;
  v11 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 > a3 || (unsigned __int64)&v10[32 * v11] <= a3 )
  {
    if ( v11 < a2 )
    {
      v10 = (char *)qvector_reserve(a1, *(char **)a1, a2, 0x20u);
      *(_QWORD *)a1 = v10;
      v4 = *(_QWORD *)(a1 + 8);
    }
    if ( v4 < a2 )
    {
      v17 = 32 * v4;
      *(_DWORD *)&v10[v17] = -2;
      *(_OWORD *)&v10[v17 + 8] = 0;
      *(_QWORD *)&v10[v17 + 24] = 0;
      sub_9E470((__int64)&v10[32 * v4], a3);
      if ( v4 + 1 != a2 )
      {
        v18 = v17 + 32;
        v19 = a2 - 1 - v4;
        do
        {
          v20 = *(char **)a1;
          *(_DWORD *)&v20[v18] = -2;
          *(_OWORD *)&v20[v18 + 8] = 0;
          *(_QWORD *)&v20[v18 + 24] = 0;
          sub_9E470((__int64)&v20[v18], a3);
          v18 += 32;
          --v19;
        }
        while ( v19 );
      }
    }
    goto LABEL_8;
  }
  v21 = -2;
  *(_OWORD *)ptr = 0;
  v23 = 0;
  sub_9E470((__int64)&v21, a3);
  if ( *(_QWORD *)(a1 + 16) < a2 )
    *(_QWORD *)a1 = qvector_reserve(a1, *(char **)a1, a2, 0x20u);
  v12 = *(_QWORD *)(a1 + 8);
  if ( v12 < a2 )
  {
    v13 = a2 - v12;
    v14 = 32 * v12;
    do
    {
      v15 = *(char **)a1;
      *(_DWORD *)&v15[v14] = -2;
      *(_OWORD *)&v15[v14 + 8] = 0;
      *(_QWORD *)&v15[v14 + 24] = 0;
      sub_9E470((__int64)&v15[v14], (__int64)&v21);
      v14 += 32;
      --v13;
    }
    while ( v13 );
  }
  *(_QWORD *)(a1 + 8) = a2;
  if ( v21 >= -1 )
  {
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v23 = 0;
    }
    v21 = -2;
  }
  return __readfsqword(0x28u);
}
