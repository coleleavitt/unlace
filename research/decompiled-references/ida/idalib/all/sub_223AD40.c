__int64 __fastcall sub_223AD40(_QWORD *a1, const void **a2, __int64 a3, void **a4)
{
  unsigned int v5; // ebx
  __int64 v7; // rax
  char *v8; // rsi
  char *v9; // rsi
  __int64 vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  char vars10; // [rsp+10h] [rbp+10h]
  __int64 vars20; // [rsp+20h] [rbp+20h] BYREF
  __int64 vars28; // [rsp+28h] [rbp+28h]
  __int64 vars30; // [rsp+30h] [rbp+30h]

  v5 = 0;
  sub_2239C30((__int64)vars0, (__int64)a1, a2, a4);
  if ( (vars10 & 1) == 0 )
  {
    v7 = vars0[0];
    v8 = (char *)a1[1];
    vars0[0] = 0;
    vars28 = 0;
    vars20 = v7;
    vars30 = a3;
    if ( v8 == (char *)a1[2] )
    {
      sub_1544270((__int64)a1, v8, (__int64)&vars20);
      v9 = (char *)a1[1];
    }
    else
    {
      vars20 = 0;
      v9 = v8 + 24;
      *((_QWORD *)v9 - 3) = v7;
      *((_QWORD *)v9 - 2) = vars28;
      vars28 = 0;
      *((_QWORD *)v9 - 1) = vars30;
      a1[1] = v9;
    }
    v5 = -1431655765 * ((__int64)&v9[-*a1] >> 3);
    sub_2239BD0(&vars20);
  }
  sub_FC2AF0(vars0);
  return v5;
}
