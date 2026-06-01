__int64 __fastcall sub_155800(unsigned int *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( (_DWORD)result == 1 )
  {
    result = sub_11CA10(*((char **)a1 + 1), *((char **)a1 + 4));
    if ( !*((_QWORD *)a1 + 4) )
    {
LABEL_4:
      *a1 = 0;
      return result;
    }
    sub_11CDA0(*((_QWORD *)a1 + 4));
    result = j__qfree();
    *a1 = 0;
  }
  else
  {
    if ( (_DWORD)result != 2 )
    {
      if ( (_DWORD)result )
      {
        if ( !under_debugger )
          sub_383060(51296);
        BUG();
      }
      goto LABEL_4;
    }
    sub_11CA10(*((char **)a1 + 1), (char *)(*((_QWORD *)a1 + 3) + 32LL));
    result = sub_A3480(*((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3));
    *a1 = 0;
  }
  return result;
}
