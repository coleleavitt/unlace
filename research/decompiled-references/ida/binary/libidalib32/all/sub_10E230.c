void __fastcall __noreturn sub_10E230(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD v3[29]; // [rsp+0h] [rbp-E8h] BYREF

  v3[23] = __readfsqword(0x28u);
  v2 = errorexit;
  if ( errorexit > 1 )
  {
    a1 = 2;
    v2 = qexit();
  }
  errorexit = v2 + 1;
  if ( !(unsigned __int8)sub_10DD60(a1, a2) )
    goto LABEL_7;
  while ( 1 )
  {
    if ( TProgram::application )
    {
      sub_17D9C0(v3, "Error", 4, 0, "", 0, 0, 1, a1, a2);
      sub_175450(v3, 0, 0);
      sub_10E050(v3);
    }
    else
    {
      qveprintf();
    }
    ++errorexit;
    qexit();
LABEL_7:
    if ( (unsigned __int8)qgetenv() )
      batch = 0;
  }
}

