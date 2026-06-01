__int64 __fastcall sub_401E80(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  _QWORD *i; // r13
  void (__fastcall ***v5)(_QWORD); // rbp
  bool v6; // zf
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // r13d
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rbp
  unsigned __int8 v13; // al
  unsigned int v14; // edx
  unsigned int v15; // r13d
  __int64 v16; // rbx
  _QWORD *v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // r13d
  _QWORD *v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rbx
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  unsigned int v30; // edx
  unsigned int v31; // eax
  __int64 v32; // rbp
  _QWORD *v33; // rax
  __int64 v34; // r13
  __int64 v35; // rax
  _QWORD *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // rax
  _QWORD *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  _QWORD *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // rax
  _QWORD *v48; // rdi
  __int64 v49; // rax
  __int64 j; // rax
  __int64 k; // rax
  __int64 n; // rax
  __int64 m; // rax
  void *v54; // [rsp+0h] [rbp-38h]
  _QWORD v55[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD **)(a1 + 376);
  result = *(unsigned int *)(a1 + 384);
  for ( i = &v2[result]; i != v2; ++v2 )
  {
    v5 = (void (__fastcall ***)(_QWORD))*v2;
    if ( *v2 )
    {
      (**v5)(*v2);
      result = sub_186B220(v5);
    }
  }
  v6 = *(_BYTE *)(a1 + 663) == 0;
  *(_DWORD *)(a1 + 384) = 0;
  if ( v6 )
  {
    if ( !*(_BYTE *)(a1 + 646) )
      goto LABEL_7;
  }
  else
  {
    v7 = sub_186B270(0x38u);
    v8 = *(_DWORD *)(a1 + 384);
    v9 = *(_DWORD *)(a1 + 388);
    *(_QWORD *)(v7 + 8) = a1;
    v10 = v7;
    *(_DWORD *)(v7 + 16) = 0;
    *(_BYTE *)(v7 + 20) = 1;
    *(_QWORD *)v7 = off_1C4E9F0;
    *(_QWORD *)(v7 + 24) = 0;
    *(_QWORD *)(v7 + 48) = 0;
    *(_OWORD *)(v7 + 32) = 0;
    if ( v8 >= v9 )
    {
      v34 = 2 * v9;
      v35 = sub_186B270(8 * v34);
      v8 = *(_DWORD *)(a1 + 384);
      v36 = *(_QWORD **)(a1 + 376);
      v11 = v35;
      if ( v8 )
      {
        if ( v8 - 1 <= 2 || (_QWORD *)v35 == v36 + 1 )
        {
          for ( j = 0; j != v8; ++j )
            *(_QWORD *)(v11 + j * 8) = v36[j];
        }
        else
        {
          v37 = 0;
          do
          {
            *(__m128i *)(v11 + v37 * 8) = _mm_loadu_si128((const __m128i *)&v36[v37]);
            v37 += 2;
          }
          while ( v37 != 2LL * (v8 >> 1) );
          if ( (v8 & 1) != 0 )
            *(_QWORD *)(v11 + 8LL * (v8 & 0xFFFFFFFE)) = v36[v8 & 0xFFFFFFFE];
        }
      }
      if ( v36 && v36 != (_QWORD *)(a1 + 392) )
      {
        sub_186B220(v36);
        v8 = *(_DWORD *)(a1 + 384);
      }
      *(_QWORD *)(a1 + 376) = v11;
      *(_DWORD *)(a1 + 388) = v34;
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 376);
    }
    *(_QWORD *)(v11 + 8LL * v8) = v10;
    *(_DWORD *)(a1 + 384) = v8 + 1;
    v12 = sub_186B270(0x60u);
    v13 = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.q3.qgen.normalize", *(_QWORD *)(a1 + 144) + 8LL, 1);
    sub_485B60(v12, a1, v13);
    v14 = *(_DWORD *)(a1 + 384);
    v15 = *(_DWORD *)(a1 + 388);
    if ( v14 >= v15 )
    {
      v46 = 2 * v15;
      v47 = sub_186B270(8 * v46);
      v14 = *(_DWORD *)(a1 + 384);
      v48 = *(_QWORD **)(a1 + 376);
      v16 = v47;
      if ( v14 )
      {
        if ( v14 - 1 <= 2 || (_QWORD *)v47 == v48 + 1 )
        {
          for ( k = 0; k != v14; ++k )
            *(_QWORD *)(v16 + k * 8) = v48[k];
        }
        else
        {
          v49 = 0;
          do
          {
            *(__m128i *)(v16 + v49 * 8) = _mm_loadu_si128((const __m128i *)&v48[v49]);
            v49 += 2;
          }
          while ( v49 != 2LL * (v14 >> 1) );
          if ( (v14 & 1) != 0 )
            *(_QWORD *)(v16 + 8LL * (v14 & 0xFFFFFFFE)) = v48[v14 & 0xFFFFFFFE];
        }
      }
      if ( v48 && v48 != (_QWORD *)(a1 + 392) )
      {
        sub_186B220(v48);
        v14 = *(_DWORD *)(a1 + 384);
      }
      *(_QWORD *)(a1 + 376) = v16;
      *(_DWORD *)(a1 + 388) = v46;
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 376);
    }
    result = v14;
    v6 = *(_BYTE *)(a1 + 646) == 0;
    *(_QWORD *)(v16 + 8LL * v14) = v12;
    *(_DWORD *)(a1 + 384) = v14 + 1;
    if ( v6 )
    {
LABEL_7:
      if ( !*(_BYTE *)(a1 + 650) )
        goto LABEL_8;
      goto LABEL_22;
    }
  }
  v17 = (_QWORD *)sub_186B270(0x10u);
  v18 = *(_DWORD *)(a1 + 384);
  v19 = *(_DWORD *)(a1 + 388);
  v17[1] = a1;
  v20 = v17;
  *v17 = off_1C4EA98;
  if ( v18 >= v19 )
  {
    v38 = 2 * v19;
    v39 = sub_186B270(8 * v38);
    v18 = *(_DWORD *)(a1 + 384);
    v40 = *(_QWORD **)(a1 + 376);
    v21 = v39;
    if ( v18 )
    {
      if ( v18 - 1 <= 2 || (_QWORD *)v39 == v40 + 1 )
      {
        for ( m = 0; m != v18; ++m )
          *(_QWORD *)(v21 + m * 8) = v40[m];
      }
      else
      {
        v41 = 0;
        do
        {
          *(__m128i *)(v21 + v41 * 8) = _mm_loadu_si128((const __m128i *)&v40[v41]);
          v41 += 2;
        }
        while ( v41 != 2LL * (v18 >> 1) );
        if ( (v18 & 1) != 0 )
          *(_QWORD *)(v21 + 8LL * (v18 & 0xFFFFFFFE)) = v40[v18 & 0xFFFFFFFE];
      }
    }
    if ( v40 != (_QWORD *)(a1 + 392) && v40 )
    {
      sub_186B220(v40);
      v18 = *(_DWORD *)(a1 + 384);
    }
    *(_QWORD *)(a1 + 376) = v21;
    *(_DWORD *)(a1 + 388) = v38;
  }
  else
  {
    v21 = *(_QWORD *)(a1 + 376);
  }
  result = v18;
  v6 = *(_BYTE *)(a1 + 650) == 0;
  *(_QWORD *)(v21 + 8LL * v18) = v20;
  *(_DWORD *)(a1 + 384) = v18 + 1;
  if ( v6 )
  {
LABEL_8:
    if ( !*(_BYTE *)(a1 + 647) )
      goto LABEL_9;
    goto LABEL_23;
  }
