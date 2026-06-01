/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007C78
// Address: 0x0000000100007C78

//----- (0000000100007C78) ----------------------------------------------------
__int64 __fastcall sub_100007C78(_QWORD *a1)
{
  _QWORD *v1; // x21
  _QWORD *v2; // x20
  __int64 result; // x0
  _QWORD *v5; // x9
  _QWORD *v6; // x8
  bool v7; // zf

  v1 = (_QWORD *)a1[238];
  v2 = a1 + 239;
  if ( v1 == a1 + 239 )
    return 1;
  do
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 720LL))(a1, *((unsigned int *)v1 + 10));
    if ( !(_DWORD)result )
      break;
    v5 = (_QWORD *)v1[1];
    if ( v5 )
    {
      do
      {
        v6 = v5;
        v5 = (_QWORD *)*v5;
      }
      while ( v5 );
    }
    else
    {
      do
      {
        v6 = (_QWORD *)v1[2];
        v7 = *v6 == (_QWORD)v1;
        v1 = v6;
      }
      while ( !v7 );
    }
    v1 = v6;
  }
  while ( v6 != v2 );
  return result;
}
