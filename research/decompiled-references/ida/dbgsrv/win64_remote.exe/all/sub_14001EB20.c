/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001EB20
// Address: 0x000000014001EB20

//----- (000000014001EB20) ----------------------------------------------------
bool __fastcall sub_14001EB20(__int64 a1, unsigned __int64 a2, int a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rax
  int v6; // r8d
  int v8; // eax

  if ( !*(_DWORD *)(a1 + 56) )
    return 0;
  v5 = *(_QWORD *)(a1 + 40);
  if ( a2 < v5 || a2 > *(int *)(a1 + 56) + v5 - 1 )
    return 0;
  if ( a3 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      if ( v6 != 7 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(623);
      }
      return (*(_DWORD *)(a1 + 76) & 8) != 0;
    }
    else
    {
      return (*(_DWORD *)(a1 + 76) & 1) != 0;
    }
  }
  else
  {
    v8 = 2;
    if ( a5 != 1 && *(_DWORD *)(a1 + 76) == 8 && a4 == a2 )
      v8 = 10;
    return (v8 & *(_DWORD *)(a1 + 76)) != 0;
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
