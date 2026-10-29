/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_26034
// Address: 0x00026034

//----- (00026034) --------------------------------------------------------
int *__fastcall sub_26034(_DWORD **a1, _DWORD *a2, unsigned int *a3, int a4)
{
  int **v6; // r0
  int *v7; // r5
  size_t v8; // r7
  void *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  int *v12; // r1
  int **v14; // [sp+Ch] [bp-14h]
  int v15; // [sp+14h] [bp-Ch] BYREF
  int v16; // [sp+18h] [bp-8h] BYREF

  v6 = (int **)sub_260E0(a1, a2, &v16, &v15, a3);
  v7 = *v6;
  if ( !*v6 )
  {
    v14 = v6;
    v7 = (int *)operator new(0x20u);
    v7[4] = *(_DWORD *)a4;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
    v8 = *(_DWORD *)(a4 + 8);
    if ( v8 )
    {
      v9 = qalloc_or_throw(*(_DWORD *)(a4 + 8));
      v7[7] = v8;
      v7[5] = (int)v9;
      qmemcpy(v9, *(const void **)(a4 + 4), v8);
      v7[6] = v8;
    }
    v10 = v16;
    *v7 = 0;
    v7[1] = 0;
    v7[2] = v10;
    *v14 = v7;
    v11 = (_DWORD *)**a1;
    if ( v11 )
    {
      *a1 = v11;
      v12 = *v14;
    }
    else
    {
      v12 = v7;
    }
    sub_261FA(a1[1], v12);
    a1[2] = (_DWORD *)((char *)a1[2] + 1);
  }
  return v7;
}
