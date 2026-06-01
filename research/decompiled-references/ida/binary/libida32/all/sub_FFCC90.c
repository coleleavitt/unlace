_QWORD *__fastcall sub_FFCC90(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax
  _DWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  void *v12; // rdi
  __int64 v13; // r13
  unsigned int v15; // edx
  __int64 v16; // rsi
  _DWORD *i; // rax
  unsigned int v18; // eax
  __int64 v19; // rax
  _DWORD *v20; // rax
  __int64 v21; // rbp
  int v22; // r12d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _DWORD *v27; // rax
  __int64 v28; // rdx
  _DWORD *j; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+0h] [rbp-38h] BYREF
  int v33; // [rsp+8h] [rbp-30h]
  char v34; // [rsp+Ch] [rbp-2Ch]

  *(_DWORD *)(a1 + 520) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  v2 = *(_QWORD *)(a1 + 288);
  if ( (v2 & 4) != 0 )
    sub_A00DD0((__m128 *)(v2 & 0xFFFFFFFFFFFFFFF8LL));
  *(_DWORD *)(a1 + 280) = 0;
  v3 = *(_DWORD *)(a1 + 544);
  *(_DWORD *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 456) = 0;
  *(_DWORD *)(a1 + 400) = 0;
  *(_DWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 472) = 0;
  *(_DWORD *)(a1 + 480) = 0;
  if ( !v3 )
  {
    if ( !*(_DWORD *)(a1 + 548) )
      goto LABEL_7;
    v4 = *(_DWORD **)(a1 + 536);
    v5 = 3LL * *(unsigned int *)(a1 + 552);
    if ( *(_DWORD *)(a1 + 552) > 0x40u )
    {
      operator delete();
      *(_QWORD *)(a1 + 536) = 0;
      *(_QWORD *)(a1 + 544) = 0;
      *(_DWORD *)(a1 + 552) = 0;
      goto LABEL_7;
    }
    goto LABEL_26;
  }
  v15 = 4 * v3;
  v16 = *(unsigned int *)(a1 + 552);
  v4 = *(_DWORD **)(a1 + 536);
  if ( (unsigned int)(4 * v3) < 0x40 )
    v15 = 64;
  if ( (unsigned int)v16 <= v15 )
  {
    v5 = 3 * v16;
LABEL_26:
    for ( i = &v4[v5]; i != v4; v4 += 3 )
      *v4 = 0;
    *(_QWORD *)(a1 + 544) = 0;
    goto LABEL_7;
  }
  v18 = v3 - 1;
  if ( v18 )
  {
    _BitScanReverse(&v18, v18);
    v19 = (unsigned int)(1 << (33 - (v18 ^ 0x1F)));
    if ( (int)v19 < 64 )
      v19 = 64;
    if ( (_DWORD)v19 == (_DWORD)v16 )
    {
      *(_QWORD *)(a1 + 544) = 0;
      v20 = &v4[3 * v19];
      do
      {
        *v4 = 0;
        v4 += 3;
      }
      while ( v20 != v4 );
      goto LABEL_7;
    }
    v30 = (4 * (int)v19 / 3u + 1) | ((unsigned __int64)(4 * (int)v19 / 3u + 1) >> 1);
    v31 = ((((v30 >> 2) | v30 | (((v30 >> 2) | v30) >> 4)) >> 8)
         | (v30 >> 2)
         | v30
         | (((v30 >> 2) | v30) >> 4)
         | (((((v30 >> 2) | v30 | (((v30 >> 2) | v30) >> 4)) >> 8) | (v30 >> 2) | v30 | (((v30 >> 2) | v30) >> 4)) >> 16))
        + 1;
    v22 = v31;
    v21 = 12 * v31;
  }
  else
  {
    v21 = 1536;
    v22 = 128;
  }
  operator delete();
  *(_DWORD *)(a1 + 552) = v22;
  v27 = (_DWORD *)sub_220C370(v21, 4, v23, v24, v25, v26);
  v28 = *(unsigned int *)(a1 + 552);
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 536) = v27;
  for ( j = &v27[3 * v28]; j != v27; v27 += 3 )
    *v27 = 0;
LABEL_7:
  v6 = *(_QWORD *)(a1 + 488);
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 12) )
    {
      v7 = *(_DWORD *)(v6 + 8);
      if ( v7 )
      {
        v8 = 8LL * (unsigned int)(v7 - 1) + 8;
        v9 = 0;
        do
        {
          *(_QWORD *)(*(_QWORD *)v6 + v9) = 0;
          v9 += 8;
        }
        while ( v8 != v9 );
      }
      *(_QWORD *)(v6 + 12) = 0;
    }
    v10 = *(_QWORD *)(v6 + 120);
    if ( v10 != *(_QWORD *)(v6 + 128) )
      *(_QWORD *)(v6 + 128) = v10;
    v11 = *(_QWORD *)(v6 + 160);
    if ( v11 )
    {
      while ( 1 )
      {
        sub_FF9FF0(v6 + 144, *(_QWORD **)(v11 + 24));
        v12 = *(void **)(v11 + 40);
        v13 = *(_QWORD *)(v11 + 16);
        if ( v12 )
        {
          operator delete(v12);
          operator delete((void *)v11);
          if ( !v13 )
            break;
        }
        else
        {
          operator delete((void *)v11);
          if ( !v13 )
            break;
        }
        v11 = v13;
      }
    }
    *(_QWORD *)(v6 + 160) = 0;
    *(_QWORD *)(v6 + 168) = v6 + 152;
    *(_QWORD *)(v6 + 176) = v6 + 152;
    *(_QWORD *)(v6 + 184) = 0;
  }
  v32 = 0;
  *(_QWORD *)(a1 + 312) = 0x8000000000000000LL;
  v33 = 0;
  v34 = 1;
  sub_FFC990(a1, (int *)&v32, 1, 0, 0);
  return sub_FA6780(*(_QWORD **)(a1 + 8));
}

