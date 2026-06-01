unsigned __int64 __fastcall sub_7333F0(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v5; // r13d
  unsigned __int64 v7; // rax
  void (__fastcall *v8)(__int64, __int64); // r14
  __int64 v9; // rsi

  if ( a2 < a3 )
  {
    if ( !under_debugger )
      interr(1196);
    BUG();
  }
  v3 = a2;
  v5 = 38;
  while ( (unsigned int)sub_734B90(*a1, v3) )
  {
    if ( a3 == v3 )
    {
      v7 = a1[72];
      v8 = (void (__fastcall *)(__int64, __int64))a1[2];
      if ( v3 < v7 )
      {
        v9 = *__errno_location();
        if ( !v8 )
          off_2C81BC0();
        v8(42, v9);
        return v3;
      }
      if ( !v8 )
        off_2C81BC0();
      v8(v5, a3 - v7);
      v5 = 41;
    }
    else
    {
      v3 = a3;
    }
  }
  return v3;
}
