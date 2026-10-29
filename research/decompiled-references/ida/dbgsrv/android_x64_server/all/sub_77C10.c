/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77C10
// Address: 0x0000000000077C10

//----- (0000000000077C10) ----------------------------------------------------
__int64 __fastcall sub_77C10(_QWORD *a1, char *a2, const char *a3, int a4, double a5, __m128 a6)
{
  __int64 v8; // r13
  char v9; // r15
  unsigned int v10; // r14d
  unsigned int qerrno; // r15d
  __int64 v12; // rax
  __int64 v13; // rcx

  v8 = a1[7];
  v9 = set_interr_throws(1);
  v10 = sub_7CB70((__int64)a1, a2, a3, a4, 0.0, a6);
  set_interr_throws(v9);
  qerrno = get_qerrno();
  while ( a1[7] > (unsigned __int64)(int)v8 )
  {
    if ( !sub_790E0((__int64)a1, 0.0, a6) )
    {
      if ( !(_BYTE)under_debugger )
        interr(508);
      BUG();
    }
  }
  v12 = a1[13];
  v13 = v12 + 32;
  if ( !v12 )
    v13 = 0;
  a1[16] = v13;
  if ( (_BYTE)v10 )
    qerrno = 0;
  set_qerrno(qerrno);
  return v10;
}
// 77C84: conditional instruction was optimized away because rbp.8==0
// 158B40: using guessed type __int64 under_debugger;
