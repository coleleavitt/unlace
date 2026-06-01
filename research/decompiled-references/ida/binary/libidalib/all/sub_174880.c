__int64 __fastcall sub_174880(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  qexit();
  if ( !a2 )
    return 4;
  result = sub_175840(TProgram::application + 136LL, a2, v2);
  *(_DWORD *)(a2 + 116) |= 1u;
  *(_DWORD *)(a2 + 120) = result;
  return result;
}

