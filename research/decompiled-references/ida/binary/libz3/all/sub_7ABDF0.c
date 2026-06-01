__int64 __fastcall sub_7ABDF0(__int64 a1)
{
  unsigned int v1; // ecx
  __int64 result; // rax
  __int64 v3; // rdx

  v1 = *(_DWORD *)(a1 + 16);
  result = **(_QWORD **)(a1 + 8);
  v3 = v1 >> 5;
  if ( result )
  {
    if ( (unsigned int)v3 < *(_DWORD *)(result - 4) )
      *(_DWORD *)(result + 4 * v3) &= __ROL4__(-2, v1);
  }
  return result;
}

