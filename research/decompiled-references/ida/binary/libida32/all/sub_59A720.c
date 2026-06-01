unsigned __int64 __fastcall sub_59A720(_QWORD *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // eax
  _QWORD *v6; // rbp
  __int64 v7; // rsi
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rsi
  int v16; // eax
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rsi
  unsigned int v21; // r14d
  unsigned int v22; // eax
  unsigned int v23; // [rsp+Ch] [rbp-5Ch]
  int v24; // [rsp+18h] [rbp-50h]
  int v25; // [rsp+1Ch] [rbp-4Ch]
  unsigned int v26; // [rsp+1Ch] [rbp-4Ch]
  unsigned int v27; // [rsp+20h] [rbp-48h] BYREF
  int v28; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v4 = a2 + a4;
  v6 = a1 + 294;
  v7 = *a1;
  v29 = __readfsqword(0x28u);
  v23 = v4;
  v9 = sub_79B3A0(a1 + 294, v7, 0xFFFFFFFFLL, 65);
  v10 = v9;
  v24 = a3 - a2;
  if ( v9 )
  {
    v11 = 0;
    while ( 1 )
    {
      v14 = sub_79B3A0(v6, *a1, (unsigned int)(v11 + 1), 73);
      v15 = *a1;
      v27 = v14;
      v21 = v14;
      v16 = sub_79B3A0(v6, v15, v14, 65);
      v22 = sub_3B9110(a1, v16 - 1);
      if ( v22 >= a2 && v22 < v23 )
        break;
      if ( v21 >= a2 && v21 < v23 && v24 + v21 == v22 )
      {
        v17 = v11;
        v25 = v22;
        ++v11;
        sub_599280(*a1, &v27, *((_DWORD *)a1 + 588), v24, v17);
        v18 = sub_3B90A0(a1, v25);
        v19 = *a1;
        v28 = v18 + 1;
        sub_79B440(v6, v19, v27, &v28, 4, 65);
        if ( v11 == v10 )
          return v29 - __readfsqword(0x28u);
      }
      else
      {
LABEL_6:
        if ( ++v11 == v10 )
          return v29 - __readfsqword(0x28u);
      }
    }
    if ( v22 == v21 )
    {
      v26 = v22;
      sub_599280(*a1, &v27, *((_DWORD *)a1 + 588), v24, v11);
      v21 = v27;
      v22 = v26;
    }
    v12 = sub_3B90A0(a1, v24 + v22);
    v13 = *a1;
    v28 = v12 + 1;
    sub_79B440(v6, v13, v21, &v28, 4, 65);
    goto LABEL_6;
  }
  return v29 - __readfsqword(0x28u);
}

