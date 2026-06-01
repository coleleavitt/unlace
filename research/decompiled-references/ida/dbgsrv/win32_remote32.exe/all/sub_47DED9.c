/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47DED9
// Address: 0x0047DED9

//----- (0047DED9) --------------------------------------------------------
char __cdecl sub_47DED9(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // esi

  if ( a1 == a2 )
    return 1;
  v2 = a1;
  do
  {
    if ( *v2 && !((unsigned __int8 (__thiscall *)(_DWORD))*v2)(*v2) )
      break;
    v2 += 2;
  }
  while ( v2 != a2 );
  if ( v2 == a2 )
    return 1;
  if ( v2 != a1 )
  {
    v3 = v2 - 1;
    do
    {
      if ( *(v3 - 1) )
      {
        if ( *v3 )
          ((void (__cdecl *)(_DWORD))*v3)(0);
      }
      v3 -= 2;
    }
    while ( v3 + 1 != a1 );
  }
  return 0;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
