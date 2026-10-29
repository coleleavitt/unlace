/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3200
// Address: 0x00000000000A3200

//----- (00000000000A3200) ----------------------------------------------------
char __fastcall sub_A3200(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // r12
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rbx
  bool v6; // zf

  v1 = (_QWORD *)a1[54];
  v2 = a1 + 55;
  if ( a1 + 55 != v1 )
  {
    do
    {
      if ( !(*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD *, _QWORD, _QWORD))(*a1 + 296LL))(
              a1,
              v1[5],
              v1 + 6,
              *((unsigned __int8 *)v1 + 56),
              0) )
        sub_390A0((int)"Failed to restore broken breakpoint at 0x%a\n", v1[5]);
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
        v4 = (_QWORD *)v1[2];
        if ( (_QWORD *)*v4 != v1 )
        {
          v5 = (__int64)(v1 + 2);
          do
          {
            v4 = *(_QWORD **)(*(_QWORD *)v5 + 16LL);
            v6 = *v4 == *(_QWORD *)v5;
            v5 = *(_QWORD *)v5 + 16LL;
          }
          while ( !v6 );
        }
      }
      v1 = v4;
    }
    while ( v2 != v4 );
  }
  sub_38580((__int64)(a1 + 54), (_QWORD *)a1[55]);
  a1[54] = v2;
  *(_OWORD *)(a1 + 55) = 0;
  return 1;
}
