__int64 __fastcall sub_4CB540(_QWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-30h]
  __int64 v6; // [rsp+10h] [rbp-28h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v4 = 0;
  v6 = 0;
  v2 = sub_3BA060(a1, a2);
  v5 = 0xFFFFFFFF00000000LL;
  if ( !(unsigned __int8)get_fixup(&v4, a2) || (v4 & 0x400000000LL) != 0 )
  {
    if ( (unsigned __int8)get_fixups(0, a2, 4) )
      return (unsigned int)-1;
LABEL_11:
    if ( !v2 )
      return v2;
    goto LABEL_12;
  }
  if ( (_WORD)v4 != 4 )
    return (unsigned int)-1;
  if ( (v4 & 0x100000000LL) != 0 )
  {
    v2 += v5;
  }
  else if ( HIDWORD(v5) != -1 )
  {
    v2 += 16 * sel2para(HIDWORD(v5));
  }
  if ( (unsigned __int8)is_spec_ea(v2) )
    goto LABEL_11;
  v2 += HIDWORD(v6);
  if ( v2 )
  {
LABEL_12:
    if ( sub_4EE820(a1 + 194, v2) )
      return v2;
    return (unsigned int)-1;
  }
  return v2;
}

