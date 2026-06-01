_BYTE *__fastcall sub_14A9480(__int64 a1, __int64 a2, __int64 a3, double a4, double a5)
{
  bool v6; // zf
  char v7; // al
  _BYTE *result; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rcx
  const __m128i *v22; // r13
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __m128i *v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  const __m128i *v29; // rdx
  __m128i *v30; // rax
  __int64 *v31; // rdi
  size_t v32; // rax
  char v33; // al
  unsigned __int64 v34; // r13
  __int64 v35; // rsi
  int *i; // [rsp+0h] [rbp-F8h]
  __int64 v37; // [rsp+8h] [rbp-F0h]
  int v38; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v39; // [rsp+14h] [rbp-E4h]
  __int64 v40; // [rsp+1Ch] [rbp-DCh]
  _BYTE *v41; // [rsp+30h] [rbp-C8h] BYREF
  char v42; // [rsp+38h] [rbp-C0h]
  __int64 v43; // [rsp+40h] [rbp-B8h]
  int v44; // [rsp+48h] [rbp-B0h]
  __int16 v45; // [rsp+4Ch] [rbp-ACh]
  __int64 (__fastcall *v46)(__int64); // [rsp+50h] [rbp-A8h]
  __int64 v47; // [rsp+58h] [rbp-A0h]
  __int64 v48; // [rsp+60h] [rbp-98h]
  int v49; // [rsp+70h] [rbp-88h] BYREF
  __int64 v50; // [rsp+74h] [rbp-84h]
  __int64 v51; // [rsp+7Ch] [rbp-7Ch]

  v6 = *(_WORD *)(a1 + 32) == 22;
  v41 = (_BYTE *)(a1 + 1952);
  v7 = *(_BYTE *)(a1 + 1952);
  v43 = a1;
  v42 = v7;
  *(_BYTE *)(a1 + 1952) = 1;
  v44 = 1507350;
  v45 = 63;
  v46 = sub_146A990;
  v47 = 0;
  v48 = 0;
  if ( !v6 )
    goto LABEL_2;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
  {
    if ( (unsigned __int8)sub_1568800(&v41) )
    {
LABEL_2:
      sub_1564840(&v49, a1, a1 + 16, 14);
      sub_AE9DF0((unsigned __int8 **)&v49, 22, 4u);
      sub_AEA040((__int64)&v49);
      result = v41;
      *v41 = v42;
      return result;
    }
  }
  else
  {
    LODWORD(v48) = sub_146A990(a1);
  }
  v10 = *(_QWORD *)(a2 + 16);
  if ( *(_DWORD *)v10 != 9 || *(_QWORD *)(v10 + 16) != 0x7669746365726964LL || *(_BYTE *)(v10 + 24) != 101 )
  {
    for ( i = (int *)(a1 + 16); ; sub_14634E0(v31, i) )
    {
      v38 = 0;
      v11 = sub_14A90A0(a1, &v38, 2, 0, a4, a5);
      v12 = v11;
      if ( !v11 )
        break;
      v13 = *(_QWORD *)(v11 + 16);
      if ( *(_DWORD *)v13 == 3 && *(_WORD *)(v13 + 16) == 28015 && *(_BYTE *)(v13 + 18) == 112 )
      {
        v37 = v12;
        v32 = j__strlen(&byte_22F0C30);
        v33 = sub_1569A00(a1, 72, 14, &byte_22F0C30, v32);
        v12 = v37;
        if ( !v33 )
          v12 = sub_14A90A0(a1, &v38, 2, 0, a4, a5);
      }
      if ( !v12 )
        break;
      v14 = *(_QWORD *)(v12 + 16);
      if ( (unsigned int)*(_QWORD *)v14 == 9 )
      {
        if ( *(_QWORD *)(v14 + 16) != 0x7669746365726964LL || *(_BYTE *)(v14 + 24) != 101 )
          break;
      }
      else if ( (unsigned int)*(_QWORD *)v14 != 8 || *(_QWORD *)(v14 + 16) != 0x65636E6575716573LL )
      {
        break;
      }
      v15 = (__int64 *)v12;
      sub_14A9480(a1, v12, a3);
LABEL_13:
      if ( *(_WORD *)(a1 + 32) != 66 )
        goto LABEL_14;
      v31 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    }
    sub_1564820(&v49, a1, *(unsigned int *)(a1 + 16), 1651);
    sub_AEA040((__int64)&v49);
    v15 = (__int64 *)&v49;
    LOWORD(v49) = 23;
    sub_15680D0(a1, &v49, 1, 2);
    goto LABEL_13;
  }
  v20 = *(_QWORD *)a3;
  v21 = *(unsigned int *)(a3 + 12);
  v39 = 0;
  v40 = 0x1BF00000000LL;
  v22 = (const __m128i *)&v38;
  v38 = *(_DWORD *)(a1 + 16);
  v23 = *(unsigned int *)(a3 + 8);
  v24 = v23 + 1;
  v25 = (__m128i *)(v20 + 24 * v23);
  if ( v24 > v21 )
  {
    v35 = a3 + 16;
    if ( v20 > (unsigned __int64)&v38 || v25 <= (__m128i *)&v38 )
    {
      sub_2237220(a3, v35, v24, 24);
      v25 = (__m128i *)(*(_QWORD *)a3 + 24LL * *(unsigned int *)(a3 + 8));
    }
    else
    {
      sub_2237220(a3, v35, v24, 24);
      v22 = (const __m128i *)((char *)&v38 + *(_QWORD *)a3 - v20);
      v25 = (__m128i *)(*(_QWORD *)a3 + 24LL * *(unsigned int *)(a3 + 8));
    }
  }
  v15 = (_QWORD *)(&dword_14 + 3);
  *v25 = _mm_loadu_si128(v22);
  v25[1].m128i_i64[0] = v22[1].m128i_i64[0];
  ++*(_DWORD *)(a3 + 8);
  sub_146E570(a1, 23, 23, a3, 0, 0);
  v26 = *(unsigned int *)(a3 + 12);
  v50 = 0;
  v51 = 0x1C100000000LL;
  v49 = *(_DWORD *)(a1 + 16);
  v27 = *(unsigned int *)(a3 + 8);
  v28 = v27 + 1;
  if ( v27 + 1 > v26 )
  {
    v34 = *(_QWORD *)a3;
    v15 = (__int64 *)(a3 + 16);
    if ( *(_QWORD *)a3 > (unsigned __int64)&v49 || (unsigned __int64)&v49 >= v34 + 24 * v27 )
    {
      sub_2237220(a3, v15, v28, 24);
      v17 = *(_QWORD *)a3;
      v27 = *(unsigned int *)(a3 + 8);
      v29 = (const __m128i *)&v49;
    }
    else
    {
      sub_2237220(a3, v15, v28, 24);
      v17 = *(_QWORD *)a3;
      v27 = *(unsigned int *)(a3 + 8);
      v29 = (const __m128i *)((char *)&v49 + *(_QWORD *)a3 - v34);
    }
  }
  else
  {
    v17 = *(_QWORD *)a3;
    v29 = (const __m128i *)&v49;
  }
  v30 = (__m128i *)(v17 + 24 * v27);
  *v30 = _mm_loadu_si128(v29);
  v16 = v29[1].m128i_i64[0];
  v30[1].m128i_i64[0] = v16;
  ++*(_DWORD *)(a3 + 8);
LABEL_14:
  sub_14808E0((__int64)&v41, v15, v16, v17, v18, v19);
  result = v41;
  *v41 = v42;
  return result;
}
