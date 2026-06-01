_QWORD *__fastcall sub_7A6F90(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int16 v3; // ax

  v2 = sub_7943D0(88, a1, a2, 0);
  if ( !(_BYTE)qword_4AD2338 && __cxa_guard_acquire(&qword_4AD2338) )
  {
    LODWORD(qword_4AD2340) = 2;
    __cxa_guard_release(&qword_4AD2338);
  }
  *(_OWORD *)(v2 + 1) = 0;
  *v2 = off_49F5208;
  v2[3] = v2[3] & 0xFFFF000000000000LL | 0x603600000000LL;
  v3 = sub_799DF0(0x36u);
  *((_BYTE *)v2 + 32) &= 0xF8u;
  *((_WORD *)v2 + 15) = v3 & 0x3FFF | *((_WORD *)v2 + 15) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(54);
  v2[5] = (char *)&qword_4AD2340 + 7;
  v2[6] = 0;
  *(_OWORD *)(v2 + 7) = 0;
  *v2 = &off_49F5670;
  *(_OWORD *)(v2 + 9) = 0;
  return v2;
}

