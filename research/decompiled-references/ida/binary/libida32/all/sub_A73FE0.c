__int64 __fastcall sub_A73FE0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned int v7; // edx
  _QWORD *v8; // rsi
  unsigned __int64 v9; // r13
  _QWORD *v10; // rdx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // esi
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // r8
  unsigned int v22; // edx
  __int64 *v23; // rax
  __int64 v24; // rdi
  __int64 *v25; // rax
  int v26; // r11d
  __int64 *v27; // r10
  int v28; // edi
  bool v29; // zf
  __int64 v30; // [rsp+8h] [rbp-50h] BYREF
  __m128 v31[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = (__int64 *)(a1 + 1120);
  v4 = *(unsigned int *)(a1 + 1136);
  v5 = *(_QWORD *)(a1 + 1120);
  v30 = a2;
  if ( (_DWORD)v4 )
  {
    v7 = (v4 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v8 = (_QWORD *)(v5 + 24LL * v7);
    if ( a2 == *v8 )
    {
LABEL_3:
      sub_A61C00(v31, v8, (_QWORD *)(v5 + 24 * v4), (__int64)v2, 1);
      v9 = v31[0].m128_u64[0];
      goto LABEL_4;
    }
    if ( *v8 != -4096 )
    {
      v12 = 1;
      do
      {
        v7 = (v4 - 1) & (v12 + v7);
        v8 = (_QWORD *)(v5 + 24LL * v7);
        if ( a2 == *v8 )
          goto LABEL_3;
        ++v12;
      }
      while ( *v8 != -4096 );
    }
  }
  sub_A61C00(v31, (_QWORD *)(v5 + 24 * v4), (_QWORD *)(v5 + 24 * v4), (__int64)v2, 1);
  v9 = v31[0].m128_u64[0];
LABEL_4:
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 1120) + 24LL * *(unsigned int *)(a1 + 1136));
  sub_A61C00(v31, v10, v10, (__int64)v2, 1);
  if ( v31[0].m128_u64[0] != v9 )
    return *(_QWORD *)(v9 + 8);
  v13 = sub_A8C200(a1);
  v18 = *(_DWORD *)(a1 + 1136);
  v19 = v13;
  v20 = v14;
  if ( !v18 )
  {
    v31[0].m128_u64[0] = 0;
    goto LABEL_21;
  }
  v15 = v30;
  v17 = v18 - 1;
  v21 = *(_QWORD *)(a1 + 1120);
  v22 = v17 & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
  v23 = (__int64 *)(v21 + 24LL * v22);
  v24 = *v23;
  if ( v30 != *v23 )
  {
    v26 = 1;
    v27 = nullptr;
    if ( v24 != -4096 )
    {
      while ( 1 )
      {
        if ( !v27 && v24 == -8192 )
          v27 = v23;
        v22 = v17 & (v26 + v22);
        v23 = (__int64 *)(v21 + 24LL * v22);
        v24 = *v23;
        if ( v30 == *v23 )
          goto LABEL_13;
        if ( v24 == -4096 )
        {
          if ( v27 )
            v23 = v27;
          break;
        }
        ++v26;
      }
    }
    v28 = *(_DWORD *)(a1 + 1128);
    v31[0].m128_u64[0] = (unsigned __int64)v23;
    v14 = (unsigned int)(v28 + 1);
    v16 = (unsigned int)(4 * v14);
    if ( (unsigned int)v16 < 3 * v18 )
    {
      v16 = v18 >> 3;
      if ( v18 - *(_DWORD *)(a1 + 1132) - (unsigned int)v14 > (unsigned int)v16 )
      {
LABEL_17:
        v29 = *v23 == -4096;
        *(_DWORD *)(a1 + 1128) = v14;
        if ( !v29 )
          --*(_DWORD *)(a1 + 1132);
        *v23 = v15;
        v23[1] = 0;
        v23[2] = 0;
        goto LABEL_13;
      }
LABEL_22:
      sub_A73DD0(v2, v18, v14, v15, v16, v17);
      sub_A4AD90(v2, &v30, v31);
      v15 = v30;
      LODWORD(v14) = *(_DWORD *)(a1 + 1128) + 1;
      v23 = (__int64 *)v31[0].m128_u64[0];
      goto LABEL_17;
    }
LABEL_21:
    v18 *= 2;
    goto LABEL_22;
  }
LABEL_13:
  v25 = v23 + 1;
  *v25 = v19;
  v25[1] = v20;
  return v19;
}

