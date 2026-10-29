unsigned __int64 __fastcall sub_3A4190(__int64 a1, char *a2, char *a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  char *v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi

  result = a4;
  if ( a3 >= a2 )
  {
    v5 = a3;
    a3 = a2;
    a2 = v5;
  }
  v6 = -2;
  if ( a2 != (char *)-1LL )
    v6 = (unsigned __int64)a2;
  if ( a3 != (char *)v6 )
  {
    v7 = 0;
    while ( (_DWORD)result != dword_23AD7A0[v7] )
    {
      if ( ++v7 == 14 )
      {
        if ( !under_debugger )
          interr(44);
        BUG();
      }
    }
    return sub_3A3E40(*(_QWORD *)(*(_QWORD *)a1 + 1536LL), v7, a3, v6);
  }
  return result;
}
