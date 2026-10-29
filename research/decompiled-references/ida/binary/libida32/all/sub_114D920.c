_QWORD *__fastcall sub_114D920(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        unsigned int a11,
        char a12,
        char a13)
{
  _BYTE *v15; // rsi
  __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _BYTE *v19; // rsi
  __int64 v20; // rdx
  _QWORD *v21; // rax
  _BYTE *v22; // rsi
  __int64 v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  _BYTE *v29; // rsi
  _BYTE *v31; // rsi
  __int64 v32; // rdx
  _BYTE *v33; // rsi
  __int64 v34; // rdx
  _BYTE *v35; // rsi
  __int64 v36; // rdx
  void *v40[2]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v41[16]; // [rsp+40h] [rbp-58h] BYREF
  char v42; // [rsp+50h] [rbp-48h]

  *a1 = a1 + 2;
  a1[1] = 0xC00000000LL;
  if ( a12 )
  {
    v35 = (_BYTE *)a2[60];
    v36 = a2[61];
    v40[0] = v41;
    sub_1148360(v40, v35, (__int64)&v35[v36]);
    v42 = 0;
    sub_114D820((__int64)a1, (__int64)v40);
    if ( v40[0] != v41 )
      operator delete(v40[0]);
  }
  v15 = (_BYTE *)a2[51];
  v16 = a2[52];
  v40[0] = v41;
  sub_1148360(v40, v15, (__int64)&v15[v16]);
  v42 = 1;
  sub_114D820((__int64)a1, (__int64)v40);
  if ( v40[0] != v41 )
    operator delete(v40[0]);
  if ( a13 )
  {
    if ( !a12 )
      goto LABEL_6;
    v31 = (_BYTE *)a2[54];
    v32 = a2[55];
    v40[0] = v41;
    sub_1148360(v40, v31, (__int64)&v31[v32]);
    v42 = 0;
  }
  else
  {
    v33 = (_BYTE *)a2[54];
    v34 = a2[55];
    v40[0] = v41;
    sub_1148360(v40, v33, (__int64)&v33[v34]);
    v42 = 1;
  }
  sub_114D820((__int64)a1, (__int64)v40);
  if ( v40[0] != v41 )
    operator delete(v40[0]);
LABEL_6:
  v17 = a2 + 84;
  v40[0] = v41;
  if ( a6 )
    v17 = a2 + 81;
  sub_1148360(v40, (_BYTE *)*v17, *v17 + v17[1]);
  v42 = 1;
  sub_114D820((__int64)a1, (__int64)v40);
  if ( v40[0] != v41 )
    operator delete(v40[0]);
  if ( a8 || (v18 = a2 + 78, a9) )
    v18 = a2 + 75;
  v19 = (_BYTE *)*v18;
  v20 = v18[1];
  v40[0] = v41;
  sub_1148360(v40, v19, (__int64)&v19[v20]);
  v42 = 1;
  sub_114D820((__int64)a1, (__int64)v40);
  if ( v40[0] != v41 )
    operator delete(v40[0]);
  if ( a9 || (v21 = a2 + 72, a7) )
    v21 = a2 + 69;
  v22 = (_BYTE *)*v21;
  v23 = v21[1];
  v40[0] = v41;
  sub_1148360(v40, v22, (__int64)&v22[v23]);
  v42 = 1;
  sub_114D820((__int64)a1, (__int64)v40);
  if ( v40[0] != v41 )
    operator delete(v40[0]);
  v24 = a2 + 90;
  v40[0] = v41;
  if ( a10 )
    v24 = a2 + 87;
  sub_1148360(v40, (_BYTE *)*v24, *v24 + v24[1]);
  v42 = 1;
  sub_114D820((__int64)a1, (__int64)v40);
  if ( v40[0] != v41 )
    operator delete(v40[0]);
  v25 = a2 + 66;
  v40[0] = v41;
  if ( a5 )
    v25 = a2 + 63;
  sub_1148360(v40, (_BYTE *)*v25, *v25 + v25[1]);
  v42 = 1;
  sub_114D820((__int64)a1, (__int64)v40);
  if ( v40[0] != v41 )
    operator delete(v40[0]);
  v40[0] = v41;
  sub_1148360(v40, a3, (__int64)&a3[a4]);
  v42 = 1;
  sub_114D820((__int64)a1, (__int64)v40);
  if ( v40[0] != v41 )
    operator delete(v40[0]);
  v26 = a2[95];
  if ( v26 )
  {
    v27 = a2 + 94;
    do
    {
      while ( a11 <= *(_DWORD *)(v26 + 32) )
      {
        v27 = (_QWORD *)v26;
        v26 = *(_QWORD *)(v26 + 16);
        if ( !v26 )
          goto LABEL_33;
      }
      v26 = *(_QWORD *)(v26 + 24);
    }
    while ( v26 );
LABEL_33:
    if ( a2 + 94 != v27 && a11 >= *((_DWORD *)v27 + 8) )
    {
      v28 = v27[6];
      if ( v28 )
      {
        v29 = (_BYTE *)v27[5];
        v40[0] = v41;
        sub_1148360(v40, v29, (__int64)&v29[v28]);
        v42 = 1;
        sub_114D820((__int64)a1, (__int64)v40);
        if ( v40[0] != v41 )
          operator delete(v40[0]);
      }
    }
  }
  return a1;
}

