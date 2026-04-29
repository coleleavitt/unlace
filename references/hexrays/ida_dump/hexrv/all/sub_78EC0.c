char *__fastcall sub_78EC0(__int64 a1, _BYTE *a2, __int64 a3)
{
  char *result; // rax
  unsigned __int64 v4; // rdx
  char v5; // cl
  char *v6; // rcx

  result = *(char **)a1;
  if ( *(_QWORD *)(a1 + 8) < (unsigned __int64)(*(_QWORD *)a1 + a3) )
  {
    if ( !under_debugger )
      sub_37DDE0(50587);
    BUG();
  }
  v4 = (unsigned __int64)&a2[a3];
  if ( (unsigned __int64)a2 < v4 )
  {
    *(_QWORD *)a1 = result + 1;
    v5 = *result;
    result = a2 + 1;
    *a2 = v5;
    if ( (unsigned __int64)(a2 + 1) < v4 )
    {
      do
      {
        v6 = *(char **)a1;
        ++result;
        ++*(_QWORD *)a1;
        *(result - 1) = *v6;
      }
      while ( (char *)v4 != result );
    }
  }
  return result;
}
