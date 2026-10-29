char *__fastcall sub_7AD400(__int64 a1, __int64 a2, char a3, const char *a4, char a5)
{
  __int64 v7; // rax
  __int64 v8; // r12
  size_t v9; // rcx
  __int16 v10; // ax
  char *result; // rax
  unsigned __int64 v12; // rdi

  if ( a5 && *(_QWORD *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 60) = a3;
    v8 = 6;
    *(_WORD *)(a1 + 53) = 6;
    *(_DWORD *)(a1 + 56) = _byteswap_ulong(a2);
  }
  else
  {
    *(_WORD *)(a1 + 53) = 10;
    v7 = swap64(a2);
    *(_BYTE *)(a1 + 64) = a3;
    v8 = *(unsigned __int16 *)(a1 + 53);
    *(_QWORD *)(a1 + 56) = v7;
  }
  v9 = strlen(a4);
  v10 = v9 + v8;
  if ( v9 + v8 > 0x204 )
  {
    v10 = 516;
    v9 = 516 - v8;
  }
  *(_WORD *)(a1 + 53) = v10;
  result = (char *)(a1 + v8 + 55);
  if ( v9 >= 8 )
  {
    v12 = (a1 + v8 + 63) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)result = *(_QWORD *)a4;
    *(_QWORD *)&result[v9 - 8] = *(_QWORD *)&a4[v9 - 8];
    result -= v12;
    qmemcpy((void *)v12, (const void *)(a4 - result), 8 * ((unsigned __int64)&result[v9] >> 3));
  }
  else if ( (v9 & 4) != 0 )
  {
    *(_DWORD *)result = *(_DWORD *)a4;
    *(_DWORD *)&result[v9 - 4] = *(_DWORD *)&a4[v9 - 4];
  }
  else if ( v9 )
  {
    *result = *a4;
    if ( (v9 & 2) != 0 )
      *(_WORD *)&result[v9 - 2] = *(_WORD *)&a4[v9 - 2];
  }
  return result;
}
