__int64 __fastcall sub_DEAD30(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  void *v4; // rdx
  __m128i v5; // rax
  __m128i *v6; // rax
  bool v7; // cc
  __m128i v9; // [rsp+0h] [rbp-68h] BYREF
  void *v10; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v11; // [rsp+18h] [rbp-50h]
  char v12; // [rsp+1Ch] [rbp-4Ch]
  int v13; // [rsp+20h] [rbp-48h]
  _QWORD v14[7]; // [rsp+30h] [rbp-38h] BYREF

  v2 = a1[22];
  v3 = sub_E21760(v2, 24);
  v11 = *(_DWORD *)(v3 + 8);
  v4 = *(void **)v3;
  *(_DWORD *)(v3 + 8) = 0;
  v10 = v4;
  LOBYTE(v4) = *(_BYTE *)(v3 + 12);
  LODWORD(v3) = *(_DWORD *)(v3 + 16);
  v12 = (char)v4;
  v13 = v3;
  sub_E21790(v2, 24);
  v5.m128i_i64[0] = sub_D421E0(a1, a2);
  v9 = v5;
  sub_21F6CB0(v14, &v10, a2);
  sub_CFED10((__int64)&v9, v14);
  sub_9955A0(v14);
  v6 = (__m128i *)sub_E216C0(a1[22], 16);
  v7 = v11 <= 0x40;
  *v6 = _mm_load_si128(&v9);
  if ( !v7 && v10 )
    operator delete[](v10);
  return 1;
}
