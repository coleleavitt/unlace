__int64 __fastcall sub_1FB6730(__int64 a1, char *a2)
{
  char *v2; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // sf
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 *v13; // rsi
  __int64 v14; // r8
  unsigned __int64 v15; // r13
  _QWORD *v16; // rdx
  __int64 result; // rax
  unsigned int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // r8
  unsigned int v21; // edx
  __int64 *v22; // rax
  __int64 v23; // rcx
  char **v24; // rdi
  char *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // ecx
  char **v29; // rsi
  char *v30; // r8
  unsigned __int64 v31; // r14
  _QWORD *v32; // rsi
  int v33; // esi
  int v34; // esi
  int v35; // r10d
  __int64 v36; // r8
  int v37; // r11d
  __int64 *v38; // r10
  int v39; // edx
  bool v40; // zf
  char **v41; // rax
  int v42; // r8d
  char **v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+18h] [rbp-50h] BYREF
  __m128 v45[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  v4 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a2 + 32LL))(a2);
  v9 = *(char *)(v4 + 29) < 0;
  v44 = v4;
  if ( v9 )
    goto LABEL_9;
  v10 = *(unsigned int *)(a1 + 440);
  v11 = *(_QWORD *)(a1 + 424);
  if ( !(_DWORD)v10 )
    goto LABEL_28;
  v12 = (v10 - 1) & (((unsigned int)v4 >> 9) ^ ((unsigned int)v4 >> 4));
  v13 = (__int64 *)(v11 + 16LL * v12);
  v14 = *v13;
  if ( v4 != *v13 )
  {
    v34 = 1;
    if ( v14 != -4096 )
    {
      do
      {
        v35 = v34 + 1;
        v12 = (v10 - 1) & (v34 + v12);
        v13 = (__int64 *)(v11 + 16LL * v12);
        v36 = *v13;
        if ( v4 == *v13 )
          goto LABEL_4;
        v34 = v35;
      }
      while ( v36 != -4096 );
    }
LABEL_28:
    sub_1F75940(
      v45,
      (_QWORD *)(v11 + 16LL * (unsigned int)v10),
      (_QWORD *)(v11 + 16LL * (unsigned int)v10),
      a1 + 424,
      1);
    v15 = v45[0].m128_u64[0];
    goto LABEL_5;
  }
LABEL_4:
  sub_1F75940(v45, v13, (_QWORD *)(16 * v10 + v11), a1 + 424, 1);
  v15 = v45[0].m128_u64[0];
LABEL_5:
  v16 = (_QWORD *)(*(_QWORD *)(a1 + 424) + 16LL * *(unsigned int *)(a1 + 440));
  sub_1F75940(v45, v16, v16, a1 + 424, 1);
  if ( v45[0].m128_u64[0] == v15 || *(_QWORD *)(v15 + 8) > 0x13u )
    return v44;
LABEL_9:
  v18 = *(_DWORD *)(a1 + 3040);
  if ( !v18 )
  {
    v45[0].m128_u64[0] = 0;
    goto LABEL_36;
  }
  v19 = v44;
  v8 = v18 - 1;
  v20 = *(_QWORD *)(a1 + 3024);
  v21 = v8 & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
  v22 = (__int64 *)(v20 + 16LL * v21);
  v23 = *v22;
  if ( v44 != *v22 )
  {
    v37 = 1;
    v38 = nullptr;
    if ( v23 != -4096 )
    {
      while ( 1 )
      {
        if ( v23 == -8192 && !v38 )
          v38 = v22;
        v21 = v8 & (v37 + v21);
        v22 = (__int64 *)(v20 + 16LL * v21);
        v23 = *v22;
        if ( v44 == *v22 )
          goto LABEL_11;
        if ( v23 == -4096 )
          break;
        ++v37;
      }
      if ( v38 )
        v22 = v38;
    }
    v39 = *(_DWORD *)(a1 + 3032);
    v6 = 3 * v18;
    v45[0].m128_u64[0] = (unsigned __int64)v22;
    v5 = (unsigned int)(v39 + 1);
    v7 = (unsigned int)(4 * v5);
    if ( (unsigned int)v7 < (unsigned int)v6 )
    {
      v6 = v18 - *(_DWORD *)(a1 + 3036) - (unsigned int)v5;
      v7 = v18 >> 3;
      if ( (unsigned int)v6 > (unsigned int)v7 )
      {
LABEL_32:
        v40 = *v22 == -4096;
        *(_DWORD *)(a1 + 3032) = v5;
        if ( !v40 )
          --*(_DWORD *)(a1 + 3036);
        *v22 = v19;
        v41 = (char **)(v22 + 1);
        *v41 = nullptr;
        v43 = v41;
        goto LABEL_12;
      }
LABEL_37:
      sub_A923E0(a1 + 3024, v18, v5, v6, v7, v8);
      sub_A6DEA0((__int64 *)(a1 + 3024), &v44, v45);
      v19 = v44;
      LODWORD(v5) = *(_DWORD *)(a1 + 3032) + 1;
      v22 = (__int64 *)v45[0].m128_u64[0];
      goto LABEL_32;
    }
LABEL_36:
    v18 *= 2;
    goto LABEL_37;
  }
LABEL_11:
  v24 = (char **)(v22 + 1);
  result = v22[1];
  v43 = v24;
  if ( !result )
  {
LABEL_12:
    v25 = v2;
    while ( v25[29] < 0 )
    {
LABEL_15:
      v25 = (char *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v25 + 48LL))(v25);
      if ( !v25 )
      {
        *v43 = v2;
        return (__int64)v2;
      }
    }
    v26 = *(unsigned int *)(a1 + 440);
    v27 = *(_QWORD *)(a1 + 424);
    if ( (_DWORD)v26 )
    {
      v28 = (v26 - 1) & (((unsigned int)v25 >> 9) ^ ((unsigned int)v25 >> 4));
      v29 = (char **)(v27 + 16LL * v28);
      v30 = *v29;
      if ( *v29 == v25 )
      {
LABEL_19:
        sub_1F75940(v45, v29, (_QWORD *)(16 * v26 + v27), a1 + 424, 1);
        v31 = v45[0].m128_u64[0];
        goto LABEL_20;
      }
      v33 = 1;
      if ( v30 != (char *)-4096LL )
      {
        while ( 1 )
        {
          v42 = v33 + 1;
          v28 = (v26 - 1) & (v33 + v28);
          v29 = (char **)(v27 + 16LL * v28);
          if ( *v29 == v25 )
            goto LABEL_19;
          if ( *v29 == (char *)-4096LL )
            break;
          v33 = v42;
        }
      }
    }
    sub_1F75940(
      v45,
      (_QWORD *)(v27 + 16LL * (unsigned int)v26),
      (_QWORD *)(v27 + 16LL * (unsigned int)v26),
      a1 + 424,
      1);
    v31 = v45[0].m128_u64[0];
LABEL_20:
    v32 = (_QWORD *)(*(_QWORD *)(a1 + 424) + 16LL * *(unsigned int *)(a1 + 440));
    sub_1F75940(v45, v32, v32, a1 + 424, 1);
    if ( v45[0].m128_u64[0] == v31 )
    {
      v2 = v25;
    }
    else if ( *(_QWORD *)(v31 + 8) >= 0x14u )
    {
      v2 = v25;
    }
    goto LABEL_15;
  }
  return result;
}
