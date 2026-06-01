unsigned __int64 __fastcall sub_8C77F0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7,
        int a8,
        unsigned __int64 a9,
        unsigned int a10)
{
  int v10; // eax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-58h]
  __int64 v21; // [rsp+8h] [rbp-50h]
  _QWORD v22[8]; // [rsp+18h] [rbp-40h] BYREF

  v10 = a5;
  if ( a10 >= (unsigned int)a5 )
    v10 = a10;
  v14 = 8 * (v10 + 2 - ((unsigned int)(HIDWORD(a9) == 0) - 1));
  v15 = a1[274];
  v16 = v14 + 24;
  a1[284] += v16;
  v17 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v16 + v17 && v15 )
  {
    a1[274] = v16 + v17;
  }
  else
  {
    v21 = a5;
    v20 = a4;
    v19 = sub_8C1090((__int64)(a1 + 274), v16, 3);
    a5 = v21;
    a4 = v20;
    v17 = v19;
  }
  v22[0] = a3;
  sub_80AF80(v17, 0x5Eu, a2, (__int64)v22, 1, a6, a4, a5, a7, a8, a9, a10, 0);
  return v17;
}

