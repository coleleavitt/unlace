__int64 __fastcall sub_5CCEB0(__int64 (__fastcall **a1)(_QWORD, __int128 *, __int64), unsigned __int64 a2)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 *v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 *v5; // rax
  unsigned __int64 v7; // rax

  v2 = sub_505D70((__int64)(a1 + 213), a2);
  if ( !v2 )
    return 0;
  v3 = v2;
  v4 = v2[2];
  if ( (v4 & 0x8000) != 0 )
  {
    v5 = sub_505D70((__int64)(a1 + 213), v3[3]);
    v3 = v5;
    if ( !v5 )
      return 0;
    v4 = v5[2];
  }
  if ( (v4 & 0x200) != 0 || (unsigned __int8)is_spec_ea(*v3) )
    return 0;
  v7 = v3[2];
  BYTE1(v7) = BYTE1(v7) & 0xF9 | 2;
  v3[2] = v7;
  sub_5C77B0((__int64)a1, v3, 0);
  sub_5CCCE0(a1, (__int64)v3);
  return 1;
}
