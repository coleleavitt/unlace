__int64 __fastcall sub_525600(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  char v3; // al

  if ( !a1[3] )
    return 0;
  v1 = *a1;
  v2 = *a1 + (a1[1] << 7);
  if ( v2 == *a1 )
    return 0;
  while ( 1 )
  {
    v3 = get_tinfo_property(*(_QWORD *)(v1 + 64), 2) & 0x3F;
    if ( v3 == 29 || v3 == 13 && get_tinfo_property(*(_QWORD *)(v1 + 64), 296) )
      break;
    v1 += 128;
    if ( v2 == v1 )
      return 0;
  }
  return 1;
}

