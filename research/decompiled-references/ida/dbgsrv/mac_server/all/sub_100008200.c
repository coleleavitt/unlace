/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008200
// Address: 0x0000000100008200

//----- (0000000100008200) ----------------------------------------------------
__int64 __fastcall sub_100008200(__int64 a1)
{
  __int64 result; // rax

  sub_100060FA0(a1, "remote_prepare_to_pause_process\n");
  result = 0xFFFFFFFFLL;
  if ( *(int *)(a1 + 860) <= 2 )
  {
    *(_DWORD *)(a1 + 860) = 1;
    kill(*(_DWORD *)(a1 + 528), 17);
    return 1;
  }
  return result;
}
