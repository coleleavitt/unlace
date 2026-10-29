int *__fastcall sub_289A10(__int64 a1)
{
  int *result; // rax
  __int64 v2; // rdi

  result = (int *)sub_175A80((_BYTE *)a1);
  v2 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v2 + 557) )
  {
    *(_BYTE *)(v2 + 557) = 0;
    return sub_1F61A0((_BYTE *)(v2 + 528));
  }
  return result;
}
