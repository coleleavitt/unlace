__int64 __fastcall sub_FF80(_QWORD *a1, __int64 *a2, _QWORD *a3, __int64 a4)
{
  char v4; // al
  __int16 v6; // r8
  __int64 v7; // rax
  unsigned __int64 v9[3]; // [rsp+10h] [rbp-18h] BYREF

  v9[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a4 + 1) != 4 )
    return 0;
  v4 = *(_BYTE *)(a4 + 33);
  if ( (v4 & 0x10) == 0 || (v4 & 0x4C) != 0 )
    return 0;
  if ( (v4 & 0x20) != 0 )
  {
    v7 = *(_QWORD *)(a4 + 16);
    *a2 = v7;
    v9[0] = a1[4];
  }
  else
  {
    v6 = *(_WORD *)(a4 + 6);
    if ( v6 == 91 )
    {
      v7 = *(_QWORD *)(a4 + 16) + 16LL * a1[2];
      *a2 = v7;
      v9[0] = a1[4];
    }
    else
    {
      if ( !(unsigned __int8)sub_FEE0(a1[111], a2, v9, a1 + 2, v6) )
        return 0;
      v7 = *a2;
    }
  }
  if ( !v7 )
    return 0;
  if ( a3 )
    *a3 = v9[0];
  return 1;
}
