char __fastcall sub_14D030(__int64 a1)
{
  char result; // al

  result = sub_17E9C0(a1);
  if ( !result )
  {
    if ( TProgram::application )
      return *(_DWORD *)(TProgram::application + 356LL) > 0;
  }
  return result;
}

