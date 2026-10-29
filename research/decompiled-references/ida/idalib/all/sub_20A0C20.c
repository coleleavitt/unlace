_QWORD **__fastcall sub_20A0C20(__int64 a1)
{
  unsigned __int8 v1; // al
  _QWORD **result; // rax
  _QWORD **v3; // r8
  int v4; // esi
  _QWORD *v5; // rdx

  v1 = *(_BYTE *)(a1 - 16);
  if ( (v1 & 2) != 0 )
  {
    result = *(_QWORD ***)(a1 - 32);
    v3 = &result[*(unsigned int *)(a1 - 24)];
    if ( v3 != result )
      goto LABEL_3;
LABEL_12:
    *(_DWORD *)(a1 - 8) = 0;
    return result;
  }
  result = (_QWORD **)(a1 - 8LL * ((v1 >> 2) & 0xF) - 16);
  v3 = &result[(*(_WORD *)(a1 - 16) >> 6) & 0xF];
  if ( v3 == result )
    goto LABEL_12;
LABEL_3:
  v4 = 0;
  do
  {
    v5 = *result;
    if ( *result
      && (unsigned int)*(unsigned __int8 *)v5 - 5 <= 0x20
      && ((BYTE1(*v5) & 0x7F) == 2 || *((_DWORD *)v5 - 2)) )
    {
      ++v4;
    }
    ++result;
  }
  while ( v3 != result );
  *(_DWORD *)(a1 - 8) = v4;
  return result;
}
