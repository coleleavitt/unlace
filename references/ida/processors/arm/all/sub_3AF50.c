unsigned __int64 __fastcall sub_3AF50(__int64 a1, __int64 a2, __int64 *a3)
{
  __m128i *v6; // r15
  __m128i v7; // xmm0
  unsigned __int16 v8; // r13
  const char *v9; // rcx
  char v10; // al
  char v11; // al
  __int64 v12; // r13
  __int64 v13; // rax
  int v14; // edx
  unsigned __int8 v15; // al
  __int64 v16; // rcx
  const char *v17; // rsi
  __m128i v18; // [rsp+60h] [rbp-E8h] BYREF
  const char *v19; // [rsp+70h] [rbp-D8h]
  char v20; // [rsp+78h] [rbp-D0h] BYREF
  _BYTE v21[136]; // [rsp+80h] [rbp-C8h] BYREF
  unsigned __int64 v22; // [rsp+108h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( (unsigned __int8)is_spec_segm() )
    return v22 - __readfsqword(0x28u);
  get_segm_name();
  get_segm_class();
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
  {
    v6 = &v18;
    v7 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_A0C20), (__m128i)(unsigned __int64)".data");
    v19 = ".bss";
    v18 = v7;
    while ( strcmp(&s1, (const char *)v6->m128i_i64[0]) )
    {
      v6 = (__m128i *)((char *)v6 + 8);
      if ( v6 == (__m128i *)&v20 )
      {
        validate_name();
        sub_39B30(
          a2,
          0xFFFF,
          (__int64)&unk_86D03,
          &s1,
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
          &s1,
          *(double *)v7.m128i_i64,
          COERCE_DOUBLE(".data"));
        goto LABEL_26;
      }
    }
    sub_39B30(a2, 0xFFFF, (__int64)&unk_86CFC, &s1, *(double *)v7.m128i_i64, COERCE_DOUBLE(".data"));
    goto LABEL_26;
  }
  validate_name();
  netnode_check();
  v8 = netnode_altval();
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 64LL))(a2, 27);
  v9 = "DATA";
  if ( *((_BYTE *)a3 + 184) == 2 )
    v9 = "CODE";
  sub_39A70(a2, (__int64)"AREA %s, %s", &s1, v9);
  v10 = *((_BYTE *)a3 + 184);
  if ( v10 == 3 )
  {
    if ( (*((_BYTE *)a3 + 42) & 6) != 4 )
      goto LABEL_12;
    (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, ", READONLY", 0);
    v10 = *((_BYTE *)a3 + 184);
  }
  if ( v10 == 2 && (*((_BYTE *)a3 + 42) & 6) != 4 )
    (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, ", READWRITE", 0);
LABEL_12:
  v11 = *((_BYTE *)a3 + 40);
  if ( v11 )
  {
    v14 = (v8 >> 10) & 0x1F;
    if ( ((v8 >> 10) & 0x1F) == 0 )
    {
      v15 = v11 - 1;
      if ( v15 > 9u )
      {
        v14 = 0;
LABEL_36:
        sub_39A70(a2, (__int64)", ALIGN=%d", v14);
        goto LABEL_14;
      }
      v14 = dword_8B2C0[v15];
    }
    v16 = 9;
    if ( _bittest64(&v16, (unsigned int)(v14 + 1)) )
      goto LABEL_14;
    goto LABEL_36;
  }
  (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, ", ABS", 0);
LABEL_14:
  if ( *((_BYTE *)a3 + 41) == 6 )
  {
    v17 = ", COMMON";
    if ( (*((_BYTE *)a3 + 45) & 1) != 0 )
      v17 = ", COMDEF";
    (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, v17, 0);
  }
  if ( (v8 & 0x200) != 0 )
    sub_39A70(
      a2,
      (__int64)", BASED %s",
      *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * (*((_WORD *)a3 + 22) & 0xF)));
  if ( (v8 & 0x10) != 0 )
    (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, ", PIC", 0);
  if ( (v8 & 0x20) != 0 )
    (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, ", REENTRANT", 0);
  if ( (v8 & 0x40) != 0 )
    (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, ", HALFWORD", 0);
  if ( (v8 & 0x80) != 0 )
    (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, ", INTERWORK", 0);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 72LL))(a2, 27);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 128LL))(a2, 0xFFFF);
LABEL_26:
  if ( (getinf(44) & 0x100) != 0 )
  {
    v12 = *a3;
    if ( v12 != get_segm_base() )
    {
      btoa64();
      v13 = *(_QWORD *)(a1 + 24);
      if ( *((_BYTE *)a3 + 40) )
        sub_39B30(a2, 0xFFFF, (__int64)&unk_86D9D, *(_QWORD *)(v13 + 48), *(_QWORD *)(v13 + 32), v21);
      else
        sub_39B30(a2, 0xFFFF, (__int64)&unk_86D93, *(_QWORD *)(v13 + 32), v21);
    }
  }
  return v22 - __readfsqword(0x28u);
}
