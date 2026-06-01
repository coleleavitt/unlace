const char *__fastcall sub_B3B200(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r8
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 i; // rax
  __int64 v10; // rcx
  const char *result; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx

  v3 = *(_QWORD *)(a2 + 32);
  if ( (*(_BYTE *)(v3 + 48) & 1) == 0 )
  {
    sub_B3A710((__int64 *)v3, a2);
    v3 = *(_QWORD *)(a2 + 32);
  }
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v3 + 40);
  if ( !(_DWORD)v4 )
    return &byte_22F0C30;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = v4 - 1;
  if ( (_DWORD)v4 != 1 )
  {
    v8 = (unsigned int)(v4 - 2);
    for ( i = 0; ; ++i )
    {
      v10 = *(_QWORD *)(v5 + 8LL * *(unsigned int *)(v6 + 4 * i) + 24);
      if ( (*(_BYTE *)(v10 + 28) & 0x7F) == 0x44 )
        v5 = *(_QWORD *)(v10 + 56);
      if ( v7 == i )
        break;
      if ( v8 == i )
      {
        v12 = 4LL * v7;
        goto LABEL_14;
      }
    }
    return &byte_22F0C30;
  }
  v12 = 0;
LABEL_14:
  v13 = *(_QWORD *)(*(_QWORD *)(v5 + 8LL * *(unsigned int *)(v6 + v12) + 24) + 40LL);
  if ( (v13 & 7) != 0 )
    return &byte_22F0C30;
  result = &byte_22F0C30;
  v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v14 )
    return (const char *)(*(_QWORD *)(v14 + 16) + 16LL);
  return result;
}
