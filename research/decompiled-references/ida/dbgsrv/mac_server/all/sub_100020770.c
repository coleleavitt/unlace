/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020770
// Address: 0x0000000100020770

//----- (0000000100020770) ----------------------------------------------------
__int64 __fastcall sub_100020770(unsigned int *a1, __int64 a2)
{
  int v3; // [rsp+8h] [rbp-38h] BYREF
  __int64 v4; // [rsp+10h] [rbp-30h]
  __int128 v5; // [rsp+18h] [rbp-28h]

  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 5 && *(_QWORD *)(a2 + 24) == -1 )
  {
    v3 = -2;
    v5 = 0;
    v4 = -1;
    v4 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a1 + 640LL))(a1, *(unsigned int *)(a2 + 4)) - 1;
    if ( (*(unsigned int (__fastcall **)(unsigned int *, _QWORD, _QWORD, int *, _QWORD))(*(_QWORD *)a1 + 232LL))(
           a1,
           *(unsigned int *)(a2 + 4),
           a1[164],
           &v3,
           0) == -1 )
    {
      if ( under_debugger != 1 )
        interr(0x600u);
      BUG();
    }
    if ( v3 >= -1 && v4 )
    {
      *(_QWORD *)&v5 = 0;
      qfree((void *)v4);
    }
  }
  sub_1000044B0((__int64)a1, a2);
  return __stack_chk_guard;
}
// 1000AE23D: using guessed type char under_debugger;
