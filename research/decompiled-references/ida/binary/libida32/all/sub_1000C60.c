void __fastcall sub_1000C60(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbp
  char *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rsi
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rax
  int v22; // r11d
  __int64 *v23; // r10
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // zf
  __int64 *v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+18h] [rbp-40h] BYREF
  __m128 v30[3]; // [rsp+20h] [rbp-38h] BYREF

  v5 = sub_FFF2F0(a1, a2, 0);
  v8 = *a3;
  *a3 = 0;
  v9 = *(_QWORD *)v5;
  *(_BYTE *)(v5 + 48) &= ~8u;
  *(_QWORD *)v5 = v8;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  *(_BYTE *)(v5 + 48) |= 1u;
  v10 = *(_QWORD *)(a1 + 152);
  if ( !v10 )
  {
    v21 = operator new(0x30u);
    v11 = *(char **)(a1 + 152);
    v12 = 0;
    v10 = v21;
    *(_QWORD *)v21 = 0;
    *(_QWORD *)(v21 + 8) = 0;
    *(_DWORD *)(v21 + 16) = 0;
    *(_QWORD *)(v21 + 24) = 0;
    *(_QWORD *)(v21 + 32) = 0;
    *(_DWORD *)(v21 + 40) = 0;
    *(_QWORD *)(a1 + 152) = v21;
    if ( !v11 )
      goto LABEL_5;
    operator delete();
    operator delete();
    operator delete(v11, 0x30u);
    v10 = *(_QWORD *)(a1 + 152);
  }
  v11 = *(char **)(v10 + 24);
  v12 = *(unsigned int *)(v10 + 40);
LABEL_5:
  v13 = a2;
  while ( 1 )
  {
    v14 = *(_QWORD *)(v13 + 8);
    if ( !v14 )
      break;
    v14 &= 0xFFFFFFFFFFFFFFF8LL;
    v15 = *(_QWORD *)(v13 + 8) & 4LL;
    v13 = v14;
    if ( !v15 || !v14 )
    {
      v29 = v14;
      v16 = v10 + 24;
      if ( (_DWORD)v12 )
        goto LABEL_10;
LABEL_13:
      v30[0].m128_u64[0] = 0;
LABEL_14:
      v28 = (__int64 *)v16;
      sub_1000A00(v16, 2 * v12, v12, v16, v6, v7);
LABEL_15:
      sub_FFAC10(v28, &v29, v30);
      v13 = v29;
      v11 = *(char **)(v10 + 24);
      v12 = *(unsigned int *)(v10 + 40);
      v20 = *(_DWORD *)(v10 + 32) + 1;
      v18 = (__int64 *)v30[0].m128_u64[0];
      v16 = (__int64)v28;
      goto LABEL_21;
    }
  }
  v13 = 0;
  v16 = v10 + 24;
  v29 = 0;
  if ( !(_DWORD)v12 )
    goto LABEL_13;
LABEL_10:
  v17 = (v12 - 1) & (((unsigned int)v14 >> 4) ^ ((unsigned int)v14 >> 9));
  v18 = (__int64 *)&v11[8 * v17];
  v19 = *v18;
  if ( v13 == *v18 )
  {
LABEL_11:
    sub_FFBA80(v30, v18, &v11[8 * v12], v16, 1);
    return;
  }
  v22 = 1;
  v23 = nullptr;
  if ( v19 != -4096 )
  {
    while ( 1 )
    {
      if ( !v23 && v19 == -8192 )
        v23 = v18;
      v17 = (v12 - 1) & (v22 + v17);
      v18 = (__int64 *)&v11[8 * v17];
      v19 = *v18;
      if ( v13 == *v18 )
        goto LABEL_11;
      if ( v19 == -4096 )
      {
        if ( v23 )
          v18 = v23;
        break;
      }
      ++v22;
    }
  }
  v24 = *(_DWORD *)(v10 + 32);
  v6 = (unsigned int)(3 * v12);
  v30[0].m128_u64[0] = (unsigned __int64)v18;
  v20 = v24 + 1;
  v7 = (unsigned int)(4 * v20);
  if ( (unsigned int)v7 >= (unsigned int)v6 )
    goto LABEL_14;
  v25 = (unsigned int)(v12 - *(_DWORD *)(v10 + 36) - v20);
  v26 = (unsigned int)v12 >> 3;
  if ( (unsigned int)v25 <= (unsigned int)v26 )
  {
    v28 = (__int64 *)v16;
    sub_1000A00(v16, v12, v12, v16, v25, v26);
    goto LABEL_15;
  }
LABEL_21:
  v27 = *v18 == -4096;
  *(_DWORD *)(v10 + 32) = v20;
  if ( !v27 )
    --*(_DWORD *)(v10 + 36);
  *v18 = v13;
  sub_FFBA80(v30, v18, &v11[8 * v12], v16, 1);
}

