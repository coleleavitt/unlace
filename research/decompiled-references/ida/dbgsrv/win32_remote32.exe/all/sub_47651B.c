/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47651B
// Address: 0x0047651B

//----- (0047651B) --------------------------------------------------------
int __usercall sub_47651B@<eax>(int a1@<ebx>, int a2@<edi>, const char *a3, int a4)
{
  int v5; // eax
  int *v6; // esi
  int v7; // edx
  int v8; // ecx
  int *v9; // edi
  bool v10; // zf
  int v11; // [esp-8h] [ebp-24h]
  int *v12[3]; // [esp+0h] [ebp-1Ch] BYREF
  int v13; // [esp+Ch] [ebp-10h] BYREF
  int v14; // [esp+10h] [ebp-Ch] BYREF
  unsigned int v15; // [esp+14h] [ebp-8h] BYREF

  if ( !a3 || !a4 )
    goto LABEL_2;
  if ( (*(_DWORD *)(a4 + 12) & 0x1000) != 0 )
    goto LABEL_15;
  v11 = a2;
  v5 = sub_47631B(a1, a2, a4);
  v6 = dword_4B60F0;
  if ( v5 == -1 || v5 == -2 )
  {
    v8 = v5 >> 6;
    v9 = dword_4B60F0;
    v7 = v5 & 0x3F;
  }
  else
  {
    v7 = v5 & 0x3F;
    v8 = v5 >> 6;
    v9 = (int *)((char *)*(&dword_4B7B38 + (v5 >> 6)) + 56 * v7);
  }
  v10 = *((_BYTE *)v9 + 41) == 0;
  a2 = v11;
  if ( !v10 )
    goto LABEL_2;
  if ( v5 != -1 && v5 != -2 )
    v6 = (int *)((char *)*(&dword_4B7B38 + v8) + 56 * v7);
  if ( (*((_BYTE *)v6 + 45) & 1) == 0 )
  {
LABEL_15:
    v15 = strlen(a3);
    v12[0] = &a4;
    v12[1] = (int *)&a3;
    v12[2] = (int *)&v15;
    v14 = a4;
    v13 = a4;
    return sub_476475(a1, &v13, v12, &v14);
  }
  else
  {
LABEL_2:
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return -1;
  }
}
// 4B60F0: using guessed type int dword_4B60F0[6];
