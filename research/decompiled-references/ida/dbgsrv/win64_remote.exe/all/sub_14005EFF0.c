/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005EFF0
// Address: 0x000000014005EFF0

//----- (000000014005EFF0) ----------------------------------------------------
__int64 __fastcall sub_14005EFF0(const CHAR *a1)
{
  unsigned int v1; // ebx
  void *Block; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+28h] [rbp-20h]

  sub_14005EDE0((WCHAR **)&Block, a1);
  if ( v4 <= 1 )
  {
    v1 = -1;
  }
  else
  {
    v1 = wmkdir((const wchar_t *)Block);
    if ( v1 != -1 )
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
