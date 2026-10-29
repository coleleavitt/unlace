__int64 __fastcall sub_B404B0(__int64 a1)
{
  char v1; // al
  int v2; // ecx
  int v3; // esi
  int v4; // eax
  _DWORD **v5; // rcx
  __int64 v6; // rsi
  __int64 result; // rax
  _DWORD *v8; // rdx

  v1 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v2 = (2 * ((v1 & 2) != 0)) & 4 | ((v1 & 4) != 0 ? 4 : 0);
  if ( (2 * ((v1 & 2) != 0)) & 4 | ((v1 & 4) != 0 ? 4 : 0) )
    v2 = 4;
  v3 = (2 * ((v1 & 2) != 0)) & 2;
  if ( ((2 * ((v1 & 2) != 0)) & 2) != 0 )
    v3 = 2;
  v4 = v2 | v3 | v1 & 1;
  v5 = (_DWORD **)(a1 + 32);
  v6 = a1 + 32 + 8LL * *(unsigned int *)(a1 + 24);
  result = v4 | 0x1Au;
  if ( v6 != a1 + 32 )
  {
    do
    {
      v8 = *v5++;
      result = (*v8 >> 14) & 0x1F | (unsigned int)result;
    }
    while ( (_DWORD **)v6 != v5 );
  }
  return result;
}

