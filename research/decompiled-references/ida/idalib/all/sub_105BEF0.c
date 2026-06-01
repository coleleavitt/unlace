__int64 __fastcall sub_105BEF0(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rbx
  __int64 result; // rax

  v5 = *a1;
  result = sub_FEAA90(*a1);
  if ( a4 <= (unsigned int)result )
  {
    result = sub_FEAA90(v5);
    if ( (_DWORD)result != 120 && ((unsigned int)result > 0x78 || (_DWORD)result != 100 && (_DWORD)result != 110) )
    {
      while ( (_DWORD)result != 200 && (_DWORD)result != 300 )
        ;
    }
  }
  return result;
}
