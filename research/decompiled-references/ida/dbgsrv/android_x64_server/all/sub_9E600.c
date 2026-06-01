/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9E600
// Address: 0x000000000009E600

//----- (000000000009E600) ----------------------------------------------------
unsigned __int64 __fastcall sub_9E600(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rbx
  char *v6; // r15
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v17; // rbx
  unsigned __int64 v18; // rbp
  void *v19[3]; // [rsp+0h] [rbp-88h] BYREF
  void *v20; // [rsp+18h] [rbp-70h]
  __int64 v21; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+28h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-48h]
  unsigned __int64 v26; // [rsp+50h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 > a2 )
  {
    v5 = 80 * a2;
    do
    {
      v6 = *(char **)a1;
      v7 = *(void **)(*(_QWORD *)a1 + v5 + 48);
      if ( v7 )
      {
        *(_QWORD *)&v6[v5 + 56] = 0;
        qfree(v7);
        *(_QWORD *)&v6[v5 + 48] = 0;
        *(_QWORD *)&v6[v5 + 64] = 0;
      }
      v8 = *(void **)&v6[v5 + 24];
      if ( v8 )
      {
        *(_QWORD *)&v6[v5 + 32] = 0;
        qfree(v8);
        *(_QWORD *)&v6[v5 + 24] = 0;
        *(_QWORD *)&v6[v5 + 40] = 0;
      }
      v9 = *(void **)&v6[v5];
      if ( v9 )
      {
        *(_QWORD *)&v6[v5 + 8] = 0;
        qfree(v9);
        *(_QWORD *)&v6[v5] = 0;
        *(_QWORD *)&v6[v5 + 16] = 0;
      }
      v5 += 80;
      --v4;
    }
    while ( a2 != v4 );
LABEL_10:
    *(_QWORD *)(a1 + 8) = a2;
    return __readfsqword(0x28u);
  }
  if ( v4 >= a2 )
    return __readfsqword(0x28u);
  v11 = *(void **)a1;
  v12 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 > a3 || (unsigned __int64)v11 + 80 * v12 <= a3 )
  {
    if ( v12 < a2 )
    {
      v11 = qvector_reserve(a1, *(char **)a1, a2, 0x50u);
      *(_QWORD *)a1 = v11;
      v4 = *(_QWORD *)(a1 + 8);
    }
    if ( v4 < a2 )
    {
      sub_9E970((__int64)v11 + 80 * v4, a3);
      if ( v4 + 1 != a2 )
      {
        v17 = 80 * v4 + 80;
        v18 = a2 - 1 - v4;
        do
        {
          sub_9E970(v17 + *(_QWORD *)a1, a3);
          v17 += 80;
          --v18;
        }
        while ( v18 );
      }
    }
    goto LABEL_10;
  }
  sub_9E970((__int64)v19, a3);
  if ( *(_QWORD *)(a1 + 16) < a2 )
    *(_QWORD *)a1 = qvector_reserve(a1, *(char **)a1, a2, 0x50u);
  v13 = *(_QWORD *)(a1 + 8);
  if ( v13 < a2 )
  {
    v14 = a2 - v13;
    v15 = 80 * v13;
    do
    {
      sub_9E970(v15 + *(_QWORD *)a1, (__int64)v19);
      v15 += 80;
      --v14;
    }
    while ( v14 );
  }
  *(_QWORD *)(a1 + 8) = a2;
  if ( ptr )
  {
    v24 = 0;
    qfree(ptr);
    ptr = nullptr;
    v25 = 0;
  }
  if ( v20 )
  {
    v21 = 0;
    qfree(v20);
    v20 = nullptr;
    v22 = 0;
  }
  if ( v19[0] )
  {
    v19[1] = nullptr;
    qfree(v19[0]);
    v19[0] = nullptr;
    v19[2] = nullptr;
  }
  return __readfsqword(0x28u);
}
