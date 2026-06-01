unsigned __int64 __fastcall sub_7A0650(unsigned __int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 *v5; // rax

  while ( 1 )
  {
    v3 = *(_BYTE *)(a1 + 8) & 0x7F;
    if ( v3 != 4 && v3 != 6 )
      break;
    v4 = *(_QWORD *)(a1 - 24);
    a1 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v4 & 4) != 0 )
      a1 = *(_QWORD *)a1;
  }
  v5 = (__int64 *)sub_79CC40(a1);
  return sub_7A0060(v5, a2, a1);
}

