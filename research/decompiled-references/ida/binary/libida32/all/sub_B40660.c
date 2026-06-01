__int64 __fastcall sub_B40660(__int64 a1, _DWORD **a2, __int64 a3)
{
  __int64 result; // rax
  _DWORD **v4; // rcx
  _DWORD **i; // r8
  _DWORD **j; // rcx
  _DWORD *v7; // rdx

  result = (**(_DWORD **)(a1 + 32) >> 14) & 0x1F;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    result = (**(_DWORD **)(a1 + 32) >> 14) & 0x1B | 4u;
  v4 = (_DWORD **)(a1 + 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL) + 32);
  for ( i = &v4[*(unsigned int *)(a1 + 16)]; i != v4; ++v4 )
  {
    if ( *v4 )
      result = (**v4 >> 14) & 0x1F | (unsigned int)result;
  }
  for ( j = &a2[a3]; j != a2; result = (*v7 >> 14) & 0x1F | (unsigned int)result )
    v7 = *a2++;
  return result;
}

