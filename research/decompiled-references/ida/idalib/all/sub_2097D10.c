__int64 __fastcall sub_2097D10(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  int v3; // ecx
  unsigned int v4; // edx
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 result; // rax
  int v8; // eax
  int v9; // r10d
  __int64 v10; // r8
  __int64 *v12; // rbx
  unsigned int v13; // ecx
  __int64 *v14; // rsi
  __int64 v15; // r8
  unsigned __int64 v16; // r13
  __int64 *v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 *v20; // r15
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // esi
  int v24; // r8d
  __int64 *v25; // rbx
  unsigned int v26; // edi
  __int64 *v27; // rsi
  unsigned __int64 v28; // r14
  __int64 *v29; // rdx
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 *v32; // r13
  __int64 v33; // rdx
  int i; // ecx
  __int64 *v35; // [rsp+0h] [rbp-60h]
  __int64 *v36; // [rsp+0h] [rbp-60h]
  unsigned int v37; // [rsp+Ch] [rbp-54h]
  __m128 v38[4]; // [rsp+18h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a1 + 384) & 1) != 0 )
  {
    v2 = a1 + 392;
    v3 = 7;
  }
  else
  {
    v22 = *(_DWORD *)(a1 + 400);
    v2 = *(_QWORD *)(a1 + 392);
    if ( !v22 )
      goto LABEL_9;
    v3 = v22 - 1;
  }
  v4 = v3 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v5 = (__int64 *)(v2 + 16LL * v4);
  v6 = *v5;
  if ( a2 != *v5 )
  {
    v8 = 1;
    if ( v6 == -4096 )
      goto LABEL_9;
    while ( 1 )
    {
      v9 = v8 + 1;
      v4 = v3 & (v8 + v4);
      v5 = (__int64 *)(v2 + 16LL * v4);
      v10 = *v5;
      if ( a2 == *v5 )
        break;
      v8 = v9;
      if ( v10 == -4096 )
        goto LABEL_9;
    }
  }
  result = v5[1];
  if ( result )
    return result;
LABEL_9:
  v12 = *(__int64 **)(a1 + 32);
  v35 = &v12[*(unsigned int *)(a1 + 40)];
  if ( v12 != v35 )
  {
    v37 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
    while ( 1 )
    {
      v18 = *v12;
      v19 = *(unsigned int *)(*v12 + 224);
      v20 = (__int64 *)(*v12 + 208);
      v21 = *v20;
      if ( !(_DWORD)v19 )
        break;
      v13 = (v19 - 1) & v37;
      v14 = (__int64 *)(v21 + 16LL * v13);
      v15 = *v14;
      if ( a2 != *v14 )
      {
        v23 = 1;
        if ( v15 == -4096 )
          break;
        while ( 1 )
        {
          v24 = v23 + 1;
          v13 = (v19 - 1) & (v23 + v13);
          v14 = (__int64 *)(v21 + 16LL * v13);
          if ( a2 == *v14 )
            break;
          if ( *v14 == -4096 )
            goto LABEL_17;
          v23 = v24;
        }
      }
      sub_2097C80(v38, v14, (__int64 *)(16 * v19 + v21), *v12 + 208, 1);
      v16 = v38[0].m128_u64[0];
LABEL_13:
      v17 = (__int64 *)(*(_QWORD *)(v18 + 208) + 16LL * *(unsigned int *)(v18 + 224));
      sub_2097C80(v38, v17, v17, (__int64)v20, 1);
      if ( v38[0].m128_u64[0] != v16 )
      {
        result = *(_QWORD *)(v16 + 8);
        if ( result )
          return result;
      }
      if ( v35 == ++v12 )
        goto LABEL_26;
    }
LABEL_17:
    sub_2097C80(
      v38,
      (__int64 *)(v21 + 16LL * (unsigned int)v19),
      (__int64 *)(v21 + 16LL * (unsigned int)v19),
      *v12 + 208,
      1);
    v16 = v38[0].m128_u64[0];
    goto LABEL_13;
  }
LABEL_26:
  v25 = *(__int64 **)(a1 + 112);
  v36 = &v25[*(unsigned int *)(a1 + 120)];
  if ( v25 != v36 )
  {
    while ( 1 )
    {
      v30 = *v25;
      v31 = *(unsigned int *)(*v25 + 224);
      v32 = (__int64 *)(*v25 + 208);
      v33 = *v32;
      if ( !(_DWORD)v31 )
        break;
      v26 = (v31 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v27 = (__int64 *)(v33 + 16LL * v26);
      if ( a2 != *v27 )
      {
        if ( *v27 == -4096 )
          break;
        for ( i = 1; ; ++i )
        {
          v26 = (v31 - 1) & (i + v26);
          v27 = (__int64 *)(v33 + 16LL * v26);
          if ( a2 == *v27 )
            break;
          if ( *v27 == -4096 )
            goto LABEL_34;
        }
      }
      sub_2097C80(v38, v27, (__int64 *)(16 * v31 + v33), *v25 + 208, 1);
      v28 = v38[0].m128_u64[0];
LABEL_30:
      v29 = (__int64 *)(*(_QWORD *)(v30 + 208) + 16LL * *(unsigned int *)(v30 + 224));
      sub_2097C80(v38, v29, v29, (__int64)v32, 1);
      if ( v38[0].m128_u64[0] != v28 )
      {
        result = *(_QWORD *)(v28 + 8);
        if ( result )
          return result;
      }
      if ( v36 == ++v25 )
        return 0;
    }
LABEL_34:
    sub_2097C80(
      v38,
      (__int64 *)(v33 + 16LL * (unsigned int)v31),
      (__int64 *)(v33 + 16LL * (unsigned int)v31),
      *v25 + 208,
      1);
    v28 = v38[0].m128_u64[0];
    goto LABEL_30;
  }
  return 0;
}
