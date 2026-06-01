/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140064730
// Address: 0x0000000140064730

//----- (0000000140064730) ----------------------------------------------------
__int64 __fastcall sub_140064730(const CHAR *a1)
{
  unsigned int v1; // ebx
  void *Block; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+28h] [rbp-20h]

  sub_14005EDE0((WCHAR **)&Block, a1);
  if ( v4 <= 1 )
  {
    *errno() = 42;
    v1 = -1;
  }
  else
  {
    v1 = sub_140080530((const WCHAR *)Block);
    if ( !v1 )
      goto LABEL_6;
  }
  sub_1400640B0(1u);
LABEL_6:
  if ( Block )
  {
    v4 = 0;
    j_free(Block);
  }
  return v1;
}
