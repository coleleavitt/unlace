__int64 __fastcall sub_116D80(_QWORD *a1, int *a2)
{
  _QWORD *v2; // r15
  __int64 v3; // rdx
  __int64 v4; // rbx
  unsigned int v6; // eax
  __int64 v7; // rcx
  __m128i v8; // xmm1
  __int64 v9; // rax
  __m128i v10; // xmm0
  _QWORD *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rsi
  int v18; // eax
  int *v19; // r15
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 v28; // rbx
  __int64 v29; // rax
  char v30; // [rsp+Fh] [rbp-A1h]
  int *v31; // [rsp+18h] [rbp-98h]
  __int64 v32; // [rsp+20h] [rbp-90h]
  unsigned int v33; // [rsp+28h] [rbp-88h]
  signed int v34; // [rsp+2Ch] [rbp-84h]
  _BYTE v36[16]; // [rsp+40h] [rbp-70h] BYREF
  _QWORD v37[12]; // [rsp+50h] [rbp-60h] BYREF

  v37[5] = __readfsqword(0x28u);
  if ( (unsigned int)(*a2 - 29) <= 0xC )
  {
    v34 = a2[9];
    if ( a1[3] )
      goto LABEL_3;
LABEL_12:
    if ( *((_DWORD *)a1 + 9) < v34 )
      return 0;
    v2 = a1 + 4;
    if ( *((_BYTE *)a1 + 32) != 4 )
      goto LABEL_4;
LABEL_14:
    if ( (unsigned __int8)sub_1205A0(a1[5], *a1, 0) )
      goto LABEL_9;
    goto LABEL_4;
  }
  v34 = a2[17];
  if ( !a1[3] )
    goto LABEL_12;
LABEL_3:
  v2 = a1 + 4;
  if ( *((_BYTE *)a1 + 32) == 4 )
    goto LABEL_14;
LABEL_4:
  v3 = a1[7];
  if ( !v3 || v3 == a1[2] )
    goto LABEL_20;
  sub_124680(v37, a1[1], v3, 1);
  v4 = sub_A9AA0(a1[1], v37, a1[7], a1[2], 1u);
  if ( v37[2] )
  {
    v37[3] = 0;
    qfree(v37[2]);
  }
  qfree(v37[0]);
  if ( !v4 )
    goto LABEL_20;
LABEL_9:
  if ( !(unsigned __int8)sub_125B60(v2, a1[6], 0) )
    return 0;
  v6 = sub_138140(*(_QWORD *)(a1[1] + 64LL), *(int *)(a1[6] + 4LL), 1);
  if ( v6 == -1 )
    return 0;
  v7 = a1[6];
  v8 = _mm_cvtsi32_si128(v6);
  v9 = a1[7];
  v10 = _mm_cvtsi32_si128(*(_DWORD *)(v7 + 4));
  LODWORD(v37[0]) = 1;
  *(_QWORD *)((char *)v37 + 4) = _mm_unpacklo_epi32(v10, v8).m128i_u64[0];
  if ( !v9 )
    v9 = a1[2];
  sub_A3240(a1[1], *(_QWORD *)(v9 + 16), 4, v7, 0, (__int64)v37);
  sub_11CA10(a1[6], v37);
  sub_125180(v2);
  sub_11CDA0(v37);
LABEL_20:
  v11 = (_QWORD *)a1[9];
  v12 = a1[10];
  memset(v37, 0, 24);
  v13 = &v11[v12];
  while ( v13 != v11 )
  {
    sub_123A40(v36, *v11);
    v14 = v37[1];
    v15 = v37[0];
    if ( v37[2] < (unsigned __int64)(v37[1] + 1LL) )
    {
      v37[0] = qvector_reserve(v37, v37[0], v37[1] + 1LL, 16);
      v15 = v37[0];
      v14 = v37[1];
    }
    sub_123A40(v15 + 16 * v14, v36);
    ++v11;
    ++v37[1];
    sub_11CDA0(v36);
  }
  if ( *((_DWORD *)a1 + 9) == v34 )
  {
    v31 = a2 + 8;
    sub_11CA10(a2 + 8, v2);
    v30 = 0;
  }
  else
  {
    v16 = j__qalloc_or_throw(80);
    v17 = *((_QWORD *)a2 + 3);
    *(_QWORD *)(v16 + 40) = 0;
    *(_QWORD *)(v16 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 56) = 0;
    *(_QWORD *)(v16 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 72) = 0;
    sub_330970(v16, v17);
    v18 = 10;
    if ( *((_DWORD *)a1 + 9) <= v34 )
      v18 = (*(_DWORD *)a1[3] != 8) + 8;
    *(_DWORD *)v16 = v18;
    sub_11CA10(v16 + 32, v2);
    *(_DWORD *)(v16 + 68) = v34;
    v31 = a2 + 8;
    sub_11CDA0(a2 + 8);
    *((_BYTE *)a2 + 32) = 4;
    *((_QWORD *)a2 + 5) = v16;
    v30 = 1;
    a2[9] = *(_DWORD *)(v16 + 68);
  }
  v19 = a2 + 12;
  v33 = *a2;
  *a2 = *((unsigned __int8 *)a1 + 133) + 15;
  sub_120A10(a2 + 12, *a1, a1[14], (unsigned int)v34, a1[8], 0);
  v20 = v37[0];
  v32 = v37[0] + 16LL * v37[1];
  if ( v32 != v37[0] )
  {
    do
    {
      v21 = j__qalloc_or_throw(80);
      v22 = *((_QWORD *)a2 + 3);
      *(_QWORD *)(v21 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v21 + 40) = 0;
      *(_QWORD *)(v21 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v21 + 56) = 0;
      *(_QWORD *)(v21 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v21 + 72) = 0;
      sub_330970(v21, v22);
      *(_DWORD *)v21 = *a2;
      sub_11CA10(v21 + 32, v31);
      sub_11CA10(v21 + 48, v19);
      *(_DWORD *)(v21 + 68) = v34;
      *((_BYTE *)a2 + 32) = 4;
      *((_QWORD *)a2 + 5) = v21;
      a2[9] = *(_DWORD *)(v21 + 68);
      sub_11CA10(v19, v20);
      v23 = (unsigned int)a2[9];
      if ( a2[13] > (int)v23 )
        sub_1207E0(v19, *a1, 10, *(_QWORD *)(v21 + 24), v23);
      v20 += 16;
      *a2 = 12;
    }
    while ( v32 != v20 );
  }
  if ( v33 - 29 <= 0xC )
  {
    a2[17] = a2[9];
    sub_12B6F0(a2, *a1, v33, 1, 1);
    sub_120A10(v19, *a1, 0, (unsigned int)a2[9], *((_QWORD *)a2 + 3), 0);
  }
  if ( v30 )
    sub_15BC70((_DWORD)a2, *a1, 0, 0, 0, 0, 0);
  v24 = a1[1];
  v25 = *(_DWORD *)(v24 + 24);
  BYTE1(v25) &= ~2u;
  LOBYTE(v25) = v25 | 0x80;
  *(_DWORD *)(v24 + 24) = v25;
  v26 = v37[0];
  if ( v37[0] )
  {
    v27 = v37[1];
    if ( v37[1] )
    {
      v28 = 0;
      do
      {
        v29 = v28++;
        sub_11CDA0(16 * v29 + v26);
        v26 = v37[0];
      }
      while ( v27 != v28 );
    }
    v37[1] = 0;
    qfree(v26);
  }
  return 1;
}
