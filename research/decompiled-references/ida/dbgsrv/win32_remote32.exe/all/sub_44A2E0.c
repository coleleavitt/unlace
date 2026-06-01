/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A2E0
// Address: 0x0044A2E0

//----- (0044A2E0) --------------------------------------------------------
unsigned int __cdecl sub_44A2E0(int a1, _DWORD *a2)
{
  int v2; // eax
  _BYTE *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  _BYTE *v6; // eax
  const char *v7; // ebx
  unsigned int v8; // ecx
  unsigned int result; // eax
  unsigned int v10; // ebp
  unsigned int v11; // edi
  unsigned int v12; // [esp+10h] [ebp-14h]
  _BYTE v13[10]; // [esp+14h] [ebp-10h] BYREF
  _BYTE v14[2]; // [esp+1Eh] [ebp-6h] BYREF

  v2 = 0;
  if ( *a2 == -1 )
    v2 = -1;
  v3 = sub_454140(v13, (unsigned int)v14, *a2 + 1, (__PAIR64__(v2, *a2) + 1) >> 32);
  sub_401600(a1, (unsigned int)v13, v3 - v13);
  v4 = a2[1];
  v5 = 0;
  if ( v4 == -1 )
    v5 = -1;
  v6 = sub_454140(v13, (unsigned int)v14, v4 + 1, (__PAIR64__(v5, v4) + 1) >> 32);
  sub_401600(a1, (unsigned int)v13, v6 - v13);
  if ( a2[3] )
  {
    v7 = pNodeName;
    if ( a2[2] )
      v7 = (const char *)a2[2];
  }
  else
  {
    v7 = MultiByteStr;
  }
  v8 = strlen(v7);
  result = v8 + 1;
  v12 = v8 + 1;
  if ( v8 != -1 )
  {
    v10 = *(_DWORD *)(a1 + 4);
    v11 = result + v10;
    if ( result + v10 < v10 )
      v11 = 0x7FFFFFFF;
    if ( v11 <= v10 )
    {
      if ( v11 == v10 || v11 >= v10 )
        return sub_464310(v10 + *(_DWORD *)a1, (unsigned int)v7, result);
    }
    else
    {
      if ( v11 > *(_DWORD *)(a1 + 8) )
        *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v11, 1u);
      sub_464890((__m128i *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1), 0, v11 - *(_DWORD *)(a1 + 4));
      result = v12;
    }
    *(_DWORD *)(a1 + 4) = v11;
    return sub_464310(v10 + *(_DWORD *)a1, (unsigned int)v7, result);
  }
  return result;
}
