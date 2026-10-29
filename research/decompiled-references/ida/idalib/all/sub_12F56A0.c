__int64 __fastcall sub_12F56A0(__m128i *a1, const char *a2)
{
  __m128i *v2; // r12
  __m128i *v3; // rbp
  __int64 v4; // r15
  __int64 (*v5)(); // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 *v9; // rdx
  __int64 v10; // r13
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  __m128i *v13; // rbx
  __int64 v14; // r13
  __int64 v15; // r14
  unsigned __int64 v16; // rax
  __m128i *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // rdi
  __int64 (*v21)(); // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  _BYTE *v24; // rax
  __int64 v25; // r14
  std::_V2 *v26; // r13
  _DWORD *v27; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rax
  void *v34; // [rsp+20h] [rbp-A8h] BYREF
  void *v35[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v36; // [rsp+50h] [rbp-78h] BYREF

  v2 = (__m128i *)a2;
  v3 = a1;
  sub_1029110(0);
  v4 = a1[21].m128i_i64[0];
  v5 = **(__int64 (***)())a2;
  if ( v5 != sub_6EEC00
    && (a2 = (const char *)a1, LODWORD(v6) = ((__int64 (__fastcall *)(__m128i *, __m128i *))v5)(v2, a1), !(_BYTE)v6)
    || (LODWORD(v6) = sub_12EC800(a1), !(_BYTE)v6) )
  {
    v27 = *(_DWORD **)(a1[2].m128i_i64[0] + 48);
    goto LABEL_46;
  }
  v7 = (_QWORD *)a1[1].m128i_i64[0];
  v8 = v7[20];
  if ( *(_DWORD *)(v8 + 208) != 31 )
  {
    if ( (*(_BYTE *)(v7[6] + 624LL) & 0x10) == 0 )
      goto LABEL_5;
LABEL_48:
    v29 = sub_995540(v4, "clang -cc1 version 21.1.5");
    v30 = sub_995540(v29, " based upon LLVM ");
    v31 = sub_995540(v30, "21.1.5");
    v32 = sub_995540(v31, " default target ");
    sub_22A4A00(v35);
    v33 = sub_227BF10(v32, v35[0], v35[1]);
    a2 = "\n";
    sub_995540(v33, "\n");
    a1 = (__m128i *)v35[0];
    if ( v35[0] != &v36 )
      operator delete(v35[0]);
    v7 = (_QWORD *)v3[1].m128i_i64[0];
    v8 = v7[20];
    goto LABEL_5;
  }
  *(_BYTE *)(a1[2].m128i_i64[1] + 184) &= ~1u;
  if ( (*(_BYTE *)(v7[6] + 624LL) & 0x10) != 0 )
    goto LABEL_48;
LABEL_5:
  if ( (*(_BYTE *)v8 & 8) != 0 || *(_QWORD *)(v8 + 744) )
  {
    a1 = nullptr;
    sub_2241310(0);
    v7 = (_QWORD *)v3[1].m128i_i64[0];
  }
  v9 = (__int64 *)v7[16];
  v10 = v9[249];
  v11 = v9[248];
  if ( v10 != v11 )
  {
    _BitScanReverse64(&v12, (v10 - v11) >> 5);
    sub_12F5150(v9[248], v9[249], 2LL * (int)(63 - (v12 ^ 0x3F)));
    if ( v10 - v11 <= 512 )
    {
      a2 = (const char *)v10;
      a1 = (__m128i *)v11;
      sub_12EB220(v11, v10);
    }
    else
    {
      v13 = (__m128i *)(v11 + 512);
      a1 = (__m128i *)v11;
      a2 = (const char *)(v11 + 512);
      sub_12EB220(v11, v11 + 512);
      if ( v10 != v11 + 512 )
      {
        do
        {
          a1 = v13;
          v13 += 2;
          sub_12EB060(a1);
        }
        while ( (__m128i *)v10 != v13 );
      }
    }
    v7 = (_QWORD *)v3[1].m128i_i64[0];
    v9 = (__int64 *)v7[16];
  }
  v14 = v9[252];
  v15 = v9[251];
  if ( v14 != v15 )
  {
    _BitScanReverse64(&v16, (v14 - v15) >> 5);
    sub_12F5150(v9[251], v9[252], 2LL * (int)(63 - (v16 ^ 0x3F)));
    if ( v14 - v15 <= 512 )
    {
      a2 = (const char *)v14;
      a1 = (__m128i *)v15;
      sub_12EB220(v15, v14);
    }
    else
    {
      v17 = (__m128i *)(v15 + 512);
      a1 = (__m128i *)v15;
      a2 = (const char *)(v15 + 512);
      sub_12EB220(v15, v15 + 512);
      if ( v14 != v15 + 512 )
      {
        do
        {
          a1 = v17;
          v17 += 2;
          sub_12EB060(a1);
        }
        while ( (__m128i *)v14 != v17 );
      }
    }
    v7 = (_QWORD *)v3[1].m128i_i64[0];
  }
  v18 = v7[20];
  v6 = *(_QWORD *)(v18 + 24);
  v19 = v6 + 80LL * *(unsigned int *)(v18 + 32);
  if ( v19 != v6 )
  {
    while ( 1 )
    {
      v20 = v3[4].m128i_i64[1];
      if ( v20 )
      {
        v21 = *(__int64 (**)())(v2->m128i_i64[0] + 72);
        if ( v21 != sub_6EEC40 )
        {
          if ( ((unsigned __int8 (__fastcall *)(__m128i *))v21)(v2) )
            goto LABEL_24;
          v20 = v3[4].m128i_i64[1];
        }
        sub_10209D0(v20);
      }
LABEL_24:
      a2 = (const char *)v3;
      a1 = v2;
      if ( (unsigned __int8)sub_136B750(v2, v3, v6) )
      {
        a2 = (const char *)v2;
        sub_1369FA0(&v34, v2);
        if ( v34 )
        {
          v35[0] = v34;
          v34 = nullptr;
          sub_A0E8E0((_QWORD **)v35);
          if ( v35[0] )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v35[0] + 8LL))(v35[0]);
          if ( v34 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v34 + 8LL))(v34);
        }
        v6 += 80;
        a1 = v2;
        (*(void (__fastcall **)(__m128i *))(v2->m128i_i64[0] + 128))(v2);
        if ( v19 == v6 )
        {
LABEL_31:
          v7 = (_QWORD *)v3[1].m128i_i64[0];
          break;
        }
      }
      else
      {
        v6 += 80;
        if ( v19 == v6 )
          goto LABEL_31;
      }
    }
  }
  if ( (*(_BYTE *)(v7[4] + 1LL) & 2) != 0 )
  {
    a1 = v3;
    sub_12E9580((__int64)v3);
    v7 = (_QWORD *)v3[1].m128i_i64[0];
  }
  v22 = v7[20];
  if ( (*(_BYTE *)v22 & 8) != 0 )
  {
    v23 = v3[4].m128i_i64[0];
    if ( v23 )
    {
      sub_FD8130(v23, a2);
      v24 = *(_BYTE **)(v4 + 32);
      if ( (unsigned __int64)v24 >= *(_QWORD *)(v4 + 24) )
      {
        sub_227BA10(v4, 10);
      }
      else
      {
        *(_QWORD *)(v4 + 32) = v24 + 1;
        *v24 = 10;
      }
    }
    a1 = (__m128i *)v4;
    sub_2241AD0(v4);
    v22 = *(_QWORD *)(v3[1].m128i_i64[0] + 160);
  }
  if ( *(_QWORD *)(v22 + 744) )
  {
    v25 = *(_QWORD *)(v22 + 736);
    LODWORD(v6) = (*(_BYTE *)v22 & 0x10) == 0 ? 3 : 7;
    std::_V2::system_category((std::_V2 *)a1);
    v26 = (std::_V2 *)operator new(0x60u);
    sub_227D450(v26);
    sub_22432B0(v26, v25);
    (*(void (__fastcall **)(std::_V2 *))(*(_QWORD *)v26 + 8LL))(v26);
  }
  v27 = *(_DWORD **)(v3[2].m128i_i64[0] + 48);
  LOBYTE(v6) = v27[3] == 0;
LABEL_46:
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v27 + 40LL))(v27);
  return (unsigned int)v6;
}
