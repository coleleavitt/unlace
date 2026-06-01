__int64 __fastcall sub_59F380(_QWORD *a1, __int64 a2, __m128i *a3, int a4)
{
  __int64 v4; // rbx
  unsigned __int64 v6; // rax
  unsigned int v7; // r12d
  __int8 *v8; // rax
  int v10; // eax
  unsigned int v11[18]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v4 = a4;
  if ( a4 == -1 )
    return 0xFFFFFFFFLL;
  v6 = sub_3B9AA0((__int64)a1, a3->m128i_u32[2], 0);
  if ( !sub_55DF80(a1, v11, a3->m128i_u32[2], v4, v6, a3) )
    return 0xFFFFFFFFLL;
  v7 = v11[0];
  if ( (*(_BYTE *)(a1[2] + 10LL) & 0x40) != 0 )
  {
    v10 = sub_375980(0x3Du);
    if ( !v10 )
      sub_375320((__int64)"Request ph.get_stkvar_scale_factor should be implemented");
    if ( v10 <= 0 )
      sub_375320((__int64)"Invalid return code from ph.get_stkvar_scale_factor request");
    v7 *= v10;
  }
  v11[0] = v7;
  v8 = &a3->m128i_i8[24 * v4];
  if ( !(*((_DWORD *)v8 + 9) + v7) || !(*((_DWORD *)v8 + 8) + v7) )
  {
    v7 = -v7;
    v11[0] = v7;
  }
  return sub_59F150(a1, a2, (__int64)a3, (__int64)&a3[1].m128i_i64[3 * v4 + 1], v7);
}

