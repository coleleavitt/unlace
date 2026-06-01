/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100002B58
// Address: 0x0000000100002B58

//----- (0000000100002B58) ----------------------------------------------------
__int64 __fastcall sub_100002B58(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v5; // w8
  unsigned int v6; // w1

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 680LL))(a1);
  v5 = *(_DWORD *)(a2 + 16);
  if ( v5 == 2 )
  {
    result = task_resume(*(_DWORD *)(a1 + 1544));
    if ( *(_BYTE *)(a1 + 664) == 1 )
    {
      mach_error_string(result);
      result = sub_100000AA0();
    }
  }
  else if ( v5 == 1 )
  {
    if ( *(_BYTE *)(a2 + 13) )
      v6 = 9;
    else
      v6 = 7;
    result = sub_1000018D4(a1, v6, *(_DWORD *)(a1 + 528), (caddr_t)1, *(_DWORD *)(a2 + 8));
  }
  *(_DWORD *)(a2 + 16) = 0;
  *(_BYTE *)(a2 + 13) = 0;
  return result;
}
