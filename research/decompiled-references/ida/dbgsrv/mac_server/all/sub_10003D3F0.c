/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003D3F0
// Address: 0x000000010003D3F0

//----- (000000010003D3F0) ----------------------------------------------------
__int64 __fastcall sub_10003D3F0(_QWORD *a1, unsigned __int8 *a2, const char *a3, unsigned int a4)
{
  unsigned int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+8h] [rbp-B8h]

  v10 = a1[7];
  set_interr_throws();
  v6 = sub_100040AD0((__int64)a1, a2, a3, a4);
  set_interr_throws();
  get_qerrno();
  while ( a1[7] > (unsigned __int64)(int)v10 )
  {
    if ( !sub_10003E780((__int64)a1) )
    {
      if ( under_debugger != 1 )
        interr(0x1FCu);
      BUG();
    }
  }
  v7 = a1[13];
  v8 = v7 + 32;
  if ( !v7 )
    v8 = 0;
  a1[16] = v8;
  set_qerrno();
  return v6;
}
// 1000AE23D: using guessed type char under_debugger;
