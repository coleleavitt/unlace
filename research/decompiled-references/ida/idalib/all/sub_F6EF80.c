_BYTE *__fastcall sub_F6EF80(__int64 a1, __int64 a2, const __m128i *a3)
{
  _BYTE *v4; // rax
  int v5; // eax
  char *v6; // rdi
  _BYTE *result; // rax

  v4 = *(_BYTE **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) <= (unsigned __int64)v4 )
  {
    sub_227BA10(a2, 32);
  }
  else
  {
    *(_QWORD *)(a2 + 32) = v4 + 1;
    *v4 = 32;
  }
  v5 = *(_DWORD *)(a1 + 16);
  if ( (v5 & 0x800000) != 0 && (v5 & 0x1000000) != 0 )
  {
    sub_995540(a2, "__sized_by_or_null(");
  }
  else if ( (v5 & 0x800000) != 0 )
  {
    sub_995540(a2, "__sized_by(");
  }
  else if ( (v5 & 0x1000000) != 0 )
  {
    sub_995540(a2, "__counted_by_or_null(");
  }
  else
  {
    sub_995540(a2, "__counted_by(");
  }
  v6 = *(char **)(a1 + 56);
  if ( v6 )
    sub_F07C00(v6, a2, 0, a3, 0, 0, "\n", 1);
  result = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(a2 + 24) )
    return (_BYTE *)sub_227BA10(a2, 41);
  *(_QWORD *)(a2 + 32) = result + 1;
  *result = 41;
  return result;
}
