__int64 __fastcall sub_59FD50(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebp

  v4 = sub_5B5740(a1, a2, 1);
  if ( !(_BYTE)v4 )
    return v4;
  if ( !*(_QWORD *)(a2 + 48) && *(_DWORD *)(a2 + 40) )
  {
    if ( !under_debugger )
      interr(1504);
    BUG();
  }
  sub_396090(0x2Cu, a2);
  if ( a3 )
    return sub_5ACD60(a1, a2, 0);
  else
    return v4;
}

