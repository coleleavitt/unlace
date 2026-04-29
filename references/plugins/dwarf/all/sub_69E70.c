void __fastcall sub_69E70(__int64 a1, const char *a2)
{
  __m128i *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 idati; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rbx
  char *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi

  v2 = (__m128i *)a1;
  if ( *(_BYTE *)(a1 + 224) )
  {
    v3 = *(_QWORD *)(a1 + 72);
    v4 = *(_QWORD *)(a1 + 208);
    v5 = *(_QWORD *)(a1 + 200);
    a2 = *(const char **)(a1 + 192);
    a1 = *(_QWORD *)(v3 + 160);
    (*(void (__fastcall **)(__int64, const char *, __int64, __int64, __int64))(*(_QWORD *)(v3 + 88) + 416LL))(
      a1,
      a2,
      v5,
      v4,
      v2[13].m128i_i64[1]);
  }
  if ( v2[5].m128i_i64[0] )
  {
    idati = get_idati(a1, a2);
    v7 = (_QWORD *)v2[5].m128i_i64[0];
    v8 = (_QWORD *)v7[1];
    if ( v8 && v8 != (_QWORD *)idati )
    {
      del_til(*v8);
      netnode_kill(v2[5].m128i_i64[0] + 16);
      v7 = (_QWORD *)v2[5].m128i_i64[0];
    }
    if ( v7 )
    {
      sub_57F10(v7);
      operator delete(v7, 0xD0u);
    }
    v2[5].m128i_i64[0] = 0;
  }
  sub_69C50(v2);
  v9 = v2[9].m128i_i64[1];
  v2[12].m128i_i64[0] = 0;
  v2[13].m128i_i64[0] = 0;
  v2[6].m128i_i64[0] = (__int64)&off_C7230;
  if ( v9 )
  {
    v2[10].m128i_i64[0] = 0;
    qfree(v9);
  }
  v10 = v2[7].m128i_i64[1];
  while ( v10 )
  {
    v11 = (char *)v10;
    sub_688E0(*(_QWORD **)(v10 + 24));
    v10 = *(_QWORD *)(v10 + 16);
    clear_tinfo_t(v11 + 48);
    operator delete(v11, 0x38u);
  }
  v12 = v2[1].m128i_i64[1];
  if ( v12 )
  {
    v2[2].m128i_i64[0] = 0;
    qfree(v12);
  }
  v13 = v2->m128i_i64[0];
  if ( v2->m128i_i64[0] )
  {
    v2->m128i_i64[1] = 0;
    qfree(v13);
  }
}
