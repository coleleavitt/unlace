char __fastcall sub_14C880(__int64 a1)
{
  char result; // al

  result = sub_17DEC0(a1);
  if ( !result )
  {
    if ( TProgram::application )
      return *(_DWORD *)(TProgram::application + 356LL) > 0;
  }
  return result;
}

