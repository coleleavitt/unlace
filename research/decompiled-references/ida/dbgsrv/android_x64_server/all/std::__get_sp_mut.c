/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__get_sp_mut
// Address: 0x00000000000CEBB0

//----- (00000000000CEBB0) ----------------------------------------------------
__int64 (**__fastcall std::__get_sp_mut(unsigned __int64 a1))[5]
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rsi

  v1 = HIDWORD(a1);
  v2 = a1 & 0x1FFFFFFF;
  v3 = (0x9DDFEA08EB382D69LL * (v1 ^ (8 * v2 + 8))) >> 47;
  return &off_155650[(105
                    * ((unsigned __int8)(105 * (v3 ^ v1 ^ (105 * (v1 ^ (8 * v2 + 8)))))
                     ^ (unsigned __int8)((0x9DDFEA08EB382D69LL * (v3 ^ v1 ^ (0x9DDFEA08EB382D69LL * (v1 ^ (8 * v2 + 8))))) >> 47)))
                   & 0xF];
}
// 155650: using guessed type __int64 (*off_155650[16])[5];
