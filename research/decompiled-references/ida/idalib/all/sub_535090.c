__int64 __fastcall sub_535090(__int64 a1, _BYTE *a2)
{
  void *v3; // rdi
  _BYTE *v4; // rbx
  __int64 result; // rax

  v3 = *(void **)(a1 + 72);
  if ( !a2 )
  {
    qfree(v3);
    goto LABEL_4;
  }
  v4 = a2;
  if ( *a2 == 6 )
  {
    *(_WORD *)(a1 + 68) |= 0x2000u;
    v4 = a2 + 1;
    qfree(v3);
    if ( !a2[1] )
      goto LABEL_4;
  }
  else
  {
    qfree(v3);
    if ( !*a2 )
    {
LABEL_4:
      *(_QWORD *)(a1 + 72) = 0;
      return 0;
    }
  }
  result = qstrdup(v4);
  *(_QWORD *)(a1 + 72) = result;
  return result;
}
