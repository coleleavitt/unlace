/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400216B0
// Address: 0x00000001400216B0

//----- (00000001400216B0) ----------------------------------------------------
__int64 **__fastcall sub_1400216B0(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 *v3; // r8
  __int64 *v4; // rax
  __int64 *v5; // r8
  __int64 *v6; // r10
  __int64 *i; // rax

  v1 = *a1;
  if ( *((_BYTE *)*a1 + 25) )
  {
    *a1 = (__int64 *)v1[2];
    return a1;
  }
  v3 = (__int64 *)*v1;
  if ( *(_BYTE *)(*v1 + 25) )
  {
    v4 = (__int64 *)v1[1];
    if ( !*((_BYTE *)v4 + 25) )
    {
      v5 = *a1;
      do
      {
        v6 = v4;
        v1 = v5;
        if ( v5 != (__int64 *)*v4 )
          break;
        *a1 = v4;
        v5 = v4;
        v4 = (__int64 *)v4[1];
        v1 = v6;
      }
      while ( !*((_BYTE *)v4 + 25) );
    }
    if ( !*((_BYTE *)v1 + 25) )
    {
      *a1 = v4;
      return a1;
    }
  }
  else
  {
    for ( i = (__int64 *)v3[2]; !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
      v3 = i;
    *a1 = v3;
  }
  return a1;
}
