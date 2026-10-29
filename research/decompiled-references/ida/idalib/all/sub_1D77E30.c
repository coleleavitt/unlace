__int64 __fastcall sub_1D77E30(__int64 a1, __int64 a2, unsigned int a3, char a4, double a5, __m128 a6)
{
  __int64 v11; // r15
  unsigned int v12; // eax
  void *v13; // r14
  bool v14; // r15
  __int64 v15; // rcx
  __int64 *v16; // r15
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // r13
  __int16 v20; // ax
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rsi
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rsi
  _QWORD *v27; // rdx
  _QWORD *v28; // rsi
  __int64 v29; // [rsp+0h] [rbp-58h]
  __int64 v30; // [rsp+8h] [rbp-50h]
  void *v31[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( (*(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    return 0;
  v29 = *(_QWORD *)a1;
  v11 = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 56LL);
  sub_1504FB0((__int64 *)v31, *(_DWORD *)(v11 + 20) & 0x1FFFFFFF, 0);
  v12 = sub_BBD7B0(v11);
  sub_1D39F20(*(_QWORD *)(v29 + 248), a2, 1, v12, (unsigned __int64 *)v31);
  v13 = v31[0];
  if ( ((__int64)v31[0] & 1) != 0 )
  {
    v14 = (((unsigned __int64)v31[0] >> 1) & ~(-1LL << ((unsigned __int64)v31[0] >> 58))) != 0;
    goto LABEL_5;
  }
  v22 = *(_QWORD **)v31[0];
  v23 = 8LL * *((unsigned int *)v31[0] + 2);
  v24 = (_QWORD *)(*(_QWORD *)v31[0] + v23);
  v25 = v23 >> 3;
  v26 = v23 >> 5;
  if ( v26 )
  {
    v14 = v22 != v24;
    if ( !*v22 )
    {
      v14 = v24 != v22 + 1;
      if ( !v22[1] )
      {
        v14 = v24 != v22 + 2;
        if ( !v22[2] )
        {
          v27 = *(_QWORD **)v31[0];
          v28 = &v22[4 * v26];
          v14 = v24 != v22 + 3;
          if ( !v22[3] )
          {
            while ( 1 )
            {
              v21 = v27 + 4;
              if ( v28 == v27 + 4 )
              {
                v25 = v24 - v21;
                goto LABEL_29;
              }
              if ( v27[4] )
                goto LABEL_40;
              if ( v27[5] )
              {
                v14 = v24 != v27 + 5;
                goto LABEL_38;
              }
              if ( v27[6] )
              {
                v14 = v24 != v27 + 6;
                goto LABEL_38;
              }
              if ( v27[7] )
                break;
              v27 += 4;
            }
            v14 = v24 != v27 + 7;
          }
        }
      }
    }
LABEL_38:
    if ( !v31[0] )
      goto LABEL_5;
    goto LABEL_34;
  }
  v21 = *(_QWORD **)v31[0];
LABEL_29:
  switch ( v25 )
  {
    case 2LL:
      goto LABEL_11;
    case 3LL:
      v14 = v21 != v24;
      if ( *v21 )
        goto LABEL_38;
      ++v21;
LABEL_11:
      if ( *v21 )
        goto LABEL_40;
      ++v21;
LABEL_13:
      if ( !*v21 )
      {
        v14 = 0;
        if ( !v31[0] )
          return 0;
        goto LABEL_34;
      }
LABEL_40:
      v14 = v24 != v21;
      goto LABEL_38;
    case 1LL:
      goto LABEL_13;
  }
  if ( !v31[0] )
    return 0;
  v14 = 0;
LABEL_34:
  if ( v22 != (_QWORD *)((char *)v31[0] + 16) )
    free(v22);
  operator delete(v13, 0x48u);
LABEL_5:
  if ( !v14 )
    return 0;
  v15 = *(_QWORD *)(a1 + 64);
  v16 = *(__int64 **)(a1 + 56);
  v17 = *(_QWORD *)(a1 + 48);
  v18 = *(_QWORD *)a1;
  if ( a4 )
    return sub_1D774E0(
             v18,
             **(_QWORD **)(a1 + 16),
             **(_DWORD **)(a1 + 24),
             a2,
             **(_QWORD **)(a1 + 32),
             **(_DWORD **)(a1 + 40),
             a5,
             a6,
             0,
             v17,
             v16,
             v15,
             0,
             a3,
             0,
             0);
  v30 = *(_QWORD *)(a1 + 64);
  v19 = *(_QWORD *)(**(_QWORD **)(a1 + 72) + 8LL * a3);
  v20 = sub_C0EB40(v19, *(_QWORD *)(v18 + 248), nullptr, v15, a3);
  return sub_1D774E0(
           *(_QWORD *)a1,
           **(_QWORD **)(a1 + 16),
           **(_DWORD **)(a1 + 24),
           a2,
           *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 72) + 8LL * a3) + 8LL),
           v20,
           a5,
           a6,
           v19,
           v17,
           v16,
           v30,
           0,
           a3,
           0,
           0);
}
