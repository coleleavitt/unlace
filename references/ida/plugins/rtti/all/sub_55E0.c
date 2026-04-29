__int64 __fastcall sub_55E0(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // r12
  __int64 v5; // r14
  unsigned __int64 v6; // r13
  _BYTE *v7; // rsi
  _DWORD *v8; // r12
  unsigned int v9; // edx
  __int64 v10; // r12
  __int64 v11; // r14
  unsigned __int64 v12; // r13
  _BYTE *v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r14
  unsigned __int64 v16; // r13
  _BYTE *v17; // rsi
  __int64 v18; // r12
  __int64 v19; // r14
  unsigned __int64 v20; // r13
  _BYTE *v21; // rsi
  __m128i si128; // xmm0
  __int64 v23; // r12
  _BYTE *v24; // rsi
  unsigned __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r12
  _BYTE *v29; // rsi
  __int64 v30; // r13
  __int64 v31; // r14
  unsigned __int64 v32; // r12
  __int64 v33; // rax
  unsigned __int64 v34; // rbp
  __int64 v35; // r12
  _BYTE *v36; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_DWORD *)(a2 + 128);
  if ( (v3 & 2) == 0 )
  {
    if ( (v3 & 1) == 0 )
      goto LABEL_3;
    v30 = 0;
    v32 = 11;
    v31 = 10;
LABEL_47:
    v42 = qvector_reserve();
    *(_QWORD *)a1 = v42;
    v29 = (_BYTE *)v42;
    goto LABEL_23;
  }
  v27 = qvector_reserve();
  *(_QWORD *)a1 = v27;
  *(_QWORD *)(a1 + 8) = 11;
  *(_BYTE *)(v27 + 10) = 0;
  qmemcpy(*(void **)a1, " ambiguous", 10);
  v3 = *(_DWORD *)(a2 + 128);
  if ( (v3 & 1) == 0 )
  {
LABEL_3:
    if ( (v3 & 4) == 0 )
      goto LABEL_4;
LABEL_16:
    v23 = *(_QWORD *)(a1 + 8);
    if ( v23 )
    {
      v26 = v23 + 7;
      v25 = v23 + 8;
      v24 = *(_BYTE **)a1;
      --v23;
      if ( *(_QWORD *)(a1 + 16) >= v25 )
        goto LABEL_18;
    }
    else
    {
      v24 = *(_BYTE **)a1;
      v25 = 9;
      v26 = 8;
      if ( *(_QWORD *)(a1 + 16) >= 9u )
      {
LABEL_18:
        *(_QWORD *)(a1 + 8) = v25;
        v24[v26] = 0;
        *(_QWORD *)(*(_QWORD *)a1 + v23) = 0x6574617669727020LL;
        v9 = *(_DWORD *)(a2 + 128);
        goto LABEL_24;
      }
    }
    v38 = qvector_reserve();
    *(_QWORD *)a1 = v38;
    v24 = (_BYTE *)v38;
    goto LABEL_18;
  }
  v28 = *(_QWORD *)(a1 + 8);
  v29 = *(_BYTE **)a1;
  if ( v28 )
  {
    v30 = v28 - 1;
    v31 = v28 + 9;
    v32 = v28 + 10;
  }
  else
  {
    v30 = 0;
    v32 = 11;
    v31 = 10;
  }
  if ( *(_QWORD *)(a1 + 16) < v32 )
    goto LABEL_47;
LABEL_23:
  *(_QWORD *)(a1 + 8) = v32;
  v29[v31] = 0;
  qmemcpy((void *)(v30 + *(_QWORD *)a1), " invisible", 10);
  v9 = *(_DWORD *)(a2 + 128);
  if ( (v9 & 4) != 0 )
    goto LABEL_16;
LABEL_24:
  if ( (v9 & 5) == 0 )
  {
LABEL_4:
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 )
    {
      v5 = v4 + 6;
      v6 = v4 + 7;
      v7 = *(_BYTE **)a1;
      --v4;
      if ( *(_QWORD *)(a1 + 16) >= v6 )
        goto LABEL_6;
    }
    else
    {
      v7 = *(_BYTE **)a1;
      v6 = 8;
      v5 = 7;
      if ( *(_QWORD *)(a1 + 16) >= 8u )
        goto LABEL_6;
    }
    v39 = qvector_reserve();
    *(_QWORD *)a1 = v39;
    v7 = (_BYTE *)v39;
