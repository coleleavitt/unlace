char __fastcall sub_81C160(unsigned __int64 *a1, _DWORD **a2, unsigned int *a3, unsigned int a4)
{
  _DWORD *v7; // r15
  const __m128i *v8; // rdi
  __m128 *v9; // r14
  unsigned int v10; // eax
  _DWORD **v12; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // r9d
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // [rsp+0h] [rbp-4Ch] BYREF
  __m128i v23[4]; // [rsp+4h] [rbp-48h] BYREF

  v7 = *a2;
  v8 = (const __m128i *)a1[10];
  v22 = a4;
  v23[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)a3);
  v9 = sub_7A65F0(v8, a1 + 2, 1u, &v22, 0, nullptr, *(double *)v23[0].m128i_i64, 1, v23);
  if ( a4 == -2 )
  {
    v18 = sub_7E58D0((__int64)a1, (__int64)v7, (__int64)a3);
    return sub_7E5160((__int64)a1, v18, v9, v19, v20, v21);
  }
  else if ( *(_DWORD *)(*(_QWORD *)(a1[3] + 3288) + 4LL * a4) == 1 )
  {
    v12 = (_DWORD **)sub_7E5940((__int64)a1, a3);
    v13 = a1[10];
    v14 = (__int64)v12;
    v15 = sub_7E5D80((__int64)a1, a4, a2, v12, (__int64)v9);
    return sub_7CA650(v13, (__int64)a2, v14, v15 - 8, v16, v17);
  }
  else
  {
    v10 = sub_7E58D0((__int64)a1, (__int64)v7, (__int64)a3);
    return sub_7E5400((__int64)a1, a4 ^ 1, v10, v9);
  }
}

