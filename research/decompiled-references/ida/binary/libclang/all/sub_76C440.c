__int64 __fastcall sub_76C440(__int64 a1)
{
  char v2; // cl
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  _DWORD *v8; // rdx

  v2 = *(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v3 = *(unsigned int *)(a1 + 36);
  result = (2 * ((v2 & 2) != 0)) & 0x1B | (16 * ((v2 & 0x1Fu) > 0xF)) & 0x1B | v2 & 1u | ((v2 & 4) != 0 ? 8 : 0);
  if ( (_DWORD)v3 )
  {
    v5 = *(unsigned int *)(a1 + 32);
    v6 = a1 + 16 * v5;
    v7 = a1 + 8 * (v3 + 2 * v5);
    do
    {
      v8 = *(_DWORD **)(v6 + 40);
      v6 += 8;
      result = (*v8 >> 14) & 0x1B | (unsigned int)result;
    }
    while ( v6 != v7 );
  }
  return result;
}

