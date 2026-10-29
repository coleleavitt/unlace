__int64 __fastcall ___ZNK5dyld39MachOFile16hasCodeSignatureERjS1__block_invoke_2(
        __int64 result,
        int a2,
        __int64 a3,
        unsigned int a4)
{
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = 1;
  if ( a2 == 1 && a4 >> 8 <= 0xA08 )
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 40) + 8LL) + 24LL) = 1;
  return result;
}
