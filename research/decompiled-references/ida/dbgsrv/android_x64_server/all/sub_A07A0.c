/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A07A0
// Address: 0x00000000000A07A0

//----- (00000000000A07A0) ----------------------------------------------------
bool __fastcall sub_A07A0(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // r8d
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
      if ( v7 == v5 )
      {
        return 0;
      }
      else if ( v6 >= *(_DWORD *)(v7 + 32) )
      {
        v8 = *(_QWORD *)(v7 + 48);
        return v8 && *(_QWORD *)(*(_QWORD *)(v7 + 40) + 48 * v8 - 16) == *(_QWORD *)(a2 + 8);
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
