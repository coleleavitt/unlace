_BYTE *__fastcall sub_E3E660(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v8; // rsi
  int v9; // eax
  int v10; // r12d
  __int64 v11; // rdi
  _WORD *v12; // rdx
  __int64 v13; // rdi
  _BYTE *result; // rax
  int v15; // eax
  _BYTE *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  _BYTE *v19; // rax
  __int64 v20; // r12
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // edi
  unsigned __int64 v25; // rsi
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  int v28; // r11d
  unsigned __int64 v29; // r13
  int v30; // edi
  __int64 v31; // r9
  bool v32; // zf
  __int64 v33; // rdx
  __int64 *v34; // [rsp+8h] [rbp-50h]
  __int64 v35; // [rsp+10h] [rbp-48h] BYREF
  int v36; // [rsp+18h] [rbp-40h]
  __m128 v37[3]; // [rsp+20h] [rbp-38h] BYREF

  v6 = a2;
  v8 = *(_QWORD *)(a2 + 120);
  if ( v8 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 2320LL) + 212LL) <= 0x6Fu )
    {
      v15 = *(_BYTE *)(v8 + 28) & 0x7F;
      if ( (unsigned int)(v15 - 40) <= 6 || (unsigned int)(v15 - 49) <= 2 )
      {
        v16 = (_BYTE *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
        {
          if ( ((*(_BYTE *)(*(_QWORD *)v16 + 8LL) + 70) & 0x7Fu) > 3 )
            goto LABEL_3;
        }
        else if ( ((v16[8] + 70) & 0x7Fu) > 3 )
        {
          goto LABEL_3;
        }
        v17 = *(_QWORD *)(v8 + 40);
        if ( (v17 & 7) == 0 && (v17 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          sub_E3B3C0((__int64)a1, v8);
          v18 = a1[1];
          v19 = *(_BYTE **)(v18 + 32);
          if ( (unsigned __int64)v19 >= *(_QWORD *)(v18 + 24) )
          {
            sub_227BA10(v18, 77);
          }
          else
          {
            *(_QWORD *)(v18 + 32) = v19 + 1;
            *v19 = 77;
          }
        }
      }
    }
  }
LABEL_3:
  v9 = *(_DWORD *)(v6 + 116);
  v10 = v9 - 1;
  if ( v9 )
    goto LABEL_4;
  v20 = *a1;
  v35 = v6;
  v21 = *(unsigned int *)(v20 + 40);
  v22 = *(_DWORD *)(v20 + 48);
  v23 = v20 + 32;
  v36 = *(_DWORD *)(v20 + 40);
  if ( !v22 )
  {
    v37[0].m128_u64[0] = 0;
    goto LABEL_34;
  }
  a5 = *(_QWORD *)(v20 + 32);
  v24 = (v22 - 1) & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
  v25 = a5 + 16LL * v24;
  v26 = *(_QWORD *)v25;
  if ( v6 != *(_QWORD *)v25 )
  {
    v28 = 1;
    v29 = 0;
    if ( v26 != -4096 )
    {
      while ( 1 )
      {
        if ( v26 == -8192 && !v29 )
          v29 = v25;
        v24 = (v22 - 1) & (v28 + v24);
        v25 = a5 + 16LL * v24;
        v26 = *(_QWORD *)v25;
        if ( v6 == *(_QWORD *)v25 )
          goto LABEL_20;
        if ( v26 == -4096 )
        {
          if ( v29 )
            v25 = v29;
          break;
        }
        ++v28;
      }
    }
    v30 = v21 + 1;
    a6 = 3 * v22;
    v37[0].m128_u64[0] = v25;
    if ( 4 * ((int)v21 + 1) < (unsigned int)a6 )
    {
      v31 = v22 - *(_DWORD *)(v20 + 44) - v30;
      if ( (unsigned int)v31 > v22 >> 3 )
      {
LABEL_30:
        v32 = *(_QWORD *)v25 == -4096;
        *(_DWORD *)(v20 + 40) = v30;
        if ( !v32 )
          --*(_DWORD *)(v20 + 44);
        *(_DWORD *)(v25 + 8) = v21;
        v33 = *(unsigned int *)(v20 + 48);
        *(_QWORD *)v25 = v6;
        sub_E3DF30(v37, (_QWORD *)v25, (_QWORD *)(a5 + 16 * v33), v23, 1);
        v27 = v37[0].m128_u64[0];
        goto LABEL_21;
      }
      v34 = (__int64 *)(v20 + 32);
      sub_E3E460((__int64 *)(v20 + 32), v22, v21, v23, a5, v31);
LABEL_35:
      sub_E3C750(v34, &v35, v37);
      v6 = v35;
      LODWORD(v21) = v36;
      a5 = *(_QWORD *)(v20 + 32);
      v30 = *(_DWORD *)(v20 + 40) + 1;
      v25 = v37[0].m128_u64[0];
      v23 = (__int64)v34;
      goto LABEL_30;
    }
LABEL_34:
    v34 = (__int64 *)(v20 + 32);
    sub_E3E460((__int64 *)(v20 + 32), 2 * v22, v21, v23, a5, a6);
    goto LABEL_35;
  }
LABEL_20:
  sub_E3DF30(v37, (_QWORD *)v25, (_QWORD *)(a5 + 16LL * v22), v23, 1);
  v27 = v37[0].m128_u64[0];
LABEL_21:
  v10 = *(_DWORD *)(v27 + 8);
LABEL_4:
  v11 = a1[1];
  v12 = *(_WORD **)(v11 + 32);
  if ( *(_QWORD *)(v11 + 24) - (_QWORD)v12 > 1u )
  {
    *v12 = 25173;
    *(_QWORD *)(v11 + 32) += 2LL;
  }
  else
  {
    sub_227BF10(v11, "Ub", 2);
  }
  v13 = a1[1];
  if ( v10 )
  {
    sub_227B910(v13, (unsigned int)(v10 - 1));
    v13 = a1[1];
  }
  result = *(_BYTE **)(v13 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v13 + 24) )
    return (_BYTE *)sub_227BA10(v13, 95);
  *(_QWORD *)(v13 + 32) = result + 1;
  *result = 95;
  return result;
}
