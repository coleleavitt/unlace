__int64 __fastcall sub_405ED0(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v7; // r15d
  __int64 v8; // r13
  __int64 v10; // r14
  unsigned int v11; // ebx
  __int64 v12; // rbx
  _DWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rsi
  unsigned int v20; // [rsp+1Ch] [rbp-BCh] BYREF
  __int64 v21; // [rsp+20h] [rbp-B8h] BYREF
  int v22; // [rsp+2Ch] [rbp-ACh] BYREF
  __int64 v23; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-A0h]
  __int64 v25; // [rsp+48h] [rbp-90h]
  unsigned int v26; // [rsp+50h] [rbp-88h]
  unsigned int v27; // [rsp+58h] [rbp-80h]
  __int64 v28; // [rsp+70h] [rbp-68h]
  __int64 v29; // [rsp+78h] [rbp-60h]
  __int64 v30; // [rsp+80h] [rbp-58h]

  v7 = -15;
  v8 = sub_48B5D0(a2);
  if ( (unsigned int)(a3 - 3) > 1 )
  {
    sub_458930(a2, 1, a4, "option data ?...?");
    return 1;
  }
  if ( (unsigned int)sub_4584C0(a2, a4[1], (unsigned int)off_6532A0, 8, 5354099, 0, (__int64)&v22)
    || a3 > 3 && (unsigned int)sub_47BF00(a2, a4[3], &v21) )
  {
    return 1;
  }
  v10 = sub_40D5E0(a4[2], &v20);
  switch ( v22 )
  {
    case 0:
      if ( a3 <= 3 )
        v21 = sub_4C1750(0, 0, 0);
      v18 = sub_4C1750(v21, v10, v20);
      goto LABEL_34;
    case 1:
      if ( a3 <= 3 )
        v21 = sub_4C1D10(0, 0, 0);
      v18 = sub_4C1D10(v21, v10, v20);
LABEL_34:
      sub_47BE70(v8, v18);
      return 0;
    case 2:
      v7 = 15;
      goto LABEL_26;
    case 3:
LABEL_26:
      v17 = -1;
      if ( a3 > 3 )
        v17 = v21;
      v23 = v10;
      v24 = v20;
      v21 = v17;
      v26 = (int)v20 / 1000 + v20 + 12;
      sub_40D530(v8, v26);
      v25 = sub_40D5E0(v8, 0);
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v11 = sub_4C26E0((unsigned int)&v23, v21, 8, v7, 9, 0, (__int64)"1.3.1", 112);
      if ( v11 )
        goto LABEL_29;
      v11 = sub_4C38A0(&v23, 4);
      if ( v11 == 1 )
      {
        v11 = sub_4C21D0(&v23);
        goto LABEL_10;
      }
      sub_4C21D0(&v23);
      if ( !v11 )
        v11 = -5;
      goto LABEL_29;
    case 4:
      v7 = 15;
      goto LABEL_15;
    case 5:
LABEL_15:
      v15 = 0x4000;
      if ( a3 > 3 )
        v15 = v21;
      v21 = v15;
      v16 = v15;
      if ( v15 <= 0 )
      {
        v19 = "invalid buffer size";
        goto LABEL_30;
      }
      break;
    case 6:
      v7 = 15;
      goto LABEL_13;
    case 7:
LABEL_13:
      v12 = sub_40FB00(120);
      v13 = (_DWORD *)sub_47B0B0();
      ++*v13;
      *(_QWORD *)(v12 + 112) = v13;
      *(_QWORD *)(v12 + 64) = 0;
      *(_QWORD *)(v12 + 72) = 0;
      *(_QWORD *)(v12 + 80) = 0;
      *(_QWORD *)v12 = 0;
      *(_DWORD *)(v12 + 8) = 0;
      sub_4C5710(v12, v7, "1.3.1", 112);
      v14 = sub_47ACD0(a4[2], 0);
      sub_407770(a2, v14, sub_405CF0, v12, sub_405EA0);
      return 0;
    default:
      goto LABEL_11;
  }
  while ( 1 )
  {
    v26 = v16;
    v28 = 0;
    v29 = 0;
    v23 = v10;
    v24 = v20 + 1;
    sub_40D530(v8, v16);
    v25 = sub_40D5E0(v8, 0);
    v11 = sub_4C5710(&v23, v7, "1.3.1", 112);
    if ( v11 )
      break;
    v11 = sub_4C5A30(&v23, 4);
    if ( v11 == 1 )
    {
      v11 = sub_4C7330(&v23);
      break;
    }
    sub_4C7330(&v23);
    if ( v11 )
      break;
LABEL_20:
    sub_40D530(v8, 0);
    v21 *= 2;
    v16 = v21;
  }
  if ( v11 == -5 )
    goto LABEL_20;
LABEL_10:
  if ( !v11 )
  {
LABEL_11:
    sub_40D530(v8, v27);
    return 0;
  }
LABEL_29:
  v19 = (const char *)sub_4C9B60(v11);
LABEL_30:
  sub_48B860(a2, v19, 0);
  return 1;
}

