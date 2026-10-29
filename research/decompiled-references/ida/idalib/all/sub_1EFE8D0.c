void __fastcall sub_1EFE8D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned int v14; // edx
  __int64 *v15; // rsi
  __int64 v16; // r9
  int v17; // ebp
  __int64 *v18; // r11
  int v19; // edx
  __int64 v20; // r9
  bool v21; // zf
  __int64 *v22; // [rsp+0h] [rbp-38h]
  __int64 v23; // [rsp+8h] [rbp-30h] BYREF
  __m128 v24[2]; // [rsp+10h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  v23 = a2;
  if ( (v3 & 6) == 0 )
    return;
  if ( (*(_BYTE *)(a3 + 8) & 6) == 0 )
  {
    *(_QWORD *)(a2 + 8) = v3 & 0xFFFFFFFFFFFFFFF8LL | 1;
    return;
  }
  v5 = 0;
  v7 = *(_QWORD *)(a1 + 144);
  if ( *(char *)(a3 + 29) < 0 )
  {
    a2 = v23;
    v5 = sub_B8C660(a3);
  }
  sub_A93970(v7, (_BYTE *)a2, v5, 0);
  v11 = *(unsigned int *)(a1 + 4232);
  v12 = a1 + 4216;
  if ( !(_DWORD)v11 )
  {
    v24[0].m128_u64[0] = 0;
LABEL_17:
    v22 = (__int64 *)(a1 + 4216);
    sub_1EFE670(a1 + 4216, 2 * v11, v8, v12, v9, v10);
LABEL_18:
    sub_1ED0D30(v22, &v23, v24);
    v13 = v23;
    v9 = *(_QWORD *)(a1 + 4216);
    v11 = *(unsigned int *)(a1 + 4232);
    LODWORD(v8) = *(_DWORD *)(a1 + 4224) + 1;
    v15 = (__int64 *)v24[0].m128_u64[0];
    v12 = (__int64)v22;
    goto LABEL_13;
  }
  v13 = v23;
  v9 = *(_QWORD *)(a1 + 4216);
  v14 = (v11 - 1) & (((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4));
  v15 = (__int64 *)(v9 + 8LL * v14);
  v16 = *v15;
  if ( v23 == *v15 )
  {
LABEL_7:
    sub_AEB180(v24, v15, (_QWORD *)(v9 + 8 * v11), v12, 1);
    return;
  }
  v17 = 1;
  v18 = nullptr;
  if ( v16 != -4096 )
  {
    while ( 1 )
    {
      if ( !v18 && v16 == -8192 )
        v18 = v15;
      v14 = (v11 - 1) & (v17 + v14);
      v15 = (__int64 *)(v9 + 8LL * v14);
      v16 = *v15;
      if ( v23 == *v15 )
        goto LABEL_7;
      if ( v16 == -4096 )
      {
        if ( v18 )
          v15 = v18;
        break;
      }
      ++v17;
    }
  }
  v19 = *(_DWORD *)(a1 + 4224);
  v10 = (unsigned int)(3 * v11);
  v24[0].m128_u64[0] = (unsigned __int64)v15;
  v8 = (unsigned int)(v19 + 1);
  if ( 4 * (int)v8 >= (unsigned int)v10 )
    goto LABEL_17;
  v20 = (unsigned int)(v11 - *(_DWORD *)(a1 + 4228) - v8);
  if ( (unsigned int)v20 <= (unsigned int)v11 >> 3 )
  {
    v22 = (__int64 *)(a1 + 4216);
    sub_1EFE670(a1 + 4216, v11, v8, v12, v9, v20);
    goto LABEL_18;
  }
LABEL_13:
  v21 = *v15 == -4096;
  *(_DWORD *)(a1 + 4224) = v8;
  if ( !v21 )
    --*(_DWORD *)(a1 + 4228);
  *v15 = v13;
  sub_AEB180(v24, v15, (_QWORD *)(v9 + 8 * v11), v12, 1);
  sub_AEA1A0(a1 + 4240, v23);
}
