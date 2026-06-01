const char *__fastcall sub_767B90(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  const char *v9; // rdx

  v3 = *(_QWORD *)(a2 + 32);
  if ( (*(_BYTE *)(v3 + 48) & 1) == 0 )
  {
    sub_7671E0((__int64 *)v3);
    v3 = *(_QWORD *)(a2 + 32);
  }
  v4 = *(_QWORD *)(v3 + 40);
  v5 = *(_QWORD *)(a1 + 48);
  if ( !(_DWORD)v5 )
    return &byte_3B9466E;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 40) + 4 * v6) + 24);
    if ( (_DWORD)v5 - 1 == v6 )
      break;
    if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x42 )
      v4 = *(_QWORD *)(v7 + 56);
    if ( (unsigned int)v5 == ++v6 )
      return &byte_3B9466E;
  }
  v8 = *(_QWORD *)(v7 + 40);
  v9 = &byte_3B9466E;
  if ( (v8 & 7) == 0 && (v8 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return (const char *)(*(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 16LL);
  return v9;
}

