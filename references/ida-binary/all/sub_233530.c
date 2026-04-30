__int64 __fastcall sub_233530(__int64 a1)
{
  __int64 *v1; // rbp
  size_t v2; // rsi
  __int64 *v3; // rcx
  __int64 *v4; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // eax

  v1 = (__int64 *)qword_8CC450;
  v2 = 8 * xmmword_8CC458;
  v3 = (__int64 *)((char *)qword_8CC450 + 8 * xmmword_8CC458);
  if ( qword_8CC450 != v3 )
  {
    v4 = (__int64 *)qword_8CC450;
    while ( *v4 != a1 )
    {
      if ( v3 == ++v4 )
        goto LABEL_7;
    }
    if ( v3 != v4 )
      return 0;
  }
LABEL_7:
  v6 = xmmword_8CC458 + 1;
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    if ( *((_QWORD *)&xmmword_8CC458 + 1) < v6 )
    {
      qword_8CC450 = (void *)qvector_reserve(&qword_8CC450, qword_8CC450, v6, 8);
      v3 = (__int64 *)((char *)qword_8CC450 + 8 * xmmword_8CC458);
    }
    *v3 = a1;
    v7 = xmmword_8CC458 + 1;
  }
  else
  {
    if ( *((_QWORD *)&xmmword_8CC458 + 1) < v6 )
    {
      qword_8CC450 = (void *)qvector_reserve(&qword_8CC450, qword_8CC450, v6, 8);
      v1 = (__int64 *)qword_8CC450;
      v2 = 8 * xmmword_8CC458;
    }
    memmove(v1 + 1, v1, v2);
    *v1 = a1;
    v7 = xmmword_8CC458 + 1;
  }
  *(_QWORD *)&xmmword_8CC458 = v7;
  v8 = dword_8CC5F0;
  *(_DWORD *)(a1 + 16) |= 2u;
  if ( v8 )
    sub_2277E0(a1, 1);
  return 1;
}
