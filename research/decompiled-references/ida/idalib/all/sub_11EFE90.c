void __fastcall sub_11EFE90(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  int v4; // edx
  __m128i v5; // xmm0
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rdx
  double v11[2]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v12; // [rsp+10h] [rbp-58h] BYREF
  __m128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h]

  v3 = *(_DWORD *)(a1 + 3936);
  *(_QWORD *)&v11[0] = a2;
  *(_QWORD *)&v11[1] = a3;
  v14 = a1;
  v4 = *(_DWORD *)(a1 + 3932);
  v13 = _mm_loadh_ps(v11);
  if ( v3 == 2 && v4 == 1 )
    v5 = _mm_loadu_si128((const __m128i *)(a1 + 3956));
  else
    v5 = _mm_loadu_si128((const __m128i *)(a1 + 3940));
  v12 = v5;
  sub_11EF6E0((__int64 *)&v13, v12.m128i_i32, v4, v3, a1 + 1760);
  if ( *(_BYTE *)(a1 + 4104) )
  {
    v6 = *(_DWORD *)(a1 + 4092);
    v12 = 0;
    if ( (v6 & 0xFFFFFFF7) == 1 )
    {
      sub_22B7D00(a1 + 4048, &v12);
      v7 = 0;
      v8 = 0;
    }
    else
    {
      v9 = sub_22B83A0(a1 + 4048);
      v7 = 2;
      v12.m128i_i64[1] = v10;
      v8 = 1;
      v12.m128i_i64[0] = v9;
    }
    sub_11EF6E0((__int64 *)&v13, v12.m128i_i32, v8, v7, a1 + 4048);
  }
}
