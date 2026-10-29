__int64 __fastcall sub_14F8460(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r12
  __int64 result; // rax
  __int64 v5; // rax
  int v6; // r13d
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __m128i *v13; // rax
  const __m128i *v14; // r15
  __m128i v15; // xmm0
  __int64 v16; // rdx
  const __m128i *v17; // r15
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __m128i v22; // xmm1
  __m128i *v23; // rax
  char *v24; // rsi
  __int64 v25; // rdx
  __int16 v26; // ax
  int v27; // esi
  bool v28; // zf
  __int16 v29; // ax
  __int64 v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rsi
  __int8 *v34; // r15
  __int64 v35; // [rsp+0h] [rbp-98h]
  __int64 v36; // [rsp+0h] [rbp-98h]
  unsigned __int64 v37; // [rsp+8h] [rbp-90h]
  __int64 v38; // [rsp+18h] [rbp-80h] BYREF
  _DWORD v39[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v40; // [rsp+28h] [rbp-70h]
  int v41; // [rsp+30h] [rbp-68h]
  _BYTE v42[88]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
  {
    result = *(_BYTE *)(v3 + 28) & 0x7F;
    if ( a3 )
    {
      if ( (_BYTE)result != 18 )
        return result;
    }
    else if ( (_BYTE)result == 18 )
    {
      return result;
    }
  }
  v5 = *(unsigned int *)(a2 + 32);
  v6 = *(_DWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a2 + 24);
  v10 = *(unsigned int *)(a2 + 36);
  v40 = *(_QWORD *)(a2 + 16);
  v11 = v5 + 1;
  v39[0] = v6;
  v39[1] = 0;
  v12 = a2 + 24;
  v13 = (__m128i *)(v9 + 24 * v5);
  v41 = 1;
  v14 = (const __m128i *)v39;
  if ( v11 > v10 )
  {
    v30 = a2 + 40;
    if ( v9 > (unsigned __int64)v39 || v13 <= (__m128i *)v39 )
    {
      v36 = v12;
      sub_2237220(v12, v30, v11, 24);
      v12 = v36;
      v13 = (__m128i *)(*(_QWORD *)(a2 + 24) + 24LL * *(unsigned int *)(a2 + 32));
    }
    else
    {
      v37 = v9;
      v35 = v12;
      sub_2237220(v12, v30, v11, 24);
      v31 = *(_QWORD *)(a2 + 24);
      v12 = v35;
      v14 = (const __m128i *)((char *)v39 + v31 - v37);
      v13 = (__m128i *)(v31 + 24LL * *(unsigned int *)(a2 + 32));
    }
  }
  v15 = _mm_loadu_si128(v14);
  *v13 = v15;
  v16 = v14[1].m128i_i64[0];
  v17 = (const __m128i *)(a1 + 16);
  v13[1].m128i_i64[0] = v16;
  v18 = *(unsigned int *)(a2 + 36);
  v19 = (unsigned int)(*(_DWORD *)(a2 + 32) + 1);
  v20 = v19 + 1;
  *(_DWORD *)(a2 + 32) = v19;
  if ( v19 + 1 > v18 )
  {
    v32 = *(_QWORD *)(a2 + 24);
    v33 = a2 + 40;
    if ( v32 > (unsigned __int64)v17 || (unsigned __int64)v17 >= v32 + 24 * v19 )
    {
      sub_2237220(v12, v33, v20, 24);
      v21 = *(_QWORD *)(a2 + 24);
      v19 = *(unsigned int *)(a2 + 32);
    }
    else
    {
      v34 = &v17->m128i_i8[-v32];
      sub_2237220(v12, v33, v20, 24);
      v21 = *(_QWORD *)(a2 + 24);
      v19 = *(unsigned int *)(a2 + 32);
      v17 = (const __m128i *)&v34[v21];
    }
  }
  else
  {
    v21 = *(_QWORD *)(a2 + 24);
  }
  v22 = _mm_loadu_si128(v17);
  v23 = (__m128i *)(v21 + 24 * v19);
  *v23 = v22;
  v23[1].m128i_i64[0] = v17[1].m128i_i64[0];
  v24 = *(char **)(a2 + 24);
  v25 = (unsigned int)(*(_DWORD *)(a2 + 32) + 1);
  *(_DWORD *)(a2 + 32) = v25;
  sub_14368B0(*(_QWORD *)(a1 + 8), v24, v25, 1u, 0, 1u);
  sub_149F520(a1, 1);
  if ( a3 )
  {
    sub_146B5E0(&v38, a1, 0x400809u, 1, 0);
    sub_15F3080(v42, *(_QWORD *)(a1 + 96));
    sub_18A40F0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v3);
    v26 = *(_WORD *)(a1 + 32);
    if ( v26 != 150 )
      goto LABEL_9;
LABEL_27:
    sub_15372E0(a1, v3, &v38);
    goto LABEL_12;
  }
  sub_146B5E0(&v38, a1, 0x400009u, 1, 0);
  sub_15F3080(v42, *(_QWORD *)(a1 + 96));
  sub_17DE740(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v3, 0, 0);
  v26 = *(_WORD *)(a1 + 32);
  if ( v26 == 150 )
    goto LABEL_27;
LABEL_9:
  if ( v26 == 62 )
    sub_14A5C50(a1, v3, v15, *(double *)v22.m128i_i64);
  else
    sub_187CD10(*(_QWORD *)(a1 + 96), v3);
  sub_153D670(a1, v3, &v38);
LABEL_12:
  v27 = *(_DWORD *)(a1 + 16);
  if ( v6 == v27 )
  {
LABEL_19:
    v29 = *(_WORD *)(a1 + 32);
    goto LABEL_20;
  }
  v28 = sub_10246C0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL), v27, v6) == 0;
  v29 = *(_WORD *)(a1 + 32);
  if ( !v28 && v6 != *(_DWORD *)(a1 + 16) )
  {
    if ( v29 == 1 )
    {
LABEL_28:
      if ( v3 == *(_QWORD *)(a1 + 24) )
        sub_149F520(a1, 0);
      goto LABEL_21;
    }
    while ( 1 )
    {
      sub_149F520(a1, 0);
      if ( v6 == *(_DWORD *)(a1 + 16) )
        goto LABEL_19;
      if ( *(_WORD *)(a1 + 32) == 1 )
        goto LABEL_28;
    }
  }
LABEL_20:
  if ( v29 == 1 )
    goto LABEL_28;
LABEL_21:
  result = sub_15F30C0(v42);
  if ( v38 )
    return sub_1564F70(v38);
  return result;
}
