/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__get_sp_mut
// Address: 0x000BC500

//----- (000BC500) --------------------------------------------------------
int *__cdecl std::__get_sp_mut(const void *a1)
{
  return &off_13BC34[((unsigned __int8)(-107
                                      * ((-107 * ((-107 * (_BYTE)a1) ^ ((unsigned int)(1540483477 * (_DWORD)a1) >> 24)))
                                       ^ 0x54
                                       ^ (((1540483477
                                          * ((1540483477 * (_DWORD)a1) ^ ((unsigned int)(1540483477 * (_DWORD)a1) >> 24)))
                                         ^ 0x6F47A654) >> 13)))
                    ^ (unsigned __int8)((1540483477
                                       * ((1540483477
                                         * ((1540483477 * (_DWORD)a1) ^ ((unsigned int)(1540483477 * (_DWORD)a1) >> 24)))
                                        ^ 0x6F47A654
                                        ^ (((1540483477
                                           * ((1540483477 * (_DWORD)a1) ^ ((unsigned int)(1540483477 * (_DWORD)a1) >> 24)))
                                          ^ 0x6F47A654) >> 13))) >> 15))
                   & 0xF];
}
// 13BC34: using guessed type int off_13BC34[16];
