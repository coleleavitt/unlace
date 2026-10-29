__int64 __fastcall sub_408FF0(__int64 a1)
{
  __int64 result; // rax
  bool v2; // zf

  result = (unsigned int)(*(_DWORD *)(a1 + 16) - 1);
  v2 = *(_DWORD *)(a1 + 16) == 1;
  *(_DWORD *)(a1 + 16) = result;
  if ( (int)result < 0 || v2 )
    return Tcl_Free(a1);
  return result;
}

