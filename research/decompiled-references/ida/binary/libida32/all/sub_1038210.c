__int64 __fastcall sub_1038210(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rbx
  __int64 result; // rax

  v6 = *a1;
  result = sub_FC6D50(*a1);
  if ( a5 <= (unsigned int)result )
  {
    result = sub_FC6D50(v6);
    if ( (_DWORD)result != 120 && ((unsigned int)result > 0x78 || (_DWORD)result != 100 && (_DWORD)result != 110) )
    {
      while ( (_DWORD)result != 200 && (_DWORD)result != 300 )
        ;
    }
  }
  return result;
}

