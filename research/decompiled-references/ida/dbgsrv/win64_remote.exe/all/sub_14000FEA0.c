/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000FEA0
// Address: 0x000000014000FEA0

//----- (000000014000FEA0) ----------------------------------------------------
__int64 __fastcall sub_14000FEA0(__int64 a1)
{
  __int64 v3; // rdx

  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  if ( TerminateProcess(*(HANDLE *)(a1 + 792), 0xFFFFFFFF) )
  {
    v3 = *(_QWORD *)(a1 + 1184);
    *(_BYTE *)(a1 + 1193) = 1;
    if ( !v3 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1) == 1 )
    {
      return 1;
    }
    else
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"continue_after_event");
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    sub_140043190(a1, (struct __crt_locale_pointers *)"TerminateProcess");
    return 0xFFFFFFFFLL;
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
