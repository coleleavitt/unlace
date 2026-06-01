__int64 __fastcall sub_116D80(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned int v9; // eax
  __int64 v10; // rcx
  __m128i v11; // xmm1
  __int64 v12; // rax
  __m128i v13; // xmm0
  _QWORD *v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rsi
  int v23; // eax
  __int64 *v24; // r15
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // r14
  __int64 v36; // rbx
  __int64 v37; // rax
  char v38; // [rsp+Fh] [rbp-A1h]
  __int64 *v39; // [rsp+18h] [rbp-98h]
  __int64 v40; // [rsp+20h] [rbp-90h]
  unsigned int v41; // [rsp+28h] [rbp-88h]
  signed int v42; // [rsp+2Ch] [rbp-84h]
  __int64 *v43; // [rsp+38h] [rbp-78h]
  _BYTE v44[16]; // [rsp+40h] [rbp-70h] BYREF
  __int64 v45[12]; // [rsp+50h] [rbp-60h] BYREF

  v43 = a2;
  v45[5] = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)a2 - 29) <= 0xC )
  {
    v42 = *((_DWORD *)a2 + 9);
    if ( a1[3] )
      goto LABEL_3;
LABEL_12:
    if ( *((_DWORD *)a1 + 9) < v42 )
      return 0;
    v5 = a1 + 4;
    if ( *((_BYTE *)a1 + 32) != 4 )
      goto LABEL_4;
LABEL_14:
    a2 = (__int64 *)*a1;
    if ( (unsigned __int8)sub_1205A0(a1[5], *a1, 0) )
      goto LABEL_9;
    goto LABEL_4;
  }
  v42 = *((_DWORD *)a2 + 17);
  if ( !a1[3] )
    goto LABEL_12;
LABEL_3:
  v5 = a1 + 4;
  if ( *((_BYTE *)a1 + 32) == 4 )
    goto LABEL_14;
LABEL_4:
  v6 = a1[7];
  if ( !v6 || v6 == a1[2] )
    goto LABEL_20;
  sub_124680(v45, a1[1], v6, 1);
  a2 = v45;
  v7 = sub_A9AA0(a1[1], v45, a1[7], a1[2], 1u);
  if ( v45[2] )
  {
    v45[3] = 0;
    qfree(v45[2]);
  }
  qfree(v45[0]);
  if ( !v7 )
    goto LABEL_20;
LABEL_9:
  if ( !(unsigned __int8)sub_125B60(v5, a1[6], 0) )
    return 0;
  v9 = sub_138140(*(_QWORD *)(a1[1] + 64LL), *(int *)(a1[6] + 4LL), 1);
  if ( v9 == -1 )
    return 0;
  v10 = a1[6];
  v11 = _mm_cvtsi32_si128(v9);
  v12 = a1[7];
  v13 = _mm_cvtsi32_si128(*(_DWORD *)(v10 + 4));
  LODWORD(v45[0]) = 1;
  *(__int64 *)((char *)v45 + 4) = _mm_unpacklo_epi32(v13, v11).m128i_u64[0];
  if ( !v12 )
    v12 = a1[2];
  v14 = sub_A3240(a1[1], *(_QWORD *)(v12 + 16), 4, v10, 0, (__int64)v45);
  sub_11CA10(a1[6], v45);
  a2 = v14 + 8;
  sub_125180(v5);
  sub_11CDA0(v45);
