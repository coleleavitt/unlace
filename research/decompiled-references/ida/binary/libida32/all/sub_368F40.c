__int64 __fastcall sub_368F40(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  int v4; // eax
  __int64 v5; // rsi

  v2 = *(unsigned int *)(a1 + 40);
  v4 = -1;
  if ( v2 < (unsigned __int64)xmmword_2CA1588 )
  {
    v5 = *(_QWORD *)(qword_2CA1580 + 8 * v2);
    if ( v5 )
      v4 = qfputc((unsigned int)*(char *)(a1 + 8), v5);
  }
  *(_DWORD *)(a2 + 8) = v4;
  return 0;
}

