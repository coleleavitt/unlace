_QWORD *__fastcall sub_13BE3D0(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v4; // rdi

  result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 32));
  if ( (*(_DWORD *)(a1 + 88))-- == 1 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( v4 )
      sub_145CD40(v4, a1 + 16);
    sub_13B5380(*(_QWORD *)(a1 + 56));
    result = sub_13BD8D0(a1);
    *(_OWORD *)(a1 + 64) = 0;
  }
  return result;
}
