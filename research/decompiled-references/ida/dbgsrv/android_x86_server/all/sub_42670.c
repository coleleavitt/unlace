/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42670
// Address: 0x00042670

//----- (00042670) --------------------------------------------------------
_DWORD *__cdecl sub_42670(_DWORD *a1, int *a2)
{
  _DWORD *result; // eax
  int v3; // edi
  char *v4; // esi
  int v5; // edx
  int i; // edi
  int v7; // ecx
  int v8; // eax
  void *v9; // eax
  __int64 v10; // xmm0_8
  size_t v11; // [esp+18h] [ebp-24h]
  int v12; // [esp+1Ch] [ebp-20h]
  int v13; // [esp+20h] [ebp-1Ch]
  int v14; // [esp+28h] [ebp-14h]

  result = a1;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v3 = a2[1];
  if ( v3 )
  {
    v4 = (char *)qalloc_or_throw(28 * v3);
    *a1 = v4;
    a1[2] = v3;
    v13 = v3;
    v5 = v3 - 1;
    for ( i = 0; ; i += 28 )
    {
      v7 = *a2;
      *(_DWORD *)&v4[i] = 0;
      *(_DWORD *)&v4[i + 4] = 0;
      *(_DWORD *)&v4[i + 8] = 0;
      v8 = *(_DWORD *)(v7 + i + 4);
      if ( v8 )
      {
        v11 = *(_DWORD *)(v7 + i + 4);
        v14 = v5;
        v12 = v7;
        v9 = qalloc_or_throw(v8);
        *(_DWORD *)&v4[i] = v9;
        *(_DWORD *)&v4[i + 8] = v11;
        memcpy(v9, *(const void **)(v12 + i), v11);
        v7 = v12;
        v5 = v14;
        *(_DWORD *)&v4[i + 4] = v11;
      }
      v10 = *(_QWORD *)(v7 + i + 12);
      *(_QWORD *)&v4[i + 17] = *(_QWORD *)(v7 + i + 17);
      *(_QWORD *)&v4[i + 12] = v10;
      if ( !v5 )
        break;
      v4 = (char *)*a1;
      --v5;
    }
    a1[1] = v13;
    return a1;
  }
  return result;
}
