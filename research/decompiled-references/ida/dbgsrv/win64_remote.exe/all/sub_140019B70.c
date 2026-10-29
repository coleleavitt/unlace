/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140019B70
// Address: 0x0000000140019B70

//----- (0000000140019B70) ----------------------------------------------------
char __fastcall sub_140019B70(_QWORD *a1)
{
  _QWORD *v1; // rax
  _QWORD *v3; // rbx
  __int64 **v4; // rcx
  __int64 i; // rax
  __int64 *j; // rcx

  v1 = (_QWORD *)a1[136];
  v3 = (_QWORD *)*v1;
  if ( (_QWORD *)*v1 != v1 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 616LL))(a1, v3[5]);
      v4 = (__int64 **)v3[2];
      if ( *((_BYTE *)v4 + 25) )
      {
        for ( i = v3[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
        {
          if ( v3 != *(_QWORD **)(i + 16) )
            break;
          v3 = (_QWORD *)i;
        }
        v3 = (_QWORD *)i;
      }
      else
      {
        v3 = (_QWORD *)v3[2];
        for ( j = *v4; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v3 = j;
      }
    }
    while ( v3 != (_QWORD *)a1[136] );
  }
  return 1;
}
