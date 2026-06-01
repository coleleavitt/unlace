__int64 __fastcall sub_61F610(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 1472);
  if ( *v1 )
  {
    result = sub_79AFE0();
    *v1 = 0;
  }
  return result;
}

