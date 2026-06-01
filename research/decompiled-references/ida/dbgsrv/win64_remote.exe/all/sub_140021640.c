/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140021640
// Address: 0x0000000140021640

//----- (0000000140021640) ----------------------------------------------------
__int64 *__fastcall sub_140021640(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 **v3; // r9
  __int64 i; // rax
  __int64 *j; // rcx

  v1 = *a1;
  v3 = *(__int64 ***)(*a1 + 16);
  if ( *((_BYTE *)v3 + 25) )
  {
    for ( i = *(_QWORD *)(v1 + 8); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
    {
      if ( v1 != *(_QWORD *)(i + 16) )
        break;
      *a1 = i;
      v1 = i;
    }
    *a1 = i;
    return a1;
  }
  else
  {
    for ( j = *v3; !*((_BYTE *)j + 25); j = (__int64 *)*j )
      v3 = (__int64 **)j;
    *a1 = (__int64)v3;
    return a1;
  }
}
