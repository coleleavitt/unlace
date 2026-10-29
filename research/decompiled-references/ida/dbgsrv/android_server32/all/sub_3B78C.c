/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B78C
// Address: 0x0003B78C

//----- (0003B78C) --------------------------------------------------------
bool __fastcall sub_3B78C(_DWORD *a1)
{
  const char *v2; // r1
  unsigned __int16 v3; // r2
  int v4; // r1
  _BOOL4 result; // r0
  int v6; // r2
  int *v7; // r5
  int v8; // r4
  int *v9; // r0
  int v10; // [sp+4h] [bp-8h] BYREF

  if ( a1[7] )
    v2 = (const char *)a1[6];
  else
    v2 = &byte_B3CBE;
  v3 = sub_3B468(a1, v2, &v10);
  if ( (unsigned int)(v10 - 1) > 2 )
  {
    v4 = set_qerrno(58);
    result = 1;
    if ( v4 )
      return result;
  }
  else
  {
    sub_391D4((int)a1, 0xDDC6C4u >> (8 * (v10 - 1)), v3);
  }
  sub_3B6CC((int)a1);
  v6 = a1[49];
  v7 = *(int **)(a1[48] + 4 * (v6 - 1));
  if ( v6 )
    a1[49] = v6 - 1;
  v8 = sub_3CA3C((int)a1, v7, 0, 0);
  if ( v7 )
  {
    v9 = sub_3B850(v7);
    operator delete(v9);
  }
  return set_qerrno(v8) != 0;
}
// B3CBE: using guessed type char byte_B3CBE;
