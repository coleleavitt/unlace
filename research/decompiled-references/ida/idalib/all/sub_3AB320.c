bool __fastcall sub_3AB320(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rsi
  int v5; // ecx
  bool result; // al

  v2 = a2[1];
  v3 = *a2;
  v4 = *a2 + 8 * v2;
  if ( v3 == v4 )
    return 0;
  v5 = 0;
  do
  {
    if ( (*(_BYTE *)(*(_QWORD *)v3 + 72LL) & 0x10) != 0 )
      v5 -= (*(_QWORD *)(*(_QWORD *)v3 + 16LL) < 2u) - 1;
    v3 += 8;
  }
  while ( v4 != v3 );
  result = 0;
  if ( v5 > 0 )
    return v5 == v2;
  return result;
}
