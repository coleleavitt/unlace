/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84B00
// Address: 0x00084B00

//----- (00084B00) --------------------------------------------------------
void __cdecl sub_84B00(int a1)
{
  int v1; // ecx
  int *v2; // edi
  unsigned int v3; // edx
  int v4; // esi
  unsigned int v5; // eax
  void *v6; // eax
  _DWORD *v7; // esi
  unsigned int v8; // [esp+4h] [ebp-18h]
  unsigned int v9; // [esp+8h] [ebp-14h]

  v1 = a1;
  v2 = *(int **)a1;
  if ( *(_DWORD *)a1 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( v3 )
    {
      v4 = 0;
      v5 = 1;
      v8 = *(_DWORD *)(a1 + 4);
      if ( *v2 < -1 )
        goto LABEL_9;
LABEL_6:
      v9 = v5;
      v6 = (void *)v2[v4 + 1];
      if ( v6 )
      {
        v2[v4 + 2] = 0;
        qfree(v6);
        v2[v4 + 1] = 0;
        v2[v4 + 3] = 0;
        v1 = a1;
        v3 = v8;
      }
      v2[v4] = -2;
      v5 = v9;
LABEL_9:
      while ( v5 < v3 )
      {
        v2 = *(int **)v1;
        v4 += 4;
        ++v5;
        if ( *(int *)(*(_DWORD *)v1 + v4 * 4) >= -1 )
          goto LABEL_6;
      }
      v2 = *(int **)v1;
    }
    *(_DWORD *)(v1 + 4) = 0;
    v7 = (_DWORD *)v1;
    qfree(v2);
    *v7 = 0;
    v7[2] = 0;
  }
}
