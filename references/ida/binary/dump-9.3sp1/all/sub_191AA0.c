__int64 __fastcall sub_191AA0(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // rbp
  unsigned __int8 *v14; // r13
  __int64 v15; // r12
  __int64 v16; // rax
  int v17; // eax
  __m128i v19; // xmm0
  __int64 v20; // rax
  char v21; // si
  __int64 v22; // r8
  __int64 v23; // rbp
  int v24; // eax
  __int64 v25; // rdx
  unsigned __int8 v26[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 24);
  v5 = a2[1];
  v27 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(v4 + 1504);
  if ( a4 == -1 )
  {
    v8 = a2[2];
    if ( v8 == v5
      && ((v21 = *(_BYTE *)(v8 + 64), v21 == 1)
        ? (v22 = *(int *)(v8 + 72))
        : v21 == 5
        ? (v22 = *(_QWORD *)(*(_QWORD *)(v8 + 72) + 8LL))
        : (v21 = 0, v22 = -1),
          *(_BYTE *)(a3 + 8) == v21 && *(_QWORD *)a3 == v22) )
    {
      v23 = *a2;
      sub_11D5A0(v5);
      v24 = *(_DWORD *)(v23 + 24);
      BYTE1(v24) &= ~2u;
      LOBYTE(v24) = v24 | 0x80;
      *(_DWORD *)(v23 + 24) = v24;
    }
    else
    {
      if ( *(_BYTE *)(v5 + 32) == 10 )
      {
        v25 = *(_QWORD *)(v5 + 40);
        if ( *(_BYTE *)v25 == 6 && *(_QWORD *)(v4 + 1352) == *(_QWORD *)(v25 + 8) )
        {
          sub_11CA10((char *)(v5 + 32), (char *)(v5 + 48));
          v8 = a2[2];
        }
      }
      if ( !(unsigned __int8)sub_11C750((int *)v8, v7, 0) )
      {
        v11 = j__qalloc_or_throw(80, v7, v9, v10);
        v12 = a2[1];
        v13 = (_QWORD *)v11;
        *(_OWORD *)(v11 + 8) = 0;
        v14 = (unsigned __int8 *)(v11 + 32);
        v15 = v11 + 64;
        *(_QWORD *)(v11 + 40) = 0;
        *(_QWORD *)(v11 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v11 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v11 + 56) = 0;
        *(_QWORD *)(v11 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v11 + 72) = 0;
        sub_1253A0(v11, v12);
        *(_DWORD *)v13 = 13;
        sub_125180(v15, v14);
        v16 = a2[2];
        if ( !v16 )
          v16 = a2[1];
        v13[3] = *(_QWORD *)(v16 + 24);
        sub_A3160(*a2, v13, a2[2]);
      }
      sub_11CDA0(a2[1] + 48);
      *(_DWORD *)a2[1] = 4;
    }
  }
  else
  {
    *(_DWORD *)v5 = 4;
    v19 = _mm_cvtsi32_si128(*(_DWORD *)(v7 + 84));
    v20 = a2[1];
    *(_DWORD *)v26 = 1;
    *(_QWORD *)&v26[4] = _mm_unpacklo_epi32(v19, _mm_cvtsi32_si128(a4)).m128i_u64[0];
    sub_125180(v20 + 32, v26);
    sub_11CDA0((__int64)v26);
    sub_11CDA0(a2[1] + 48);
  }
  v17 = *(_DWORD *)(*a2 + 24);
  BYTE1(v17) &= ~2u;
  LOBYTE(v17) = v17 | 0x80;
  *(_DWORD *)(*a2 + 24) = v17;
  return 1;
}
