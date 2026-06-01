__int64 sub_78C130()
{
  __int64 v1; // rax

  if ( (_BYTE)byte_2CD4640 )
    return qword_2CD4648;
  if ( __cxa_guard_acquire(&byte_2CD4640) )
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
    qword_2CD4648 = v1;
    __cxa_guard_release(&byte_2CD4640);
  }
  return qword_2CD4648;
}
