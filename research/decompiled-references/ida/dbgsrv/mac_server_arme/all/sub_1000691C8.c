/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000691C8
// Address: 0x00000001000691C8

//----- (00000001000691C8) ----------------------------------------------------
__int64 __fastcall sub_1000691C8(unsigned int a1)
{
  __int64 v1; // x8
  int v2; // w9
  int v3; // w10
  unsigned int v4; // w13
  unsigned int v5; // w14
  unsigned int v6; // w8
  _DWORD *v7; // x8
  int v10; // w9
  int v11; // w10
  int v12; // w8
  unsigned int v13; // w0

  if ( a1 < 0x80 )
    return *((unsigned int *)qword_10007B6E0 + a1);
  if ( HIWORD(a1) > 0x10u )
    return 0;
  v2 = 0;
  v3 = 3200;
  while ( 1 )
  {
    if ( v3 > 3200 )
      goto LABEL_32;
    v4 = (v2 + v3) / 2;
    if ( v4 < 0xC80 )
      break;
    v5 = *((_DWORD *)&qword_100082C28 + 3 * (int)v4);
LABEL_19:
    v1 = 0;
    if ( v5 < a1 )
      v2 = v4 + 1;
    else
      v3 = v4 - 1;
    if ( v2 > v3 || v2 >= 3200 )
      return v1;
  }
  if ( (unsigned int)(v2 + v3) >> 1 == 3199 )
    v6 = 1114112;
  else
    v6 = *((_DWORD *)&qword_100082C28 + 3 * v4 + 3);
  v5 = *((_DWORD *)&qword_100082C28 + 3 * v4);
  if ( v6 <= a1 )
    v7 = nullptr;
  else
    v7 = (_DWORD *)&qword_100082C28 + 3 * v4;
  if ( v5 > a1 || v7 == nullptr )
    goto LABEL_19;
  v11 = v7[1];
  v10 = v7[2];
  v12 = a1 - *v7;
  if ( v10 )
    v12 = 0;
  a1 = v12 + v11;
  if ( (unsigned int)(v12 + v11) >> 1 >= 0xEA9 )
  {
    if ( under_debugger == 1 )
      goto LABEL_33;
    interr(1519);
LABEL_32:
    if ( under_debugger == 1 )
LABEL_33:
      __break(1u);
    interr(1520);
    return is_cp_graphical(v13);
  }
  return *((unsigned int *)qword_10007B6E0 + a1);
}
// 100069305: variable 'v13' is possibly undefined
// 10007B6E0: using guessed type __int64 qword_10007B6E0[512];
// 100082C28: using guessed type __int64 qword_100082C28;
// 1000A590D: using guessed type char under_debugger;
