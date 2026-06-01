/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23428
// Address: 0x00023428

//----- (00023428) --------------------------------------------------------
int __fastcall sub_23428(int a1, int a2)
{
  unsigned int v4; // r6
  unsigned int v5; // r6
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  const void *v11; // r8
  void *v12; // r0
  const void *v13; // r8
  void *v14; // r0

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 28) = 0;
  *(_BYTE *)(a1 + 29) = 0;
  *(_WORD *)(a1 + 30) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  if ( a1 != a2 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    if ( v4 > 1 )
    {
      v13 = *(const void **)a2;
      v14 = sub_77EB0(a1, nullptr, *(_DWORD *)(a2 + 4), 1u);
      *(_DWORD *)(a1 + 4) = v4;
      *(_DWORD *)a1 = v14;
      memmove(v14, v13, v4 - 1);
      *(_BYTE *)(*(_DWORD *)a1 + v4 - 1) = 0;
      v5 = *(_DWORD *)(a2 + 16);
      if ( !v5 )
        goto LABEL_4;
    }
    else
    {
      v5 = *(_DWORD *)(a2 + 16);
      if ( !v5 )
      {
LABEL_4:
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_5;
      }
    }
    if ( v5 == 1 )
      goto LABEL_4;
    v11 = *(const void **)(a2 + 12);
    v12 = *(void **)(a1 + 12);
    if ( v5 > *(_DWORD *)(a1 + 20) )
    {
      v12 = sub_77EB0(a1 + 12, *(void **)(a1 + 12), v5, 1u);
      *(_DWORD *)(a1 + 12) = v12;
    }
    *(_DWORD *)(a1 + 16) = v5;
    memmove(v12, v11, v5 - 1);
    *(_BYTE *)(*(_DWORD *)(a1 + 12) + v5 - 1) = 0;
  }
LABEL_5:
  v6 = *(_DWORD *)(a2 + 28);
  v7 = *(_DWORD *)(a2 + 32);
  v8 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = v6;
  *(_DWORD *)(a1 + 32) = v7;
  *(_DWORD *)(a1 + 36) = v8;
  v9 = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = v9;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 64);
  *(_BYTE *)(a1 + 65) = *(_BYTE *)(a2 + 65);
  *(_BYTE *)(a1 + 66) = *(_BYTE *)(a2 + 66);
  return a1;
}
