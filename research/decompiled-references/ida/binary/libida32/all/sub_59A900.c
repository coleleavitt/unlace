__int64 __fastcall sub_59A900(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  _QWORD *v5; // r13
  int v6; // eax
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  unsigned int v9; // ebp
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rsi
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v17; // [rsp+0h] [rbp-68h]
  __int64 v20; // [rsp+10h] [rbp-58h]
  unsigned int v21; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v3 = 1;
  v4 = *a1;
  v22 = __readfsqword(0x28u);
  v5 = a1 + 294;
  v6 = sub_79B3A0(a1 + 294, v4, 0xFFFFFFFFLL, 65);
  v17 = 0;
  v7 = v6;
  v20 = v6;
  if ( !v6 )
    return sub_79B4D0(v5, *a1, 0xFFFFFFFFLL, 65);
  while ( 1 )
  {
    v9 = sub_79B3A0(v5, *a1, (unsigned int)v3, 73);
    v10 = sub_79B3A0(v5, *a1, v9, 65);
    v11 = sub_3B9110(a1, v10 - 1);
    v12 = *a1;
    if ( v11 < a2 || v11 >= a3 )
      break;
    sub_79B4D0(v5, v12, (unsigned int)v3, 73);
    sub_79B4D0(v5, *a1, v9, 65);
    sub_79B4D0(v5, *a1, v9, 83);
    sub_79B4D0(v5, *a1, v9, 70);
    --v20;
    v8 = v3 + 1;
    if ( v3 == v7 )
      goto LABEL_8;
LABEL_4:
    v3 = v8;
  }
  v21 = v9;
  sub_79B440(v5, v12, (unsigned int)++v17, &v21, 4, 73);
  v8 = v3 + 1;
  if ( v3 != v7 )
    goto LABEL_4;
LABEL_8:
  if ( v17 < v7 )
  {
    v13 = v17 + 1;
    do
    {
      sub_79B4D0(v5, *a1, (unsigned int)v13, 73);
      v14 = v13++;
    }
    while ( v14 != v7 );
  }
  if ( v20 )
  {
    v15 = *a1;
    v21 = v20;
    sub_79B440(v5, v15, 0xFFFFFFFFLL, &v21, 4, 65);
    return v22 - __readfsqword(0x28u);
  }
  return sub_79B4D0(v5, *a1, 0xFFFFFFFFLL, 65);
}

