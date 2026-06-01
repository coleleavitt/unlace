bool __fastcall sub_10FD2A0(_QWORD *a1)
{
  return (*a1 & ~a1[4] & 0x7E100000000000LL) != 0;
}

