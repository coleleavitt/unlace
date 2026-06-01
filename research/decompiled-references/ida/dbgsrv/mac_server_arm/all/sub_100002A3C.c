/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100002A3C
// Address: 0x0000000100002A3C

//----- (0000000100002A3C) ----------------------------------------------------
__int64 __fastcall sub_100002A3C(__int64 a1, int *a2)
{
  int v5; // w0
  int *v6; // x0
  __int64 result; // x0

  if ( a2[520] == 5 && *((_QWORD *)a2 + 262) == 2 && **((_QWORD **)a2 + 261) == 65539 )
  {
    v5 = ptrace(13, *(_DWORD *)(a1 + 528), (caddr_t)*a2, a2[2]);
    if ( *(_BYTE *)(a1 + 664) == 1 )
    {
      if ( v5 )
      {
        v6 = __error();
        winerr(*v6);
      }
      sub_100000AA0();
    }
  }
  result = mach_msg((mach_msg_header_t *)(a2 + 261), 1, a2[262], 0, a2[263], 0, 0);
  if ( *(_BYTE *)(a1 + 664) == 1 )
  {
    mach_error_string(result);
    return sub_100000AA0();
  }
  return result;
}
