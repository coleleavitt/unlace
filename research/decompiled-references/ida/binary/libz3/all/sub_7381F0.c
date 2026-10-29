__int64 __fastcall sub_7381F0(__int64 a1, _QWORD *a2, __int64 a3)
{
  _DWORD **v5; // rbx
  unsigned __int64 v6; // r14
  _DWORD *v7; // r13
  bool v8; // zf
  __int64 *v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  int v19; // edx
  _DWORD *v20; // rbp
  unsigned int v21; // edx
  unsigned int v22; // r12d
  _DWORD **v23; // rbx
  __int64 v25; // r12
  __int64 v26; // rax
  _QWORD *v27; // rdi
  __int64 v28; // rax
  __int64 i; // rax
  __int64 v30; // [rsp+8h] [rbp-80h]
  __int64 v31; // [rsp+10h] [rbp-78h]
  __int64 *v32; // [rsp+28h] [rbp-60h]
  char v33[8]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v34; // [rsp+40h] [rbp-48h] BYREF
  __int64 v35; // [rsp+48h] [rbp-40h]

  sub_EE4F60("bv-bound-chk");
  sub_EE5110("bv-bound-chk");
  v5 = *(_DWORD ***)a3;
  v6 = *(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8);
  if ( *(_QWORD *)a3 < v6 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = v7[8]-- == 1;
          if ( v8 )
            break;
        }
        if ( (unsigned __int64)++v5 >= v6 )
          goto LABEL_7;
      }
      ++v5;
      sub_ED44E0(v7);
      sub_186B220(v7);
    }
    while ( (unsigned __int64)v5 < v6 );
  }
LABEL_7:
  *(_DWORD *)(a3 + 8) = 0;
  v30 = *(_QWORD *)(a1 + 16);
  sub_EE4940(v33, "bv-bound-chk", *a2);
  v9 = (__int64 *)*a2;
  v10 = *(_QWORD *)(*a2 + 72LL);
  if ( !v10 )
    goto LABEL_27;
  v11 = *(_BYTE *)(v10 + 3) >> 6;
  if ( v11 )
  {
    if ( v11 != 1 )
    {
LABEL_10:
      if ( v11 == 2 )
        v12 = (unsigned int)(*(_DWORD *)(v10 + 4) - 1);
      else
        v12 = *(unsigned int *)(v10 + 4);
      goto LABEL_12;
    }
  }
  else
  {
    do
    {
      v10 = *(_QWORD *)(v10 + 16);
      v11 = *(_BYTE *)(v10 + 3) >> 6;
    }
    while ( !v11 );
    if ( v11 != 1 )
      goto LABEL_10;
  }
  v12 = (unsigned int)(*(_DWORD *)(v10 + 4) + 1);
LABEL_12:
  if ( !(_DWORD)v12 )
    goto LABEL_27;
  v31 = v12;
  v13 = 0;
  v14 = 0;
  v15 = *v9;
LABEL_18:
  if ( (*((_BYTE *)v9 + 123) & 0x20) == 0 )
  {
    v18 = v9[9];
    v19 = 17;
    while ( 1 )
    {
      if ( *(char *)(v18 + 3) < 0 )
      {
        if ( *(_BYTE *)(v18 + 3) >> 6 != 2 )
        {
          v16 = (__int64 *)(*(_QWORD *)(v18 + 16) + 8 * v13);
          goto LABEL_16;
        }
      }
      else if ( *(_DWORD *)(v18 + 4) == (_DWORD)v13 )
      {
        v16 = (__int64 *)(v18 + 8);
LABEL_16:
        v17 = *v16;
        v34 = v14;
        v35 = v15;
        sub_73C020(v30, v17, &v34, v30 + 496);
        v14 = v34;
        v15 = v35;
        sub_EDBFA0(*a2);
        if ( ++v13 == v31 )
          break;
        v9 = (__int64 *)*a2;
        goto LABEL_18;
      }
      v18 = *(_QWORD *)(v18 + 16);
      if ( !--v19 )
      {
        v32 = v9;
        sub_233F80((__int64 *)(*v9 + 616), (_DWORD *)v9 + 18);
        v16 = (__int64 *)(*(_QWORD *)(v32[9] + 16) + 8 * v13);
        goto LABEL_16;
      }
    }
  }
  if ( v14 )
  {
    v8 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v15, v14);
  }
LABEL_27:
  sub_EE4A00(v33);
  *(_DWORD *)(*a2 + 120LL) = (*(_DWORD *)(*a2 + 120LL) + 1) & 0x3FFFFFF | *(_DWORD *)(*a2 + 120LL) & 0xFC000000;
  v20 = (_DWORD *)*a2;
  if ( *a2 )
    ++v20[8];
  v21 = *(_DWORD *)(a3 + 8);
  v22 = *(_DWORD *)(a3 + 12);
  if ( v21 >= v22 )
  {
    v25 = 2 * v22;
    v26 = sub_186B270(8 * v25);
    v21 = *(_DWORD *)(a3 + 8);
    v27 = *(_QWORD **)a3;
    v23 = (_DWORD **)v26;
    if ( v21 )
    {
      if ( v21 - 1 <= 2 || (_QWORD *)v26 == v27 + 1 )
      {
        for ( i = 0; i != v21; ++i )
          v23[i] = (_DWORD *)v27[i];
      }
      else
      {
        v28 = 0;
        do
        {
          *(__m128i *)&v23[v28] = _mm_loadu_si128((const __m128i *)&v27[v28]);
          v28 += 2;
        }
        while ( 2LL * (v21 >> 1) != v28 );
        if ( (v21 & 1) != 0 )
          v23[v21 & 0xFFFFFFFE] = (_DWORD *)v27[v21 & 0xFFFFFFFE];
      }
    }
    if ( v27 != (_QWORD *)(a3 + 16) && v27 )
    {
      sub_186B220(v27);
      v21 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v23;
    *(_DWORD *)(a3 + 12) = v25;
  }
  else
  {
    v23 = *(_DWORD ***)a3;
  }
  v23[v21] = v20;
  *(_DWORD *)(a3 + 8) = v21 + 1;
  return v21;
}

