void __fastcall sub_EE6390(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  int v7; // r13d
  char *v9; // rsi
  __int64 v10; // rbx
  int v11; // ebp

  v7 = *(_DWORD *)(a2 + 16);
  if ( v7 )
  {
    v9 = *(char **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
    if ( (*(_WORD *)v9 & 0x1FF) != 0x70 )
    {
      v10 = 40;
      v11 = 0;
      while ( 1 )
      {
        if ( v9 )
        {
          ++v11;
          sub_EE16F0(a1, v9, a3, a4, a5, a6, a7);
          if ( v11 == v7 )
            return;
        }
        else
        {
          ++v11;
          sub_971800(*a1, "<null expr>");
          if ( v11 == v7 )
            return;
        }
        if ( (**(_WORD **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + v10) & 0x1FF) == 0x70 )
          return;
        sub_971800(*a1, ", ");
        v9 = *(char **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + v10);
        v10 += 8;
      }
    }
  }
}

