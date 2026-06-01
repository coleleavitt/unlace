__int64 __fastcall sub_22776E0(__int64 a1, const char *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r13
  size_t v4; // rax
  size_t v5; // rdx

  v2 = *(unsigned __int8 *)(a1 + 680);
  if ( (_BYTE)v2 )
    return 0;
  v3 = *(_QWORD *)(a1 + 672);
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v3 + 32LL) - 1) > 1 )
    return v2;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = *(_QWORD *)(v3 + 16);
    if ( v5 != v4 || v5 && memcmp(*(const void **)(v3 + 8), a2, v5) )
      return v2;
    goto LABEL_10;
  }
  if ( *(_QWORD *)(v3 + 16) )
    return v2;
LABEL_10:
  *(_BYTE *)(a1 + 680) = 1;
  return 1;
}