LABEL_6:
    *(_QWORD *)(a1 + 8) = v6;
    v7[v5] = 0;
    v8 = (_DWORD *)(*(_QWORD *)a1 + v4);
    *v8 = 1651863584;
    *(_DWORD *)((char *)v8 + 3) = 1667853410;
    v9 = *(_DWORD *)(a2 + 128);
    if ( (v9 & 8) != 0 )
      goto LABEL_7;
    goto LABEL_26;
  }
  if ( (v9 & 8) != 0 )
  {
LABEL_7:
    v10 = *(_QWORD *)(a1 + 8);
    if ( v10 )
    {
      v11 = v10 + 9;
      v12 = v10 + 10;
      v13 = *(_BYTE **)a1;
      --v10;
      if ( *(_QWORD *)(a1 + 16) >= v12 )
        goto LABEL_9;
    }
    else
    {
      v13 = *(_BYTE **)a1;
      v12 = 11;
      v11 = 10;
      if ( *(_QWORD *)(a1 + 16) >= 0xBu )
        goto LABEL_9;
    }
    v44 = qvector_reserve();
    *(_QWORD *)a1 = v44;
    v13 = (_BYTE *)v44;
LABEL_9:
    *(_QWORD *)(a1 + 8) = v12;
    v13[v11] = 0;
    qmemcpy((void *)(*(_QWORD *)a1 + v10), " protected", 10);
    v9 = *(_DWORD *)(a2 + 128);
    if ( (v9 & 0x10) != 0 )
      goto LABEL_10;
    goto LABEL_27;
  }
LABEL_26:
  if ( (v9 & 0x10) != 0 )
  {
LABEL_10:
    v14 = *(_QWORD *)(a1 + 8);
    if ( v14 )
    {
      v15 = v14 + 7;
      v16 = v14 + 8;
      v17 = *(_BYTE **)a1;
      --v14;
      if ( *(_QWORD *)(a1 + 16) >= v16 )
        goto LABEL_12;
    }
    else
    {
      v17 = *(_BYTE **)a1;
      v16 = 9;
      v15 = 8;
      if ( *(_QWORD *)(a1 + 16) >= 9u )
        goto LABEL_12;
    }
    v41 = qvector_reserve();
    *(_QWORD *)a1 = v41;
    v17 = (_BYTE *)v41;
LABEL_12:
    *(_QWORD *)(a1 + 8) = v16;
    v17[v15] = 0;
    *(_QWORD *)(*(_QWORD *)a1 + v14) = 0x6C61757472697620LL;
    v9 = *(_DWORD *)(a2 + 128);
    if ( (v9 & 0x20) == 0 )
      goto LABEL_28;
LABEL_13:
    v18 = *(_QWORD *)(a1 + 8);
    if ( v18 )
    {
      v19 = v18 + 15;
      v20 = v18 + 16;
      v21 = *(_BYTE **)a1;
      --v18;
      if ( *(_QWORD *)(a1 + 16) >= v20 )
      {
LABEL_15:
        si128 = _mm_load_si128((const __m128i *)&xmmword_11040);
        *(_QWORD *)(a1 + 8) = v20;
        v21[v19] = 0;
        *(__m128i *)(*(_QWORD *)a1 + v18) = si128;
        v9 = *(_DWORD *)(a2 + 128);
        goto LABEL_28;
      }
    }
    else
    {
      v21 = *(_BYTE **)a1;
      v20 = 17;
      v19 = 16;
      if ( *(_QWORD *)(a1 + 16) >= 0x11u )
        goto LABEL_15;
    }
    v40 = qvector_reserve();
    *(_QWORD *)a1 = v40;
    v21 = (_BYTE *)v40;
    goto LABEL_15;
  }
LABEL_27:
  if ( (v9 & 0x20) != 0 )
    goto LABEL_13;
LABEL_28:
  if ( v9 > 0x7F )
    sub_5520((__int64 *)a1);
  v33 = *(_QWORD *)(a1 + 8);
  if ( v33 )
  {
    v34 = v33 - 1;
    if ( v33 != 1 )
    {
      v35 = 0;
      if ( v33 != 2 )
      {
        v35 = v33 - 2;
        memmove(*(void **)a1, (const void *)(*(_QWORD *)a1 + 1LL), v33 - 2);
      }
      v36 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) < v34 )
      {
        v43 = qvector_reserve();
        *(_QWORD *)a1 = v43;
        v36 = (_BYTE *)v43;
      }
      *(_QWORD *)(a1 + 8) = v34;
      v36[v35] = 0;
    }
  }
  return a1;
}
