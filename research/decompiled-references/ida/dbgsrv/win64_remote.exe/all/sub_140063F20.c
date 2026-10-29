/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063F20
// Address: 0x0000000140063F20

//----- (0000000140063F20) ----------------------------------------------------
__int64 __fastcall sub_140063F20(unsigned int a1, __int64 a2)
{
  if ( a1 >= 4 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(480);
  }
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 8LL * (int)a1 + 16) = a2;
  return 16;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
// 1400CC020: using guessed type int TlsIndex;
