/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003CE60
// Address: 0x000000010003CE60

//----- (000000010003CE60) ----------------------------------------------------
__int64 __fastcall sub_10003CE60(__int64 a1)
{
  unsigned __int8 *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdi
  unsigned __int8 v6[8]; // [rsp+0h] [rbp-30h] BYREF
  void *__p[2]; // [rsp+8h] [rbp-28h]
  __int64 v8; // [rsp+18h] [rbp-18h]

  v2 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
  v6[0] = 2;
  *(_OWORD *)__p = 0;
  v8 = 0;
  copy_idcv(v6, v2);
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    v4 = v3 - 1;
    *(_QWORD *)(a1 + 32) = v4;
    sub_100043B90((unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v4));
  }
  if ( v6[0] == 5 )
  {
    sub_1000380B0((unsigned __int8 **)__p[0], v6);
  }
  else if ( v6[0] == 7 && __p[0] )
  {
    __p[1] = nullptr;
    qfree(__p[0]);
  }
  return __stack_chk_guard;
}
