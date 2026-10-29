__int64 *__fastcall sub_BE8720(
        _QWORD *a1,
        __int64 a2,
        char a3,
        int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        int a11,
        int a12,
        __int64 a13,
        __int64 a14,
        char a15,
        char a16,
        char a17)
{
  __int64 v20; // rdx
  __int64 v21; // rbp
  _BOOL8 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 *v26; // r12
  __int64 v28; // rax
  __int64 v29; // [rsp+0h] [rbp-48h]
  __int64 v30; // [rsp+8h] [rbp-40h]

  v20 = 56;
  v21 = a13;
  if ( a8 == (a9 & 0xFFFFFFFFFFFFFFF8LL) )
  {
    v20 = 8LL * (((*(_BYTE *)(a8 + 29) >> 5) & 3) != (a9 & 3)) + 48;
    if ( a13 )
      goto LABEL_3;
LABEL_9:
    v22 = a7 != 0;
    goto LABEL_4;
  }
  if ( !a13 )
    goto LABEL_9;
LABEL_3:
  v20 += 32LL * *(unsigned int *)(a13 + 8);
  v22 = 1;
LABEL_4:
  v23 = v20 + 16 * (v22 + (a5 != 0));
  v24 = a1[294];
  a1[304] += v23;
  v25 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v23 + v25 && v24 )
  {
    a1[294] = v23 + v25;
    v26 = (__int64 *)((v24 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v29 = a5;
    v30 = a6;
    v28 = sub_962430((__int64)(a1 + 294), v23, v23, 3, a5, a6);
    a6 = v30;
    a5 = v29;
    v26 = (__int64 *)v28;
  }
  sub_BD5E70(v26, a2, a3, a4, a5, a6, a7, a8, a9, (__int64)&a10, v21, a14, a15, a16, a17);
  return v26;
}

