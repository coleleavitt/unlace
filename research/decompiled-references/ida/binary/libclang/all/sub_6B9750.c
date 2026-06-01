__int64 *__fastcall sub_6B9750(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 *v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  int v12; // eax
  int v13; // r10d

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v3 = *(unsigned int *)(a1 + 1688);
  v4 = *(_QWORD *)(a1 + 1672);
  if ( !(_DWORD)v3 )
    return nullptr;
  v5 = v2;
  v6 = (v3 - 1) & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4));
  v7 = (__int64 *)(v4 + 16LL * v6);
  v8 = *v7;
  if ( v5 != *v7 )
  {
    v12 = 1;
    while ( v8 != -4096 )
    {
      v13 = v12 + 1;
      v6 = (v3 - 1) & (v12 + v6);
      v7 = (__int64 *)(v4 + 16LL * v6);
      v8 = *v7;
      if ( v5 == *v7 )
        goto LABEL_3;
      v12 = v13;
    }
    return nullptr;
  }
LABEL_3:
  if ( v7 == (__int64 *)(v4 + 16 * v3) )
    return nullptr;
  v9 = v7[1];
  if ( v9 <= 7 )
    return nullptr;
  if ( (v9 & 4) != 0 )
    return *(__int64 **)(v9 & 0xFFFFFFFFFFFFFFF8LL);
  return v7 + 1;
}

