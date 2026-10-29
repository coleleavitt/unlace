void __fastcall sub_209AA40(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 *v10; // rsi
  __int64 v11; // r8
  unsigned __int64 v12; // r14
  __int64 *v13; // rdx
  __int64 v14; // rax
  char **v15; // rdi
  char *v16; // rcx
  char *v17; // rsi
  char *v18; // rdx
  __m128 v19; // xmm0
  int v20; // esi
  int v21; // r8d
  __int64 v22; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+10h] [rbp-58h] BYREF
  __int64 v24; // [rsp+18h] [rbp-50h]
  __m128 v25[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v24 = a2;
  v4 = sub_209A570(v3, a2);
  v5 = *(__int64 **)v4;
  v22 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
  if ( *(_QWORD *)v4 != v22 )
  {
    while ( 1 )
    {
      v6 = *(unsigned int *)(a1 + 224);
      v7 = *v5;
      v8 = *(_QWORD *)(a1 + 208);
      if ( (_DWORD)v6 )
      {
        v9 = (v6 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
        v10 = (__int64 *)(v8 + 16LL * v9);
        v11 = *v10;
        if ( v7 == *v10 )
          goto LABEL_4;
        v20 = 1;
        if ( v11 != -4096 )
          break;
      }
LABEL_21:
      sub_2097C80(
        v25,
        (__int64 *)(v8 + 16LL * (unsigned int)v6),
        (__int64 *)(v8 + 16LL * (unsigned int)v6),
        a1 + 208,
        1);
      v12 = v25[0].m128_u64[0];
LABEL_5:
      v13 = (__int64 *)(*(_QWORD *)(a1 + 208) + 16LL * *(unsigned int *)(a1 + 224));
      sub_2097C80(v25, v13, v13, a1 + 208, 1);
      if ( v12 == v25[0].m128_u64[0] )
        v14 = sub_2097D10(*(_QWORD *)(a1 + 8), v7);
      else
        v14 = *(_QWORD *)(v12 + 8);
      if ( !v14 )
        goto LABEL_15;
      v15 = *(char ***)(v24 + 8);
      v16 = *v15;
      v17 = v15[1];
      if ( *v15 == v17 )
        goto LABEL_13;
      v18 = v16 + 16;
      if ( v7 != *(_QWORD *)v16 )
      {
        while ( 1 )
        {
          v16 = v18;
          if ( v17 == v18 )
            break;
          v18 += 16;
          if ( v7 == *((_QWORD *)v18 - 2) )
            goto LABEL_17;
        }
LABEL_13:
        v23 = v14;
        v19 = _mm_loadh_ps((const double *)&v23);
        v25[0] = v19;
        if ( v17 == v15[2] )
        {
          sub_2096330(v15, v17, (const __m128i *)v25);
        }
        else
        {
          *(__m128 *)v17 = v19;
          v15[1] = v17 + 16;
        }
        goto LABEL_15;
      }
LABEL_17:
      if ( v14 != *((_QWORD *)v16 + 1) )
        goto LABEL_13;
LABEL_15:
      if ( (__int64 *)v22 == ++v5 )
        return;
    }
    while ( 1 )
    {
      v21 = v20 + 1;
      v9 = (v6 - 1) & (v20 + v9);
      v10 = (__int64 *)(v8 + 16LL * v9);
      if ( v7 == *v10 )
        break;
      if ( *v10 == -4096 )
        goto LABEL_21;
      v20 = v21;
    }
LABEL_4:
    sub_2097C80(v25, v10, (__int64 *)(16 * v6 + v8), a1 + 208, 1);
    v12 = v25[0].m128_u64[0];
    goto LABEL_5;
  }
}
