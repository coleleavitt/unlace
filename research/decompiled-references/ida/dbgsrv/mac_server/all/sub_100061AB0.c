/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061AB0
// Address: 0x0000000100061AB0

//----- (0000000100061AB0) ----------------------------------------------------
bool __fastcall sub_100061AB0(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rcx

  result = 1;
  if ( a3 && (*(_BYTE *)(a3 + 4) & 1) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 312);
    if ( v4 )
    {
      v5 = a1 + 312;
      v6 = *(_DWORD *)(a2 + 4);
      v7 = v5;
      do
      {
        if ( *(_DWORD *)(v4 + 32) >= v6 )
          v7 = v4;
        v4 = *(_QWORD *)(v4 + 8LL * (*(_DWORD *)(v4 + 32) < v6));
      }
      while ( v4 );
      return v7 != v5
          && v6 >= *(_DWORD *)(v7 + 32)
          && (v8 = *(_QWORD *)(v7 + 48)) != 0
          && *(_QWORD *)(*(_QWORD *)(v7 + 40) + 48 * v8 - 16) == *(_QWORD *)(a2 + 8);
    }
    else
    {
      return 0;
    }
  }
  return result;
}
