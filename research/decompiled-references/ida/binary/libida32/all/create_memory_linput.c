_DWORD *__fastcall create_memory_linput(int a1, unsigned int a2)
{
  __int64 v2; // r12
  _DWORD *result; // rax
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rax

  v2 = qword_2CA1698;
  result = *(_DWORD **)(qword_2CA1698 + 536);
  if ( result )
  {
    v5 = a2;
    v6 = operator new(0x28u);
    v7 = *(_QWORD *)(v2 + 536);
    *(_QWORD *)v6 = off_2B0CFF8;
    *(_QWORD *)(v6 + 24) = v7;
    *(_DWORD *)(v6 + 32) = a1;
    *(_QWORD *)(v6 + 8) = a2;
    if ( a2 )
      v5 = (*(_QWORD *)(v7 + 32) & 0x4000LL) == 0 ? 1024 : 256;
    *(_DWORD *)(v6 + 16) = v5;
    result = (_DWORD *)create_generic_linput(v6);
    if ( result )
      *result = 3;
  }
  return result;
}

