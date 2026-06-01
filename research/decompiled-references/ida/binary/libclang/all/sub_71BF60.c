unsigned __int64 __fastcall sub_71BF60(_QWORD *a1, __int64 a2, unsigned __int64 *a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx

  v7 = *(_QWORD *)(a4 + 32);
  v8 = *(_QWORD *)(a2 + 32);
  v9 = sub_7197B0(a1, v8, v7, 1);
  v10 = *(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL];
  v11 = 0;
  if ( (v10 & 8) != 0 )
    v11 = *(__int64 *)((char *)&qword_18 + (v10 & 0xFFFFFFFFFFFFFFF0LL));
  v12 = ((unsigned __int8)v9 | (unsigned __int8)v10) & 7;
  v13 = 0;
  v14 = v11 | v12;
  v15 = *(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v15 & 8) != 0 )
    v13 = *(__int64 *)((char *)&qword_18 + (v15 & 0xFFFFFFFFFFFFFFF0LL));
  v16 = v13 | ((unsigned __int8)v8 | (unsigned __int8)v15) & 7;
  if ( v14 > 7 )
  {
    v17 = ~(v14 & 7) & v16;
    if ( (((unsigned __int8)(v14 >> 4) ^ (unsigned __int8)(v17 >> 4)) & 3) == 0 )
      v17 &= 0xFFFFFFFFFFFFFFCFLL;
    if ( (((unsigned __int8)(v14 >> 6) ^ (unsigned __int8)(v17 >> 6)) & 7) == 0 )
      v17 &= 0xFFFFFFFFFFFFFE3FLL;
    if ( (unsigned int)(v17 >> 9) == (unsigned int)(v14 >> 9) )
      v17 &= 0x1FFu;
    if ( HIDWORD(v14) == HIDWORD(v17) )
      v17 = (unsigned int)v17;
  }
  else
  {
    v17 = ~v14 & v16;
  }
  v18 = *a3;
  if ( v17 <= 7 )
  {
    *a3 = v17 | v18;
    goto LABEL_9;
  }
  v25 = v18 | v17 & 7;
  *a3 = v25;
  if ( v17 > 0x1FF )
  {
    v25 = (unsigned int)v17 & 0xFFFFFE00 | v18 & 0x1FF | v17 & 7;
    *a3 = v25;
    if ( (v17 & 0x30) == 0 )
    {
LABEL_19:
      if ( (v17 & 0x1C0) != 0 )
      {
        v25 |= v17 & 0x1C0;
        *a3 = v25;
      }
      if ( HIDWORD(v17) )
        *a3 = v17 & 0xFFFFFFFF00000000LL | (unsigned int)v25;
      goto LABEL_9;
    }
LABEL_18:
    v25 = v17 & 0x30 | v25 & 0xFFFFFFFFFFFFFFCFLL;
    *a3 = v25;
    goto LABEL_19;
  }
  if ( (v17 & 0x30) != 0 )
    goto LABEL_18;
  if ( (v17 & 0x1C0) != 0 )
    *a3 = v25 | (int)v17 & 0xFFFFFFFFFFFFFFC0LL;
LABEL_9:
  v19 = 0;
  v20 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v20 & 8) != 0 )
    v19 = *(__int64 *)((char *)&qword_18 + (v20 & 0xFFFFFFFFFFFFFFF0LL));
  v21 = v19 | ((unsigned __int8)v7 | (unsigned __int8)v20) & 7;
  if ( v14 > 7 )
  {
    v22 = ~(v14 & 7) & v21;
    if ( (((unsigned __int8)(v14 >> 4) ^ (unsigned __int8)(v22 >> 4)) & 3) == 0 )
      v22 &= 0xFFFFFFFFFFFFFFCFLL;
    if ( (((unsigned __int8)(v14 >> 6) ^ (unsigned __int8)(v22 >> 6)) & 7) == 0 )
      v22 &= 0xFFFFFFFFFFFFFE3FLL;
    if ( (unsigned int)(v22 >> 9) == (unsigned int)(v14 >> 9) )
      v22 &= 0x1FFu;
    if ( HIDWORD(v14) == HIDWORD(v22) )
      v22 = (unsigned int)v22;
  }
  else
  {
    v22 = ~v14 & v21;
  }
  v23 = *a5;
  if ( v22 <= 7 )
  {
    *a5 = v22 | v23;
    return v9;
  }
  v26 = v23 | v22 & 7;
  *a5 = v26;
  if ( v22 <= 0x1FF )
  {
    if ( (v22 & 0x30) == 0 )
    {
      if ( (v22 & 0x1C0) != 0 )
        *a5 = v26 | (int)v22 & 0xFFFFFFFFFFFFFFC0LL;
      return v9;
    }
  }
  else
  {
    v26 = (unsigned int)v22 & 0xFFFFFE00 | v23 & 0x1FF | v22 & 7;
    *a5 = v26;
    if ( (v22 & 0x30) == 0 )
      goto LABEL_35;
  }
  v26 = v22 & 0x30 | v26 & 0xFFFFFFFFFFFFFFCFLL;
  *a5 = v26;
LABEL_35:
  if ( (v22 & 0x1C0) != 0 )
  {
    v26 |= v22 & 0x1C0;
    *a5 = v26;
  }
  if ( !HIDWORD(v22) )
    return v9;
  *a5 = v22 & 0xFFFFFFFF00000000LL | (unsigned int)v26;
  return v9;
}

