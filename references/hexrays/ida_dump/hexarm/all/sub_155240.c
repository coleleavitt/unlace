__int64 __fastcall sub_155240(unsigned int *a1)
{
  __int64 result; // rax
  __int64 v2; // rbp

  result = *a1;
  if ( (_DWORD)result == 1 )
  {
    result = sub_11C450(*((char **)a1 + 1), *((char **)a1 + 4));
    v2 = *((_QWORD *)a1 + 4);
    if ( !v2 )
    {
LABEL_4:
      *a1 = 0;
      return result;
    }
    sub_11C7E0(*((_QWORD *)a1 + 4));
    result = j__qfree(v2);
    *a1 = 0;
  }
  else
  {
    if ( (_DWORD)result != 2 )
    {
      if ( (_DWORD)result )
      {
        if ( !under_debugger )
          sub_3835A0(51296);
        BUG();
      }
      goto LABEL_4;
    }
    sub_11C450(*((char **)a1 + 1), (char *)(*((_QWORD *)a1 + 3) + 32LL));
    result = sub_A2EC0(*((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3));
    *a1 = 0;
  }
  return result;
}
