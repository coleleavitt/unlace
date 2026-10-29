__int64 __fastcall dwarfstring_destructor(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 24) )
  {
    free(*(void **)a1);
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 0;
  }
  return dwarfstring_constructor(a1);
}

