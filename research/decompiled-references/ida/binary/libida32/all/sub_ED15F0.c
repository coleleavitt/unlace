__int64 __fastcall sub_ED15F0(__int64 a1, const void *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // r12
  unsigned int v7; // ebp
  size_t v8; // rdx

  v6 = a5;
  v7 = a3;
  *(_DWORD *)a1 = a3;
  *(_BYTE *)(a1 + 8) = a4 != 0;
  v8 = 8 * a3;
  *(_DWORD *)(a1 + 4) = a5;
  if ( v8 )
    memmove((void *)(a1 + 16), a2, v8);
  if ( a4 )
    *(_QWORD *)(a1 + 8 * v6 + 8LL * v7 + 16) = a4;
  return a1;
}

