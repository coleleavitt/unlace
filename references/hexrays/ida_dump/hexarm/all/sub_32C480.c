_QWORD *__fastcall sub_32C480(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v5; // r14
  __int64 ph; // r12
  __int64 v7; // rax
  __int64 v8; // rax

  if ( a3 == 4 )
  {
    *a1 = 9;
    return a1;
  }
  else
  {
    if ( a3 == 8 )
    {
      *a1 = 25;
      return a1;
    }
    v5 = *(_QWORD *)(a2 + 96);
    ph = get_ph(a1);
    if ( (unsigned __int8)getinf(66) )
      v7 = (unsigned __int8)getinf(66);
    else
      v7 = *(_QWORD *)(ph + 120);
    if ( a3 != v7 )
    {
      v8 = 2;
      if ( (*(_BYTE *)(ph + 11) & 8) != 0 )
        v8 = *(_QWORD *)(ph + 120);
      if ( a3 == v8 )
      {
        *a1 = 57;
      }
      else
      {
        *a1 = 0;
        if ( a3 != 16 || (copy_tinfo_t(a1, v5 + 312), !*(_BYTE *)a1) )
        {
          if ( !under_debugger )
            sub_3835A0(50632);
          BUG();
        }
      }
      return a1;
    }
    *a1 = 41;
    return a1;
  }
}
