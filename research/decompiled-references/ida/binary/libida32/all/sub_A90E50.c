void __fastcall sub_A90E50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r8
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 *v11; // rsi
  __int64 v12; // rdx
  int v13; // r11d
  __int64 *v14; // rbp
  int v15; // edi
  int v16; // edi
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-40h]
  __int64 *v21; // [rsp+8h] [rbp-40h]
  __int64 v22; // [rsp+10h] [rbp-38h] BYREF
  __int64 v23; // [rsp+18h] [rbp-30h]
  __m128 v24[2]; // [rsp+20h] [rbp-28h] BYREF

  v7 = *(_QWORD *)(a2 + 128);
  if ( v7
    || (v20 = a3,
        sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, 0, a6),
        v7 = *(_QWORD *)(a2 + 128),
        a3 = v20,
        v7) )
  {
    v7 = *(_QWORD *)(v7 + 88);
  }
  v8 = *(_DWORD *)(a1 + 2216);
  v9 = a1 + 2200;
  v22 = v7;
  v23 = a3;
  if ( !v8 )
  {
    v24[0].m128_u64[0] = 0;
LABEL_15:
    v21 = (__int64 *)(a1 + 2200);
    sub_A90C40(a1 + 2200, 2 * v8, a3, v9, v7, a6);
LABEL_16:
    sub_A61AD0(v21, &v22, v24);
    v7 = v22;
    a6 = *(_QWORD *)(a1 + 2200);
    v11 = (__int64 *)v24[0].m128_u64[0];
    v16 = *(_DWORD *)(a1 + 2208) + 1;
    v9 = (__int64)v21;
    goto LABEL_11;
  }
  a6 = *(_QWORD *)(a1 + 2200);
  v10 = (v8 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
  v11 = (__int64 *)(a6 + 16LL * v10);
  v12 = *v11;
  if ( v7 == *v11 )
  {
LABEL_5:
    sub_A67E70(v24, v11, (_QWORD *)(a6 + 16LL * v8), v9, 1);
    return;
  }
  v13 = 1;
  v14 = nullptr;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( v12 == -8192 && !v14 )
        v14 = v11;
      v10 = (v8 - 1) & (v13 + v10);
      v11 = (__int64 *)(a6 + 16LL * v10);
      v12 = *v11;
      if ( v7 == *v11 )
        goto LABEL_5;
      if ( v12 == -4096 )
      {
        if ( v14 )
          v11 = v14;
        break;
      }
      ++v13;
    }
  }
  v15 = *(_DWORD *)(a1 + 2208);
  a3 = 3 * v8;
  v24[0].m128_u64[0] = (unsigned __int64)v11;
  v16 = v15 + 1;
  if ( 4 * v16 >= (unsigned int)a3 )
    goto LABEL_15;
  v17 = v8 - *(_DWORD *)(a1 + 2212) - v16;
  if ( (unsigned int)v17 <= v8 >> 3 )
  {
    v21 = (__int64 *)(a1 + 2200);
    sub_A90C40(a1 + 2200, v8, v17, v9, v7, a6);
    goto LABEL_16;
  }
LABEL_11:
  v18 = *v11 == -4096;
  *(_DWORD *)(a1 + 2208) = v16;
  if ( !v18 )
    --*(_DWORD *)(a1 + 2212);
  v19 = v23;
  *v11 = v7;
  v11[1] = v19;
  sub_A67E70(v24, v11, (_QWORD *)(a6 + 16LL * *(unsigned int *)(a1 + 2216)), v9, 1);
}

