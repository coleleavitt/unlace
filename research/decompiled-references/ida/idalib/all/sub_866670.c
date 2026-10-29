__int64 __fastcall sub_866670(int *a1, _BOOL8 a2, unsigned int **a3, __int64 *a4, _QWORD *a5, __int64 *a6)
{
  unsigned int *v7; // rax
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int *v11; // rax
  unsigned int **v12; // r11
  unsigned int v13; // r10d
  unsigned int v14; // r15d
  int v16; // r15d
  int v19; // [rsp+20h] [rbp-98h]
  unsigned int v20; // [rsp+24h] [rbp-94h]
  unsigned int *v21; // [rsp+30h] [rbp-88h] BYREF
  __int64 v22; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v23[15]; // [rsp+40h] [rbp-78h] BYREF

  v7 = *a3;
  v23[7] = __readfsqword(0x28u);
  v21 = v7;
  v22 = *a4;
  v9 = sub_8664C0(a1, a2, &v21, &v22, a5, a6);
  if ( !v9 )
    return 0;
  v10 = v9;
  v11 = v21;
  v12 = a3;
  v13 = *v21;
  if ( *v21 + 2142961664 > (unsigned int)&stru_20000 )
    goto LABEL_13;
  v20 = v10;
  do
  {
    if ( a2 )
    {
      v14 = v13;
      while ( v14 != -2142961664 )
      {
        if ( v14 == -2142896128 )
        {
          v19 = 2;
          goto LABEL_22;
        }
        v21 = v11 + 1;
        if ( !(unsigned int)sub_8664C0(a1, 1, &v21, &v22, v23, a6) )
          return 0;
        sub_8652E0(3, (__int64)a5, (__int64)v23, a6);
        if ( v14 == -2142830592 )
        {
          sub_865240((__int64)a5, a6, 0);
          if ( !a6 )
            goto LABEL_25;
          goto LABEL_11;
        }
LABEL_24:
        if ( !a6 )
          goto LABEL_25;
LABEL_11:
        v11 = v21;
        v14 = *v21;
        if ( *v21 + 2142961664 > (unsigned int)&stru_20000 )
          goto LABEL_12;
      }
      v19 = 1;
LABEL_22:
      v21 = v11 + 1;
      if ( !(unsigned int)sub_8664C0(a1, v14 != -2142896128, &v21, &v22, v23, a6) )
        return 0;
      sub_8652E0(v19, (__int64)a5, (__int64)v23, a6);
      goto LABEL_24;
    }
    while ( 1 )
    {
      v16 = 2;
      if ( v13 != -2142961664 )
        v16 = 2 * (v13 != -2142896128) + 1;
      v21 = v11 + 1;
      if ( !(unsigned int)sub_8664C0(a1, v13 == -2142896128, &v21, &v22, v23, a6) )
        return 0;
      sub_8652E0(v16, (__int64)a5, (__int64)v23, a6);
      if ( !a6 )
        break;
      v11 = v21;
      v13 = *v21;
      if ( *v21 + 2142961664 > (unsigned int)&stru_20000 )
        goto LABEL_12;
    }
LABEL_25:
    v22 = *a5 + a5[1];
    v11 = v21;
    v13 = *v21;
  }
  while ( *v21 + 2142961664 <= (unsigned int)&stru_20000 );
LABEL_12:
  v10 = v20;
  v12 = a3;
LABEL_13:
  *v12 = v11;
  *a4 = v22;
  return v10;
}
