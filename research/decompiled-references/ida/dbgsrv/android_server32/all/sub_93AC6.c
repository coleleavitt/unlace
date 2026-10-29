/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93AC6
// Address: 0x00093AC6

//----- (00093AC6) --------------------------------------------------------
_DWORD *__fastcall sub_93AC6(int a1, int a2)
{
  _DWORD *v2; // r5
  unsigned int v3; // r6
  int v4; // r2
  _DWORD *v5; // r3
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r4

  v2 = *(_DWORD **)(a1 + 4096);
  v3 = (a2 + 15) & 0xFFFFFFF0;
  v5 = v2 + 1;
  v4 = v2[1];
  if ( v4 + v3 < 0xFF8 )
  {
    v7 = *(_DWORD **)(a1 + 4096);
LABEL_6:
    v6 = (_DWORD *)((char *)v7 + v4);
    *v5 = v4 + v3;
    return v6 + 2;
  }
  if ( v3 < 0xFF9 )
  {
    v8 = (_DWORD *)(a1 + 4096);
    v7 = (_DWORD *)operator new[](0x1000u);
    v4 = 0;
    *v7 = v2;
    v7[1] = 0;
    v5 = v7 + 1;
    *v8 = v7;
    goto LABEL_6;
  }
  v6 = (_DWORD *)operator new[](v3 | 8);
  *v6 = *v2;
  v6[1] = 0;
  *v2 = v6;
  return v6 + 2;
}
