__int64 __fastcall sub_B30E00(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 v7; // rsi
  unsigned int v8; // edi

  v3 = *(_QWORD *)(a1 + 344);
  do
  {
    result = a2;
    v6 = a2;
    a2 = *(_DWORD *)(v3 + 4LL * a2);
  }
  while ( v6 != a2 );
  do
  {
    v7 = a3;
    v8 = a3;
    a3 = *(_DWORD *)(v3 + 4LL * a3);
  }
  while ( v8 != a3 );
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * result) + 25LL) && *(_BYTE *)(*(_QWORD *)(a1 + 264) + 9LL) )
  {
    result = sub_BE2730(a1, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v7));
    if ( (_BYTE)result )
      ++*(_DWORD *)(a1 + 284);
  }
  return result;
}

