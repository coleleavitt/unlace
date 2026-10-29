__int64 __fastcall sub_DDD530(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rbp
  _QWORD *v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rax
  _QWORD *v6; // rdi
  __int64 (__fastcall *v7)(__int64); // rdx
  char v8; // al
  __int64 v9; // rdi
  __int64 v10; // rbp
  _BYTE *v11; // rdi
  __m128i v13[2]; // [rsp+0h] [rbp-28h] BYREF

  v3 = a1[22];
  v13[0] = _mm_loadu_si128((const __m128i *)sub_DFDA20(v3, 16));
  sub_DFDA50(v3, 16);
  v4 = (_QWORD *)a1[3];
  v5 = *(__int64 (__fastcall **)(__int64))(*v4 + 24LL);
  if ( v5 == sub_CCC510 )
  {
    v6 = (_QWORD *)v4[3];
    v7 = *(__int64 (__fastcall **)(__int64))(*v6 + 24LL);
    if ( v7 != v5 )
    {
LABEL_12:
      v8 = ((__int64 (__fastcall *)(_QWORD *, __int64))v7)(v6, 16);
      goto LABEL_6;
    }
    v4 = (_QWORD *)v6[3];
    v5 = *(__int64 (__fastcall **)(__int64))(*v4 + 24LL);
    if ( v5 == v7 )
    {
      v6 = (_QWORD *)v4[3];
      v7 = *(__int64 (__fastcall **)(__int64))(*v6 + 24LL);
      if ( v7 == v5 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v6[3] + 24LL))(v6[3]);
        goto LABEL_6;
      }
      goto LABEL_12;
    }
  }
  v8 = ((__int64 (__fastcall *)(_QWORD *, __int64))v5)(v4, 16);
LABEL_6:
  v9 = a1[50];
  if ( (!v8 || *(_QWORD *)(v9 + 8))
    && (sub_DA3C90(a1, *a2, *(_QWORD *)(v9 + 32)), v9 = a1[50], (v10 = *(_QWORD *)(v9 + 8)) != 0) )
  {
    *a2 = *(_QWORD *)(v9 + 136);
    v11 = (_BYTE *)a1[50];
    if ( !v11[200] )
      sub_DFCD30(v11);
    a1[50] = v10;
    *(__m128i *)sub_DFD980(a1[22], 16) = _mm_load_si128(v13);
    return 1;
  }
  else
  {
    if ( !*(_BYTE *)(v9 + 200) )
      sub_DFCD30((void *)v9);
    a1[50] = 0;
    return 1;
  }
}

