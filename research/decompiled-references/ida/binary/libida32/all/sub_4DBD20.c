unsigned __int64 __fastcall sub_4DBD20(int *a1, unsigned int a2, unsigned int a3)
{
  int *v3; // r13
  __int64 v4; // rsi
  _QWORD *v5; // rax
  int v7; // eax
  unsigned int v8; // r15d
  unsigned int v9; // r14d
  int v11; // [rsp+0h] [rbp-58h]
  _QWORD *v13; // [rsp+8h] [rbp-50h]
  int v14; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v3 = a1 + 623;
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD **)(*(_QWORD *)a1 + 1560LL);
  v15 = __readfsqword(0x28u);
  v11 = 1;
  v13 = v5;
  while ( 1 )
  {
    v14 = *v3;
    v7 = sub_79B770(v3, v4, a2, 321);
    v8 = sub_3B9110(a1, v7);
    if ( v8 >= a3 )
      break;
    do
    {
      v9 = sub_3B90A0(a1, v8);
      sub_79B4D0(&v14, *(_QWORD *)a1, v9, 65);
      sub_79B4D0(&v14, *(_QWORD *)a1, v9, 83);
      v8 = sub_79B840(&v14, *(_QWORD *)a1, v8, 65);
    }
    while ( v8 < a3 );
    if ( v11 != 14 )
      break;
    ++v3;
    sub_4DABC0(v13);
    v11 = 15;
LABEL_6:
    v4 = *(_QWORD *)a1;
  }
  ++v11;
  ++v3;
  if ( v11 != 17 )
    goto LABEL_6;
  return v15 - __readfsqword(0x28u);
}

