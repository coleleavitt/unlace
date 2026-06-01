__int64 __fastcall sub_20EDA00(__int64 a1, __int64 a2, const void *a3, __int64 a4)
{
  unsigned int v4; // ebx
  size_t v5; // r8
  int v7; // eax

  v4 = *(unsigned __int8 *)(a1 + 28);
  if ( (_BYTE)v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 != a4 || v5 && memcmp(*(const void **)a1, a3, v5) )
    return v4;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  v7 = *(_DWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 28) = 1;
  *(_DWORD *)(a1 + 24) = v7;
  return 1;
}
