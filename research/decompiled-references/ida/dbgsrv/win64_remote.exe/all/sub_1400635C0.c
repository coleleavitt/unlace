/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400635C0
// Address: 0x00000001400635C0

//----- (00000001400635C0) ----------------------------------------------------
__int64 __fastcall sub_1400635C0(const CHAR *a1, __int64 a2, int a3)
{
  __int64 first; // rax
  unsigned int v5; // ebx
  void *Block; // [rsp+20h] [rbp-268h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-260h]
  _BYTE v9[560]; // [rsp+40h] [rbp-248h] BYREF

  *(_DWORD *)(a2 + 592) = a3;
  sub_14005EDE0((WCHAR **)&Block, a1);
  if ( v8 <= 1 )
  {
    if ( Block )
    {
      v8 = 0;
      j_free(Block);
    }
    return 0xFFFFFFFFLL;
  }
  first = common_find_first_wide<_wfinddata64_t>(Block, v9);
  *(_QWORD *)(a2 + 584) = first;
  if ( first == -1 )
  {
    if ( Block )
    {
      v8 = 0;
      j_free(Block);
    }
    return 0xFFFFFFFFLL;
  }
  sub_140063480(a2, (__int64)v9);
  if ( (*(_BYTE *)(a2 + 592) & 0x10) != 0 || (*(_BYTE *)a2 & 0x10) == 0 )
  {
    if ( Block )
    {
      v8 = 0;
      j_free(Block);
    }
    return 0;
  }
  else
  {
    v5 = sub_140063400(a2);
    if ( Block )
    {
      v8 = 0;
      j_free(Block);
    }
    return v5;
  }
}
// 14007F3F0: using guessed type __int64 __fastcall common_find_first_wide<_wfinddata64_t>(_QWORD, _QWORD);
