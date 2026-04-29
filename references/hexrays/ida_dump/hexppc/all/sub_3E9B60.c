__int64 __fastcall sub_3E9B60(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx

  v3 = *(_QWORD *)(a1 + 4464);
  if ( !v3 )
    sub_3E6800(a3, a1, a2);
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 4456) + 4 * v3 - 4);
  *(_QWORD *)(a1 + 4464) = v3 - 1;
  return v4;
}
