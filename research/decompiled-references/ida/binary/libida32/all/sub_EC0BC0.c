__int64 __fastcall sub_EC0BC0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r12
  unsigned int v14; // eax
  unsigned int v15; // edi
  __int64 *v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v22; // r11d
  __int64 *v23; // r13
  int v24; // edi
  int v25; // edi
  __int64 v26; // r9
  bool v27; // zf
  __int64 *v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+10h] [rbp-48h] BYREF
  __int64 v30; // [rsp+18h] [rbp-40h]
  __m128 v31[3]; // [rsp+20h] [rbp-38h] BYREF

  v8 = sub_EC05E0(a1, (__int64)a2, a3, a4, a5, a6);
  v11 = *a2;
  v12 = a1 + 272;
  v13 = v8;
  v30 = v8;
  v14 = *(_DWORD *)(a1 + 288);
  v29 = v11;
  if ( !v14 )
  {
    v31[0].m128_u64[0] = 0;
LABEL_12:
    v28 = (__int64 *)(a1 + 272);
    sub_6E50A0(a1 + 272, 2 * v14, v11, v12, v9, v10);
LABEL_13:
    sub_A49FE0(v28, &v29, v31);
    v11 = v29;
    v9 = *(_QWORD *)(a1 + 272);
    v14 = *(_DWORD *)(a1 + 288);
    v25 = *(_DWORD *)(a1 + 280) + 1;
    v16 = (__int64 *)v31[0].m128_u64[0];
    v12 = (__int64)v28;
    goto LABEL_8;
  }
  v9 = *(_QWORD *)(a1 + 272);
  v15 = (v14 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
  v16 = (__int64 *)(v9 + 16LL * v15);
  v17 = *v16;
  if ( v11 == *v16 )
  {
LABEL_3:
    sub_EB51F0(v31, v16, (_QWORD *)(v9 + 16LL * v14), v12, 1);
    return sub_EBDA70((__int64 *)a1, a2, v13, v18, v19, v20);
  }
  v22 = 1;
  v23 = nullptr;
  if ( v17 != -4096 )
  {
    while ( 1 )
    {
      if ( v17 == -8192 && !v23 )
        v23 = v16;
      v15 = (v14 - 1) & (v22 + v15);
      v16 = (__int64 *)(v9 + 16LL * v15);
      v17 = *v16;
      if ( v11 == *v16 )
        goto LABEL_3;
      if ( v17 == -4096 )
      {
        if ( v23 )
          v16 = v23;
        break;
      }
      ++v22;
    }
  }
  v24 = *(_DWORD *)(a1 + 280);
  v10 = 3 * v14;
  v31[0].m128_u64[0] = (unsigned __int64)v16;
  v25 = v24 + 1;
  if ( 4 * v25 >= (unsigned int)v10 )
    goto LABEL_12;
  v26 = v14 - *(_DWORD *)(a1 + 284) - v25;
  if ( (unsigned int)v26 <= v14 >> 3 )
  {
    v28 = (__int64 *)(a1 + 272);
    sub_6E50A0(a1 + 272, v14, v11, v12, v9, v26);
    goto LABEL_13;
  }
LABEL_8:
  v27 = *v16 == -4096;
  *(_DWORD *)(a1 + 280) = v25;
  if ( !v27 )
    --*(_DWORD *)(a1 + 284);
  *v16 = v11;
  v16[1] = v30;
  sub_EB51F0(v31, v16, (_QWORD *)(v9 + 16LL * v14), v12, 1);
  return sub_EBDA70((__int64 *)a1, a2, v13, v18, v19, v20);
}

