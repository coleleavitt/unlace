_BYTE *__fastcall sub_FD3570(__int64 a1)
{
  _BYTE *result; // rax
  _BYTE *v2; // rdx
  _BYTE *v3; // rsi
  _BYTE *v4; // rcx
  _BYTE *v5; // rcx

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  result = (_BYTE *)operator new[](0x118Cu);
  v2 = result;
  v3 = result + 4492;
  v4 = result;
  do
  {
    *v4 &= 0xF8u;
    v4 += 4;
  }
  while ( v4 != v3 );
  v5 = result;
  do
  {
    *v5 &= ~8u;
    v5 += 4;
  }
  while ( v5 != v3 );
  *(_QWORD *)(a1 + 16) = result;
  do
  {
    *result &= 0xF8u;
    result += 4;
  }
  while ( result != v3 );
  do
  {
    *v2 &= ~8u;
    v2 += 4;
  }
  while ( v2 != v3 );
  return result;
}
