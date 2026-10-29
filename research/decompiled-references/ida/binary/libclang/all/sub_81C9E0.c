unsigned __int64 __fastcall sub_81C9E0(_QWORD *a1, __int64 a2, int a3, int a4, _QWORD *a5, __int64 a6)
{
  __int64 v8; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v14; // rax
  int v15; // [rsp+Ch] [rbp-3Ch]

  v8 = 8 * a6 + 32;
  v11 = a1[274];
  a1[284] += v8;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v8 + v12 && v11 )
  {
    a1[274] = v8 + v12;
  }
  else
  {
    v15 = a4;
    v14 = sub_804090((__int64)(a1 + 274), v8, 3);
    a4 = v15;
    v12 = v14;
  }
  sub_81C780(v12, (__int64)a1, a2, a3, a4, a6, a5, a6);
  return v12;
}

