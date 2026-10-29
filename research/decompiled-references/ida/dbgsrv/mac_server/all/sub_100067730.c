/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067730
// Address: 0x0000000100067730

//----- (0000000100067730) ----------------------------------------------------
__int64 __fastcall sub_100067730(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // r9
  int v5; // r8d
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v11; // edx

  v4 = *(_QWORD *)(a1 + 736);
  if ( v4 == a3 && *(_DWORD *)(a1 + 768) == a2 )
    return 0;
  v5 = 0;
  v6 = 0;
  if ( v4 != -1 )
  {
    v7 = *(_QWORD *)(a1 + 744);
    if ( v7 == a3 && *(_DWORD *)(a1 + 772) == a2 )
      return 0;
    if ( v7 == -1 )
    {
      v6 = 1;
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 752);
      if ( v8 == a3 && *(_DWORD *)(a1 + 776) == a2 )
        return 0;
      if ( v8 == -1 )
      {
        v6 = 2;
      }
      else
      {
        v9 = *(_QWORD *)(a1 + 760);
        if ( v9 == a3 )
        {
          if ( a3 != -1 )
            return 0;
          v6 = 3;
          if ( *(_DWORD *)(a1 + 780) == a2 )
            return 0;
        }
        else
        {
          if ( v9 != -1 )
            return 0;
          v6 = 3;
        }
      }
    }
  }
  *(_QWORD *)(a1 + 8LL * v6 + 736) = a3;
  *(_DWORD *)(a1 + 4LL * v6 + 768) = a2;
  if ( a2 != 8 )
    v5 = a2;
  if ( a4 == 2 )
  {
    v11 = 1;
  }
  else if ( a4 == 4 )
  {
    v11 = 3;
  }
  else
  {
    v11 = 2 * (a4 == 8);
  }
  *(_DWORD *)(a1 + 788) |= (v11 << ((4 * v6) | 0x12)) | (v5 << (4 * v6 + 16)) | (1 << (2 * v6));
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 616LL))(a1);
}
