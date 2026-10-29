void __fastcall __noreturn sub_88C860(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r8d
  unsigned __int64 v4; // [rsp+78h] [rbp-40h]

  v4 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( *(_DWORD *)(a3 + 8) )
    {
      v3 = *(_DWORD *)(a3 + 12);
      if ( v3 )
        callui(87, 3, *(_QWORD *)(a1 + 408), 2, v3, (int)&callui);
    }
  }
  if ( !under_debugger )
    interr(3154);
  BUG();
}

