__int64 __fastcall sub_5FB350(_QWORD *a1, double a2, double a3)
{
  const __m128i *v3; // r14
  _QWORD *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned int v8; // r14d
  char v10; // si
  __int64 idati; // rax
  __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // [rsp+18h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+20h] [rbp-40h] BYREF
  __int16 v16; // [rsp+30h] [rbp-30h]
  unsigned __int64 v17; // [rsp+38h] [rbp-28h]

  v3 = (const __m128i *)a1[16];
  v4 = (_QWORD *)a1[31];
  v17 = __readfsqword(0x28u);
  sub_5F7210(v3[3].m128i_i64, v4);
  v5 = qalloc_or_throw(24);
  *(_QWORD *)v5 = 0;
  *(_OWORD *)(v5 + 8) = 0;
  v3[3].m128i_i64[1] = v5;
  if ( !(unsigned __int8)sub_5F62E0(v3 + 3, a1[31]) )
    sub_5E62B0((__int64)a1);
  v6 = v3[3].m128i_i64[1];
  if ( !*(_QWORD *)(v6 + 8) )
  {
    if ( v6 )
    {
      if ( *(_QWORD *)v6 )
        qfree(*(void **)v6);
      qfree((void *)v6);
    }
    v3[3].m128i_i64[1] = 0;
  }
  if ( a1[32] )
  {
    v7 = a1[16];
    v8 = 0;
    if ( (*(_BYTE *)(v7 + 80) & 1) == 0 )
    {
      v10 = *(_BYTE *)(v7 + 186);
      idati = a1[31];
      v14 = 0;
      v16 = 0;
      v12 = v10 & 0x3F;
      v15[1] = &byte_22F0C30;
      if ( !idati )
        idati = get_idati(0, v12);
      v15[0] = idati;
      create_tinfo(&v14, (unsigned __int8)v12, 189, v15);
      v13 = sub_5F84D0(
              (__int64)a1,
              &v14,
              *(const char **)(a1[16] + 72LL),
              0,
              nullptr,
              nullptr,
              0.0,
              a3,
              *(const char **)(a1[16] + 8LL));
      v8 = v13;
      if ( v13 )
        set_qerrno(v13);
      clear_tinfo_t(&v14);
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
