_DWORD *__fastcall sub_7975D0(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // ecx
  _DWORD *result; // rax
  unsigned int v5; // edi
  unsigned int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // edi

  v3 = *a2;
  result = **(_DWORD ***)(a1 + 1544);
  v5 = result[1468];
  if ( v5 >= *a2 && v5 < a2[1] )
  {
    result[1468] = a3 + v5;
    v3 = *a2;
  }
  v6 = result[1469];
  if ( v6 >= v3 && v6 < a2[1] )
  {
    result[1469] = a3 + v6;
    v3 = *a2;
  }
  v7 = result[1470];
  if ( v7 >= v3 && v7 < a2[1] )
  {
    result[1470] = a3 + v7;
    v3 = *a2;
  }
  v8 = result[1471];
  if ( v8 >= v3 && v8 < a2[1] )
    result[1471] = v8 + a3;
  return result;
}

