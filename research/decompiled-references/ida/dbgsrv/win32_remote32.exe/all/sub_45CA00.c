/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45CA00
// Address: 0x0045CA00

//----- (0045CA00) --------------------------------------------------------
int __userpurge sub_45CA00@<eax>(int a1@<ebx>, __m128i a2@<xmm0>, unsigned int a3)
{
  unsigned int v3; // esi
  int v4; // edi
  unsigned int v5; // kr00_4
  char v7[1024]; // [esp+8h] [ebp-404h] BYREF

  v3 = a3;
  if ( a3 == -1 )
    v3 = *sub_46B984();
  v4 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 96;
  if ( sub_47509E(a1, v4, v7, 1024, v3) )
  {
    sub_402970(a2, (LPVOID *)v4, "unknown error code %d", v3);
  }
  else
  {
    v5 = strlen(v7);
    if ( v5 )
    {
      if ( v5 + 1 > *(_DWORD *)(v4 + 8) )
        *(_DWORD *)v4 = sub_453B00(v4, *(void **)v4, v5 + 1, 1u);
      *(_DWORD *)(v4 + 4) = v5 + 1;
      sub_464310(*(_DWORD *)v4, (unsigned int)v7, v5);
      *(_BYTE *)(v5 + *(_DWORD *)v4) = 0;
    }
    else
    {
      *(_DWORD *)(v4 + 4) = 0;
    }
  }
  return *(_DWORD *)v4;
}
// 4B783C: using guessed type int TlsIndex;
