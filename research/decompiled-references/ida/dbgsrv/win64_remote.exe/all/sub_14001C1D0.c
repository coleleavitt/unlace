/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001C1D0
// Address: 0x000000014001C1D0

//----- (000000014001C1D0) ----------------------------------------------------
bool __fastcall sub_14001C1D0(__int64 a1, unsigned __int8 a2)
{
  int v2; // esi
  bool v5; // di
  unsigned int v6; // edx
  void *Block[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]

  v2 = a2;
  *(_OWORD *)Block = 0;
  v8 = 0;
  if ( sub_140019680((_QWORD *)a1, (__int64)Block, 1) )
  {
    v5 = 1;
    if ( (*(_DWORD *)(*((_QWORD *)&v8 + 1) + 68LL) & 0x100) != v2 << 8 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)&v8 + 1) + 48LL) & 0x100001) == 0 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(30117);
      }
      *(_DWORD *)(*((_QWORD *)&v8 + 1) + 68LL) |= 0x100u;
      *(_DWORD *)(*((_QWORD *)&v8 + 1) + 48LL) = 1048577;
      v5 = sub_14001CA90((_QWORD *)a1, 1, *((__int64 *)&v8 + 1));
      if ( v5 )
      {
        v6 = *(_DWORD *)(a1 + 48) | 1;
        if ( !(_BYTE)v2 )
          v6 = *(_DWORD *)(a1 + 48) & 0xFFFFFFFE;
        *(_DWORD *)(a1 + 48) = v6;
      }
      else
      {
        sub_140043190(
          *(_QWORD *)(a1 + 24),
          (struct __crt_locale_pointers *)"%d: SetThreadContext failed",
          *(_DWORD *)(a1 + 32));
      }
    }
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
    }
    return v5;
  }
  else
  {
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
    }
    return 0;
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
