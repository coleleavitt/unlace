__m128i *__fastcall sub_332700(__m128i *a1, __int64 *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r13
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 *v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // rsi
  __int64 *v12; // rax
  __int64 *v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rbx
  int v19[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v20; // [rsp+8h] [rbp-30h]
  __int64 v21; // [rsp+10h] [rbp-28h]

  v3 = *a2;
  v4 = (_QWORD *)a2[2];
  v20 = 0;
  *(_QWORD *)v19 = v3;
  (*(void (__fastcall **)(_QWORD *, unsigned __int64 *))(*v4 + 32LL))(v4, (unsigned __int64 *)a2 + 11);
  if ( a2[11] )
  {
    v5 = v4[7];
    if ( v5 )
      (*(void (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v5 + 32LL))(v5, (unsigned __int64 *)a2 + 11);
  }
  (*(void (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)a2[2] + 64LL))(a2[2], (unsigned __int64 *)a2 + 13);
  if ( (unsigned __int8)sub_3419C0(a2[2], v19[0], v20, v21) )
  {
    v12 = (__int64 *)sub_33DD40(a2[2], v19);
    v13 = a2 + 3;
    sub_32DCF0(a2, a2 + 3, v12, (__int64 *)v19);
    if ( (unsigned int)sub_180B130() > 1 )
    {
      if ( (unsigned __int8)sub_186A530() )
      {
        sub_186A4C0();
        v14 = sub_180B150();
        std::__ostream_insert<char,std::char_traits<char>>();
        v15 = sub_330580(v14, v13);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v15, ")\n");
      }
      else
      {
        v18 = sub_180B150();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_330580(v18, v13);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v16 = *(_QWORD *)v19;
    if ( v20 )
      v17 = *(unsigned int *)(v20 - 4);
    else
      v17 = 0;
    v6 = sub_15EC240(*(_QWORD *)v19, v17);
    *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)v16);
    if ( !v6 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v6 = *(_QWORD *)(*a2 + 856);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)*a2);
  if ( v6 )
LABEL_6:
    ++*(_DWORD *)(v6 + 8);
LABEL_7:
  v7 = (__int64 *)v20;
  if ( v20 )
  {
    v8 = v20 + 8LL * *(unsigned int *)(v20 - 4);
    if ( v20 >= v8 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          if ( (*(_DWORD *)(v9 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v7 >= v8 )
          goto LABEL_14;
      }
      sub_15D7BC0(*(_QWORD *)v19, v9);
      ++v7;
    }
    while ( (unsigned __int64)v7 < v8 );
LABEL_14:
    v7 = (__int64 *)v20;
    if ( v20 )
LABEL_15:
      sub_186B220(v7 - 1);
  }
  return a1;
}

