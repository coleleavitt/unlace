unsigned __int64 __fastcall sub_81F3D0(
        _QWORD *a1,
        int a2,
        __int64 a3,
        int a4,
        char *src,
        __int64 a6,
        int a7,
        char *a8,
        __int64 a9,
        int a10)
{
  __int64 v11; // r11
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rbp
  __int64 v18; // rax
  int v20; // [rsp+8h] [rbp-40h]
  int v21; // [rsp+Ch] [rbp-3Ch]

  v11 = a3;
  v14 = 8 * (a6 + a9) + 48;
  v15 = a1[274];
  a1[284] += v14;
  v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v14 + v16 && v15 )
  {
    a1[274] = v14 + v16;
  }
  else
  {
    v21 = a4;
    v20 = a2;
    v18 = sub_81EE10((__int64)(a1 + 274), v14, 3);
    a4 = v21;
    v11 = a3;
    a2 = v20;
    v16 = v18;
  }
  sub_81F0C0(v16, (__int64)a1, a2, v11, a4, a7, src, a6, a8, a9, a10);
  return v16;
}

