__int64 __fastcall sub_2233510(__int64 a1, __int64 a2)
{
  const void *v2; // rbp
  __int64 v3; // rbx
  size_t v4; // rax
  _BYTE *v5; // rdi
  size_t v6; // r12
  __int64 result; // rax

  v2 = *(const void **)(a1 + 16);
  v3 = a2;
  if ( !v2 )
    goto LABEL_4;
  v4 = strlen(*(const char **)(a1 + 16));
  v5 = *(_BYTE **)(a2 + 32);
  v6 = v4;
  result = *(_QWORD *)(a2 + 24);
  if ( v6 > result - (__int64)v5 )
  {
    v3 = sub_227BF10(a2, v2, v6);
LABEL_4:
    result = *(_QWORD *)(v3 + 24);
    v5 = *(_BYTE **)(v3 + 32);
    goto LABEL_5;
  }
  if ( v6 )
  {
    memcpy(v5, v2, v6);
    result = *(_QWORD *)(a2 + 24);
    v5 = (_BYTE *)(v6 + *(_QWORD *)(a2 + 32));
    *(_QWORD *)(a2 + 32) = v5;
    if ( v5 == (_BYTE *)result )
      return sub_227BF10(v3, "\n", 1);
    goto LABEL_9;
  }
LABEL_5:
  if ( v5 == (_BYTE *)result )
    return sub_227BF10(v3, "\n", 1);
LABEL_9:
  *v5 = 10;
  ++*(_QWORD *)(v3 + 32);
  return result;
}
