/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4071C
// Address: 0x0004071C

//----- (0004071C) --------------------------------------------------------
int __fastcall sub_4071C(_DWORD *a1, _DWORD *a2)
{
  unsigned int v4; // r0
  int v5; // r6
  int *v6; // r7
  int v7; // r5
  unsigned int v8; // r0
  int v9; // r1
  _DWORD *v10; // r0
  unsigned int v11; // r1
  int v12; // r2
  _DWORD *v13; // r0
  int result; // r0
  int v15; // [sp+4h] [bp-8h]
  int v16; // [sp+8h] [bp-4h]

  v4 = *a1;
  if ( v4 > (unsigned int)a2 || v4 + 16 * a1[2] <= (unsigned int)a2 )
  {
    sub_42B90((int)a1, a1[1] + 1);
    v11 = *a1;
    v12 = 16 * a1[1];
    *(_DWORD *)(v11 + v12) = *a2;
    v13 = (_DWORD *)(v11 + v12);
    v13[1] = a2[1];
    a2[1] = 0;
    v13[2] = a2[2];
    a2[2] = 0;
    v13[3] = a2[3];
    a2[3] = 0;
    v6 = a1 + 1;
  }
  else
  {
    v16 = a2[1];
    a2[1] = 0;
    v15 = a2[2];
    a2[2] = 0;
    v5 = a2[3];
    a2[3] = 0;
    v6 = a1 + 1;
    v7 = *a2;
    sub_42B90((int)a1, a1[1] + 1);
    v8 = *a1;
    v9 = 16 * a1[1];
    *(_DWORD *)(v8 + v9) = v7;
    v10 = (_DWORD *)(v8 + v9);
    v10[1] = v16;
    v10[2] = v15;
    v10[3] = v5;
  }
  result = *v6 + 1;
  *v6 = result;
  return result;
}
