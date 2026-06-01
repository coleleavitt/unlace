/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: open_linput
// Address: 0x000000010006C688

//----- (000000010006C688) ----------------------------------------------------
__int64 __fastcall open_linput(const char *a1, int a2)
{
  __int64 result; // x0
  __int64 v3; // x20
  _QWORD *v4; // x19
  __int64 v5; // x19

  if ( a2 )
  {
    result = sub_100063E94();
    if ( result )
    {
      if ( *(_DWORD *)(result + 16) == -1 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
        return 0;
      }
      else
      {
        v3 = result;
        v4 = operator new(0x38u);
        *(_DWORD *)v4 = 2;
        v4[1] = v3;
        sub_10006C3F4((__int64)v4);
        return (__int64)v4;
      }
    }
  }
  else
  {
    result = (__int64)fopenRB(a1);
    if ( result )
    {
      v5 = result;
      result = (__int64)operator new(0x38u);
      *(_DWORD *)result = 1;
      *(_QWORD *)(result + 8) = v5;
    }
  }
  return result;
}
