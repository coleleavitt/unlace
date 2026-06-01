_WORD *__fastcall sub_13C0550(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  _WORD *result; // rax
  __int64 v7; // rax

  v2 = a2;
  while ( 1 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    if ( !v3 )
      break;
    v2 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v3 & 4) == 0 || !v2 )
      goto LABEL_5;
  }
  v2 = 0;
LABEL_5:
  v4 = *(_QWORD *)(a1 + 336);
  v5 = *(unsigned int *)(v2 + 72);
  result = nullptr;
  if ( v5 < (*(_QWORD *)(a1 + 344) - v4) >> 4 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(a2 + 8);
      if ( !v7 )
        break;
      a2 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v7 & 4) == 0 || !a2 )
        goto LABEL_9;
    }
    a2 = 0;
LABEL_9:
    result = (_WORD *)(v4 + 16LL * *(unsigned int *)(a2 + 72));
    if ( result )
    {
      if ( (*result & 0x840) != 0x800 )
        return nullptr;
    }
  }
  return result;
}
