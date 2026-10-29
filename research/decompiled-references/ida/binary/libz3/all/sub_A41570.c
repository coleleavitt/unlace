__int64 __fastcall sub_A41570(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 *v4; // r14
  __int64 v5; // rbp

  if ( *a2 )
    *((_DWORD *)*a2 - 1) = 0;
  sub_1592360(a3, a2);
  v3 = *a2;
  if ( !*a2 )
    return 0;
  v4 = &v3[*((unsigned int *)v3 - 1)];
  if ( v4 == v3 )
    return 0;
  while ( 1 )
  {
    v5 = *v3;
    if ( (unsigned __int8)sub_A38720(a1, *v3) || (unsigned __int8)sub_A40460(a1, v5) )
      break;
    if ( v4 == ++v3 )
      return 0;
  }
  return 1;
}

