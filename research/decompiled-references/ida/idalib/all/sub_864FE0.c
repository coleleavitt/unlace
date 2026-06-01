__int64 __fastcall sub_864FE0(_DWORD *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rdi
  _WORD *v13; // rsi
  unsigned __int64 v14; // rbp
  _DWORD *v15; // rax
  int v16; // edx
  _DWORD *v17; // r9
  __int64 v18; // rax
  int v19; // edx
  unsigned __int64 v20; // rax
  __int64 i; // rdx
  int v22; // r10d
  int v23; // edx
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rbx
  __int16 v26; // ax
  _WORD *v27; // rsi
  __int16 v28; // dx
  __int16 *v29; // rax
  __int16 v30; // r8
  __int64 v31; // rsi
  __int64 v33; // [rsp+8h] [rbp-50h]
  unsigned __int16 v34; // [rsp+16h] [rbp-42h]
  __int64 v35; // [rsp+18h] [rbp-40h]

  v33 = *(_QWORD *)(a4 + 216);
  v34 = *(_WORD *)(a4 + 208);
  v7 = sub_8648E0(a1, a2, a3, a4);
  if ( !v7 )
    return 0;
  v8 = v7;
  v35 = 2 * v7 + 24;
  v9 = (_QWORD *)(**(__int64 (__fastcall ***)(__int64, _QWORD))a4)(v35, *(_QWORD *)(*(_QWORD *)a4 + 16LL));
  v10 = v9;
  if ( !v9 )
  {
    *a3 = 121;
    *(_QWORD *)(a4 + 168) = a2;
    return 0;
  }
  *v9 = 0;
  v9[1] = v8;
  v11 = *(_QWORD **)(a4 + 344);
  if ( v11 )
    *v11 = v10;
  else
    *(_QWORD *)(a4 + 336) = v10;
  *(_QWORD *)(a4 + 344) = v10;
  v12 = (__int64)(v10 + 3);
  v13 = v10 + 3;
  v14 = 16LL * v34 + v33;
  v15 = a1;
LABEL_6:
  while ( 1 )
  {
    v16 = v15[1];
    LOWORD(v16) = 0;
    if ( v16 != -2145910784 )
      break;
LABEL_10:
    v17 = v15 + 2;
    v18 = *(_QWORD *)(a4 + 216) + 16LL * (unsigned int)v15[2];
    v19 = *(_DWORD *)(v18 + 8);
    v20 = v18 + 16;
    *v13++ = v19;
    for ( i = *(_QWORD *)(v20 - 16); v20 < v14; *(v13 - 1) = v22 )
    {
      while ( *(_QWORD *)v20 != i )
      {
        v20 += 16LL;
        if ( v20 >= v14 )
          goto LABEL_15;
      }
      v22 = *(_DWORD *)(v20 + 8);
      v20 += 16LL;
      ++v13;
    }
LABEL_15:
    v15 = v17;
  }
  while ( 1 )
  {
    if ( v16 == -2145845248 )
    {
      v23 = v15[2];
      ++v13;
      v15 += 2;
      *(v13 - 1) = v23;
      goto LABEL_6;
    }
    if ( v16 != -2146041856 )
      break;
    v16 = v15[4];
    v15 += 3;
    LOWORD(v16) = 0;
    if ( v16 == -2145910784 )
      goto LABEL_10;
  }
  v10[2] = v15 + 1 - a1 - 1;
  if ( v8 != 1 )
  {
    v24 = v8 >> 1;
    do
      sub_864780(v12, v8, --v24);
    while ( v24 );
    v25 = v8 - 1;
    do
    {
      v26 = *((_WORD *)v10 + 12);
      *((_WORD *)v10 + 12) = *((_WORD *)v10 + v25 + 12);
      *((_WORD *)v10 + v25 + 12) = v26;
      sub_864780(v12, v25--, 0);
    }
    while ( v25 );
    v27 = (_WORD *)v10 + 13;
    v28 = *((_WORD *)v10 + 12);
    if ( (char *)v10 + 26 >= (char *)v10 + v35 )
    {
      v31 = 1;
    }
    else
    {
      v29 = (__int16 *)v10 + 13;
      do
      {
        v30 = v28;
        v28 = *v29;
        if ( *v29 != v30 )
          *v27++ = v28;
        ++v29;
      }
      while ( v29 < (__int16 *)((char *)v10 + v35) );
      v31 = ((__int64)v27 - v12) >> 1;
    }
    v10[1] = v31;
  }
  return 1;
}
