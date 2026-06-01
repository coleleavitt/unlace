/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063D40
// Address: 0x0000000140063D40

//----- (0000000140063D40) ----------------------------------------------------
__int64 __fastcall sub_140063D40(unsigned int a1)
{
  if ( a1 >= 4 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(482);
  }
  return *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 8LL * (int)a1 + 16);
}
// 1400CB61C: using guessed type char byte_1400CB61C;
// 1400CC020: using guessed type int TlsIndex;
