void __fastcall sub_1EFEB00(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  int v7; // eax
  __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // r14d
  __int64 v21; // r15
  int v22; // r8d
  int v23; // r8d
  unsigned int v24; // eax
  int v25; // edi
  __int64 v26; // rcx
  int v27; // r9d
  __int64 v28; // r11
  int v29; // r11d
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  int v33; // r8d
  int v34; // r8d
  unsigned int v35; // eax
  int v36; // r9d
  __int64 v37; // r11
  __int64 *v38; // r10
  __int64 *v39; // rax
  __int64 v40; // [rsp+8h] [rbp-70h]
  __int64 v41; // [rsp+10h] [rbp-68h]
  __int64 v42; // [rsp+18h] [rbp-60h]
  unsigned int v43; // [rsp+20h] [rbp-58h]
  unsigned __int64 v44; // [rsp+20h] [rbp-58h]
  unsigned __int64 v45; // [rsp+28h] [rbp-50h]
  __m128 v46[4]; // [rsp+30h] [rbp-48h] BYREF

  v7 = *(_DWORD *)(a1 + 8664);
  if ( v7 )
  {
    v9 = 0;
    v40 = 16 * ((unsigned int)(v7 - 1) + 1LL);
    v41 = a2 + 40;
    v42 = a2 + 24;
    while ( 1 )
    {
      v15 = v9 + *(_QWORD *)(a1 + 8656);
      v16 = sub_1EDB980((_QWORD *)a1, *(_QWORD *)v15, a3, a4, a5, a6);
      v19 = *(unsigned int *)(a2 + 16);
      v20 = *(_DWORD *)(v15 + 8);
      v21 = v16;
      if ( !(_DWORD)v19 )
        goto LABEL_7;
      v10 = *(_QWORD *)a2;
      v11 = ((unsigned int)v16 >> 4) ^ ((unsigned int)v16 >> 9);
      v12 = (v19 - 1) & v11;
      v13 = *(_QWORD *)a2 + 16LL * v12;
      v14 = *(_QWORD *)v13;
      if ( v21 != *(_QWORD *)v13 )
        break;
LABEL_4:
      sub_17AC880(v46, (_QWORD *)v13, (_QWORD *)(16 * v19 + v10), a2, 1);
LABEL_5:
      v9 += 16;
      if ( v40 == v9 )
        goto LABEL_11;
    }
    v29 = 1;
    v18 = 0;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( !v18 && v14 == -8192 )
          v18 = v13;
        v12 = (v19 - 1) & (v29 + v12);
        v13 = v10 + 16LL * v12;
        v14 = *(_QWORD *)v13;
        if ( v21 == *(_QWORD *)v13 )
          goto LABEL_4;
        if ( v14 == -4096 )
          break;
        ++v29;
      }
      if ( v18 )
        v13 = v18;
    }
    v17 = (unsigned int)(3 * v19);
    v25 = *(_DWORD *)(a2 + 8) + 1;
    if ( 4 * v25 >= (unsigned int)v17 )
    {
LABEL_7:
      sub_17E3690((__int64 *)a2, 2 * v19, v10, v19, v17, v18);
      v22 = *(_DWORD *)(a2 + 16);
      if ( !v22 )
        goto LABEL_50;
      v23 = v22 - 1;
      v10 = *(_QWORD *)a2;
      v24 = v23 & (((unsigned int)v21 >> 9) ^ ((unsigned int)v21 >> 4));
      v25 = *(_DWORD *)(a2 + 8) + 1;
      v13 = *(_QWORD *)a2 + 16LL * v24;
      v26 = *(_QWORD *)v13;
      if ( v21 == *(_QWORD *)v13 )
        goto LABEL_16;
      v27 = 1;
      v28 = 0;
      if ( v26 != -4096 )
      {
        while ( 1 )
        {
          if ( v28 || v26 != -8192 )
            v13 = v28;
          v24 = v23 & (v27 + v24);
          v38 = (__int64 *)(v10 + 16LL * v24);
          v26 = *v38;
          if ( v21 == *v38 )
            break;
          if ( v26 == -4096 )
            goto LABEL_44;
          ++v27;
          v28 = v13;
          v13 = v10 + 16LL * v24;
        }
LABEL_26:
        v13 = (__int64)v38;
LABEL_16:
        *(_DWORD *)(a2 + 8) = v25;
        if ( v26 != -4096 )
          --*(_DWORD *)(a2 + 12);
        goto LABEL_18;
      }
    }
    else
    {
      v30 = (unsigned int)(v19 - *(_DWORD *)(a2 + 12) - v25);
      if ( (unsigned int)v30 > (unsigned int)v19 >> 3 )
      {
LABEL_15:
        v26 = *(_QWORD *)v13;
        goto LABEL_16;
      }
      v43 = v11;
      sub_17E3690((__int64 *)a2, v19, v10, v19, v30, v18);
      v33 = *(_DWORD *)(a2 + 16);
      if ( !v33 )
      {
LABEL_50:
        ++*(_DWORD *)(a2 + 8);
        BUG();
      }
      v34 = v33 - 1;
      v10 = *(_QWORD *)a2;
      v35 = v34 & v43;
      v25 = *(_DWORD *)(a2 + 8) + 1;
      v13 = *(_QWORD *)a2 + 16LL * (v34 & v43);
      v26 = *(_QWORD *)v13;
      if ( v21 == *(_QWORD *)v13 )
        goto LABEL_16;
      v36 = 1;
      v37 = 0;
      if ( v26 != -4096 )
      {
        while ( 1 )
        {
          if ( v37 || v26 != -8192 )
            v13 = v37;
          v35 = v34 & (v36 + v35);
          v38 = (__int64 *)(v10 + 16LL * v35);
          v26 = *v38;
          if ( v21 == *v38 )
            goto LABEL_26;
          if ( v26 == -4096 )
          {
LABEL_44:
            if ( v13 )
              goto LABEL_15;
            v13 = (__int64)v38;
            break;
          }
          ++v36;
          v37 = v13;
          v13 = v10 + 16LL * v35;
        }
      }
    }
    *(_DWORD *)(a2 + 8) = v25;
LABEL_18:
    *(_QWORD *)v13 = v21;
    *(_DWORD *)(v13 + 8) = 0;
    sub_17AC880(v46, (_QWORD *)v13, (_QWORD *)(16LL * *(unsigned int *)(a2 + 16) + v10), a2, 1);
    v31 = *(unsigned int *)(a2 + 32);
    *(_DWORD *)(v46[0].m128_u64[0] + 8) = v31;
    v32 = *(unsigned int *)(a2 + 36);
    if ( v31 >= v32 )
    {
      a3 = v31 + 1;
      a4 = v45 & 0xFFFFFFFF00000000LL;
      a6 = v45 & 0xFFFFFFFF00000000LL | v20;
      v45 = a6;
      if ( v32 < a3 )
      {
        v44 = a6;
        sub_2237220(v42, v41, a3, 16);
        a6 = v44;
      }
      v39 = (__int64 *)(*(_QWORD *)(a2 + 24) + 16LL * *(unsigned int *)(a2 + 32));
      *v39 = v21;
      v39[1] = a6;
      ++*(_DWORD *)(a2 + 32);
    }
    else
    {
      a3 = *(_QWORD *)(a2 + 24) + 16 * v31;
      *(_QWORD *)a3 = v21;
      *(_DWORD *)(a3 + 8) = v20;
      ++*(_DWORD *)(a2 + 32);
    }
    goto LABEL_5;
  }
LABEL_11:
  *(_DWORD *)(a1 + 8664) = 0;
}