LABEL_22:
  v55[0] = sub_43FB90(a1, 0, 1);
  result = sub_41DBC0(a1 + 376, v55);
  if ( !*(_BYTE *)(a1 + 647) )
  {
LABEL_9:
    if ( !*(_BYTE *)(a1 + 651) )
      goto LABEL_10;
    goto LABEL_24;
  }
LABEL_23:
  v22 = sub_186B270(0x38u);
  sub_469610(v22, a1, 5);
  v55[0] = v22;
  result = sub_41DBC0(a1 + 376, v55);
  if ( !*(_BYTE *)(a1 + 651) )
  {
LABEL_10:
    if ( !*(_BYTE *)(a1 + 669) )
      goto LABEL_11;
    goto LABEL_25;
  }
LABEL_24:
  v23 = (_QWORD *)sub_186B270(0x10u);
  v23[1] = a1;
  v55[0] = v23;
  *v23 = off_1C4EA60;
  result = sub_41DBC0(a1 + 376, v55);
  if ( !*(_BYTE *)(a1 + 669) )
  {
LABEL_11:
    if ( !*(_BYTE *)(a1 + 670) )
      goto LABEL_12;
    goto LABEL_26;
  }
LABEL_25:
  v24 = sub_186B270(0xE8u);
  sub_450BB0(v24, a1);
  v55[0] = v24;
  *(_QWORD *)(a1 + 520) = v24;
  result = sub_41DBC0(a1 + 376, v55);
  if ( !*(_BYTE *)(a1 + 670) )
  {
LABEL_12:
    if ( !*(_BYTE *)(a1 + 652) )
      return result;
LABEL_29:
    v33 = (_QWORD *)sub_186B270(0x10u);
    v33[1] = a1;
    v55[0] = v33;
    *v33 = off_1C4E990;
    return sub_41DBC0(a1 + 376, v55);
  }
