__int64 __fastcall srcdbg_run_to(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) == 5 )
  {
    *(_BYTE *)(a2 + 34) = 1;
    byte_8CC5EC = 0;
  }
  else
  {
    result = (unsigned int)dword_8CC5F0;
    if ( dword_8CC5F0 > 0 )
      return result;
  }
  return sub_2369A0(a1, a2);
}
