/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E4F8C
// Address: 0x00000000000E4F8C

//----- (00000000000E4F8C) ----------------------------------------------------
char *__fastcall sub_E4F8C(char ***a1)
{
  char **v2; // x20
  char **v3; // x22
  char *v4; // x8
  unsigned __int64 v5; // x10
  unsigned __int64 v6; // x9
  char *v7; // x0
  char *v8; // x0
  size_t v9; // x1
  char *v10; // x8
  char **v11; // x20
  char **v12; // x19
  char *v13; // x8
  unsigned __int64 v14; // x10
  unsigned __int64 v15; // x9
  char *result; // x0
  char *v17; // x0
  size_t v18; // x1
  __int64 (__fastcall **v19)(); // [xsp+0h] [xbp-40h] BYREF
  int v20; // [xsp+8h] [xbp-38h]
  char *v21; // [xsp+10h] [xbp-30h]
  __int64 v22; // [xsp+18h] [xbp-28h]

  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *a1;
  v2 = a1[1];
  v4 = (*a1)[1];
  v5 = (unsigned __int64)(*a1)[2];
  v6 = (unsigned __int64)(v4 + 1);
  if ( (unsigned __int64)(v4 + 1) >= v5 )
  {
    v8 = *v3;
    if ( 2 * v5 >= v6 )
      v9 = 2 * v5;
    else
      v9 = (size_t)(v4 + 1);
    v3[2] = (char *)v9;
    v7 = (char *)realloc(v8, v9);
    v4 = v3[1];
    *v3 = v7;
    v6 = (unsigned __int64)(v4 + 1);
  }
  else
  {
    v7 = *v3;
  }
  v3[1] = (char *)v6;
  v4[(_QWORD)v7] = 40;
  v10 = v2[2];
  v20 = 16843037;
  v19 = off_161D28;
  v21 = v10;
  v11 = *a1;
  sub_E50C4((__int64)&v19, *a1);
  if ( BYTE1(v20) != 1 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(), char **))v19[4])(&v19, v11);
  v12 = *a1;
  v13 = v12[1];
  v14 = (unsigned __int64)v12[2];
  v15 = (unsigned __int64)(v13 + 1);
  if ( (unsigned __int64)(v13 + 1) >= v14 )
  {
    v17 = *v12;
    if ( 2 * v14 >= v15 )
      v18 = 2 * v14;
    else
      v18 = (size_t)(v13 + 1);
    v12[2] = (char *)v18;
    result = (char *)realloc(v17, v18);
    v13 = v12[1];
    *v12 = result;
    v15 = (unsigned __int64)(v13 + 1);
  }
  else
  {
    result = *v12;
  }
  v12[1] = (char *)v15;
  v13[(_QWORD)result] = 41;
  return result;
}
// 161D28: using guessed type __int64 (__fastcall *off_161D28[7])();
