/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140008E60
// Address: 0x0000000140008E60

//----- (0000000140008E60) ----------------------------------------------------
__int64 __fastcall sub_140008E60(__int64 a1, __int64 a2)
{
  unsigned int (__fastcall *v4)(__int64); // rdi
  int v5; // ebx
  __int64 result; // rax

  v4 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 272LL);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1);
  if ( v5 != v4(a2) )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30541);
  }
  if ( !*(_BYTE *)(a2 + 24) || (result = *(_QWORD *)(a2 + 16)) == 0 || *(_QWORD *)(a1 + 16) )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30503);
  }
  *(_QWORD *)(a1 + 16) = result;
  *(_BYTE *)(a1 + 24) = 1;
  *(_BYTE *)(a2 + 24) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  return result;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
