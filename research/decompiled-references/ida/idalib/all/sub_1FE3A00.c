void __fastcall sub_1FE3A00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  unsigned int v7; // esi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdx
  int v14; // ebp
  __int64 v15; // rax

  while ( 1 )
  {
    v6 = a2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !a2 )
      break;
    v7 = a2 & 7;
    if ( v7 != 7 )
    {
      v10 = v7;
      switch ( v7 )
      {
        case 1u:
        case 2u:
          goto LABEL_16;
        case 3u:
        case 4u:
        case 5u:
          v11 = v7 - 3;
          v12 = 0;
          if ( v11 <= 2 )
            v12 = *(_QWORD *)(v6 + 8);
          sub_1FE3950(a1, v12, v6, v10, a5, a6);
          break;
        case 6u:
          v14 = 0;
          if ( v7 == 6 )
            v14 = *(_DWORD *)v6;
          v15 = *(unsigned int *)(a1 + 16);
          if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
          {
            sub_2237220(a1 + 8, a1 + 24, v15 + 1, 4);
            v15 = *(unsigned int *)(a1 + 16);
          }
          *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v15) = v14;
          ++*(_DWORD *)(a1 + 16);
          break;
        default:
          if ( v7 )
            v6 = 0;
          sub_2222BB0(a1 + 8, *(_QWORD *)(v6 + 16) + 16LL, **(unsigned int **)(v6 + 16));
          break;
      }
      return;
    }
    v8 = 3;
    if ( *(_DWORD *)v6 <= 3u )
      v8 = *(_DWORD *)v6;
    v9 = v8 + 8;
    if ( v9 == 9 )
    {
      sub_2222BB0(
        a1 + 8,
        *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) + 16LL,
        **(unsigned int **)(*(_QWORD *)(v6 + 16) + 16LL));
      return;
    }
    if ( v9 == 11 )
      goto LABEL_16;
    if ( v9 != 8 )
      return;
    v13 = *(_QWORD *)(v6 + 16);
    if ( !v13 )
      return;
    if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 18 > 0x3F )
    {
LABEL_16:
      *(_BYTE *)a1 = 1;
      return;
    }
    a2 = *(_QWORD *)(v13 + 40);
  }
}
