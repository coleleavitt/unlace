__int64 __fastcall sub_4BA320(_QWORD *a1, __int64 a2, int a3)
{
  __int64 *v6; // r13
  _DWORD *v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // r14d
  __int64 v10; // r15
  __int16 v11; // ax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // edx
  __int64 i; // rax
  _QWORD v28[8]; // [rsp+8h] [rbp-40h] BYREF

  v6 = (__int64 *)a1[18];
  if ( *(_WORD *)(a2 + 4) )
  {
    if ( a3 )
      goto LABEL_5;
    goto LABEL_14;
  }
  v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v7 || *v7 != 5 )
  {
    if ( a3 )
      goto LABEL_5;
LABEL_14:
    ++*(_DWORD *)(a2 + 8);
    v28[0] = a2;
    sub_4B2920(a1 + 7, v28);
    return 1;
  }
  if ( !v7[1] )
  {
    v18 = *v6;
    v19 = sub_15D1F10(a2);
    v20 = *(_QWORD *)(v6[19] + 8);
    if ( v20 )
      v21 = *(unsigned int *)(v20 - 4);
    else
      v21 = 0;
    v22 = sub_15DB5C0(v18, v21, v19);
    v28[0] = v22;
    v23 = v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    sub_4B2920(v6 + 18, v28);
    v24 = v6[19];
    ++*(_DWORD *)(a2 + 8);
    v28[0] = a2;
    sub_4B2860((_QWORD *)(v24 + 8), v28);
    sub_15D0A90(v6 + 10, v23, 1);
    sub_15D0A90(v6 + 3, v23, 1);
    v28[0] = v23;
    if ( v23 )
    {
      ++*(_DWORD *)(v23 + 8);
      sub_4B2920(a1 + 7, v28);
      if ( a2 == v23 )
        return 1;
    }
    else
    {
      sub_4B2920(a1 + 7, v28);
    }
    v25 = a1[5];
    if ( v25 )
    {
      v26 = *(_DWORD *)(v25 - 4);
      if ( v26 )
        *(_BYTE *)(v25 + 16LL * (unsigned int)(v26 - 1) + 8) |= 2u;
    }
    return 1;
  }
  if ( !a3 || v7[1] == 9 )
    goto LABEL_14;
LABEL_5:
  if ( (unsigned __int8)sub_15D37A0(v6 + 3, a2) && !(unsigned __int8)sub_15D37A0(v6 + 10, a2) )
    goto LABEL_14;
  v8 = *((_DWORD *)v6 + 42);
  v9 = *((_DWORD *)v6 + 43);
  if ( v8 >= v9 )
  {
    v13 = 2 * v9;
    v14 = sub_186B270(8 * v13);
    v8 = *((_DWORD *)v6 + 42);
    v15 = (__int64 *)v6[20];
    v10 = v14;
    if ( v8 )
    {
      if ( v8 - 1 <= 2 || (__int64 *)v14 == v15 + 1 )
      {
        for ( i = 0; i != v8; ++i )
          *(_QWORD *)(v10 + i * 8) = v15[i];
      }
      else
      {
        v16 = 0;
        do
        {
          *(__m128i *)(v10 + v16 * 8) = _mm_loadu_si128((const __m128i *)&v15[v16]);
          v16 += 2;
        }
        while ( 2LL * (v8 >> 1) != v16 );
        if ( (v8 & 1) != 0 )
          *(_QWORD *)(v10 + 8LL * (v8 & 0xFFFFFFFE)) = v15[v8 & 0xFFFFFFFE];
      }
    }
    if ( v15 != v6 + 22 && v15 )
    {
      sub_186B220(v15);
      v8 = *((_DWORD *)v6 + 42);
    }
    v6[20] = v10;
    *((_DWORD *)v6 + 43) = v13;
  }
  else
  {
    v10 = v6[20];
  }
  *(_QWORD *)(v10 + 8LL * v8) = a2;
  *((_DWORD *)v6 + 42) = v8 + 1;
  v11 = *(_WORD *)(a2 + 4);
  if ( v11 == 1 )
  {
    sub_4BA1B0(a1, a2);
  }
  else
  {
    if ( v11 == 2 )
      goto LABEL_12;
    if ( v11 )
    {
      sub_1872CE0("");
      sub_1873130(114, 226);
    }
    if ( *(_DWORD *)(a2 + 24) )
    {
LABEL_12:
      sub_39B170((__int64)a1, a2, 0, 0, a3 - (a3 != 3));
      return 0;
    }
    v17 = a1[1];
    ++*(_DWORD *)(a2 + 8);
    sub_4B1910(a1[18]);
    ++*(_DWORD *)(a2 + 8);
    v28[0] = a2;
    sub_4B2920(a1 + 7, v28);
    sub_4B1840(a2, v17);
  }
  return 1;
}

