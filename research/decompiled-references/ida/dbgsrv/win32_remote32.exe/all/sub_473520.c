/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473520
// Address: 0x00473520

//----- (00473520) --------------------------------------------------------
int sub_473520()
{
  int v0; // ebx
  int i; // edi
  int v2; // eax
  char *v3; // eax
  int v5; // ecx
  int j; // esi
  int v7; // esi
  int v8; // ecx
  int v9; // [esp+14h] [ebp-28h]
  int v10; // [esp+1Ch] [ebp-20h]

  sub_47A78B(7);
  v0 = -1;
  for ( i = 0; i < 128; ++i )
  {
    v2 = (int)*(&dword_4B7B38 + i);
    v9 = v2;
    if ( !v2 )
    {
      v3 = sub_4732FA();
      *(&dword_4B7B38 + i) = (LPCRITICAL_SECTION)v3;
      if ( v3 )
      {
        dword_4B7D38[0] += 64;
        v0 = i << 6;
        sub_473448(i << 6);
        LOBYTE((*(&dword_4B7B38 + (i << 6 >> 6)))[1].LockSemaphore) = 1;
      }
      break;
    }
    v5 = v2 + 3584;
    v10 = v2 + 3584;
    for ( j = (int)*(&dword_4B7B38 + i); j != v5; j += 56 )
    {
      if ( (*(_BYTE *)(j + 40) & 1) == 0 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)j);
        if ( (*(_BYTE *)(j + 40) & 1) == 0 )
        {
          v7 = (i << 6) + (j - v9) / 56;
          v8 = 56 * (v7 & 0x3F);
          *((_BYTE *)&(*(&dword_4B7B38 + (v7 >> 6)))[1].LockSemaphore + v8) = 1;
          *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&(*(&dword_4B7B38 + (v7 >> 6)))[1].DebugInfo + v8) = (PRTL_CRITICAL_SECTION_DEBUG)-1;
          v0 = v7;
          goto LABEL_6;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)j);
        v5 = v10;
      }
    }
  }
LABEL_6:
  sub_47A7D3(7);
  return v0;
}
// 4B7D38: using guessed type int dword_4B7D38[];
