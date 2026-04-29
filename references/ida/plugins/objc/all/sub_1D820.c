unsigned __int64 __fastcall sub_1D820(__int128 a1)
{
  __int64 v1; // rax
  __m128i v2; // xmm1
  __m128i v4; // [rsp+0h] [rbp-98h] BYREF
  __int64 (__fastcall **v5)(); // [rsp+10h] [rbp-88h] BYREF
  __m128i v6; // [rsp+18h] [rbp-80h] BYREF
  __int64 v7; // [rsp+30h] [rbp-68h]
  __m128i v8; // [rsp+38h] [rbp-60h]
  __int64 v9; // [rsp+48h] [rbp-50h]
  __int128 v10; // [rsp+50h] [rbp-48h]
  int v11; // [rsp+60h] [rbp-38h]
  bool v12; // [rsp+64h] [rbp-34h]
  unsigned __int64 v13; // [rsp+68h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  sub_198E0(*((__int64 *)&a1 + 1));
  v7 = 0;
  v8 = 0;
  v10 = 0;
  v1 = qvector_reserve();
  v9 = v1;
  *(_QWORD *)&v10 = 6;
  *(_DWORD *)v1 = 1784835887;
  *(_BYTE *)(v1 + 4) = 99;
  *(_BYTE *)(v9 + 5) = 0;
  v11 = 0;
  get_std_dirtree();
  v6 = 0;
  dirtree_getcwd();
  v5 = 0;
  v2 = _mm_loadu_si128(&v6);
  v6 = 0;
  if ( v7 )
  {
    v4 = v2;
    v8.m128i_i64[0] = 0;
    qfree();
    v2 = _mm_load_si128(&v4);
  }
  v7 = 0;
  v8 = v2;
  v12 = (unsigned __int8)dirtree_mkdir() == 0;
  dirtree_chdir();
  sub_19C60((__int64 *)a1, *((__int64 *)&a1 + 1));
  sub_19950((_QWORD *)a1, *((__int64 *)&a1 + 1));
  sub_199F0(a1, *((__int64 *)&a1 + 1));
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 2216LL) )
    sub_EC40();
  sub_198E0(*((__int64 *)&a1 + 1));
  v6 = (__m128i)a1;
  v5 = &off_3C268;
  sub_12B20(a1, (__int64 (__fastcall ***)(_QWORD, unsigned __int64 *, _QWORD))&v5, *((_QWORD *)&a1 + 1) + 112LL);
  sub_1D730((__int64 *)a1, *((__int64 *)&a1 + 1));
  callui(24);
  *(_BYTE *)(*((_QWORD *)&a1 + 1) + 152LL) = 0;
  sub_E8C0();
  sub_E8C0();
  sub_E8C0();
  sub_E8C0();
  sub_E8C0();
  sub_E8C0();
  sub_E8C0();
  get_std_dirtree();
  dirtree_chdir();
  if ( v12 )
    dirtree_rmdir();
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  if ( v7 )
  {
    v8.m128i_i64[0] = 0;
    qfree();
  }
  return v13 - __readfsqword(0x28u);
}
