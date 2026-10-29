/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47CC3D
// Address: 0x0047CC3D

//----- (0047CC3D) --------------------------------------------------------
char __usercall sub_47CC3D@<al>(int a1@<ebx>, int a2@<edi>, char a3, int a4)
{
  int v4; // edx
  int v5; // edi
  int v6; // eax
  signed int v7; // esi
  int *v9; // eax
  int v10; // eax
  int v11; // edx

  v4 = sub_47631B(a1, a2, a4);
  if ( (*(_DWORD *)(a4 + 12) & 0xC0) == 0 )
    return sub_474842(a1, a2, v4, &a3, 1u) == 1;
  v5 = 0;
  v6 = *(_DWORD *)(a4 + 4);
  v7 = *(_DWORD *)a4 - v6;
  *(_DWORD *)a4 = v6 + 1;
  *(_DWORD *)(a4 + 8) = *(_DWORD *)(a4 + 24) - 1;
  if ( v7 > 0 )
  {
    v5 = sub_474842(a1, 0, v4, *(_BYTE **)(a4 + 4), v7);
LABEL_4:
    **(_BYTE **)(a4 + 4) = a3;
    return v5 == v7;
  }
  if ( v4 == -1 || v4 == -2 )
    v9 = dword_4B60F0;
  else
    v9 = (int *)((char *)*(&dword_4B7B38 + (v4 >> 6)) + 56 * (v4 & 0x3F));
  if ( (v9[10] & 0x20) == 0 )
    goto LABEL_4;
  v10 = sub_474C96(a1, v4, 0, 0, 2u);
  if ( (v11 & v10) != 0xFFFFFFFF )
    goto LABEL_4;
  _InterlockedOr((volatile signed __int32 *)(a4 + 12), 0x10u);
  return 1;
}
// 47CCD5: variable 'v11' is possibly undefined
// 4B60F0: using guessed type int dword_4B60F0[6];
