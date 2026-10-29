/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140011CE0
// Address: 0x0000000140011CE0

//----- (0000000140011CE0) ----------------------------------------------------
char __fastcall sub_140011CE0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  void *Block[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]

  v5 = a2[5];
  v6 = v5;
  if ( v5 == *(_QWORD *)(a1 + 24) )
    v6 = -1;
  if ( v6 == -1 )
    return 0;
  if ( v5 == a3 )
  {
    *(_OWORD *)Block = 0;
    v9 = 0;
    if ( !sub_140019680(a2, (__int64)Block, 1) )
    {
      if ( Block[0] )
      {
        Block[1] = nullptr;
        j_free(Block[0]);
      }
      return 0;
    }
    *(_QWORD *)(*((_QWORD *)&v9 + 1) + 248LL) = a2[5];
    *(_DWORD *)(*((_QWORD *)&v9 + 1) + 48LL) = 1048577;
    if ( !sub_14001CA90(a2, 1, *((__int64 *)&v9 + 1)) )
      sub_140043190(a1, (struct __crt_locale_pointers *)"del_thread_bpt: SetThreadContext");
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
    }
  }
  sub_14001A850(a1, (void *)a2[5], 1);
  a2[5] = -1;
  return 1;
}
