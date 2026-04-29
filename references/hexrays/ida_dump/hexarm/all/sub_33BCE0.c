unsigned __int64 __fastcall sub_33BCE0(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al
  unsigned int v4; // esi
  __int64 v5; // r12
  unsigned __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  size_t v10; // rdx
  __m128i *v11; // r12
  __int64 v12; // rax
  char v13; // r12
  __int64 v14; // rsi
  unsigned int v15; // esi
  __int64 v16; // r12
  unsigned __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  size_t v21; // rdx
  __m128i *v22; // r12
  __int64 v23; // [rsp+8h] [rbp-60h] BYREF
  __int64 v24; // [rsp+10h] [rbp-58h] BYREF
  __int128 v25; // [rsp+18h] [rbp-50h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v23 = -1;
  netnode_check(&v23, "$ hexrays", 0, 1);
  if ( *(_DWORD *)(a1 + 1420) )
  {
    v24 = *(unsigned int *)(a1 + 1420);
    netnode_set(v23, &v24, 8);
  }
  else
  {
    netnode_delvalue(v23);
  }
  v1 = *(_QWORD *)(a1 + 840);
  v2 = *(_BYTE *)(v1 + 286);
  if ( (v2 & 1) != 0 )
  {
    *(_BYTE *)(v1 + 286) = v2 & 0xFE;
    v24 = 0;
    v25 = 0;
    v24 = qvector_reserve(&v24, 0, 1, 1);
    *(_BYTE *)(v24 + v25) = 89;
    v4 = *(_DWORD *)(a1 + 576);
    *(_QWORD *)&v25 = v25 + 1;
    sub_7C230(&v24, v4);
    sub_7C230(&v24, *(_DWORD *)(a1 + 580));
    sub_7C230(&v24, *(_DWORD *)(a1 + 584));
    sub_7C230(&v24, *(_DWORD *)(a1 + 588));
    sub_7C230(&v24, *(_DWORD *)(a1 + 592));
    sub_7C230(&v24, *(_DWORD *)(a1 + 596));
    sub_7C230(&v24, *(_DWORD *)(a1 + 600));
    sub_7C230(&v24, *(_DWORD *)(a1 + 604));
    sub_7C230(&v24, 0x20u);
    v5 = v25;
    v6 = v25 + 32;
    v7 = v25 + 32;
    if ( (unsigned __int64)v25 >= 0xFFFFFFFFFFFFFFE0LL )
    {
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v8 = v24;
      v9 = v25;
      v10 = 32;
      if ( *((_QWORD *)&v25 + 1) < v6 )
      {
        v24 = qvector_reserve(&v24, v24, v25 + 32, 1);
        v8 = v24;
        v9 = v25;
        v10 = v6 - v25;
      }
      memset((void *)(v8 + v9), 0, v10);
    }
    *(_QWORD *)&v25 = v7;
    v11 = (__m128i *)(v24 + v5);
    *v11 = _mm_loadu_si128((const __m128i *)(a1 + 608));
    v11[1] = _mm_loadu_si128((const __m128i *)(a1 + 624));
    sub_7C230(&v24, *(_DWORD *)(a1 + 640));
    sub_7C230(&v24, *(_DWORD *)(a1 + 644));
    sub_7C230(&v24, *(_DWORD *)(a1 + 652));
    sub_7C230(&v24, *(_DWORD *)(a1 + 648));
    v12 = v25;
    v13 = *(_BYTE *)(a1 + 712);
    v14 = v24;
    if ( *((_QWORD *)&v25 + 1) < (unsigned __int64)(v25 + 1) )
    {
      v24 = qvector_reserve(&v24, v24, v25 + 1, 1);
      v14 = v24;
      v12 = v25;
    }
    *(_BYTE *)(v14 + v12) = v13;
    v15 = *(_DWORD *)(a1 + 656);
    *(_QWORD *)&v25 = v25 + 1;
    sub_7C230(&v24, v15);
    sub_7C230(&v24, 0x20u);
    v16 = v25;
    v17 = v25 + 32;
    v18 = v25 + 32;
    if ( (unsigned __int64)v25 >= 0xFFFFFFFFFFFFFFE0LL )
    {
      v18 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v19 = v24;
      v20 = v25;
      v21 = 32;
      if ( *((_QWORD *)&v25 + 1) < v17 )
      {
        v24 = qvector_reserve(&v24, v24, v25 + 32, 1);
        v19 = v24;
        v20 = v25;
        v21 = v17 - v25;
      }
      memset((void *)(v19 + v20), 0, v21);
    }
    *(_QWORD *)&v25 = v18;
    v22 = (__m128i *)(v24 + v16);
    *v22 = _mm_loadu_si128((const __m128i *)(a1 + 728));
    v22[1] = _mm_loadu_si128((const __m128i *)(a1 + 744));
    sub_7C230(&v24, *(_DWORD *)(a1 + 760));
    if ( (unsigned __int64)v25 > 0x400 )
    {
      if ( !under_debugger )
        sub_3835A0(51484);
      BUG();
    }
    netnode_supset(v23, 0, v24, v25, 83);
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v24);
    }
  }
  return v26 - __readfsqword(0x28u);
}
