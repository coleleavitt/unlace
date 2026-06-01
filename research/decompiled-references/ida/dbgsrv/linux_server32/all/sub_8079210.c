/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8079210
// Address: 0x08079210

//----- (08079210) --------------------------------------------------------
void *__cdecl sub_8079210(int a1, unsigned __int8 a2, __int16 a3)
{
  void *result; // eax
  void **v4; // ebp
  _BYTE *v5; // edx

  if ( (unsigned __int16)a3 > 0xFu )
    return sub_8078220(a1, a2, a3);
  v4 = *(void ***)(a1 + 108);
  *(_BYTE *)(a1 + 116) = a2 + a3;
  v5 = v4[1];
  result = *v4;
  if ( v4[2] < v5 + 1 )
  {
    result = sub_80CF920((int)v4, result, (unsigned int)(v5 + 1), 1u);
    v5 = v4[1];
    *v4 = result;
  }
  v5[(_DWORD)result] = a2 + a3;
  v4[1] = (char *)v4[1] + 1;
  ++*(_DWORD *)(a1 + 112);
  return result;
}
