unsigned __int64 __fastcall sub_7A06B0(unsigned __int64 a1)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 *v4; // rax

  if ( !(_BYTE)qword_4AD2338 && __cxa_guard_acquire(&qword_4AD2338) )
  {
    LODWORD(qword_4AD2340) = 2;
    __cxa_guard_release(&qword_4AD2338);
  }
  while ( 1 )
  {
    v2 = *(_BYTE *)(a1 + 8) & 0x7F;
    if ( v2 != 4 && v2 != 6 )
      break;
    v3 = *(_QWORD *)(a1 - 24);
    a1 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v3 & 4) != 0 )
      a1 = *(_QWORD *)a1;
  }
  v4 = (__int64 *)sub_79CC40(a1);
  return sub_7A0060(v4, (__int64)&qword_4AD2340 + 7, a1);
}

