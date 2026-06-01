unsigned __int64 __fastcall sub_2050F10(__int64 a1, int *a2)
{
  int v2; // eax
  __int64 v4; // [rsp+0h] [rbp-88h] BYREF
  int v5; // [rsp+8h] [rbp-80h]
  __int128 v6; // [rsp+Ch] [rbp-7Ch]
  __int128 v7; // [rsp+1Ch] [rbp-6Ch]
  __int128 v8; // [rsp+2Ch] [rbp-5Ch]
  int v9; // [rsp+3Ch] [rbp-4Ch]
  __int128 v10; // [rsp+40h] [rbp-48h]
  __int128 v11; // [rsp+50h] [rbp-38h]
  __int128 v12; // [rsp+60h] [rbp-28h]
  __m128i si128; // [rsp+70h] [rbp-18h]

  v2 = *a2;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v4 = a1;
  v9 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v5 = v2;
  return sub_2012F20(&v4, 0xCu, 0xFF51AFD7ED558CCDLL);
}
