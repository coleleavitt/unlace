char __fastcall sub_131780(__int64 a1, unsigned __int64 *a2, unsigned int a3, unsigned __int8 a4, unsigned int a5)
{
  char v7; // al

  if ( *(_DWORD *)(a1 + 4) != -1 )
    return sub_131490(a2, nullptr, 0, (__int16 *)a1, a3, a4, a5);
  v7 = *(_BYTE *)(a2[12] + 145);
  if ( v7 )
    v7 = sub_11BB90((unsigned __int8 *)a1);
  return a4 == (unsigned __int8)v7;
}
