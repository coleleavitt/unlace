/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100001A1C
// Address: 0x0000000100001A1C

//----- (0000000100001A1C) ----------------------------------------------------
__int64 __fastcall sub_100001A1C(__int64 a1, unsigned int _request, pid_t _pid, caddr_t _addr, int _data)
{
  __int64 v7; // x0
  __int64 v8; // x22
  int *v9; // x0

  v7 = ptrace(_request, _pid, _addr, _data);
  v8 = v7;
  if ( *(_BYTE *)(a1 + 664) == 1 )
  {
    if ( _request > 0x1F )
    {
      if ( !(_DWORD)v7 )
        goto LABEL_6;
    }
    else if ( !(_DWORD)v7 )
    {
LABEL_6:
      sub_100000B44();
      return v8;
    }
    v9 = __error();
    winerr(*v9);
    goto LABEL_6;
  }
  return v8;
}
