__int64 __fastcall sub_369FC0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax

  if ( *(_DWORD *)(a2 + 8) == 65 )
    sub_64190(a1 + 8, *(_DWORD *)(a2 + 32));
  if ( !sub_254DD0(a2) || strcmp(*(const char **)(*(_QWORD *)(a2 + 24) + 24LL), "va_start") )
    return 0;
  v4 = a1[11];
  v5 = a1[10];
  if ( a1[12] < (unsigned __int64)(v4 + 1) )
  {
    v6 = qvector_reserve(a1 + 10, v5, v4 + 1, 8);
    a1[10] = v6;
    v5 = v6;
    v4 = a1[11];
  }
  *(_QWORD *)(v5 + 8 * v4) = a2;
  ++a1[11];
  return 0;
}
