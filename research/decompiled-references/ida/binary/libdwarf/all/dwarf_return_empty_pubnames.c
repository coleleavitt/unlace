__int64 __fastcall dwarf_return_empty_pubnames(__int64 a1, unsigned int a2)
{
  if ( a1 && *(_QWORD *)a1 == 3959286781LL && a2 <= 1 )
    *(_BYTE *)(a1 + 8361) = a2;
  return 0;
}

