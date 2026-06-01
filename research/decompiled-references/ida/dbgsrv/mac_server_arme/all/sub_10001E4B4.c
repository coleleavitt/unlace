/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001E4B4
// Address: 0x000000010001E4B4

//----- (000000010001E4B4) ----------------------------------------------------
__int64 __fastcall sub_10001E4B4(__int64 a1)
{
  __int64 result; // x0

  if ( *(_BYTE *)(a1 + 896) != 1
    || (result = sub_10001D790(*(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 84), (const void *)(a1 + 96)), (_DWORD)result) )
  {
    if ( *(_BYTE *)(a1 + 897) != 1 )
      return 1;
    result = sub_100001AE0(*(_QWORD *)(a1 + 88), *(_DWORD *)(a1 + 84));
    if ( !result )
      return result;
    return !thread_set_state(*(_DWORD *)(result + 4), 17, (thread_state_t)(a1 + 368), 0x84u);
  }
  return result;
}
