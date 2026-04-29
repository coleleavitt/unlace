__int64 __fastcall sub_216AF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v8; // rax

  if ( *(_QWORD *)(a2 + 16) == -1 )
  {
    if ( !under_debugger )
      sub_383060(51939);
    BUG();
  }
  v4 = a1[158];
  v5 = a1[157];
  if ( 96 * v4 )
  {
    while ( (unsigned int)sub_3307E0(v5, a2) )
    {
      v4 = a1[158];
      v6 = a1[157];
      v5 += 96;
      if ( v5 == v6 + 96 * v4 )
        goto LABEL_9;
    }
    if ( v5 )
      goto LABEL_7;
    v6 = a1[157];
    v4 = a1[158];
LABEL_9:
    v5 = v6;
  }
  if ( a1[159] < (unsigned __int64)(v4 + 1) )
  {
    v8 = qvector_reserve(a1 + 157, v5, v4 + 1, 96);
    v4 = a1[158];
    a1[157] = v8;
    v5 = v8;
  }
  v5 += 96 * v4;
  *(__m128i *)(v5 + 8) = _mm_load_si128((const __m128i *)&xmmword_424800);
  *(_DWORD *)v5 = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 80) = -1;
  *(_DWORD *)(v5 + 88) = 0;
  *(_OWORD *)(v5 + 32) = 0;
  *(_OWORD *)(v5 + 64) = 0;
  ++a1[158];
  copy_argloc(v5, a2);
  *(_QWORD *)(v5 + 16) = *(_QWORD *)(a2 + 16);
LABEL_7:
  *(_DWORD *)(v5 + 88) |= 2u;
  copy_tinfo_t(v5 + 48, a3);
  return 1;
}
