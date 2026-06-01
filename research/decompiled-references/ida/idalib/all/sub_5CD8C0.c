__int64 __fastcall sub_5CD8C0(__int64 (__fastcall **a1)(_QWORD, __int128 *, __int64), unsigned __int64 a2)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 *v3; // rbx
  unsigned int v4; // r12d
  unsigned __int64 v6; // r13

  v2 = sub_505D70((__int64)(a1 + 213), a2);
  v3 = v2;
  if ( v2 && *((char *)v2 + 17) < 0 )
    v3 = sub_505D70((__int64)(a1 + 213), v2[3]);
  v4 = sub_5CCFA0(a1, v3);
  if ( (_BYTE)v4 )
  {
    v6 = sub_3C2650(a1, a2);
    if ( (int)sub_5C9B30(a1, v3, v6) >= 0 && (~((unsigned __int16)sub_3BE900(a1, v6, 4) >> 8) & 6) == 0 )
      sub_3A61A0(a1, v6, v6 + 1, 0x28u);
  }
  return v4;
}
