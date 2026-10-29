char __fastcall sub_D8CD70(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  char result; // al
  unsigned __int64 v4; // rdx

  v1 = *(__int64 **)(*(_QWORD *)(a1 + 32) + 32LL);
  if ( !*((_BYTE *)v1 + 61) )
    return *((_BYTE *)v1 + 62);
  v2 = *v1;
  result = 0;
  if ( (v2 & 2) == 0 )
  {
    v4 = v2 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v4 )
      return (*(_BYTE *)(v4 + 28) & 0x7F) == 43;
  }
  return result;
}

