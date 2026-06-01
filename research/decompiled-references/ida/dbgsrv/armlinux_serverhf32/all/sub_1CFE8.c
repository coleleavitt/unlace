/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1CFE8
// Address: 0x0001CFE8

//----- (0001CFE8) --------------------------------------------------------
int __fastcall sub_1CFE8(int a1)
{
  int result; // r0
  int v3; // r0
  const char *v4; // r0
  _DWORD *v5; // r3
  _DWORD *v6; // r0
  int v7; // r2
  const char *v8; // r0
  int v9; // [sp+0h] [bp-160h] BYREF
  int v10; // [sp+4h] [bp-15Ch]
  _BYTE v11[16]; // [sp+Ch] [bp-154h] BYREF
  int v12; // [sp+1Ch] [bp-144h]
  int v13; // [sp+4Ch] [bp-114h]

LABEL_1:
  while ( 1 )
  {
    result = off_D396C(*(_DWORD *)(a1 + 860), &v9);
    if ( result )
      break;
    while ( 1 )
    {
      v3 = off_D395C(v10, v11);
      if ( v3 )
      {
        v8 = sub_15B54(v3);
        sub_1700C((int)"%s: %s\n", "td_thr_get_info", v8);
      }
      if ( v9 == 8 )
        break;
      if ( v9 != 9 )
      {
        sub_1700C((int)"Spurious thread event %d.", v9);
        goto LABEL_1;
      }
      sub_1BCAC(a1, v13, 2);
      result = off_D396C(*(_DWORD *)(a1 + 860), &v9);
      if ( result )
        goto LABEL_7;
    }
    v5 = *(_DWORD **)(a1 + 1008);
    if ( v5 )
    {
      v6 = (_DWORD *)(a1 + 1004);
      do
      {
        v7 = v5[4];
        if ( v7 < v13 )
          v5 = (_DWORD *)v5[3];
        else
          v6 = v5;
        if ( v7 >= v13 )
          v5 = (_DWORD *)v5[2];
      }
      while ( v5 );
      if ( (_DWORD *)(a1 + 1004) != v6 && v13 >= v6[4] )
        continue;
    }
    if ( sub_17534(a1, (int)v11, v10) )
      sub_1B9D0(a1, v13, v12);
  }
LABEL_7:
  if ( result != 10 )
  {
    v4 = sub_15B54(result);
    return sub_1700C((int)"Cannot get thread event message: %s\n", v4);
  }
  return result;
}
// D395C: using guessed type int (__fastcall *off_D395C)(_DWORD, _DWORD);
// D396C: using guessed type int (__fastcall *off_D396C)(_DWORD, _DWORD);
