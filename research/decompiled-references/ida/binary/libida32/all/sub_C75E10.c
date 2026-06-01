unsigned __int64 __fastcall sub_C75E10(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        unsigned __int64 a9,
        unsigned int a10)
{
  int v10; // eax
  _QWORD *v12; // r10
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rbp
  __int64 v18; // rax
  __int64 v20; // [rsp+10h] [rbp-58h]
  __int64 v21; // [rsp+18h] [rbp-50h]
  _QWORD v22[8]; // [rsp+28h] [rbp-40h] BYREF

  v10 = a5;
  v12 = a4;
  if ( a10 > (unsigned int)a5 )
    v10 = a10;
  v14 = 8 * ((unsigned int)(HIDWORD(a9) != 0) + v10 + 2) + 32;
  v15 = a1[294];
  a1[304] += v14;
  v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v14 + v16 && v15 )
  {
    a1[294] = v14 + v16;
  }
  else
  {
    v21 = a6;
    v20 = a5;
    v18 = sub_962430((__int64)(a1 + 294), v14, v14, 3, a5, a6);
    a6 = v21;
    a5 = v20;
    v16 = v18;
    v12 = a4;
  }
  v22[0] = a3;
  sub_BD5A80(v16, 0x5Du, a2, (__int64)v22, 1u, a6, v12, a5, a7, a8, (unsigned int)a9 | (HIDWORD(a9) << 32), a10, 0);
  return v16;
}

