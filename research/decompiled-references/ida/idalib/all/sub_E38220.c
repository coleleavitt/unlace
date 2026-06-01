_BYTE *__fastcall sub_E38220(__int64 a1)
{
  _BYTE *result; // rax
  __int64 v2; // rax
  _BYTE *v3; // rdx

  result = *(_BYTE **)(a1 + 8);
  if ( !**(_BYTE **)a1 || !*result )
    goto LABEL_5;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
  v3 = *(_BYTE **)(v2 + 32);
  if ( (unsigned __int64)v3 < *(_QWORD *)(v2 + 24) )
  {
    *(_QWORD *)(v2 + 32) = v3 + 1;
    *v3 = 88;
    result = *(_BYTE **)(a1 + 8);
LABEL_5:
    *result = 0;
    return result;
  }
  sub_227BA10(v2, 88);
  result = *(_BYTE **)(a1 + 8);
  *result = 0;
  return result;
}
