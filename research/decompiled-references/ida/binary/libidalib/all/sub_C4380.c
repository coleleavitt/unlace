__int64 __fastcall sub_C4380(__int64 a1)
{
  __int64 *v1; // rbp
  size_t v2; // rsi
  __int64 *v3; // rcx
  __int64 *v4; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // eax

  v1 = (__int64 *)qword_2525B0;
  v2 = 8 * xmmword_2525B8;
  v3 = (__int64 *)((char *)qword_2525B0 + 8 * xmmword_2525B8);
  if ( qword_2525B0 != v3 )
  {
    v4 = (__int64 *)qword_2525B0;
    while ( *v4 != a1 )
    {
      if ( v3 == ++v4 )
        goto LABEL_7;
    }
    if ( v3 != v4 )
      return 0;
  }
LABEL_7:
  v6 = xmmword_2525B8 + 1;
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    if ( *((_QWORD *)&xmmword_2525B8 + 1) < v6 )
    {
      qword_2525B0 = (void *)qvector_reserve();
      v3 = (__int64 *)((char *)qword_2525B0 + 8 * xmmword_2525B8);
    }
    *v3 = a1;
    v7 = xmmword_2525B8 + 1;
  }
  else
  {
    if ( *((_QWORD *)&xmmword_2525B8 + 1) < v6 )
    {
      qword_2525B0 = (void *)qvector_reserve();
      v1 = (__int64 *)qword_2525B0;
      v2 = 8 * xmmword_2525B8;
    }
    memmove(v1 + 1, v1, v2);
    *v1 = a1;
    v7 = xmmword_2525B8 + 1;
  }
  *(_QWORD *)&xmmword_2525B8 = v7;
  v8 = dword_25274C;
  *(_DWORD *)(a1 + 16) |= 2u;
  if ( v8 )
    sub_B8470(a1, 1);
  return 1;
}

