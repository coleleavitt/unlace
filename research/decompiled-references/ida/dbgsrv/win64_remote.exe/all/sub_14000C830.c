/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000C830
// Address: 0x000000014000C830

//----- (000000014000C830) ----------------------------------------------------
__int64 __fastcall sub_14000C830(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 i; // rbx
  __int64 *v5; // rcx
  void *v6; // rax

  v3 = a2;
  i = *(_QWORD *)(a2 + 16);
  if ( *(_BYTE *)(i + 25) )
  {
    for ( i = *(_QWORD *)(a2 + 8); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
    {
      if ( v3 != *(_QWORD *)(i + 16) )
        break;
      v3 = i;
    }
  }
  else
  {
    v5 = *(__int64 **)i;
    if ( !*(_BYTE *)(*(_QWORD *)i + 25LL) )
    {
      do
      {
        i = (__int64)v5;
        v5 = (__int64 *)*v5;
      }
      while ( !*((_BYTE *)v5 + 25) );
    }
  }
  v6 = (void *)sub_14000C8A0(a1, a2);
  j_j_free(v6);
  return i;
}
