__int64 __fastcall save_file_ah_t__::vfunc_1(__int64 a1, __int64 *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a2 + 2);
  if ( v2 != 28 && v2 != 34 )
    return 6;
  if ( *(_BYTE *)(*a2 + 1080) )
    return 7;
  if ( sub_1EC200(*a2) )
    return 3;
  return 7;
}
