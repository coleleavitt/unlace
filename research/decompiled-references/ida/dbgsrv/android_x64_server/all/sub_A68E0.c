/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A68E0
// Address: 0x00000000000A68E0

//----- (00000000000A68E0) ----------------------------------------------------
unsigned __int64 __fastcall sub_A68E0(__int64 *a1, __int64 a2, __int64 *a3, unsigned __int64 *a4)
{
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  char *v9; // rdi
  const void *v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  char *v13; // rdi
  void **v14; // r12
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  char *v17; // rdi
  const void *v18; // rsi
  unsigned __int64 v19; // rax
  void *v20; // rdi
  char v22; // [rsp+6h] [rbp-32h] BYREF
  char v23; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v24; // [rsp+8h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  sub_A66B0(a1, 1, a4);
  v7 = (int)unpack_dd(a4, a4[1]);
  v8 = *(_QWORD *)(a2 + 8);
  if ( v8 >= v7 )
  {
    if ( v8 != v7 )
    {
      v22 = 0;
      sub_5E330(a2, v7, &v22);
    }
  }
  else
  {
    if ( *(_QWORD *)(a2 + 16) >= v7 )
    {
      v9 = *(char **)a2;
    }
    else
    {
      v9 = (char *)qvector_reserve(a2, *(char **)a2, v7, 1u);
      *(_QWORD *)a2 = v9;
      v8 = *(_QWORD *)(a2 + 8);
    }
    memset(&v9[v8], 0, v7 - v8);
    *(_QWORD *)(a2 + 8) = v7;
  }
  v10 = (const void *)*a4;
  v11 = a4[1];
  v12 = *a4 + v7;
  if ( v12 >= *a4 && v12 <= v11 )
  {
    v13 = *(char **)a2;
    *a4 = v12;
    memcpy(v13, v10, v7);
    v11 = a4[1];
  }
  *(_QWORD *)(a2 + 24) = unpack_dq(a4, v11) - 1;
  v14 = (void **)(a2 + 32);
  v15 = (int)unpack_dd(a4, a4[1]);
  v16 = *(_QWORD *)(a2 + 40);
  if ( v16 >= v15 )
  {
    if ( v16 != v15 )
    {
      v23 = 0;
      sub_5E330(a2 + 32, v15, &v23);
    }
  }
  else
  {
    if ( *(_QWORD *)(a2 + 48) >= v15 )
    {
      v17 = (char *)*v14;
    }
    else
    {
      v17 = (char *)qvector_reserve(a2 + 32, *(char **)(a2 + 32), v15, 1u);
      *(_QWORD *)(a2 + 32) = v17;
      v16 = *(_QWORD *)(a2 + 40);
    }
    memset(&v17[v16], 0, v15 - v16);
    *(_QWORD *)(a2 + 40) = v15;
  }
  v18 = (const void *)*a4;
  v19 = *a4 + v15;
  if ( v19 >= *a4 && v19 <= a4[1] )
  {
    v20 = *v14;
    *a4 = v19;
    memcpy(v20, v18, v15);
  }
  if ( a3 )
    sub_A66B0(a3, 0, a4);
  return __readfsqword(0x28u);
}
