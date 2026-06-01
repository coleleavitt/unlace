void __fastcall sub_1AAA2E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __m128 v9; // xmm0
  __int64 v10; // [rsp+8h] [rbp-80h] BYREF
  __int64 *v11; // [rsp+10h] [rbp-78h] BYREF
  int v12; // [rsp+18h] [rbp-70h]
  char v13; // [rsp+1Ch] [rbp-6Ch]
  __m128 v14; // [rsp+20h] [rbp-68h]
  char v15; // [rsp+50h] [rbp-38h]
  char v16; // [rsp+58h] [rbp-30h]

  if ( (*(_BYTE *)(sub_168B6E0(a1) + 97) & 4) != 0 && a3 && a4 )
  {
    v10 = a4;
    v11 = (__int64 *)a1;
    v12 = a2;
    v9 = _mm_loadh_ps((const double *)&v10);
    v13 = 1;
    v14 = v9;
    v15 = 0;
    v16 = 0;
    if ( (*(_BYTE *)(a1 + 32) & 1) == 0 && *(_BYTE *)(a1 + 288) != 20 )
    {
      v16 = 1;
      sub_1AA3BD0(&v11, a2, v6, v7, v8);
    }
    sub_1AA9FD0(a1, (void **)(unsigned int)a2, (__int64)&v11, v7, v8, *(double *)v9.m128_u64);
  }
}
