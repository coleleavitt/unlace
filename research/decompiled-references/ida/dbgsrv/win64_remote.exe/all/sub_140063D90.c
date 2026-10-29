/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063D90
// Address: 0x0000000140063D90

//----- (0000000140063D90) ----------------------------------------------------
__int64 __fastcall sub_140063D90(unsigned int a1)
{
  if ( a1 >= 4 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(483);
  }
  return *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                   + 24LL * (int)a1
                   + 48);
}
// 1400CB61C: using guessed type char byte_1400CB61C;
// 1400CC020: using guessed type int TlsIndex;
