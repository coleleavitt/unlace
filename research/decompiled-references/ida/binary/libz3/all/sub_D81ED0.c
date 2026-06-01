__int64 __fastcall sub_D81ED0(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax
  __int64 result; // rax

  if ( (a3[1] & 1) != 0 )
  {
    sub_182C690(a1, a2, a3);
  }
  else
  {
    v3 = *a3;
    *(_BYTE *)(a2 + 4) &= ~1u;
    *(_DWORD *)a2 = v3;
  }
  result = sub_182CBA0(a1, a2 + 16);
  *(_BYTE *)(a2 + 20) &= ~1u;
  *(_DWORD *)(a2 + 16) = 1;
  return result;
}

