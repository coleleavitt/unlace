__int64 __fastcall sub_CAC940(__int64 a1, int a2)
{
  __int64 v2; // r13
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned int v8; // edx
  int *v9; // rsi
  unsigned __int64 v10; // r14
  int *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // ecx
  unsigned int v18; // esi
  int v19; // eax
  __int64 v20; // rdi
  unsigned int v21; // edx
  unsigned __int64 v22; // r13
  int v23; // ecx
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  int v26; // r10d
  int v27; // ecx
  int v28; // [rsp+Ch] [rbp-3Ch] BYREF
  __m128 v29[3]; // [rsp+10h] [rbp-38h] BYREF

  v2 = a1 + 392;
  v4 = *(_QWORD *)(a1 + 448) - *(_QWORD *)(a1 + 440) + 16LL;
  v5 = *(unsigned int *)(a1 + 408);
  v28 = a2;
  v6 = *(_QWORD *)(a1 + 392);
  if ( (_DWORD)v5 )
  {
    v8 = (v5 - 1) & (37 * a2);
    v9 = (int *)(v6 + 8LL * v8);
    if ( a2 == *v9 )
    {
LABEL_3:
      sub_B69B00(v29, v9, (int *)(v6 + 8 * v5), v2, 1);
      v10 = v29[0].m128_u64[0];
      goto LABEL_4;
    }
    if ( *v9 != -1 )
    {
      v17 = 1;
      do
      {
        v8 = (v5 - 1) & (v17 + v8);
        v9 = (int *)(v6 + 8LL * v8);
        if ( a2 == *v9 )
          goto LABEL_3;
        ++v17;
      }
      while ( *v9 != -1 );
    }
  }
  sub_B69B00(v29, (int *)(v6 + 8 * v5), (int *)(v6 + 8 * v5), v2, 1);
  v10 = v29[0].m128_u64[0];
LABEL_4:
  v11 = (int *)(*(_QWORD *)(a1 + 392) + 8LL * *(unsigned int *)(a1 + 408));
  sub_B69B00(v29, v11, v11, v2, 1);
  if ( v29[0].m128_u64[0] != v10 )
    return (unsigned int)(*(_DWORD *)(v10 + 4) - v4);
  v18 = *(_DWORD *)(a1 + 432);
  if ( !v18 )
  {
    v29[0].m128_u64[0] = 0;
    goto LABEL_23;
  }
  v19 = v28;
  v14 = v18 - 1;
  v20 = *(_QWORD *)(a1 + 416);
  v21 = v14 & (37 * v28);
  v22 = v20 + 48LL * v21;
  v23 = *(_DWORD *)v22;
  if ( v28 != *(_DWORD *)v22 )
  {
    v26 = 1;
    v15 = 0;
    if ( v23 != -1 )
    {
      while ( 1 )
      {
        if ( v23 == -2 && !v15 )
          v15 = v22;
        v21 = v14 & (v26 + v21);
        v22 = v20 + 48LL * v21;
        v23 = *(_DWORD *)v22;
        if ( v28 == *(_DWORD *)v22 )
          goto LABEL_13;
        if ( v23 == -1 )
        {
          if ( v15 )
            v22 = v15;
          break;
        }
        ++v26;
      }
    }
    v27 = *(_DWORD *)(a1 + 424);
    v29[0].m128_u64[0] = v22;
    v12 = (unsigned int)(v27 + 1);
    v13 = 3 * v18;
    if ( 4 * (int)v12 < (unsigned int)v13 )
    {
      v13 = v18 - *(_DWORD *)(a1 + 428) - (unsigned int)v12;
      if ( (unsigned int)v13 > v18 >> 3 )
      {
LABEL_19:
        *(_DWORD *)(a1 + 424) = v12;
        if ( *(_DWORD *)v22 != -1 )
          --*(_DWORD *)(a1 + 428);
        *(_DWORD *)v22 = v19;
        v25 = v22 + 8;
        *(_QWORD *)(v22 + 8) = v22 + 24;
        *(_QWORD *)(v22 + 16) = 0x500000000LL;
        v24 = 0;
        goto LABEL_15;
      }
LABEL_24:
      sub_CAC660((int **)(a1 + 416), v18, v12, v13, v14, v15);
      sub_C9F8E0((__int64 *)(a1 + 416), &v28, v29);
      v19 = v28;
      v22 = v29[0].m128_u64[0];
      LODWORD(v12) = *(_DWORD *)(a1 + 424) + 1;
      goto LABEL_19;
    }
LABEL_23:
    v18 *= 2;
    goto LABEL_24;
  }
LABEL_13:
  v24 = *(unsigned int *)(v22 + 16);
  v25 = v22 + 8;
  if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(v22 + 20) )
  {
    sub_2237220(v22 + 8, v22 + 24, v24 + 1, 4);
    v24 = *(unsigned int *)(v22 + 16);
  }
LABEL_15:
  *(_DWORD *)(*(_QWORD *)v25 + 4 * v24) = v4;
  ++*(_DWORD *)(v25 + 8);
  return 0;
}
