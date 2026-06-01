__int64 __fastcall sub_981F0(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  if ( !dbg )
    return 1;
  if ( dword_2515A4 <= 0 || (result = 1, (*(_BYTE *)(dbg + 32LL) & 0x40) == 0) )
  {
    result = 1;
    if ( a2 != -1 && a1 != 4 && (*(_BYTE *)(dbg + 37LL) & 2) != 0 )
    {
      if ( a2 != (_DWORD)qword_2508E0
        || a1 != (_DWORD)qword_2508E8
        || (result = HIDWORD(qword_2508E8), a3 != HIDWORD(qword_2508E0)) )
      {
        result = sub_CCA70(a1, a2, a3);
        LODWORD(qword_2508E8) = a1;
        LODWORD(qword_2508E0) = a2;
        if ( (int)result < 0 )
          result = 0;
        HIDWORD(qword_2508E0) = a3;
        HIDWORD(qword_2508E8) = result;
      }
    }
  }
  return result;
}

