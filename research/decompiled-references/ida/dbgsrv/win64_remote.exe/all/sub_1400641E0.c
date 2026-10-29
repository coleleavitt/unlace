/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400641E0
// Address: 0x00000001400641E0

//----- (00000001400641E0) ----------------------------------------------------
__int64 __fastcall sub_1400641E0(const CHAR *a1, unsigned __int8 *a2)
{
  __int64 v3; // rbx
  void *v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  void *Block; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp-18h]
  __int64 v10; // [rsp+48h] [rbp-10h]

  v5 = nullptr;
  v6 = 0;
  v7 = 0;
  if ( sub_140061F60((__int64)&v5, a2, -1) )
  {
    sub_14005EDE0((WCHAR **)&Block, a1);
    if ( v9 <= 1 )
      v3 = 0;
    else
      v3 = common_fsopen<wchar_t>((wchar_t *)Block);
    if ( Block )
    {
      v9 = 0;
      j_free(Block);
      Block = nullptr;
      v10 = 0;
    }
  }
  else
  {
    v3 = 0;
  }
  if ( v5 )
  {
    v6 = 0;
    j_free(v5);
  }
  return v3;
}
