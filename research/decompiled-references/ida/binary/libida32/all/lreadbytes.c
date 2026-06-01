__int64 __fastcall lreadbytes(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rax

  v6 = qlread(a1, a2, a3);
  if ( v6 != a3 )
    return 0xFFFFFFFFLL;
  if ( a4 )
    memrev(a2, v6);
  return 0;
}

