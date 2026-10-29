__m128i *__fastcall sub_15F3DD0(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi
  __m128i *v9; // rbp
  __m128i *v11; // rax
  __m128i v12; // xmm1
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // r13
  _QWORD *v21; // [rsp+10h] [rbp-88h] BYREF
  __int64 v22; // [rsp+18h] [rbp-80h] BYREF
  __m128i v23; // [rsp+20h] [rbp-78h] BYREF
  __m128i v24; // [rsp+30h] [rbp-68h] BYREF
  __int32 v25; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+48h] [rbp-50h]
  __int64 v27; // [rsp+50h] [rbp-48h]
  int v28; // [rsp+58h] [rbp-40h]
  char v29; // [rsp+60h] [rbp-38h]
  char v30; // [rsp+68h] [rbp-30h]

  sub_FC5780(
    &v23,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 80LL) + 8LL),
    ***(const void ****)(*(_QWORD *)(a1 + 240) + 104LL),
    *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 240) + 104LL) + 8LL));
  if ( (v30 & 1) != 0 )
  {
    v1 = (_QWORD *)v23.m128i_i64[0];
    v23.m128i_i64[0] = 0;
    v21 = v1;
    sub_A05760(&v22, &v21);
    if ( v21 )
      (*(void (__fastcall **)(_QWORD *))(*v21 + 8LL))(v21);
  }
  else if ( v29 )
  {
    v11 = (__m128i *)operator new(0x40u);
    v12 = _mm_load_si128(&v24);
    v9 = v11;
    v13 = *(_BYTE *)(a1 + 568) == 0;
    *v11 = _mm_load_si128(&v23);
    v11[1] = v12;
    v11[2].m128i_i32[0] = v25;
    v14 = v26;
    v26 = 0;
    v9[2].m128i_i64[1] = v14;
    v15 = v27;
    v27 = 0;
    v9[3].m128i_i64[0] = v15;
    LODWORD(v15) = v28;
    v28 = 0;
    v9[3].m128i_i32[2] = v15;
    if ( v13 )
    {
      *(_QWORD *)(a1 + 560) = v9;
      *(_BYTE *)(a1 + 568) = 1;
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 560) = v9;
      if ( v16 )
      {
        v17 = *(unsigned int *)(v16 + 56);
        v18 = *(_QWORD *)(v16 + 40);
        v19 = 104 * v17;
        if ( (_DWORD)v17 )
        {
          v20 = v18 + 104 * v17;
          do
          {
            if ( *(_QWORD *)v18 != -2 && *(_QWORD *)v18 != -1 && *(_BYTE *)(v18 + 96) )
              operator delete(*(_QWORD *)(v18 + 72), 32LL * *(unsigned int *)(v18 + 88), 4);
            v18 += 104;
          }
          while ( v20 != v18 );
          v18 = *(_QWORD *)(v16 + 40);
          v19 = 104LL * *(unsigned int *)(v16 + 56);
        }
        operator delete(v18, v19, 8);
        operator delete((void *)v16, 0x40u);
        v9 = *(__m128i **)(a1 + 560);
      }
    }
    goto LABEL_15;
  }
  if ( *(_BYTE *)(a1 + 568) )
  {
    v2 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 560) = 0;
    if ( v2 )
    {
      v3 = *(unsigned int *)(v2 + 56);
      v4 = *(_QWORD *)(v2 + 40);
      v5 = 104 * v3;
      if ( (_DWORD)v3 )
      {
        v6 = v4 + 104 * v3;
        do
        {
          while ( *(_QWORD *)v4 == -2 || *(_QWORD *)v4 == -1 || !*(_BYTE *)(v4 + 96) )
          {
            v4 += 104;
            if ( v6 == v4 )
              goto LABEL_12;
          }
          v7 = *(unsigned int *)(v4 + 88);
          v8 = *(_QWORD *)(v4 + 72);
          v4 += 104;
          operator delete(v8, 32 * v7, 4);
        }
        while ( v6 != v4 );
LABEL_12:
        v4 = *(_QWORD *)(v2 + 40);
        v5 = 104LL * *(unsigned int *)(v2 + 56);
      }
      operator delete(v4, v5, 8);
      operator delete((void *)v2, 0x40u);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 560) = 0;
    *(_BYTE *)(a1 + 568) = 1;
  }
  v9 = nullptr;
LABEL_15:
  sub_11EA310(v23.m128i_i64);
  return v9;
}
