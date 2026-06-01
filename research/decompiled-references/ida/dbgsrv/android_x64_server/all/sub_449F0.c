/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449F0
// Address: 0x00000000000449F0

//----- (00000000000449F0) ----------------------------------------------------
__int64 __fastcall sub_449F0(__int64 a1)
{
  unsigned int v1; // r14d
  _QWORD *v2; // rbp
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rbp
  bool v6; // zf

  v2 = *(_QWORD **)(a1 + 1032);
  LOBYTE(v1) = 1;
  if ( v2 != (_QWORD *)(a1 + 1040) )
  {
    while ( (unsigned __int8)sub_448E0(a1, *((unsigned int *)v2 + 10)) )
    {
      v3 = (_QWORD *)v2[1];
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
        v4 = (_QWORD *)v2[2];
        if ( (_QWORD *)*v4 != v2 )
        {
          v5 = (__int64)(v2 + 2);
          do
          {
            v4 = *(_QWORD **)(*(_QWORD *)v5 + 16LL);
            v6 = *v4 == *(_QWORD *)v5;
            v5 = *(_QWORD *)v5 + 16LL;
          }
          while ( !v6 );
        }
      }
      v2 = v4;
      if ( v4 == (_QWORD *)(a1 + 1040) )
        return v1;
    }
    return 0;
  }
  return v1;
}
// 44A6E: variable 'v1' is possibly undefined
