void __fastcall sub_A700B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 *v7; // rbp
  char v9; // cl
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // ecx
  __int64 *v15; // rsi
  __int64 v16; // rdi
  unsigned __int64 v17; // r14
  _QWORD *v18; // rdx
  __int64 **v19; // r13
  __int64 v20; // rsi
  unsigned int v21; // edi
  __int64 v22; // rdx
  unsigned __int64 v23; // rbp
  unsigned __int64 *v24; // r13
  __int64 v25; // rax
  int v26; // esi
  int v27; // r10d
  __int64 v28; // rdi
  int v29; // r10d
  __int64 v30; // r11
  int v31; // edi
  bool v32; // zf
  int v33; // esi
  __int64 v34; // [rsp+8h] [rbp-40h] BYREF
  __m128 v35[3]; // [rsp+10h] [rbp-38h] BYREF

  v6 = a3;
  v7 = (__int64 *)(a1 + 1776);
  v9 = *(_BYTE *)(a3 + 28);
  v10 = *(_DWORD *)(a1 + 1792);
  v34 = a2;
  v11 = *(_QWORD *)(a1 + 1776);
  v12 = v9 & 0x7F;
  if ( (_BYTE)v12 != 83 )
    goto LABEL_8;
  v13 = *(_QWORD *)(a3 + 40);
  if ( !v10 )
    goto LABEL_18;
  v14 = (v10 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
  v15 = (__int64 *)(v11 + 16LL * v14);
  v16 = *v15;
  if ( v13 != *v15 )
  {
    v26 = 1;
    if ( v16 != -4096 )
    {
      do
      {
        v27 = v26 + 1;
        v14 = (v10 - 1) & (v26 + v14);
        v15 = (__int64 *)(v11 + 16LL * v14);
        v28 = *v15;
        if ( v13 == *v15 )
          goto LABEL_4;
        v26 = v27;
      }
      while ( v28 != -4096 );
    }
LABEL_18:
    sub_A604F0(v35, (_QWORD *)(v11 + 16LL * v10), (_QWORD *)(v11 + 16LL * v10), (__int64)v7, 1);
    v17 = v35[0].m128_u64[0];
    goto LABEL_5;
  }
LABEL_4:
  sub_A604F0(v35, v15, (_QWORD *)(v11 + 16LL * v10), (__int64)v7, 1);
  v17 = v35[0].m128_u64[0];
LABEL_5:
  v18 = (_QWORD *)(*(_QWORD *)(a1 + 1776) + 16LL * *(unsigned int *)(a1 + 1792));
  sub_A604F0(v35, v18, v18, (__int64)v7, 1);
  if ( v35[0].m128_u64[0] == v17 )
    return;
  v19 = *(__int64 ***)(v17 + 8);
  v12 = *((unsigned int *)v19 + 14);
  if ( v12 + *((unsigned int *)v19 + 2) == 1 )
  {
    if ( (_DWORD)v12 )
      sub_A336F0(*(__int64 **)(v17 + 8), a1);
    a3 = **v19;
    if ( (*(_BYTE *)(a3 + 28) & 0x7F) == 0x53 )
      v6 = **v19;
  }
  v11 = *(_QWORD *)(a1 + 1776);
  v10 = *(_DWORD *)(a1 + 1792);
LABEL_8:
  if ( !v10 )
  {
    v35[0].m128_u64[0] = 0;
    goto LABEL_41;
  }
  v20 = v34;
  a6 = v10 - 1;
  v21 = a6 & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
  v12 = v11 + 16LL * v21;
  v22 = *(_QWORD *)v12;
  if ( v34 == *(_QWORD *)v12 )
    goto LABEL_10;
  v29 = 1;
  v30 = 0;
  if ( v22 == -4096 )
  {
LABEL_20:
    v31 = *(_DWORD *)(a1 + 1784);
    v35[0].m128_u64[0] = v12;
    a3 = (unsigned int)(v31 + 1);
    v11 = (unsigned int)(4 * a3);
    if ( (unsigned int)v11 < 3 * v10 )
    {
      v11 = v10 - ((_DWORD)a3 + *(_DWORD *)(a1 + 1788));
      if ( (unsigned int)v11 > v10 >> 3 )
      {
LABEL_22:
        v32 = *(_QWORD *)v12 == -4096;
        *(_DWORD *)(a1 + 1784) = a3;
        if ( !v32 )
          --*(_DWORD *)(a1 + 1788);
        *(_QWORD *)v12 = v20;
        v24 = (unsigned __int64 *)(v12 + 8);
        *(_QWORD *)(v12 + 8) = 0;
        goto LABEL_25;
      }
      v33 = v10;
LABEL_42:
      sub_A6FEA0((__int64)v7, v33, a3, v12, v11, a6);
      sub_A4A610(v7, &v34, v35);
      v20 = v34;
      v12 = v35[0].m128_u64[0];
      LODWORD(a3) = *(_DWORD *)(a1 + 1784) + 1;
      goto LABEL_22;
    }
LABEL_41:
    v33 = 2 * v10;
    goto LABEL_42;
  }
  while ( 1 )
  {
    if ( !v30 && v22 == -8192 )
      v30 = v12;
    v21 = a6 & (v29 + v21);
    v12 = v11 + 16LL * v21;
    v22 = *(_QWORD *)v12;
    if ( v34 == *(_QWORD *)v12 )
      break;
    if ( v22 == -4096 )
    {
      if ( v30 )
        v12 = v30;
      goto LABEL_20;
    }
    ++v29;
  }
LABEL_10:
  v23 = *(_QWORD *)(v12 + 8);
  v24 = (unsigned __int64 *)(v12 + 8);
  if ( v23 )
  {
    v25 = *(unsigned int *)(v23 + 8);
    if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(v23 + 12) )
    {
      sub_22134E0(v23, v23 + 16, v25 + 1, 8);
      v25 = *(unsigned int *)(v23 + 8);
    }
    goto LABEL_13;
  }
LABEL_25:
  v23 = sub_A55760((__int64 *)(a1 + 2352), 96, 3u);
  *(_QWORD *)v23 = v23 + 16;
  *(_QWORD *)(v23 + 8) = 0x400000000LL;
  *(_QWORD *)(v23 + 56) = 0x400000000LL;
  v25 = 0;
  *(_QWORD *)(v23 + 48) = v23 + 64;
  *v24 = v23;
LABEL_13:
  *(_QWORD *)(*(_QWORD *)v23 + 8 * v25) = v6;
  ++*(_DWORD *)(v23 + 8);
}

