__int64 __fastcall sub_B4DB70(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-60h] BYREF
  __m128i v11; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v12[32]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v13; // [rsp+40h] [rbp-28h]

  v9 = *(_QWORD *)(a1 + 40);
  if ( v9 )
    return sub_B61240(&v9);
  v11 = _mm_loadu_si128(a3);
  v11.m128i_i8[1] |= 8u;
  v4 = sub_B685F0(a1);
  v10 = sub_A56EE0(v4, a1, v5, v6, v7, v8);
  v13 = 257;
  return sub_F50AF0(&v10, a2, &v11, v12, 0);
}

