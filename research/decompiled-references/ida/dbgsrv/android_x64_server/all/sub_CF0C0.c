/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CF0C0
// Address: 0x00000000000CF0C0

//----- (00000000000CF0C0) ----------------------------------------------------
__int64 __fastcall std::logic_error::operator=(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  _InterlockedAdd((volatile signed __int32 *)(v4 - 8), 1u);
  if ( _InterlockedDecrement((volatile signed __int32 *)(v3 - 8)) < 0 )
    operator delete((void *)(v3 - 24));
  return a1;
}
