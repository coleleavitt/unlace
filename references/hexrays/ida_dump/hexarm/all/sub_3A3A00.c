__int64 __fastcall sub_3A3A00(__int64 a1)
{
  __int64 v2; // rbx

  if ( *(_DWORD *)(a1 + 32) == 2 )
    return 0;
  v2 = *(_QWORD *)(a1 + 24);
  return get_item_end(v2) - v2;
}
