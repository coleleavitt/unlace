__int64 __fastcall sub_867340(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int v12; // r15d
  bool v14; // al
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  unsigned int v18; // edx
  unsigned int v19; // eax
  __int64 j; // r15
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // edi
  unsigned int v28; // edx
  __int64 i; // rax
  __m128i v30; // xmm0
  __int64 v31; // rax
  const __m128i *v32; // r15
  char v33; // al
  char v34; // al
  char v35; // al
  char v36; // al
  __int64 v37; // [rsp+0h] [rbp-C8h]
  __int64 v38; // [rsp+0h] [rbp-C8h]
  unsigned int v39; // [rsp+Ch] [rbp-BCh]
  __m128i v40; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v41; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+30h] [rbp-98h]

  if ( (unsigned __int8)sub_7A4F00((_QWORD *)a4) )
    return 0;
  v14 = sub_7A55C0((_DWORD *)a4);
  v15 = *(_QWORD *)(a1 + 32);
  if ( v14 )
  {
    v16 = *(_QWORD *)(v15 + 48);
    v17 = **(_QWORD **)(a4 + 120);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 48)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 42 > 1 )
    {
      if ( v16 )
      {
        v26 = (unsigned __int8)(*(_WORD *)(v17 + 98) >> 4);
        if ( v26 == 255 )
        {
          v37 = *(_QWORD *)(v15 + 48);
          v26 = sub_77D6D0(**(_QWORD **)(a4 + 120));
          v15 = *(_QWORD *)(a1 + 32);
          v16 = v37;
        }
        v17 = *(_QWORD *)(*(_QWORD *)(v16 + 120) + 8LL * v26);
      }
      v27 = *(_DWORD *)(v15 + 56);
      v28 = *(_DWORD *)(v15 + 176);
      for ( i = v15; v27 < v28; v28 = *(_DWORD *)(i + 176) )
        i = *(_QWORD *)(i + 16);
      if ( v27 != v28 )
        BUG();
      sub_69F1C0((__int64)&v40, v17, v27, *(_DWORD *)(v15 + 60));
      v30 = _mm_load_si128(&v40);
      *(_BYTE *)(a3 + 128) &= ~2u;
      *(_QWORD *)(a3 + 16) = 0;
      *(__m128i *)a3 = v30;
      v41 = v30;
      v31 = sub_69F240(v41.m128i_i64);
      *(_DWORD *)(a3 + 24) = 0;
      *(_WORD *)(a3 + 128) &= 0xFEu;
      v42 = v31;
      *(_QWORD *)(a3 + 32) = 0;
      *(_QWORD *)(a3 + 40) = v31;
      *(_DWORD *)(a3 + 56) = 0;
    }
    else
    {
      v18 = *(_DWORD *)(v15 + 56);
      v19 = *(_DWORD *)(v15 + 176);
      for ( j = *(_QWORD *)(a1 + 32); v18 < v19; v19 = *(_DWORD *)(j + 176) )
        j = *(_QWORD *)(j + 16);
      if ( v18 != v19 )
        goto LABEL_43;
      v21 = *(_DWORD *)(v15 + 60);
      if ( v16 )
      {
        v22 = (unsigned __int8)(*(_WORD *)(v17 + 98) >> 4);
        if ( v22 == 255 )
        {
          v39 = v21;
          v38 = v16;
          v22 = sub_77D6D0(v17);
          v21 = v39;
          v16 = v38;
        }
        v17 = *(_QWORD *)(*(_QWORD *)(v16 + 120) + 8LL * v22);
      }
      v23 = *(_QWORD *)(j + 88);
      if ( !v23 )
        goto LABEL_43;
      v24 = j + 80;
      do
      {
        while ( *(_QWORD *)(v23 + 32) >= v17 && (*(_QWORD *)(v23 + 32) != v17 || *(_DWORD *)(v23 + 40) >= v21) )
        {
          v24 = v23;
          v23 = *(_QWORD *)(v23 + 16);
          if ( !v23 )
            goto LABEL_20;
        }
        v23 = *(_QWORD *)(v23 + 24);
      }
      while ( v23 );
LABEL_20:
      if ( v24 == j + 80 || *(_QWORD *)(v24 + 32) != v17 || *(_DWORD *)(v24 + 40) != v21 )
LABEL_43:
        BUG();
      if ( (*(_BYTE *)(v24 + 52) & 1) == 0 || *(_DWORD *)(v24 + 48) > 1u )
        sub_824D00(a3, *(_QWORD **)(a1 + 16), v24 + 48);
    }
  }
  else
  {
    v32 = *(const __m128i **)(v15 + 32);
    *(__m128i *)a3 = _mm_loadu_si128(v32);
    *(_QWORD *)(a3 + 16) = v32[1].m128i_i64[0];
    v33 = v32[1].m128i_i8[8] & 1 | *(_BYTE *)(a3 + 24) & 0xFE;
    *(_BYTE *)(a3 + 24) = v33;
    v34 = v32[1].m128i_i8[8] & 2 | v33 & 0xFD;
    *(_BYTE *)(a3 + 24) = v34;
    v35 = v32[1].m128i_i8[8] & 4 | v34 & 0xFB;
    *(_BYTE *)(a3 + 24) = v35;
    *(_BYTE *)(a3 + 24) = v32[1].m128i_i8[8] & 8 | v35 & 0xF7;
    *(_DWORD *)(a3 + 24) = v32[1].m128i_i32[2] & 0xFFFFFFF0 | *(_DWORD *)(a3 + 24) & 0xF;
    *(_QWORD *)(a3 + 32) = v32[2].m128i_i64[0];
    *(_QWORD *)(a3 + 40) = v32[2].m128i_i64[1];
    sub_820650(a3 + 48, (__int64)v32[3].m128i_i64);
    v36 = v32[8].m128i_i8[0] & 1 | *(_BYTE *)(a3 + 128) & 0xFE;
    *(_BYTE *)(a3 + 128) = v36;
    *(_BYTE *)(a3 + 128) = v32[8].m128i_i8[0] & 2 | v36 & 0xFD;
    *(_BYTE *)(a3 + 129) = v32[8].m128i_i8[1];
  }
  v12 = sub_825C70(a1, (__int64)a2, a3, a5);
  if ( !(_BYTE)v12 )
    return 0;
  if ( !a6 )
    return v12;
  v25 = *(_QWORD *)(a5 + 48);
  v41.m128i_i8[4] &= ~1u;
  v41.m128i_i32[0] = 0;
  if ( !(unsigned __int8)sub_85F440(a1, a2, v25, a3, (__int64)&v41, 0) )
  {
    if ( v41.m128i_i32[0] > 1u )
      sub_69F740((__int64)&v41);
    return 0;
  }
  sub_824D00(a3, *(_QWORD **)(a1 + 16), (__int64)&v41);
  if ( v41.m128i_i32[0] > 1u )
    sub_69F740((__int64)&v41);
  return v12;
}

