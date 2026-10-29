__int64 __fastcall sub_C3180(__int64 a1)
{
  __int64 *v1; // rbp
  size_t v2; // rsi
  __int64 *v3; // rcx
  __int64 *v4; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // eax

  v1 = (__int64 *)qword_251430;
  v2 = 8 * xmmword_251438;
  v3 = (__int64 *)((char *)qword_251430 + 8 * xmmword_251438);
  if ( qword_251430 != v3 )
  {
    v4 = (__int64 *)qword_251430;
    while ( *v4 != a1 )
    {
      if ( v3 == ++v4 )
        goto LABEL_7;
    }
    if ( v3 != v4 )
      return 0;
  }
LABEL_7:
  v6 = xmmword_251438 + 1;
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    if ( *((_QWORD *)&xmmword_251438 + 1) < v6 )
    {
      qword_251430 = (void *)qvector_reserve();
      v3 = (__int64 *)((char *)qword_251430 + 8 * xmmword_251438);
    }
    *v3 = a1;
    v7 = xmmword_251438 + 1;
  }
  else
  {
    if ( *((_QWORD *)&xmmword_251438 + 1) < v6 )
    {
      qword_251430 = (void *)qvector_reserve();
      v1 = (__int64 *)qword_251430;
      v2 = 8 * xmmword_251438;
    }
    memmove(v1 + 1, v1, v2);
    *v1 = a1;
    v7 = xmmword_251438 + 1;
  }
  *(_QWORD *)&xmmword_251438 = v7;
  v8 = dword_2515A4;
  *(_DWORD *)(a1 + 16) |= 2u;
  if ( v8 )
    sub_B7F00(a1, 1);
  return 1;
}

