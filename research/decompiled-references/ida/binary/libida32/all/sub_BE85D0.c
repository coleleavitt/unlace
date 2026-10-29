__int64 __fastcall sub_BE85D0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 a11,
        char a12)
{
  __int64 v15; // rbp
  __int64 v16; // rsi
  _BOOL8 v17; // rdx
  _BOOL8 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v23; // [rsp+0h] [rbp-48h]
  __int64 v24; // [rsp+0h] [rbp-48h]
  char v25; // [rsp+Ch] [rbp-3Ch]

  v15 = a10;
  if ( a5 == a10 )
  {
    v16 = 32;
    v15 = 0;
    if ( a11 )
      goto LABEL_3;
LABEL_9:
    v17 = a4 != 0;
    goto LABEL_4;
  }
  v16 = 8LL * (a10 != 0) + 32;
  if ( !a11 )
    goto LABEL_9;
LABEL_3:
  v17 = 1;
  v16 += 32LL * *(unsigned int *)(a11 + 8);
LABEL_4:
  v18 = v17 + (a2 != 0);
  v19 = a1[294];
  v20 = 16 * v18 + v16;
  a1[304] += v20;
  v21 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= (unsigned __int64)(v20 + v21) && v19 )
  {
    a1[294] = v20 + v21;
  }
  else
  {
    v24 = a5;
    v25 = a6;
    v21 = sub_962430((__int64)(a1 + 294), v20, v20, 3, a5, a6);
    LOBYTE(a6) = v25;
    a5 = v24;
  }
  v23 = v21;
  sub_BD3F90(v21, (__int64)a1, a2, a3, a4, a5, a6, a7, v15, a11, a8, a9, a12);
  return v23;
}

