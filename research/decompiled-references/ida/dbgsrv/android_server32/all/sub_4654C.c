/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4654C
// Address: 0x0004654C

//----- (0004654C) --------------------------------------------------------
int __fastcall sub_4654C(int a1, _DWORD *a2, int a3, unsigned __int8 *a4)
{
  unsigned int v7; // r1
  int v8; // r0
  int v9; // r2
  int v12; // [sp+18h] [bp-10h] BYREF
  int v13; // [sp+1Ch] [bp-Ch] BYREF

  v7 = a2[4];
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = sub_40FB8(*(_DWORD *)(a1 + 4), v7);
      v9 = *(_DWORD *)(v8 + 36);
      if ( v9 != -1 )
        return sub_47764(a1, a2, v9, a3, a4, 0);
      v7 = *(_DWORD *)(v8 + 12);
      if ( !v7 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v12 = a3;
    sub_4DDA0((int)&v13, (int)a2, a3, (int)&byte_B45D0, &v12);
    copy_idcv((unsigned __int8 *)(v13 + 32), a4);
    return 1;
  }
}
// B45D0: using guessed type char byte_B45D0;
