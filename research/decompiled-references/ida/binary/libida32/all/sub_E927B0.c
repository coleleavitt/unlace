__int64 __fastcall sub_E927B0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  void *v4; // rdi
  const void *v5; // rsi
  size_t v6; // rbx

  v2 = sub_971800(*a1, "message(\"");
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(void **)(v2 + 32);
  v5 = (const void *)(v3 + 4LL * *(unsigned int *)(v3 + 4) + 20);
  v6 = *(_DWORD *)(v3 + 16) * ((*(_WORD *)(v3 + 2) >> 6) & 7u);
  if ( v6 > *(_QWORD *)(v2 + 24) - (_QWORD)v4 )
  {
    v2 = sub_22581D0(v2, v5, v6);
  }
  else if ( *(_DWORD *)(v3 + 16) * ((*(_WORD *)(v3 + 2) >> 6) & 7) )
  {
    memcpy(v4, v5, v6);
    *(_QWORD *)(v2 + 32) += v6;
  }
  return sub_971800(v2, "\")");
}

