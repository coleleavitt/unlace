/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BF00
// Address: 0x0003BF00

//----- (0003BF00) --------------------------------------------------------
int __fastcall sub_3BF00(_DWORD *a1)
{
  int *v2; // r5
  _DWORD *v3; // r6
  int v4; // r0
  int *v5; // r4
  int v6; // r2
  int v7; // r1
  int *v8; // r5
  int v9; // r0
  const char *v10; // r1
  int v11; // r2
  int *v12; // r0
  int v13; // r1
  int *v14; // r0
  int result; // r0
  int v16; // r4
  int *v17; // r0
  int v18; // [sp+4h] [bp-8h]
  _DWORD *v19; // [sp+8h] [bp-4h]

  sub_3C058(a1);
  v2 = a1 + 49;
  v19 = a1 + 48;
  v18 = (int)a1;
  v3 = (_DWORD *)a1[26];
  while ( v3[3] )
  {
    v3 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v18 + 64) + 40) + 4 * *(_DWORD *)(*(_DWORD *)(v18 + 104) + 12));
    v4 = sub_463A8(v3, (int)(v3 + 5));
    v5 = v2;
    v6 = *v2;
    v7 = *v2 - 1;
    v8 = *(int **)(*v19 + 4 * v7);
    if ( v4 != 0x7FFFFFFF )
    {
      if ( v6 )
        *v5 = v7;
      v16 = sub_3CA3C(v18, v8, 0, 0);
      if ( v8 )
      {
        v17 = sub_3B850(v8);
        operator delete(v17);
      }
      return set_qerrno(v16);
    }
    v9 = v8[3];
    v2 = v5;
    if ( v9 >= 1 )
    {
      if ( v3[6] )
        v10 = (const char *)v3[5];
      else
        v10 = &byte_B3CBE;
      set_error_string(0, v10);
      v16 = 56;
      return set_qerrno(v16);
    }
  }
  v11 = *v2 - 1;
  v12 = *(int **)(*v19 + 4 * v11);
  v13 = 0;
  if ( *v2 )
  {
    *v2 = v11;
    v13 = v11;
  }
  if ( v12 )
  {
    v14 = sub_3B850(v12);
    operator delete(v14);
    v13 = *v2;
  }
  result = 0;
  if ( v13 )
  {
    if ( !under_debugger )
      interr(270);
    __debugbreak();
  }
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
