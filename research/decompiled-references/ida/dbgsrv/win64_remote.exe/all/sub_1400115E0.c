/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400115E0
// Address: 0x00000001400115E0

//----- (00000001400115E0) ----------------------------------------------------
__int64 __fastcall sub_1400115E0(__int64 a1, unsigned int a2)
{
  void *v4; // rax
  DWORD v5; // esi
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  v4 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 624LL))(a1, a2);
  v5 = ResumeThread(v4);
  if ( v5 == -1 )
    sub_140043190(a1, (struct __crt_locale_pointers *)"ResumeThread(%08X)", a2);
  if ( *(_BYTE *)(a1 + 624) )
    sub_140043130(a1, (struct __crt_locale_pointers *)"ResumeThread(%08X) -> %d\n", a2, v5);
  result = 0xFFFFFFFFLL;
  if ( v5 != -1 )
    return 1;
  return result;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
