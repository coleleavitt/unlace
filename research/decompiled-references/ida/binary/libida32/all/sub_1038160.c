__int64 __fastcall sub_1038160(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  result = sub_FC6D50(*a1);
  if ( (unsigned int)result > 0x63 )
  {
    result = sub_FC6D50(v1);
    if ( (_DWORD)result != 120 && ((unsigned int)result > 0x78 || (_DWORD)result != 100 && (_DWORD)result != 110) )
    {
      while ( (_DWORD)result != 200 && (_DWORD)result != 300 )
        ;
    }
  }
  return result;
}

