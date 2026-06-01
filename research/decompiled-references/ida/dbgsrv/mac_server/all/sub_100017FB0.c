/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100017FB0
// Address: 0x0000000100017FB0

//----- (0000000100017FB0) ----------------------------------------------------
__int64 __fastcall sub_100017FB0(__int64 a1)
{
  int v1; // eax
  __int64 v3; // [rsp+8h] [rbp-38h] BYREF
  __int128 v4; // [rsp+10h] [rbp-30h]
  __int64 v5; // [rsp+20h] [rbp-20h]
  int v6; // [rsp+28h] [rbp-18h]

  v3 = 0x800000028LL;
  v4 = 0;
  v5 = 0;
  v6 = -1;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 552LL))(*(_QWORD *)(a1 + 8), &v3);
  v1 = HIDWORD(v3);
  *(_DWORD *)(a1 + 20) = HIDWORD(v3);
  *(_BYTE *)(a1 + 24) = v1 >= 5;
  if ( (_QWORD)v4 )
  {
    *((_QWORD *)&v4 + 1) = 0;
    qfree((void *)v4);
  }
  return __stack_chk_guard;
}
