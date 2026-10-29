void __fastcall sub_1FABB70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 *v15; // rsi
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  int v22; // ebp
  __int64 *v23; // r11
  int v24; // edi
  int v25; // edi
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rbp
  int v29; // esi
  __int64 v30; // [rsp+10h] [rbp-40h] BYREF
  __m128 v31[3]; // [rsp+18h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 && *(_BYTE *)(v6 + 9267) || *(char *)(a3 + 29) >= 0 )
    return;
  v9 = *(_QWORD *)(a3 + 120);
  if ( !v9 )
  {
    v17 = *(_QWORD *)(a3 + 96);
    v18 = *(_QWORD *)(v17 + 88);
    v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v18 & 1) == 0 )
    {
      v20 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v18 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v21 = v18 & 2;
        if ( !(_DWORD)v21 )
          goto LABEL_14;
        v19 = sub_6E2500(v20, v17, v21, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
        *(_QWORD *)(v17 + 88) = v19 | 1;
      }
    }
    v31[0].m128_u64[0] = v19;
    sub_B7BB70(v31);
    v9 = *(_QWORD *)(a3 + 120);
  }
  v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v10 )
  {
    v11 = *v10;
    goto LABEL_8;
  }
LABEL_14:
  v11 = 0;
LABEL_8:
  v12 = *(unsigned int *)(a1 + 2856);
  v30 = v11;
  v13 = a1 + 2840;
  if ( !(_DWORD)v12 )
  {
    v31[0].m128_u64[0] = 0;
LABEL_26:
    v29 = 2 * v12;
LABEL_27:
    sub_1FAB910(a1 + 2840, v29, v11, v13, a5, a6);
    sub_1F7E4A0((__int64 *)(a1 + 2840), &v30, v31);
    v11 = v30;
    a5 = *(_QWORD *)(a1 + 2840);
    v12 = *(unsigned int *)(a1 + 2856);
    v25 = *(_DWORD *)(a1 + 2848) + 1;
    v15 = (__int64 *)v31[0].m128_u64[0];
    v13 = a1 + 2840;
    goto LABEL_20;
  }
  a5 = *(_QWORD *)(a1 + 2840);
  v14 = (v12 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
  v15 = (__int64 *)(a5 + 8LL * v14);
  v16 = *v15;
  if ( v11 == *v15 )
  {
LABEL_10:
    sub_1F8CDC0(v31, v15, (_QWORD *)(a5 + 8 * v12), v13, 1);
    return;
  }
  v22 = 1;
  v23 = nullptr;
  if ( v16 != -4096 )
  {
    while ( 1 )
    {
      if ( !v23 && v16 == -8192 )
        v23 = v15;
      v14 = (v12 - 1) & (v22 + v14);
      v15 = (__int64 *)(a5 + 8LL * v14);
      v16 = *v15;
      if ( v11 == *v15 )
        goto LABEL_10;
      if ( v16 == -4096 )
      {
        if ( v23 )
          v15 = v23;
        break;
      }
      ++v22;
    }
  }
  v24 = *(_DWORD *)(a1 + 2848);
  a6 = (unsigned int)(3 * v12);
  v31[0].m128_u64[0] = (unsigned __int64)v15;
  v25 = v24 + 1;
  if ( 4 * v25 >= (unsigned int)a6 )
    goto LABEL_26;
  a6 = (unsigned int)(v12 - *(_DWORD *)(a1 + 2852) - v25);
  if ( (unsigned int)a6 <= (unsigned int)v12 >> 3 )
  {
    v29 = v12;
    goto LABEL_27;
  }
LABEL_20:
  v26 = *v15 == -4096;
  *(_DWORD *)(a1 + 2848) = v25;
  if ( !v26 )
    --*(_DWORD *)(a1 + 2852);
  *v15 = v11;
  sub_1F8CDC0(v31, v15, (_QWORD *)(a5 + 8 * v12), v13, 1);
  v27 = *(unsigned int *)(a1 + 2872);
  v28 = v30;
  if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 2876) )
  {
    sub_2237220(a1 + 2864, a1 + 2880, v27 + 1, 8);
    v27 = *(unsigned int *)(a1 + 2872);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 2864) + 8 * v27) = v28;
  ++*(_DWORD *)(a1 + 2872);
}
