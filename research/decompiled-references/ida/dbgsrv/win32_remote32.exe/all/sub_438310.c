/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438310
// Address: 0x00438310

//----- (00438310) --------------------------------------------------------
void *__thiscall sub_438310(_DWORD *this, int a2, unsigned __int8 a3, int a4)
{
  void **v4; // edx
  void *result; // eax
  const CHAR *v6; // ebp
  CHAR v7; // bl
  int v8; // edi
  int v9; // edi
  int v10; // eax
  int i; // [esp+14h] [ebp+Ch]

  v4 = (void **)(*(this + 7) + 28 * a4);
  result = (void *)a3;
  if ( a3 < (unsigned int)v4[1] )
  {
    result = *v4;
    v6 = MultiByteStr;
    if ( *((_DWORD *)*v4 + 3 * a3 + 1) )
      v6 = *((const CHAR **)result + 3 * a3);
    v7 = *v6;
    v8 = a4 - 1;
    for ( i = a4 - 1; *v6; v7 = *v6 )
    {
      ++v6;
      if ( (unsigned __int8)(v7 + 0x80) > 0x7Eu )
      {
        v9 = *(_DWORD *)(a2 + 4) != 0 ? *(_DWORD *)(a2 + 4) - 1 : 0;
        v10 = v9 + 2;
        if ( (unsigned int)(v9 + 2) > *(_DWORD *)(a2 + 8) )
        {
          *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v9 + 2, 1u);
          v10 = v9 + 2;
        }
        *(_DWORD *)(a2 + 4) = v10;
        *(_BYTE *)(v9 + *(_DWORD *)a2) = v7;
        result = *(void **)a2;
        *(_BYTE *)(*(_DWORD *)a2 + v9 + 1) = 0;
        v8 = i;
      }
      else
      {
        result = (void *)sub_438310(a2, v7 + 0x80, v8);
      }
    }
  }
  return result;
}
