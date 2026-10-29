/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100064120
// Address: 0x0000000100064120

//----- (0000000100064120) ----------------------------------------------------
char __fastcall sub_100064120(_QWORD *a1)
{
  _QWORD *v1; // r13
  _QWORD *v2; // r12
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  bool v5; // zf

  v1 = (_QWORD *)a1[54];
  v2 = a1 + 55;
  if ( v1 != a1 + 55 )
  {
    do
    {
      if ( !(*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD *, _QWORD, _QWORD))(*a1 + 296LL))(
              a1,
              v1[5],
              v1 + 6,
              *((unsigned __int8 *)v1 + 56),
              0) )
        sub_100000AE0((int)"Failed to restore broken breakpoint at 0x%a\n", v1[5]);
      v3 = (_QWORD *)v1[1];
      if ( v3 )
      {
        do
        {
          v4 = v3;
          v3 = (_QWORD *)*v3;
        }
        while ( v3 );
      }
      else
      {
        do
        {
          v4 = (_QWORD *)v1[2];
          v5 = *v4 == (_QWORD)v1;
          v1 = v4;
        }
        while ( !v5 );
      }
      v1 = v4;
    }
    while ( v4 != v2 );
  }
  sub_10000A050((__int64)(a1 + 54), (_QWORD *)a1[55]);
  a1[54] = v2;
  *(_OWORD *)(a1 + 55) = 0;
  return 1;
}
