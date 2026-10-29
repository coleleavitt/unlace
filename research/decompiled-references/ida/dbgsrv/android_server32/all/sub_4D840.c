/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D840
// Address: 0x0004D840

//----- (0004D840) --------------------------------------------------------
int *__fastcall sub_4D840(_DWORD **a1, int a2, int a3, int a4)
{
  int **v5; // r0
  int *v6; // r5
  int **v7; // r6
  int v8; // r0
  _DWORD *v9; // r0
  int *v10; // r1
  int v13; // [sp+Ch] [bp-Ch] BYREF
  int v14; // [sp+10h] [bp-8h] BYREF

  v5 = (int **)sub_4D8C8(a1, a2, &v14, &v13, a3);
  v6 = *v5;
  if ( !*v5 )
  {
    v7 = v5;
    v6 = (int *)operator new(0x38u);
    sub_4DABC((int)(v6 + 4), a4);
    v8 = v14;
    *v6 = 0;
    v6[1] = 0;
    v6[2] = v8;
    *v7 = v6;
    v9 = (_DWORD *)**a1;
    if ( v9 )
    {
      *a1 = v9;
      v10 = *v7;
    }
    else
    {
      v10 = v6;
    }
    sub_261FA(a1[1], v10);
    a1[2] = (_DWORD *)((char *)a1[2] + 1);
  }
  return v6;
}
