/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: start
// Address: 0x0000000000037EB8

//----- (0000000000037EB8) ----------------------------------------------------
__int64 __fastcall start(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int128 v9; // q0
  __int64 result; // x0
  __int128 v11; // [xsp+0h] [xbp-20h] BYREF
  __int64 *v12; // [xsp+10h] [xbp-10h]

  *(_QWORD *)&v9 = _PREINIT_ARRAY__;
  *((_QWORD *)&v9 + 1) = _INIT_ARRAY__;
  v11 = v9;
  v12 = _FINI_ARRAY__;
  result = __libc_init(&a9, 0, sub_9DE98, &v11);
  if ( result )
    __asm { BR              X0 }
  return result;
}
// 36B50: using guessed type __int64 __fastcall __libc_init(_QWORD, _QWORD, _QWORD, _QWORD);
// 155F60: using guessed type __int64 _PREINIT_ARRAY__[2];
// 155F70: using guessed type __int64 _INIT_ARRAY__[2];
// 155FD0: using guessed type __int64 _FINI_ARRAY__[2];
