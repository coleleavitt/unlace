/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438630
// Address: 0x0000000000438630

//----- (0000000000438630) ----------------------------------------------------
__int64 sub_438630()
{
  __int64 v1; // rax

  if ( (_BYTE)byte_4C81C0 )
    return qword_4C81C8;
  if ( __cxa_guard_acquire(&byte_4C81C0) )
  {
    v1 = operator new(0x80u);
    *(_QWORD *)v1 = 0;
    *(_QWORD *)(v1 + 40) = 0;
    *(_QWORD *)(v1 + 64) = 0;
    *(_QWORD *)(v1 + 88) = 0;
    *(_QWORD *)(v1 + 112) = 0;
    *(_DWORD *)(v1 + 120) = 0;
    *(_BYTE *)(v1 + 124) = 0;
    *(_OWORD *)(v1 + 8) = 0;
    *(_OWORD *)(v1 + 24) = 0;
    *(_OWORD *)(v1 + 48) = 0;
    *(_OWORD *)(v1 + 72) = 0;
    *(_OWORD *)(v1 + 96) = 0;
    qword_4C81C8 = v1;
    __cxa_guard_release(&byte_4C81C0);
  }
  return qword_4C81C8;
}
// 4C81C8: using guessed type __int64 qword_4C81C8;
