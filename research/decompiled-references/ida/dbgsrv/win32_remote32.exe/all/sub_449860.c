/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449860
// Address: 0x00449860

//----- (00449860) --------------------------------------------------------
unsigned int __cdecl sub_449860(int a1, unsigned int *a2)
{
  _BYTE *v2; // eax
  const char *v3; // ebx
  unsigned int v4; // ecx
  unsigned int result; // eax
  unsigned int v6; // ebp
  unsigned int v7; // esi
  unsigned int v8; // [esp+10h] [ebp-Ch] BYREF
  _BYTE v9[3]; // [esp+15h] [ebp-7h] BYREF

  v2 = sub_4540B0(&v8, (unsigned int)v9, a2[1]);
  sub_401600(a1, (unsigned int)&v8, v2 - (_BYTE *)&v8);
  if ( a2[3] )
  {
    v3 = pNodeName;
    if ( a2[2] )
      v3 = (const char *)a2[2];
  }
  else
  {
    v3 = MultiByteStr;
  }
  v4 = strlen(v3);
  result = v4 + 1;
  v8 = v4 + 1;
  if ( v4 != -1 )
  {
    v6 = *(_DWORD *)(a1 + 4);
    v7 = result + v6;
    if ( result + v6 < v6 )
      v7 = 0x7FFFFFFF;
    if ( v7 <= v6 )
    {
      if ( v7 == v6 || v7 >= v6 )
        return sub_464310(v6 + *(_DWORD *)a1, (unsigned int)v3, result);
    }
    else
    {
      if ( v7 > *(_DWORD *)(a1 + 8) )
        *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v7, 1u);
      sub_464890((__m128i *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1), 0, v7 - *(_DWORD *)(a1 + 4));
      result = v8;
    }
    *(_DWORD *)(a1 + 4) = v7;
    return sub_464310(v6 + *(_DWORD *)a1, (unsigned int)v3, result);
  }
  return result;
}
