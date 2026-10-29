/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002A3D0
// Address: 0x000000014002A3D0

//----- (000000014002A3D0) ----------------------------------------------------
const char *__fastcall sub_14002A3D0(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx

  if ( !a1 )
    return nullptr;
  if ( *(_BYTE *)a1 != 5 )
    return nullptr;
  v1 = **(__int64 ***)(a1 + 8);
  i = (__int64 *)*v1;
  if ( v1 == (__int64 *)*v1 )
    return nullptr;
  if ( *((_BYTE *)v1 + 25) )
  {
    i = (__int64 *)v1[2];
  }
  else if ( *((_BYTE *)i + 25) )
  {
    for ( i = (__int64 *)v1[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
    {
      if ( v1 != (__int64 *)*i )
        break;
      v1 = i;
    }
    if ( *((_BYTE *)v1 + 25) )
      i = v1;
  }
  else
  {
    for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
      i = j;
  }
  if ( i[5] )
    return (const char *)i[4];
  else
    return Str1;
}
