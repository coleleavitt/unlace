unsigned __int64 __fastcall sub_5B4920(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  _QWORD *v6; // rbp
  __int64 v7; // rsi
  int v9; // eax
  __int64 v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+10h] [rbp-78h]
  __int64 v23; // [rsp+18h] [rbp-70h]
  __int64 v24; // [rsp+28h] [rbp-60h]
  unsigned __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-40h]

  v4 = a2 + a4;
  v6 = a1 + 307;
  v7 = *a1;
  v28 = __readfsqword(0x28u);
  v9 = sub_7BE710(a1 + 307, v7, -1, 65);
  v22 = v9;
  v23 = a3 - a2;
  if ( v9 )
  {
    v10 = 0;
    while ( 1 )
    {
      v21 = v10++;
      v13 = sub_7BE710(v6, *a1, v10, 73);
      v14 = *a1;
      v26 = v13;
      v19 = v13;
      v15 = sub_7BE710(v6, v14, v13, 65);
      v20 = sub_3BDE50(a1, v15 - 1);
      if ( v20 >= a2 && v20 < v4 )
        break;
      if ( v19 >= a2 && v19 < v4 && v19 + v23 == v20 )
      {
        v24 = v20;
        sub_5B3440(*a1, &v26, a1[307], v23, v21);
        v16 = sub_3BDD60(a1, v24);
        v17 = *a1;
        v27 = v16 + 1;
        sub_7BE7C0(v6, v17, v26, &v27, 8, 65);
        if ( v22 == v10 )
          return v28 - __readfsqword(0x28u);
      }
      else
      {
LABEL_6:
        if ( v22 == v10 )
          return v28 - __readfsqword(0x28u);
      }
    }
    if ( v20 == v19 )
    {
      v25 = v20;
      sub_5B3440(*a1, &v26, a1[307], v23, v21);
      v19 = v26;
      v20 = v25;
    }
    v11 = sub_3BDD60(a1, v23 + v20);
    v12 = *a1;
    v27 = v11 + 1;
    sub_7BE7C0(v6, v12, v19, &v27, 8, 65);
    goto LABEL_6;
  }
  return v28 - __readfsqword(0x28u);
}
