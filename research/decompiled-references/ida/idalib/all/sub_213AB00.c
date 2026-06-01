__int64 __fastcall sub_213AB00(__int64 a1, __int64 a2)
{
  __m128 *v2; // rsi
  unsigned int v3; // eax
  unsigned int v4; // r14d
  _BYTE *v6; // rdx
  size_t v7; // rax
  char v8; // r10
  size_t v9; // r9
  unsigned __int64 v10; // rcx
  size_t v11; // r15
  size_t v12; // r9
  unsigned __int64 v13; // rcx
  size_t v14; // [rsp+0h] [rbp-88h]
  size_t v15; // [rsp+0h] [rbp-88h]
  char v16; // [rsp+8h] [rbp-80h]
  size_t v17; // [rsp+8h] [rbp-80h]
  char v19; // [rsp+18h] [rbp-70h]
  __int64 v20; // [rsp+28h] [rbp-60h] BYREF
  void *v21; // [rsp+30h] [rbp-58h] BYREF
  __m128 *v22; // [rsp+38h] [rbp-50h]
  _QWORD v23[9]; // [rsp+40h] [rbp-48h] BYREF

  v2 = (__m128 *)&v20;
  LOBYTE(v23[0]) = 0;
  v21 = v23;
  v22 = nullptr;
  v3 = sub_21335C0(a1, &v20);
  if ( (_BYTE)v3 )
  {
LABEL_2:
    v4 = 1;
    goto LABEL_3;
  }
  v4 = v3;
  v6 = v21;
  v7 = (size_t)v22;
  v8 = v20;
  v9 = (size_t)v22->m128_u64 + 1;
  if ( v21 == v23 )
    v10 = 15;
  else
    v10 = v23[0];
  if ( v9 > v10 )
  {
    v2 = v22;
    v19 = v20;
    v17 = (size_t)v22->m128_u64 + 1;
    v15 = (size_t)v22;
    sub_998B30((__int64)&v21, (size_t)v22, 0, nullptr, 1u);
    v6 = v21;
    v8 = v19;
    v9 = v17;
    v7 = v15;
  }
  v6[v7] = v8;
  v22 = (__m128 *)v9;
  for ( *((_BYTE *)v21 + v7 + 1) = 0; **(_DWORD **)(a1 + 48) == 26; *((_BYTE *)v21 + v11 + 1) = 0 )
  {
    sub_2132C70(a1, v2);
    v2 = (__m128 *)&v20;
    if ( (unsigned __int8)sub_21335C0(a1, &v20) )
      goto LABEL_2;
    v11 = (size_t)v22;
    v12 = (size_t)v22->m128_u64 + 1;
    if ( v21 == v23 )
      v13 = 15;
    else
      v13 = v23[0];
    if ( v12 <= v13 )
    {
      v22->m128_i8[(_QWORD)v21] = v20;
    }
    else
    {
      v2 = v22;
      v16 = v20;
      v14 = (size_t)v22->m128_u64 + 1;
      sub_998B30((__int64)&v21, (size_t)v22, 0, nullptr, 1u);
      v12 = v14;
      *((_BYTE *)v21 + v11) = v16;
    }
    v22 = (__m128 *)v12;
  }
  (*(void (__fastcall **)(_QWORD, void *, __m128 *, __int64))(**(_QWORD **)(a1 + 24) + 960LL))(
    *(_QWORD *)(a1 + 24),
    v21,
    v22,
    a2);
LABEL_3:
  if ( v21 != v23 )
    operator delete(v21);
  return v4;
}
