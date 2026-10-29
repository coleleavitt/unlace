/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000F310
// Address: 0x000000014000F310

//----- (000000014000F310) ----------------------------------------------------
__int64 __fastcall sub_14000F310(__int64 a1, DWORD a2, int a3)
{
  __int64 v4; // rsi

  v4 = a3;
  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  if ( !DebugActiveProcess(a2) )
  {
    sub_140043190(a1, (struct __crt_locale_pointers *)"DebugActiveProcess %08lX", a2);
    return 0xFFFFFFFFLL;
  }
  if ( !sub_14001E640(a1) )
    return 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 912) = v4;
  *(_DWORD *)(a1 + 904) = 1;
  *(_BYTE *)(a1 + 1193) = 0;
  return 1;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
