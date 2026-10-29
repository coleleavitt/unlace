void __fastcall sub_1001130(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // edi
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  void *v15; // r13
  bool v16; // zf
  __int64 v17; // rdx
  int v18; // r10d
  __int64 *v19; // r11
  int v20; // edi
  __int64 v21; // r8
  __int64 v22; // [rsp+8h] [rbp-50h]
  __int64 v23; // [rsp+10h] [rbp-48h] BYREF
  __int64 v24; // [rsp+18h] [rbp-40h]
  __m128 v25[3]; // [rsp+20h] [rbp-38h] BYREF

  v6 = a3;
  v7 = a2;
  v8 = *(_QWORD *)(a1 + 152);
  if ( !v8 )
  {
    v14 = operator new(0x30u);
    v15 = *(void **)(a1 + 152);
    v8 = v14;
    *(_QWORD *)v14 = 0;
    *(_QWORD *)(v14 + 8) = 0;
    *(_DWORD *)(v14 + 16) = 0;
    *(_QWORD *)(v14 + 24) = 0;
    *(_QWORD *)(v14 + 32) = 0;
    *(_DWORD *)(v14 + 40) = 0;
    *(_QWORD *)(a1 + 152) = v14;
    if ( !v15 )
    {
      v23 = a2;
      v24 = v6;
      goto LABEL_8;
    }
    operator delete();
    operator delete();
    operator delete(v15, 0x30u);
    v8 = *(_QWORD *)(a1 + 152);
  }
  v9 = *(_DWORD *)(v8 + 16);
  v10 = *(_QWORD *)v8;
  v23 = a2;
  v24 = v6;
  if ( !v9 )
  {
LABEL_8:
    v25[0].m128_u64[0] = 0;
    v9 = 0;
LABEL_9:
    v22 = v8;
    sub_1000F20(v8, 2 * v9, a3, v8, v10, a6);
    goto LABEL_10;
  }
  a6 = v9 - 1;
  v11 = a6 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v12 = (__int64 *)(v10 + 16LL * v11);
  v13 = *v12;
  if ( v7 == *v12 )
  {
LABEL_4:
    sub_FFABA0(v25, v12, (_QWORD *)(v10 + 16LL * v9), v8, 1);
    *(_QWORD *)(v25[0].m128_u64[0] + 8) = v6;
    return;
  }
  v18 = 1;
  v19 = nullptr;
  if ( v13 != -4096 )
  {
    while ( 1 )
    {
      if ( v13 == -8192 && !v19 )
        v19 = v12;
      v11 = a6 & (v18 + v11);
      v12 = (__int64 *)(v10 + 16LL * v11);
      v13 = *v12;
      if ( v7 == *v12 )
        goto LABEL_4;
      if ( v13 == -4096 )
      {
        if ( v19 )
          v12 = v19;
        break;
      }
      ++v18;
    }
  }
  v20 = *(_DWORD *)(v8 + 8);
  v25[0].m128_u64[0] = (unsigned __int64)v12;
  a3 = (unsigned int)(v20 + 1);
  v10 = (unsigned int)(4 * a3);
  if ( (unsigned int)v10 >= 3 * v9 )
    goto LABEL_9;
  v21 = v9 >> 3;
  if ( v9 - *(_DWORD *)(v8 + 12) - (unsigned int)a3 > (unsigned int)v21 )
    goto LABEL_11;
  v22 = v8;
  sub_1000F20(v8, v9, a3, v8, v21, a6);
LABEL_10:
  sub_FFACC0((__int64 *)v22, &v23, v25);
  v8 = v22;
  v7 = v23;
  v9 = *(_DWORD *)(v22 + 16);
  LODWORD(a3) = *(_DWORD *)(v22 + 8) + 1;
  v12 = (__int64 *)v25[0].m128_u64[0];
LABEL_11:
  v16 = *v12 == -4096;
  *(_DWORD *)(v8 + 8) = a3;
  if ( !v16 )
    --*(_DWORD *)(v8 + 12);
  v17 = v24;
  *v12 = v7;
  v12[1] = v17;
  sub_FFABA0(v25, v12, (_QWORD *)(*(_QWORD *)v8 + 16LL * v9), v8, 1);
}

