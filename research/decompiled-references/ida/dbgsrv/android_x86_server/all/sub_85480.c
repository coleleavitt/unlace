/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85480
// Address: 0x00085480

//----- (00085480) --------------------------------------------------------
int __cdecl sub_85480(_DWORD *a1, __int16 a2)
{
  _DWORD *v2; // edi
  char *v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // esi
  int v6; // ecx
  __int16 v7; // dx
  __int16 v9; // [esp+2h] [ebp-1Ah] BYREF
  int v10; // [esp+4h] [ebp-18h]
  _DWORD *v11; // [esp+8h] [ebp-14h]

  v2 = a1;
  v9 = a2;
  v3 = (char *)a1[16];
  v11 = a1 + 16;
  v10 = a1[17];
  v4 = v10 + 1;
  v5 = a1[18];
  if ( v3 > (char *)&v9 || (v2 = a1, &v3[2 * v5] <= (char *)&v9) )
  {
    if ( v5 < v4 )
    {
      v3 = (char *)qvector_reserve((int)v11, v3, v10 + 1, 2u);
      v2[16] = v3;
      v6 = v2[17];
      v7 = v9;
      goto LABEL_8;
    }
LABEL_7:
    v7 = a2;
    v6 = v10;
    goto LABEL_8;
  }
  if ( v5 >= v4 )
    goto LABEL_7;
  v3 = (char *)qvector_reserve((int)v11, v3, v10 + 1, 2u);
  a1[16] = v3;
  v6 = a1[17];
  v7 = a2;
LABEL_8:
  *(_WORD *)&v3[2 * v6] = v7;
  ++v2[17];
  return 0;
}
