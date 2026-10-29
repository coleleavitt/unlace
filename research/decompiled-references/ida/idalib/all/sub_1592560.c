void **__fastcall sub_1592560(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned int v9; // eax
  unsigned int v10; // edi
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // r12
  unsigned __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  void **result; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbp
  int v26; // r11d
  unsigned __int64 v27; // r12
  int v28; // edx
  int v29; // edi
  __int64 v30; // rdx
  bool v31; // zf
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // r13
  __int64 v35; // r12
  __int64 *v36; // rax
  __int64 *v37; // [rsp+8h] [rbp-50h]
  __int64 v38; // [rsp+18h] [rbp-40h] BYREF
  __m128 v39[3]; // [rsp+20h] [rbp-38h] BYREF

  v6 = (__int64 *)(a1 + 16);
  v7 = a3;
  v9 = *(_DWORD *)(a1 + 32);
  v38 = a2;
  if ( !v9 )
  {
    v39[0].m128_u64[0] = 0;
LABEL_24:
    v37 = v6;
    sub_AB37A0(v6, 2 * v9, a3, (__int64)v6, a5, a6);
LABEL_25:
    sub_A6F430(v37, &v38, v39);
    a5 = v38;
    a6 = *(_QWORD *)(a1 + 16);
    v11 = v39[0].m128_u64[0];
    v29 = *(_DWORD *)(a1 + 24) + 1;
    v6 = v37;
    goto LABEL_18;
  }
  a6 = *(_QWORD *)(a1 + 16);
  a5 = a2;
  v10 = (v9 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v11 = a6 + 16LL * v10;
  v12 = *(_QWORD *)v11;
  if ( a5 == *(_QWORD *)v11 )
  {
LABEL_3:
    sub_A8BEF0(v39, (_QWORD *)v11, (_QWORD *)(a6 + 16LL * v9), (__int64)v6, 1);
    v13 = *(unsigned int *)(v39[0].m128_u64[0] + 8);
    goto LABEL_4;
  }
  v26 = 1;
  v27 = 0;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( v12 == -8192 && !v27 )
        v27 = v11;
      v10 = (v9 - 1) & (v26 + v10);
      v11 = a6 + 16LL * v10;
      v12 = *(_QWORD *)v11;
      if ( a5 == *(_QWORD *)v11 )
        goto LABEL_3;
      if ( v12 == -4096 )
      {
        if ( v27 )
          v11 = v27;
        break;
      }
      ++v26;
    }
  }
  v28 = *(_DWORD *)(a1 + 24);
  v39[0].m128_u64[0] = v11;
  v29 = v28 + 1;
  a3 = 3 * v9;
  if ( 4 * v29 >= (unsigned int)a3 )
    goto LABEL_24;
  v30 = v9 - *(_DWORD *)(a1 + 28) - v29;
  if ( (unsigned int)v30 <= v9 >> 3 )
  {
    v37 = v6;
    sub_AB37A0(v6, v9, v30, (__int64)v6, a5, a6);
    goto LABEL_25;
  }
LABEL_18:
  v31 = *(_QWORD *)v11 == -4096;
  *(_DWORD *)(a1 + 24) = v29;
  if ( !v31 )
    --*(_DWORD *)(a1 + 28);
  *(_DWORD *)(v11 + 8) = 0;
  v32 = *(unsigned int *)(a1 + 32);
  *(_QWORD *)v11 = a5;
  sub_A8BEF0(v39, (_QWORD *)v11, (_QWORD *)(a6 + 16 * v32), (__int64)v6, 1);
  v33 = *(unsigned int *)(a1 + 48);
  v34 = v39[0].m128_u64[0];
  v35 = v38;
  if ( v33 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 52) )
  {
    sub_2237220(a1 + 40, a1 + 56, v33 + 1, 16);
    v33 = *(unsigned int *)(a1 + 48);
  }
  v36 = (__int64 *)(*(_QWORD *)(a1 + 40) + 16 * v33);
  *v36 = v35;
  v36[1] = 0;
  v13 = *(unsigned int *)(a1 + 48);
  *(_DWORD *)(a1 + 48) = v13 + 1;
  *(_DWORD *)(v34 + 8) = v13;
LABEL_4:
  v14 = *(_QWORD *)(a1 + 40) + 16 * v13;
  v15 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v15 )
  {
    v22 = operator new(0x90u);
    *(_QWORD *)(v22 + 8) = 0x200000000LL;
    *(_QWORD *)v22 = v22 + 16;
    v23 = *(_QWORD *)(v14 + 8) & 7LL | v22;
    *(_QWORD *)(v14 + 8) = v23;
    v15 = v23 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v16 = *(unsigned int *)(v15 + 8);
  v17 = v16 + 1;
  v18 = v16 << 6;
  if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(v15 + 12) )
  {
    v24 = *(_QWORD *)v15;
    if ( *(_QWORD *)v15 > v7 || v7 >= v24 + v18 )
    {
      sub_1592420(v15, v17);
      v19 = *(_QWORD *)v15;
      v18 = (unsigned __int64)*(unsigned int *)(v15 + 8) << 6;
    }
    else
    {
      v25 = v7 - v24;
      sub_1592420(v15, v17);
      v19 = *(_QWORD *)v15;
      v7 = *(_QWORD *)v15 + v25;
      v18 = (unsigned __int64)*(unsigned int *)(v15 + 8) << 6;
    }
  }
  else
  {
    v19 = *(_QWORD *)v15;
  }
  v20 = v18 + v19;
  *(_QWORD *)v20 = *(_QWORD *)v7;
  *(_BYTE *)(v20 + 8) = *(_BYTE *)(v7 + 8);
  *(_BYTE *)(v20 + 9) = *(_BYTE *)(v7 + 9);
  *(_BYTE *)(v20 + 10) = *(_BYTE *)(v7 + 10);
  *(_BYTE *)(v20 + 11) = *(_BYTE *)(v7 + 11);
  *(_BYTE *)(v20 + 12) = *(_BYTE *)(v7 + 12);
  *(_QWORD *)(v20 + 16) = v20 + 32;
  *(_QWORD *)(v20 + 24) = 0x200000000LL;
  result = (void **)*(unsigned int *)(v7 + 24);
  if ( (_DWORD)result )
    result = sub_1581860((void **)(v20 + 16), (char **)(v7 + 16));
  ++*(_DWORD *)(v15 + 8);
  return result;
}
