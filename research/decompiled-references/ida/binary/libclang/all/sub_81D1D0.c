unsigned __int64 __fastcall sub_81D1D0(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v12; // r11
  _QWORD *v13; // r10
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r12
  __int64 v19; // rax
  unsigned int v20; // [rsp+8h] [rbp-30h]
  int v21; // [rsp+Ch] [rbp-2Ch]

  v12 = a8;
  v13 = a7;
  v14 = 32 * (a10 + 1) + 8 * ((44 * a8 != 0) + ((44 * a8 - (unsigned __int64)(44 * a8 != 0)) >> 3));
  v15 = a1[274];
  a1[284] += v14;
  v16 = v14 + ((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[275] >= v16 && v15 )
  {
    a1[274] = v16;
    v17 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v21 = a5;
    v20 = a4;
    v19 = sub_804090((__int64)(a1 + 274), v14, 3);
    v13 = a7;
    v12 = a8;
    a5 = v21;
    a4 = v20;
    v17 = v19;
  }
  sub_81CFF0(v17, a2, a3, a4, a5, v16, v13, v12, a9);
  return v17;
}

