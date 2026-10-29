__int64 __fastcall dwarf_get_mmap_count(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v7; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax

  v7 = *(unsigned int *)(a1 + 10768);
  if ( *(_DWORD *)(a1 + 10768) )
  {
    v9 = 3 * v7;
    v10 = a1 + 8384;
    v11 = 0;
    v7 = 0;
    v12 = 0;
    v13 = 0;
    v14 = v10 + 16 * v9;
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)v10 + 8LL);
        if ( v15 )
          break;
LABEL_5:
        v10 += 48;
        if ( v10 == v14 )
          goto LABEL_9;
      }
      v16 = *(_DWORD *)(*(_QWORD *)v10 + 68LL);
      if ( v16 != 1 )
      {
        if ( v16 == 2 )
        {
          ++v7;
          v13 += v15;
        }
        goto LABEL_5;
      }
      v10 += 48;
      ++v12;
      v11 += v15;
      if ( v10 == v14 )
        goto LABEL_9;
    }
  }
  v11 = 0;
  v12 = 0;
  v13 = 0;
LABEL_9:
  if ( a2 )
    *a2 = v7;
  if ( a3 )
    *a3 = v13;
  if ( a4 )
    *a4 = v12;
  if ( a5 )
    *a5 = v11;
  return 0;
}

