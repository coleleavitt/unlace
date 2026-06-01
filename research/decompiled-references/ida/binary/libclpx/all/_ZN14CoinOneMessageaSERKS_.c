_BYTE *__fastcall CoinOneMessage::operator=(_BYTE *a1, __int64 a2)
{
  char *v3; // rdi

  if ( a1 != (_BYTE *)a2 )
  {
    v3 = a1 + 6;
    *(_DWORD *)(v3 - 6) = *(_DWORD *)a2;
    strcpy(v3, (const char *)(a2 + 6));
    a1[5] = *(_BYTE *)(a2 + 5);
    a1[4] = *(_BYTE *)(a2 + 4);
  }
  return a1;
}

