/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000FF60
// Address: 0x000000014000FF60

//----- (000000014000FF60) ----------------------------------------------------
__int64 __fastcall sub_14000FF60(__int64 a1, int a2)
{
  _QWORD *v2; // rax
  _QWORD *v5; // rbx
  __int64 **v6; // rcx
  __int64 i; // rax
  __int64 *j; // rcx

  v2 = *(_QWORD **)(a1 + 1088);
  v5 = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 != v2 )
  {
    do
    {
      if ( *((_DWORD *)v5 + 8) != a2 )
        SuspendThread((HANDLE)v5[5]);
      v6 = (__int64 **)v5[2];
      if ( *((_BYTE *)v6 + 25) )
      {
        for ( i = v5[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
        {
          if ( v5 != *(_QWORD **)(i + 16) )
            break;
          v5 = (_QWORD *)i;
        }
        v5 = (_QWORD *)i;
      }
      else
      {
        v5 = (_QWORD *)v5[2];
        for ( j = *v6; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v5 = j;
      }
    }
    while ( v5 != *(_QWORD **)(a1 + 1088) );
  }
  return 1;
}