LABEL_26:
  v25 = sub_186B270(0x50u);
  sub_42F810(v25, a1, v26, v27, v28, v29, v54);
  v30 = *(_DWORD *)(a1 + 384);
  v31 = *(_DWORD *)(a1 + 388);
  *(_QWORD *)(a1 + 528) = v25;
  if ( v30 >= v31 )
  {
    v42 = 2 * v31;
    v43 = sub_186B270(8 * v42);
    v30 = *(_DWORD *)(a1 + 384);
    v44 = *(_QWORD **)(a1 + 376);
    v32 = v43;
    if ( v30 )
    {
      if ( v30 - 1 <= 2 || (_QWORD *)v43 == v44 + 1 )
      {
        for ( n = 0; n != v30; ++n )
          *(_QWORD *)(v32 + n * 8) = v44[n];
      }
      else
      {
        v45 = 0;
        do
        {
          *(__m128i *)(v32 + v45 * 8) = _mm_loadu_si128((const __m128i *)&v44[v45]);
          v45 += 2;
        }
        while ( v45 != 2LL * (v30 >> 1) );
        if ( (v30 & 1) != 0 )
          *(_QWORD *)(v32 + 8LL * (v30 & 0xFFFFFFFE)) = v44[v30 & 0xFFFFFFFE];
      }
    }
    if ( v44 )
    {
      if ( v44 != (_QWORD *)(a1 + 392) )
      {
        sub_186B220(v44);
        v30 = *(_DWORD *)(a1 + 384);
      }
    }
    *(_DWORD *)(a1 + 388) = v42;
    v25 = *(_QWORD *)(a1 + 528);
    *(_QWORD *)(a1 + 376) = v32;
  }
  else
  {
    v32 = *(_QWORD *)(a1 + 376);
  }
  result = v30;
  v6 = *(_BYTE *)(a1 + 652) == 0;
  *(_QWORD *)(v32 + 8LL * v30) = v25;
  *(_DWORD *)(a1 + 384) = v30 + 1;
  if ( !v6 )
    goto LABEL_29;
  return result;
}

