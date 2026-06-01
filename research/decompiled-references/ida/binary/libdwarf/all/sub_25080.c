__int64 __fastcall sub_25080(__int64 a1, _QWORD *a2, size_t a3, __int64 a4)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx

  *a2 = 0;
  a2[11] = 0;
  memset(
    (void *)((unsigned __int64)(a2 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a2 - (((_DWORD)a2 + 8) & 0xFFFFFFF8) + 96) >> 3));
  a2[9] = a3;
  v6 = calloc(a3, 0x40u);
  a2[10] = v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 8312);
    v8 = 0;
    if ( a3 )
    {
      do
      {
        ++v8;
        v6[1] = v7;
        v6 += 8;
        *((_WORD *)v6 - 32) = 0;
        *(v6 - 6) = 0;
        *(v6 - 3) = 0;
        *(_OWORD *)(v6 - 5) = 0;
      }
      while ( a3 != v8 );
    }
    return 0;
  }
  else
  {
    if ( a4 )
      _dwarf_error(a1, a4, 192);
    return 1;
  }
}

