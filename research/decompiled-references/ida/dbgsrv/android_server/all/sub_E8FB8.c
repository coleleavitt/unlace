/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E8FB8
// Address: 0x00000000000E8FB8

//----- (00000000000E8FB8) ----------------------------------------------------
char *__fastcall sub_E8FB8(__int64 a1, char **a2)
{
  char *v4; // x8
  unsigned __int64 v5; // x10
  char *v6; // x0
  char *v7; // x0
  size_t v8; // x1
  char *v9; // x8
  __int64 v10; // x8
  char *v11; // x8
  unsigned __int64 v12; // x10
  char *result; // x0
  char *v14; // x0
  size_t v15; // x1
  __int64 (__fastcall **v16)(); // [xsp+0h] [xbp-40h] BYREF
  int v17; // [xsp+8h] [xbp-38h]
  __int64 v18; // [xsp+10h] [xbp-30h]
  __int64 v19; // [xsp+18h] [xbp-28h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = a2[1];
  v5 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v4 + 10) >= v5 )
  {
    v7 = *a2;
    if ( 2 * v5 >= (unsigned __int64)(v4 + 10) )
      v8 = 2 * v5;
    else
      v8 = (size_t)(v4 + 10);
    a2[2] = (char *)v8;
    v6 = (char *)realloc(v7, v8);
    v4 = a2[1];
    *a2 = v6;
  }
  else
  {
    v6 = *a2;
  }
  v9 = &v4[(_QWORD)v6];
  *((_WORD *)v9 + 4) = 10286;
  *(_QWORD *)v9 = *(_QWORD *)"sizeof...(";
  a2[1] += 10;
  v10 = *(_QWORD *)(a1 + 16);
  v17 = 16843037;
  v16 = off_161D28;
  v18 = v10;
  sub_E50C4((__int64)&v16, a2);
  v11 = a2[1];
  v12 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v11 + 1) >= v12 )
  {
    v14 = *a2;
    if ( 2 * v12 >= (unsigned __int64)(v11 + 1) )
      v15 = 2 * v12;
    else
      v15 = (size_t)(v11 + 1);
    a2[2] = (char *)v15;
    result = (char *)realloc(v14, v15);
    v11 = a2[1];
    *a2 = result;
  }
  else
  {
    result = *a2;
  }
  v11[(_QWORD)result] = 41;
  ++a2[1];
  return result;
}
// 161D28: using guessed type __int64 (__fastcall *off_161D28[7])();
