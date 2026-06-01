int *__fastcall sub_222A10(unsigned int a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  int *result; // rax
  __int64 v5; // rax

  v3 = a3;
  if ( dword_8CC5F0 <= 0 || (result = (int *)dbg, *(_DWORD *)(dbg + 16) != 12) )
  {
    if ( dword_8CBC00 == -1 )
    {
      if ( dbg )
      {
        dword_8CBC00 = *(_DWORD *)(dbg + 16);
        dword_8CBC04 = *(_QWORD *)(dbg + 32);
        v5 = getinf(93);
        v3 = a3;
        qword_8CBB88 = v5;
        byte_8CBC08 = *(_BYTE *)(dbg + 34) >> 7;
      }
    }
    return sub_21E480((__m128i *)qword_8CBAA0, a1, a2, v3);
  }
  return result;
}
