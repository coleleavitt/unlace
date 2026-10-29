/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A33A0
// Address: 0x00000000000A33A0

//----- (00000000000A33A0) ----------------------------------------------------
__int64 __fastcall sub_A33A0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  char *v9; // r15
  void *v10; // rdi
  unsigned __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // r12
  char *v14; // rbx
  __int64 v15; // r12
  char **v16; // r13
  __int64 v17; // rax
  bool v18; // cf
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rbp
  char *v22; // rsi
  char *v23; // rax
  bool v24; // zf
  unsigned __int64 v26; // [rsp+8h] [rbp-50h]
  __int64 *v28; // [rsp+20h] [rbp-38h]

  v4 = a2;
  sub_38980(a1 + 35, 0);
  v28 = a1 + 35;
  (*(void (__fastcall **)(__int64 *, __int64 *, __int64))(*a1 + 24))(a1, a1 + 35, a3);
  v5 = a1[36];
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
  {
    v7 = 0;
    v8 = 8;
    do
    {
      v9 = *(char **)a2;
      v10 = *(void **)(*(_QWORD *)a2 + v8);
      if ( v10 )
      {
        *(_QWORD *)&v9[v8 + 8] = 0;
        qfree(v10);
        *(_QWORD *)&v9[v8] = 0;
        *(_QWORD *)&v9[v8 + 16] = 0;
      }
      ++v7;
      v8 += 32;
    }
    while ( v7 < v6 );
  }
  *(_QWORD *)(a2 + 8) = 0;
  v11 = v5;
  if ( *(_QWORD *)(a2 + 16) >= v5 )
  {
    if ( !v5 )
      return 1;
  }
  else
  {
    *(_QWORD *)a2 = qvector_reserve(a2, *(char **)a2, v5, 0x20u);
  }
  v12 = 40;
  do
  {
    v13 = *(_QWORD *)(v4 + 8);
    if ( *(_QWORD *)(v4 + 16) >= (unsigned __int64)(v13 + 1) )
    {
      v14 = *(char **)v4;
    }
    else
    {
      v14 = (char *)qvector_reserve(v4, *(char **)v4, v13 + 1, 0x20u);
      *(_QWORD *)v4 = v14;
      v13 = *(_QWORD *)(v4 + 8);
    }
    v15 = 32 * v13;
    *(_OWORD *)&v14[v15 + 8] = 0;
    *(_QWORD *)&v14[v15 + 24] = 0;
    ++*(_QWORD *)(v4 + 8);
    v16 = (char **)&v14[v15 + 8];
    v17 = *v28;
    *(_DWORD *)&v14[v15] = *(_DWORD *)(*v28 + v12 - 40);
    v18 = *(_QWORD *)(v17 + v12 + 8) < 2u;
    v19 = v17 + v12 - 32;
    v20 = v17 + v12;
    if ( v18 )
      v20 = v19;
    if ( v16 != (char **)v20 )
    {
      v26 = v11;
      v21 = *(_QWORD *)(v20 + 8);
      if ( v21 < 2 )
      {
        *(_QWORD *)&v14[v15 + 16] = 0;
      }
      else
      {
        v22 = *(char **)v20;
        v23 = *v16;
        if ( *(_QWORD *)&v14[v15 + 24] < v21 )
        {
          v23 = (char *)qvector_reserve((__int64)&v14[v15 + 8], v23, v21, 1u);
          *v16 = v23;
        }
        *(_QWORD *)&v14[v15 + 16] = v21;
        memmove(v23, v22, v21 - 1);
        (*v16)[v21 - 1] = 0;
      }
      v11 = v26;
    }
    v12 += 64;
    v24 = v11-- == 1;
    v4 = a2;
  }
  while ( !v24 );
  return 1;
}
