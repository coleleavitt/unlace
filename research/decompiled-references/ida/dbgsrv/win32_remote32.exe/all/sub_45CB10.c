/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45CB10
// Address: 0x0045CB10

//----- (0045CB10) --------------------------------------------------------
void *__stdcall sub_45CB10(unsigned int a1, const char *a2)
{
  int v2; // ebx
  unsigned int v3; // esi
  void *result; // eax
  __int16 *v5; // eax
  void *v6; // [esp-Ch] [ebp-10h]

  if ( a1 >= 4 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(481);
  }
  v2 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 8;
  v3 = v2 + 4 * (a1 + 2 * (a1 + 2));
  if ( !a2 )
  {
    if ( *(_DWORD *)v3 )
    {
      v6 = *(void **)v3;
      *(_DWORD *)(v3 + 4) = 0;
      sub_453A20(v6);
      *(_DWORD *)v3 = 0;
      *(_DWORD *)(v3 + 8) = 0;
      result = *(void **)v3;
      *(_DWORD *)(v2 + 4 * a1) = *(_DWORD *)v3;
      return result;
    }
    goto LABEL_12;
  }
  if ( *a2 )
  {
    sub_401590(v2 + 4 * (a1 + 2 * (a1 + 2)), a2);
LABEL_12:
    result = *(void **)v3;
    *(_DWORD *)(v2 + 4 * a1) = *(_DWORD *)v3;
    return result;
  }
  if ( *(_DWORD *)(v3 + 8) < 2u )
    *(_DWORD *)v3 = sub_453B00(v2 + 4 * (a1 + 2 * (a1 + 2)), *(void **)v3, 2u, 1u);
  *(_DWORD *)(v3 + 4) = 2;
  **(_BYTE **)v3 = 32;
  *(_BYTE *)(*(_DWORD *)v3 + 1) = 0;
  v5 = &word_4B69CE;
  if ( *(_DWORD *)(v3 + 4) )
    v5 = *(__int16 **)v3;
  *(_BYTE *)v5 = 0;
  result = *(void **)v3;
  *(_DWORD *)(v2 + 4 * a1) = *(_DWORD *)v3;
  return result;
}
// 4B69CE: using guessed type __int16 word_4B69CE;
// 4B70F0: using guessed type char byte_4B70F0;
// 4B783C: using guessed type int TlsIndex;
