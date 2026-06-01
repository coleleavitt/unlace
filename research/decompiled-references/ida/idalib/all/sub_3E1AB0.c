bool __fastcall sub_3E1AB0(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int16 v7; // r12
  __int64 v8; // rax

  if ( *(_BYTE *)(a4 + 184) == 1 && !(unsigned __int8)sub_3C0260(a1, a3) )
    return 0;
  v7 = *(_WORD *)(a4 + 44) & 0x18;
  v8 = getseg(a2);
  if ( v8 && (*(_WORD *)(v8 + 44) & 0x18) == 8 )
  {
    if ( v7 != 8 || (unsigned int)(a5 - 16) <= 1 )
      return 0;
  }
  else if ( v7 == 8 )
  {
    return 0;
  }
  return *(_BYTE *)(a4 + 184) != 3 || (sub_631AD0(*a1, 10) & 8) == 0 || a4 == sub_505D70(a1 + 203, a2);
}
