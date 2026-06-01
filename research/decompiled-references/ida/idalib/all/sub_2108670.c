__int64 __fastcall sub_2108670(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // zf
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __m128i v11[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int16 v12; // [rsp+20h] [rbp-88h]
  __m128i v13[3]; // [rsp+30h] [rbp-78h] BYREF
  __m128i v14; // [rsp+60h] [rbp-48h] BYREF
  __int16 v15; // [rsp+80h] [rbp-28h]

  v6 = *(_BYTE *)(a1 + 1884) == 0;
  v11[0].m128i_i64[0] = (__int64)"tmp";
  v12 = 259;
  if ( v6 )
    return sub_21080E0((_DWORD *)a1, nullptr, 1);
  v8 = *(_QWORD *)(a1 + 152);
  v15 = 261;
  v9 = *(_QWORD *)(v8 + 88);
  v10 = *(_QWORD *)(v8 + 96);
  v14.m128i_i64[0] = v9;
  v14.m128i_i64[1] = v10;
  sub_A41580(v13, &v14, v11, 261, a5, a6);
  return sub_21083D0((_DWORD *)a1, (__int64)v13, 1, 1);
}
