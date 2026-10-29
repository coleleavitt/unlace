/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D154
// Address: 0x0008D154

//----- (0008D154) --------------------------------------------------------
_DWORD *__fastcall sub_8D154(int a1, int *a2)
{
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r7
  int v7; // r5
  int v8; // r6
  int v9; // r7
  __int64 *v10; // r1
  _DWORD v12[11]; // [sp+4h] [bp-30h] BYREF

  if ( a2 )
  {
    v3 = *a2;
    v4 = a2[1];
    v5 = a2[2];
    v6 = a2[3];
    v2 = a2 + 4;
    v12[0] = v3;
    v12[1] = v4;
    v12[2] = v5;
    v12[3] = v6;
    v7 = v2[1];
    v8 = v2[2];
    v9 = v2[3];
    v12[4] = *v2;
    v12[5] = v7;
    v12[6] = v8;
    v12[7] = v9;
    v12[10] = 0;
    v12[9] = 0;
    v10 = (__int64 *)v12;
  }
  else
  {
    v10 = nullptr;
  }
  return sub_8C8E4(a1, v10, 1);
}
