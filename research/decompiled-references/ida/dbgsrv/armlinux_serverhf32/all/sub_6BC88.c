/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BC88
// Address: 0x0006BC88

//----- (0006BC88) --------------------------------------------------------
void **__fastcall sub_6BC88(void **result, int a2)
{
  void **v3; // r4
  unsigned int v4; // r1
  unsigned int v5; // r2
  unsigned __int8 *v6; // r3
  unsigned __int8 *v7; // r8
  int v8; // r5
  int v9; // r9
  unsigned int v10; // r6
  void *v11; // r1
  int v12; // r7
  unsigned __int8 *i; // [sp+8h] [bp-Ch] BYREF

  v3 = result;
  v4 = (unsigned int)result[2];
  result[1] = nullptr;
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 > v4 )
  {
    result = (void **)sub_77EB0((int)result, *result, v5, 1u);
    *v3 = result;
    v5 = *(_DWORD *)(a2 + 4);
  }
  if ( v5 )
  {
    v6 = *(unsigned __int8 **)a2;
    v7 = (unsigned __int8 *)(*(_DWORD *)a2 + v5 - 1);
    for ( i = v6; i != v7; v6 = i )
    {
      i = v6 + 1;
      v12 = *v6;
      if ( v12 == 92 )
      {
        result = (void **)sub_6BA7C(&i);
        LOBYTE(v12) = (_BYTE)result;
      }
      v8 = (int)v3[1];
      v9 = v8 - 1;
      v10 = v8 + 1;
      if ( !v8 )
      {
        v8 = 1;
        v10 = 2;
        v9 = 0;
      }
      v11 = *v3;
      if ( (unsigned int)v3[2] < v10 )
      {
        result = (void **)sub_77EB0((int)v3, v11, v10, 1u);
        v11 = result;
        *v3 = result;
      }
      v3[1] = (void *)v10;
      *((_BYTE *)v11 + v9) = v12;
      *((_BYTE *)*v3 + v8) = 0;
    }
  }
  return result;
}
