/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__get_sp_mut
// Address: 0x00000000000D5C28

//----- (00000000000D5C28) ----------------------------------------------------
__int64 (**__fastcall std::__get_sp_mut(unsigned __int64 a1))[5]
{
  unsigned __int64 v1; // x9
  unsigned __int64 v2; // x8

  v1 = 0x9DDFEA08EB382D69LL * ((8 * (a1 & 0x1FFFFFFF) + 8) ^ HIDWORD(a1));
  v2 = 0x9DDFEA08EB382D69LL * (v1 ^ HIDWORD(a1) ^ (v1 >> 47));
  return &off_166930[(105 * ((unsigned __int8)(v2 >> 47) ^ (unsigned __int8)v2)) & 0xF];
}
// 166930: using guessed type __int64 (*off_166930[16])[5];
