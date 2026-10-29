/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140064C60
// Address: 0x0000000140064C60

//----- (0000000140064C60) ----------------------------------------------------
__int64 __fastcall sub_140064C60(__int64 a1)
{
  struct __crt_locale_pointers *v1; // rdx
  signed __int64 v2; // r8
  va_list v3; // r9
  HANDLE v4; // rax
  struct __crt_locale_pointers *v5; // rdx
  signed __int64 v6; // r8
  va_list v7; // r9
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  int v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+38h] [rbp-40h]
  __m128i si128; // [rsp+40h] [rbp-38h]
  __m128i v14; // [rsp+50h] [rbp-28h]
  __int128 v15; // [rsp+60h] [rbp-18h]
  DWORD v16; // [rsp+80h] [rbp+8h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_140093E30);
  v15 = 0;
  v9 = 80;
  v11 = 0;
  v14 = _mm_load_si128((const __m128i *)&xmmword_1400ACAE0);
  v10 = 136;
  v12 = a1;
  v16 = -1;
  if ( sub_14005C830() )
    off_1400C6AE0(5, v1, v2, v3, v9);
  v4 = sub_14005C8B0((__int64)&v9, nullptr);
  if ( v4 )
    sub_14005C760(v4, &v16, 0xFFFFFFFF);
  if ( sub_14005C830() )
    off_1400C6AE0(6, v5, v6, v7, v9);
  return v16;
}
// 140064CB9: variable 'v1' is possibly undefined
// 140064CB9: variable 'v2' is possibly undefined
// 140064CB9: variable 'v3' is possibly undefined
// 140064CF4: variable 'v5' is possibly undefined
// 140064CF4: variable 'v6' is possibly undefined
// 140064CF4: variable 'v7' is possibly undefined
// 140093E30: using guessed type __int128 xmmword_140093E30;
// 1400ACAE0: using guessed type __int128 xmmword_1400ACAE0;
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
