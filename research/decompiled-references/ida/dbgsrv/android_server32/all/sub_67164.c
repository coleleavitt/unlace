/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67164
// Address: 0x00067164

//----- (00067164) --------------------------------------------------------
int *__fastcall sub_67164(int *a1, int a2)
{
  int *v3; // r4
  _DWORD *v4; // r5
  int v5; // r1
  int v6; // r4
  int v7; // r4
  int v8; // r7
  int v9; // r1
  int v10; // r3
  int *v11; // r4
  int v14; // [sp+10h] [bp-20h]
  _DWORD *v15; // [sp+14h] [bp-1Ch]
  int v16; // [sp+18h] [bp-18h]
  int v17; // [sp+1Ch] [bp-14h]
  _DWORD *v18; // [sp+20h] [bp-10h]
  int v19; // [sp+24h] [bp-Ch]
  int v20; // [sp+28h] [bp-8h]

  v3 = a1;
  v4 = nullptr;
  v16 = 0;
  v15 = nullptr;
  v17 = 0;
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 )
  {
    v6 = v5;
    v4 = qalloc_or_throw(40 * v5);
    v15 = v4;
    v17 = v6;
    sub_6723C(v4, *(int **)a2);
    v14 = v6;
    if ( v6 != 1 )
    {
      v7 = v6 - 1;
      v8 = 10;
      do
      {
        sub_6723C(&v4[v8], (int *)(*(_DWORD *)a2 + v8 * 4));
        v8 += 10;
        --v7;
      }
      while ( v7 );
    }
    v5 = v14;
    v16 = v14;
    v3 = a1;
  }
  v19 = v5;
  v15 = nullptr;
  v18 = v4;
  v16 = 0;
  v20 = v5;
  v17 = 0;
  if ( *v3 )
  {
    sub_1B470(v3, 0);
    qfree((void *)*v3);
    v9 = v20;
    v10 = v19;
    *v3 = (int)v18;
    v3[1] = v10;
    v11 = v3 + 2;
    *v11 = v9;
    return v11 - 2;
  }
  else
  {
    *v3 = (int)v4;
    v3[1] = v5;
    v3[2] = v5;
  }
  return v3;
}
// 671F6: conditional instruction was optimized away because r0.4==0
