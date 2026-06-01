char *__fastcall sub_767B10(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  const char *v5; // rdx
  __int64 v6; // rcx

  v2 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v2 == -2 )
    return "...";
  v4 = *(_QWORD *)(a2 + 32);
  if ( (*(_BYTE *)(v4 + 48) & 1) == 0 )
  {
    sub_7671E0((__int64 *)v4);
    v2 = *(unsigned int *)(a1 + 40);
    v4 = *(_QWORD *)(a2 + 32);
  }
  v5 = &byte_3B9466E;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 8 * v2) + 40LL);
  if ( (v6 & 7) == 0 && (v6 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return (char *)(*(_QWORD *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 16LL);
  return (char *)v5;
}

