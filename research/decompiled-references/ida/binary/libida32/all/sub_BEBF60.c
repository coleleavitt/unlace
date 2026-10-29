unsigned __int64 __fastcall sub_BEBF60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned __int64 v8; // rsi

  v6 = *(unsigned int *)(a1 + 32);
  if ( *(_DWORD *)a1 >> 4 == v6 )
    return *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v6 - 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v8 )
  {
    if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 59 >= 3 )
      v8 = 0;
  }
  return sub_A56C90(a2, v8, v6, a2, a5, a6);
}

