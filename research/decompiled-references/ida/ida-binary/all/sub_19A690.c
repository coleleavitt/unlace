__int64 __fastcall sub_19A690(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  if ( !dbg )
    return 1;
  if ( dword_8CC5F0 <= 0 || (result = 1, (*(_BYTE *)(dbg + 32LL) & 0x40) == 0) )
  {
    result = 1;
    if ( a2 != -1 && a1 != 4 && (*(_BYTE *)(dbg + 37LL) & 2) != 0 )
    {
      if ( a2 != qword_8CACD0
        || a1 != HIDWORD(qword_8CACD8)
        || (result = (unsigned int)dword_8CACE0, a3 != (_DWORD)qword_8CACD8) )
      {
        result = sub_23D770(a1, a2, a3);
        HIDWORD(qword_8CACD8) = a1;
        qword_8CACD0 = a2;
        if ( (int)result < 0 )
          result = 0;
        LODWORD(qword_8CACD8) = a3;
        dword_8CACE0 = result;
      }
    }
  }
  return result;
}
