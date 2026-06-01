__int64 __fastcall sub_40A460(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  __int64 v7; // rsi
  int v8; // eax
  bool v9; // zf
  _DWORD *v10; // rdi
  double v11; // rdx
  int v12; // eax
  double v13; // [rsp+10h] [rbp-58h] BYREF
  double *v14; // [rsp+18h] [rbp-50h] BYREF
  int v15; // [rsp+24h] [rbp-44h] BYREF
  _DWORD *v16; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v17[32]; // [rsp+30h] [rbp-38h] BYREF

  v5 = sub_452DF0(a1, a2, &v16);
  if ( v5 || (unsigned int)sub_47CE30(a1, v16, &v14, &v15) )
    return 1;
  if ( v15 == 4 )
  {
    v10 = v16;
    v11 = *v14;
    v12 = *v16 - 1;
    v13 = *v14;
    *v16 = v12;
    if ( v12 <= 0 )
    {
      sub_47B120(v10);
      v11 = v13;
    }
    if ( !(unsigned int)sub_493E90(a1, v17, v11) )
    {
      v7 = sub_47CCC0(v17, v17, 1);
      v16 = (_DWORD *)v7;
      goto LABEL_8;
    }
    return 1;
  }
  if ( v15 > 4 )
  {
    if ( v15 == 5 )
    {
      v5 = 1;
      sub_47BA50(a1, v16, &v13);
    }
    goto LABEL_10;
  }
  if ( v15 >= 1 )
  {
    v7 = (__int64)v16;
LABEL_8:
    if ( *(_UNKNOWN ***)(v7 + 24) == &off_6560E0 )
    {
      v5 = 0;
      *a3 = *(_QWORD *)(v7 + 32);
      goto LABEL_11;
    }
    v5 = sub_47BF00(a1, v7, a3);
  }
LABEL_10:
  v7 = (__int64)v16;
LABEL_11:
  v8 = *(_DWORD *)v7 - 1;
  v9 = *(_DWORD *)v7 == 1;
  *(_DWORD *)v7 = v8;
  if ( v8 < 0 || v9 )
    sub_47B120(v7);
  return v5;
}

