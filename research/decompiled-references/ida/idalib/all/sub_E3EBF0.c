__int64 __fastcall sub_E3EBF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 *v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  _QWORD *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // esi
  int v18; // r9d
  __int64 v19; // rdi
  __int64 v20; // rcx
  unsigned int v21; // esi
  __int64 v22; // rdi
  unsigned int v23; // edx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rdi
  unsigned int v28; // ecx
  __int64 *v29; // rsi
  __int64 v30; // r8
  int v31; // r10d
  __int64 *v32; // r11
  int v33; // ecx
  bool v34; // zf
  int v35; // esi
  int v36; // r11d
  unsigned __int64 v37; // r10
  int v38; // edi
  __int64 v39; // [rsp+8h] [rbp-60h] BYREF
  __int64 v40; // [rsp+10h] [rbp-58h] BYREF
  __int64 v41; // [rsp+18h] [rbp-50h]
  __m128 v42[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = (__int64 *)(a1 + 80);
  v5 = a2;
  v6 = *(unsigned int *)(a1 + 96);
  v39 = a3;
  v7 = *(_QWORD *)(a1 + 80);
  if ( (_DWORD)v6 )
  {
    v8 = (v6 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v9 = (__int64 *)(v7 + 16LL * v8);
    v10 = *v9;
    if ( v5 == *v9 )
    {
LABEL_3:
      sub_E3C810(v42, v9, (_QWORD *)(16 * v6 + v7), (__int64)v4, 1);
      v11 = v42[0].m128_u64[0];
      goto LABEL_4;
    }
    v17 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v18 = v17 + 1;
        v8 = (v6 - 1) & (v17 + v8);
        v9 = (__int64 *)(v7 + 16LL * v8);
        v19 = *v9;
        if ( v5 == *v9 )
          goto LABEL_3;
        v17 = v18;
      }
      while ( v19 != -4096 );
    }
  }
  sub_E3C810(v42, (_QWORD *)(v7 + 16LL * (unsigned int)v6), (_QWORD *)(v7 + 16LL * (unsigned int)v6), (__int64)v4, 1);
  v11 = v42[0].m128_u64[0];
LABEL_4:
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL * *(unsigned int *)(a1 + 96));
  sub_E3C810(v42, v12, v12, (__int64)v4, 1);
  if ( v42[0].m128_u64[0] != v11 )
    return *(_QWORD *)(v11 + 8);
  v20 = v39;
  if ( !v39 )
  {
    v25 = *(unsigned int *)(a1 + 88);
    goto LABEL_15;
  }
  v21 = *(_DWORD *)(a1 + 120);
  if ( !v21 )
  {
    v42[0].m128_u64[0] = 0;
LABEL_35:
    v21 *= 2;
    goto LABEL_36;
  }
  v14 = v21 - 1;
  v22 = *(_QWORD *)(a1 + 104);
  v23 = v14 & (((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4));
  v24 = v22 + 16LL * v23;
  v15 = *(_QWORD *)v24;
  if ( v39 == *(_QWORD *)v24 )
  {
LABEL_13:
    v25 = *(unsigned int *)(v24 + 8);
    v20 = v24 + 8;
    *(_DWORD *)(v24 + 8) = v25 + 1;
    goto LABEL_15;
  }
  v36 = 1;
  v37 = 0;
  if ( v15 != -4096 )
  {
    while ( 1 )
    {
      if ( v15 == -8192 && !v37 )
        v37 = v24;
      v23 = v14 & (v36 + v23);
      v24 = v22 + 16LL * v23;
      v15 = *(_QWORD *)v24;
      if ( v39 == *(_QWORD *)v24 )
        goto LABEL_13;
      if ( v15 == -4096 )
      {
        if ( v37 )
          v24 = v37;
        break;
      }
      ++v36;
    }
  }
  v38 = *(_DWORD *)(a1 + 112);
  v42[0].m128_u64[0] = v24;
  v13 = (unsigned int)(v38 + 1);
  v14 = (unsigned int)(4 * v13);
  if ( (unsigned int)v14 >= 3 * v21 )
    goto LABEL_35;
  v14 = v21 >> 3;
  if ( v21 - *(_DWORD *)(a1 + 116) - (unsigned int)v13 <= (unsigned int)v14 )
  {
LABEL_36:
    sub_E3DFA0((__int64 *)(a1 + 104), v21, v13, v39, v14, v15);
    sub_E3BC70((__int64 *)(a1 + 104), &v39, v42);
    v20 = v39;
    LODWORD(v13) = *(_DWORD *)(a1 + 112) + 1;
    v24 = v42[0].m128_u64[0];
  }
  v34 = *(_QWORD *)v24 == -4096;
  *(_DWORD *)(a1 + 112) = v13;
  if ( !v34 )
    --*(_DWORD *)(a1 + 116);
  *(_QWORD *)v24 = v20;
  v20 = v24 + 8;
  v25 = 0;
  *(_DWORD *)(v24 + 8) = 0;
  *(_DWORD *)(v24 + 8) = 1;
LABEL_15:
  v26 = *(_DWORD *)(a1 + 96);
  v40 = v5;
  v41 = v25;
  if ( !v26 )
  {
    v42[0].m128_u64[0] = 0;
    goto LABEL_25;
  }
  v27 = *(_QWORD *)(a1 + 80);
  v28 = (v26 - 1) & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
  v29 = (__int64 *)(v27 + 16LL * v28);
  v30 = *v29;
  if ( v5 != *v29 )
  {
    v31 = 1;
    v32 = nullptr;
    if ( v30 != -4096 )
    {
      while ( 1 )
      {
        if ( v30 == -8192 && !v32 )
          v32 = v29;
        v28 = (v26 - 1) & (v31 + v28);
        v29 = (__int64 *)(v27 + 16LL * v28);
        v30 = *v29;
        if ( v5 == *v29 )
          goto LABEL_17;
        if ( v30 == -4096 )
        {
          if ( v32 )
            v29 = v32;
          break;
        }
        ++v31;
      }
    }
    v33 = *(_DWORD *)(a1 + 88);
    v14 = 3 * v26;
    v42[0].m128_u64[0] = (unsigned __int64)v29;
    v20 = (unsigned int)(v33 + 1);
    v15 = (unsigned int)(4 * v20);
    if ( (unsigned int)v15 < (unsigned int)v14 )
    {
      v14 = v26 - *(_DWORD *)(a1 + 92) - (unsigned int)v20;
      v15 = v26 >> 3;
      if ( (unsigned int)v14 > (unsigned int)v15 )
      {
LABEL_21:
        v34 = *v29 == -4096;
        *(_DWORD *)(a1 + 88) = v20;
        if ( !v34 )
          --*(_DWORD *)(a1 + 92);
        *v29 = v5;
        v29[1] = v25;
        goto LABEL_17;
      }
      v35 = v26;
LABEL_26:
      sub_E3E9E0((__int64)v4, v35, v25, v20, v14, v15);
      sub_E3CE40(v4, &v40, v42);
      v5 = v40;
      v25 = v41;
      v27 = *(_QWORD *)(a1 + 80);
      v26 = *(_DWORD *)(a1 + 96);
      LODWORD(v20) = *(_DWORD *)(a1 + 88) + 1;
      v29 = (__int64 *)v42[0].m128_u64[0];
      goto LABEL_21;
    }
LABEL_25:
    v35 = 2 * v26;
    goto LABEL_26;
  }
LABEL_17:
  sub_E3C810(v42, v29, (_QWORD *)(v27 + 16LL * v26), (__int64)v4, 1);
  return *(_QWORD *)(v42[0].m128_u64[0] + 8);
}