LABEL_20:
  v15 = a1[9];
  v16 = a1[10];
  memset(v45, 0, 24);
  v17 = v15 + 8 * v16;
  while ( v17 != v15 )
  {
    sub_123A40(v44);
    v19 = v45[1];
    v20 = v45[0];
    if ( v45[2] < (unsigned __int64)(v45[1] + 1) )
    {
      v45[0] = qvector_reserve((__int64)v45, v45[0], v45[1] + 1, 16);
      v20 = v45[0];
      v19 = v45[1];
    }
    v18 = v20 + 16 * v19;
    a2 = (__int64 *)v44;
    sub_123A40(v18);
    v15 += 8;
    ++v45[1];
    sub_11CDA0(v44);
  }
  if ( *((_DWORD *)a1 + 9) == v42 )
  {
    v39 = v43 + 4;
    sub_11CA10(v43 + 4, v5);
    v38 = 0;
  }
  else
  {
    v21 = j__qalloc_or_throw(80, (__int64)a2, v6, a4);
    v22 = v43[3];
    *(_QWORD *)(v21 + 40) = 0;
    *(_QWORD *)(v21 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v21 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v21 + 56) = 0;
    *(_QWORD *)(v21 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v21 + 72) = 0;
    sub_330970(v21, v22);
    v23 = 10;
    if ( *((_DWORD *)a1 + 9) <= v42 )
      v23 = (*(_DWORD *)a1[3] != 8) + 8;
    *(_DWORD *)v21 = v23;
    sub_11CA10(v21 + 32, v5);
    *(_DWORD *)(v21 + 68) = v42;
    v39 = v43 + 4;
    sub_11CDA0(v43 + 4);
    *((_BYTE *)v43 + 32) = 4;
    v43[5] = v21;
    v38 = 1;
    *((_DWORD *)v43 + 9) = *(_DWORD *)(v21 + 68);
  }
  v24 = v43 + 6;
  v41 = *(_DWORD *)v43;
  *(_DWORD *)v43 = *((unsigned __int8 *)a1 + 133) + 15;
  v25 = *a1;
  sub_120A10(v43 + 6, *a1, a1[14], (unsigned int)v42, a1[8], 0);
  v28 = v45[0];
  v40 = v45[0] + 16 * v45[1];
  if ( v40 != v45[0] )
  {
    do
    {
      v29 = j__qalloc_or_throw(80, v25, v26, v27);
      v30 = v43[3];
      *(_QWORD *)(v29 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v29 + 40) = 0;
      *(_QWORD *)(v29 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v29 + 56) = 0;
      *(_QWORD *)(v29 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v29 + 72) = 0;
      sub_330970(v29, v30);
      *(_DWORD *)v29 = *(_DWORD *)v43;
      sub_11CA10(v29 + 32, v39);
      sub_11CA10(v29 + 48, v24);
      v25 = v28;
      *(_DWORD *)(v29 + 68) = v42;
      *((_BYTE *)v43 + 32) = 4;
      v43[5] = v29;
      *((_DWORD *)v43 + 9) = *(_DWORD *)(v29 + 68);
      sub_11CA10(v24, v28);
      v31 = *((unsigned int *)v43 + 9);
      if ( *((_DWORD *)v43 + 13) > (int)v31 )
      {
        v25 = *a1;
        sub_1207E0(v24, *a1, 10, *(_QWORD *)(v29 + 24), v31);
      }
      v28 += 16;
      *(_DWORD *)v43 = 12;
    }
    while ( v40 != v28 );
  }
  if ( v41 - 29 <= 0xC )
  {
    *((_DWORD *)v43 + 17) = *((_DWORD *)v43 + 9);
    sub_12B6F0(v43, *a1, v41, 1, 1);
    sub_120A10(v24, *a1, 0, *((unsigned int *)v43 + 9), v43[3], 0);
  }
  if ( v38 )
    sub_15BC70((_DWORD)v43, *a1, 0, 0, 0, 0, 0);
  v32 = a1[1];
  v33 = *(_DWORD *)(v32 + 24);
  BYTE1(v33) &= ~2u;
  LOBYTE(v33) = v33 | 0x80;
  *(_DWORD *)(v32 + 24) = v33;
  v34 = v45[0];
  if ( v45[0] )
  {
    v35 = v45[1];
    if ( v45[1] )
    {
      v36 = 0;
      do
      {
        v37 = v36++;
        sub_11CDA0(16 * v37 + v34);
        v34 = v45[0];
      }
      while ( v35 != v36 );
    }
    v45[1] = 0;
    qfree(v34);
  }
  return 1;
}
