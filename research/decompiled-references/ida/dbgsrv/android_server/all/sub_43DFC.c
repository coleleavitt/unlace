/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DFC
// Address: 0x0000000000043DFC

//----- (0000000000043DFC) ----------------------------------------------------
__int64 __fastcall sub_43DFC(__int64 result)
{
  __int64 v1; // x22
  _QWORD *v2; // x23
  __int64 v3; // x19
  _QWORD *v4; // x8
  __int64 v5; // x8
  __int64 v6; // x9
  _QWORD *v7; // t1
  char v8; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v9; // [xsp+8h] [xbp-38h]

  v1 = result + 1744;
  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_QWORD **)(result + 1736);
  if ( v2 != (_QWORD *)(result + 1744) )
  {
    v3 = result;
    do
    {
      if ( *((_BYTE *)v2 + 64) )
      {
        if ( *(_BYTE *)(v3 + 1854) )
        {
          *((_BYTE *)v2 + 64) = 0;
          v4 = (_QWORD *)v2[1];
          if ( v4 )
            goto LABEL_11;
          goto LABEL_13;
        }
        if ( *((_DWORD *)v2 + 15) != 1 )
        {
          if ( !under_debugger )
            interr(30181);
          __break(1u);
        }
        ptrace(PTRACE_CONT, *((unsigned int *)v2 + 10), 0, 0);
        result = sub_4B230(v3, (int)&v8, *((_DWORD *)v2 + 10));
        if ( (_DWORD)result != *((_DWORD *)v2 + 10) )
          result = sub_39FA0((__int64)"%d: failed to clean up pending SIGSTOP\n", result);
      }
      v4 = (_QWORD *)v2[1];
      if ( v4 )
      {
        do
        {
LABEL_11:
          v2 = v4;
          v4 = (_QWORD *)*v4;
        }
        while ( v4 );
        continue;
      }
LABEL_13:
      v5 = (__int64)(v2 + 2);
      if ( *(_QWORD **)v2[2] == v2 )
      {
        v2 = (_QWORD *)v2[2];
      }
      else
      {
        do
        {
          v6 = *(_QWORD *)v5;
          v7 = *(_QWORD **)(*(_QWORD *)v5 + 16LL);
          v5 = *(_QWORD *)v5 + 16LL;
          v2 = v7;
        }
        while ( *v7 != v6 );
      }
    }
    while ( v2 != (_QWORD *)v1 );
  }
  return result;
}
// 168DF0: using guessed type char under_debugger;
