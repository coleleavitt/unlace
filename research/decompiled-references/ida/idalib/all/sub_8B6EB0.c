__int64 __fastcall sub_8B6EB0(__int64 a1, const char *a2)
{
  char *v3; // rbx
  __int64 result; // rax
  size_t v5; // rbx
  _BYTE *v6; // rsi
  __int64 v7; // rax

  v3 = strstr(a2, ".clt");
  result = 0;
  if ( v3 )
  {
    v5 = v3 - a2;
    *(_QWORD *)(a1 + 8) = 0;
    v6 = *(_BYTE **)a1;
    if ( *(_QWORD *)(a1 + 16) < v5 + 1 )
    {
      v7 = qvector_reserve(a1, v6, v5 + 1, 1);
      *(_QWORD *)a1 = v7;
      v6 = (_BYTE *)v7;
    }
    *(_QWORD *)(a1 + 8) = v5 + 1;
    v6[v5] = 0;
    memmove(*(void **)a1, a2, v5);
    return 1;
  }
  return result;
}
