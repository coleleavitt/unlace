__int64 __fastcall sub_619680(__int64 *a1, __int64 a2, unsigned int *a3)
{
  char v3; // al
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v12; // r12d
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // [rsp+20h] [rbp-68h] BYREF
  unsigned int *v19; // [rsp+28h] [rbp-60h]
  __m128i v20; // [rsp+30h] [rbp-58h] BYREF
  __m128i v21; // [rsp+40h] [rbp-48h] BYREF
  __m128i v22; // [rsp+50h] [rbp-38h] BYREF
  __m128i v23[2]; // [rsp+60h] [rbp-28h] BYREF

  v18 = a2;
  v19 = a3;
  v3 = sub_B1B040(&v18);
  v4 = *a1;
  if ( v3 )
  {
    v5 = sub_B14A40(v18);
    sub_639160(&v20, v5, v4, *(__int64 *)((char *)a1 + 84), 1, v6);
    return sub_619180((__int64)a1, v5, v7, v8, v9, v10, (__int128)_mm_load_si128(&v20), (__int128)_mm_load_si128(&v21));
  }
  else
  {
    v12 = *v19;
    v13 = sub_B14A40(v18);
    sub_639CF0(&v22, v13, v12, v4);
    return sub_619180(
             (__int64)a1,
             v13,
             v14,
             v15,
             v16,
             v17,
             (__int128)_mm_load_si128(&v22),
             (__int128)_mm_load_si128(v23));
  }
}

