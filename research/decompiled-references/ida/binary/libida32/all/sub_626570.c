_DWORD *__fastcall sub_626570(__int64 a1, int a2, unsigned int a3)
{
  _DWORD *result; // rax
  __int64 v6; // rdi
  __int64 v7; // rax

  result = *(_DWORD **)(a1 + 536);
  if ( result )
  {
    v6 = operator new(0x28u);
    v7 = *(_QWORD *)(a1 + 536);
    *(_QWORD *)v6 = off_2B0CFF8;
    *(_QWORD *)(v6 + 24) = v7;
    *(_DWORD *)(v6 + 32) = a2;
    *(_QWORD *)(v6 + 8) = a3;
    if ( a3 )
      a3 = (*(_QWORD *)(v7 + 32) & 0x4000LL) == 0 ? 1024 : 256;
    *(_DWORD *)(v6 + 16) = a3;
    result = (_DWORD *)create_generic_linput(v6);
    if ( result )
      *result = 3;
  }
  return result;
}

