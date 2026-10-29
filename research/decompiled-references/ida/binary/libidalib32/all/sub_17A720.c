__int64 __fastcall sub_17A720(__int64 a1, int *a2, unsigned int *a3)
{
  int v3; // ecx
  __int64 result; // rax
  unsigned int v5; // edi
  int v6; // ecx

  v3 = *(_DWORD *)(a1 + 104);
  result = *(unsigned int *)(a1 + 108);
  if ( v3 > (int)result )
  {
    v5 = *(_DWORD *)(a1 + 104);
    v6 = result;
    *a2 = v6;
    *a3 = v5;
    return v5;
  }
  else
  {
    *a2 = v3;
    *a3 = result;
  }
  return result;
}

