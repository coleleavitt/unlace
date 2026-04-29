char __fastcall sub_EE50(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax

  if ( (unsigned __int16)a1 > 0x9Fu )
    return (_WORD)a1 != 226;
  if ( (unsigned __int16)a1 > 0x63u )
  {
    v3 = 0xC00200000000001LL;
    return !_bittest64(&v3, (unsigned int)(a1 - 100));
  }
  else if ( (unsigned __int16)(a1 - 12) > 0x2Bu )
  {
    return 1;
  }
  else
  {
    v1 = 0x80000001001000LL;
    return !_bittest64(&v1, a1);
  }
}
