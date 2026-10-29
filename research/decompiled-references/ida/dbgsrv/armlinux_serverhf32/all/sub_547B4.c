/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_547B4
// Address: 0x000547B4

//----- (000547B4) --------------------------------------------------------
int __fastcall sub_547B4(_DWORD *a1, unsigned int a2, int a3)
{
  int (*v6)(void); // r2
  int v7; // r5
  _DWORD *v8; // r3
  _DWORD *v9; // r9
  unsigned int v10; // r5
  int v11; // r0
  unsigned int v12; // r4
  unsigned int v13; // r3
  int v14; // r2
  bool v15; // zf

  v6 = *(int (**)(void))(*a1 + 248);
  if ( v6 == sub_14EFC )
    v7 = -4096;
  else
    v7 = -v6();
  v8 = (_DWORD *)a1[80];
  v9 = a1 + 79;
  v10 = v7 & a2;
  v11 = (int)(a1 + 79);
  if ( !v8 )
    goto LABEL_13;
  do
  {
    v12 = v8[4];
    if ( v10 > v12 )
      v8 = (_DWORD *)v8[3];
    else
      v11 = (int)v8;
    if ( v10 <= v12 )
      v8 = (_DWORD *)v8[2];
  }
  while ( v8 );
  if ( v9 == (_DWORD *)v11 || (v13 = *(_DWORD *)(v11 + 16), v13 >= a3 + a2) )
  {
LABEL_13:
    if ( v11 == a1[81] )
      return (int)v9;
    v11 = sub_812CC(v11);
    v13 = *(_DWORD *)(v11 + 16);
  }
  v14 = *(_DWORD *)(v11 + 32);
  v15 = a3 == 0;
  if ( a3 )
    v15 = v14 == 0;
  if ( !v15 && a3 + a2 - 1 >= v13 && a2 <= v13 - 1 + v14 )
    return v11;
  return (int)v9;
}
// 812CC: using guessed type int __fastcall sub_812CC(_DWORD);
