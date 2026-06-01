unsigned __int64 __fastcall sub_738630(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(__int64, __int64); // r14
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r8
  int v18; // r9d

  if ( a2 < a3 )
  {
    if ( !under_debugger )
      interr(1196);
    BUG();
  }
  v3 = a2;
  v5 = 38;
  while ( (unsigned int)sub_73B690(*a1, v3) )
  {
    if ( a3 == v3 )
    {
      v11 = a1[72];
      v12 = (void (__fastcall *)(__int64, __int64))a1[2];
      if ( v3 < v11 )
      {
        v16 = *__errno_location();
        if ( !v12 )
          off_2C81BC0(0x2Au, v16, v14, v15, v17, v18);
        v12(42, v16);
        return v3;
      }
      v13 = a3 - v11;
      if ( !v12 )
        off_2C81BC0(v5, v13, v6, v7, v8, v9);
      v12(v5, v13);
      v5 = 41;
    }
    else
    {
      v3 = a3;
    }
  }
  return v3;
}
