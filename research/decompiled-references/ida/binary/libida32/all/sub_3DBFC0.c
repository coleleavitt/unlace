bool __fastcall sub_3DBFC0(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4, int a5)
{
  __int16 v7; // r12
  __int64 v8; // rax

  if ( *(_BYTE *)(a4 + 96) == 1 && !(unsigned __int8)sub_3BB2F0((__int64)a1, a3) )
    return 0;
  v7 = *(_WORD *)(a4 + 24) & 0x18;
  v8 = getseg(a2);
  if ( v8 && (*(_WORD *)(v8 + 24) & 0x18) == 8 )
  {
    if ( v7 != 8 || (unsigned int)(a5 - 16) <= 1 )
      return 0;
  }
  else if ( v7 == 8 )
  {
    return 0;
  }
  return *(_BYTE *)(a4 + 96) != 3 || (sub_614FB0(*a1, 10) & 8) == 0 || a4 == sub_4EE820(a1 + 194, a2);
}

