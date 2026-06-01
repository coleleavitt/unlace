/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap_idcvs
// Address: 0x000000010003AC90

//----- (000000010003AC90) ----------------------------------------------------
__int64 __fastcall swap_idcvs(__int128 *a1, __int128 *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // [rsp+0h] [rbp-30h]
  __int128 v5; // [rsp+10h] [rbp-20h]

  result = __stack_chk_guard;
  if ( a1 && a2 )
  {
    v5 = a1[1];
    v4 = *a1;
    v3 = *a2;
    a1[1] = a2[1];
    *a1 = v3;
    a2[1] = v5;
    *a2 = v4;
  }
  else
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0xA61u);
    return deep_copy_idcv((unsigned __int8 *)0xA61, (__int64)a2);
  }
  return result;
}
// 1000AE23D: using guessed type char under_debugger;
