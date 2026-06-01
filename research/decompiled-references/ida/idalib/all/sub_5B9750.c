__int64 __fastcall sub_5B9750(__m128i *a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 v4; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r8
  _QWORD *v9; // rax
  int v11; // eax
  __int64 v12[23]; // [rsp+0h] [rbp-B8h] BYREF

  v12[17] = __readfsqword(0x28u);
  if ( !a2 )
    return -1;
  v4 = a4;
  if ( a4 == -1 )
    return -1;
  v6 = sub_3BE900(a1, a3[2], 0);
  if ( !sub_577940(a1, v12, a3[2], v4, v6, a3) )
    return -1;
  v7 = v12[0];
  if ( (*(_BYTE *)(a1[1].m128i_i64[0] + 10) & 0x40) != 0 )
  {
    v11 = sub_3792E0(0x3Du);
    if ( !v11 )
      sub_378C70((__int64)"Request ph.get_stkvar_scale_factor should be implemented");
    if ( v11 <= 0 )
      sub_378C70((__int64)"Invalid return code from ph.get_stkvar_scale_factor request");
    v7 *= v11;
    v8 = v7;
    if ( *(_DWORD *)(a1[1].m128i_i64[1] + 24) == 8 )
      goto LABEL_7;
  }
  else
  {
    v8 = v12[0];
    if ( *(_DWORD *)(a1[1].m128i_i64[1] + 24) == 8 )
      goto LABEL_7;
  }
  v7 = (int)v7;
  v8 = (int)v7;
LABEL_7:
  v12[0] = v7;
  v9 = &a3[5 * v4];
  if ( !(v9[7] + v7) || !(v9[6] + v7) )
  {
    v12[0] = -v7;
    v8 = -v7;
  }
  return sub_5B94E0(a1, a2, (__int64)a3, (__int64)&a3[5 * v4 + 5], v8);
}
