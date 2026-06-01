unsigned __int64 __fastcall sub_16E7B0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned int v3; // edx
  bool v4; // zf

  result = *(_QWORD *)(a2 + 8);
  if ( *(unsigned int *)(a1 + 12) >= result )
  {
    v3 = result - 1;
    v4 = result == 0;
    result = 0;
    if ( !v4 )
      result = v3;
    *(_DWORD *)(a1 + 12) = result;
  }
  return result;
}

