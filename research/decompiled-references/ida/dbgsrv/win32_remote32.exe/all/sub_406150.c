/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_406150
// Address: 0x00406150

//----- (00406150) --------------------------------------------------------
unsigned int __thiscall sub_406150(int this, int a2)
{
  const char *v3; // ebx
  unsigned int v4; // ecx
  unsigned int result; // eax
  unsigned int v6; // ebp
  unsigned int v7; // edi
  unsigned int v8; // [esp+8h] [ebp-4h]

  if ( *(_DWORD *)(a2 + 4) )
  {
    v3 = pNodeName;
    if ( *(_DWORD *)a2 )
      v3 = *(const char **)a2;
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
    v6 = *(_DWORD *)(this + 4);
    v7 = result + v6;
    if ( result + v6 < v6 )
      v7 = 0x7FFFFFFF;
    if ( v7 <= v6 )
    {
      if ( v7 == v6 || v7 >= v6 )
        return sub_464310(v6 + *(_DWORD *)this, (unsigned int)v3, result);
    }
    else
    {
      if ( v7 > *(_DWORD *)(this + 8) )
        *(_DWORD *)this = sub_453B00(this, *(void **)this, v7, 1u);
      sub_464890((__m128i *)(*(_DWORD *)(this + 4) + *(_DWORD *)this), 0, v7 - *(_DWORD *)(this + 4));
      result = v8;
    }
    *(_DWORD *)(this + 4) = v7;
    return sub_464310(v6 + *(_DWORD *)this, (unsigned int)v3, result);
  }
  return result;
}
