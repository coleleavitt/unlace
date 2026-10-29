void __fastcall sub_1808680(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __m128i *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rax
  __int64 **v24; // rax
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 *v29; // rax
  _BYTE v30[184]; // [rsp+0h] [rbp-B8h] BYREF

  v8 = a2;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 <= 6 && sub_9B48E0(a2) )
  {
    sub_168B9F0((__int64)v30, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xDEFu, 0);
    sub_15F7200(v30);
    return;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_4;
  v23 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  v16 = *v23;
  v17 = (__int64 *)(*v23 + 8LL * *((unsigned int *)v23 + 2));
  if ( *v23 >= (unsigned __int64)v17 )
  {
    if ( (__int64 *)v16 != v17 )
    {
      if ( *(_WORD *)(*v17 + 36) == 224 )
        goto LABEL_8;
      v24 = (__int64 **)(v17 + 1);
      while ( (__int64 **)v16 != v24 )
      {
        v17 = *v24++;
        if ( *((_WORD *)v17 + 18) == 224 )
          goto LABEL_8;
      }
    }
    goto LABEL_4;
  }
  v29 = (__int64 *)*v23;
  while ( 1 )
  {
    v16 = *v29;
    if ( *(_WORD *)(*v29 + 36) == 224 )
      break;
    if ( v17 == ++v29 )
      goto LABEL_4;
  }
  if ( v17 == v29 )
  {
LABEL_4:
    v9 = *(_QWORD **)(a1 + 248);
    v10 = v9[294];
    v9[304] += 40LL;
    v11 = (__m128i *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v9[295] >= (unsigned __int64)&v11[2].m128i_u64[1] && v10 )
      v9[294] = (char *)v11 + 40;
    else
      v11 = (__m128i *)sub_986170((__int64)(v9 + 294), 40, 40, 3, a5, a6);
    sub_B13310(v11, *(_QWORD *)(a1 + 248), a3);
    a2 = (__int64)v11;
    sub_B8CC60(v8, (__int64)v11, v12, v13, v14, v15);
  }
LABEL_8:
  if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
  {
LABEL_9:
    v18 = sub_B32320(*(_QWORD *)(a1 + 248), 0, 0);
    sub_B8CC60(v8, v18, v19, v20, v21, v22);
    return;
  }
  v25 = sub_B8C3D0(v8, a2, v16, (__int64)v17, a5, a6);
  v26 = *v25;
  v27 = *v25 + 8LL * *((unsigned int *)v25 + 2);
  if ( *v25 >= v27 )
  {
    if ( v26 == v27 )
      goto LABEL_9;
    while ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 160 )
    {
      v27 += 8LL;
      if ( v26 == v27 )
        goto LABEL_9;
    }
  }
  else
  {
    v28 = *v25;
    while ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 160 )
    {
      v28 += 8LL;
      if ( v27 == v28 )
        goto LABEL_9;
    }
    if ( v27 == v28 )
      goto LABEL_9;
  }
}
