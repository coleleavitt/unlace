bool __fastcall sub_2AD4C0(int *a1, int a2)
{
  int v2; // eax
  unsigned int v3; // edx
  bool result; // al
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rdi
  int v9; // eax

  v2 = *a1;
  if ( *a1 == 3 )
  {
    v9 = a1[2];
    if ( v9 >= a2 )
    {
      *a1 = 1;
      *((_QWORD *)a1 + 1) = v9 - a2;
    }
    return 1;
  }
  if ( v2 <= 3 )
  {
    if ( v2 == 2 )
    {
      v5 = *((__int64 **)a1 + 1);
      v6 = *v5;
      v7 = *v5 + 24 * v5[1];
      if ( v7 != *v5 )
      {
        do
        {
          v8 = v6;
          v6 += 24;
          sub_2AD4C0(v8, (unsigned int)a2);
        }
        while ( v7 != v6 );
      }
    }
    return 1;
  }
  if ( v2 != 4 )
  {
    if ( (unsigned int)(v2 - 5) <= 1 )
    {
      if ( !under_debugger )
        sub_383060(51109);
      BUG();
    }
    return 1;
  }
  v3 = a1[2];
  result = 0;
  if ( a2 > (unsigned __int16)v3 )
    return a2 > (int)HIWORD(v3);
  return result;
}
