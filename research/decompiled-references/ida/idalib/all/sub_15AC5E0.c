bool __fastcall sub_15AC5E0(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rsi
  __int64 v3; // rax
  bool result; // al
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi

  v1 = *(_DWORD *)(a1 + 136);
  if ( !v1 )
    return 0;
  v2 = *(_QWORD *)(a1 + 128);
  v3 = 1LL << *(_DWORD *)v2;
  if ( (v3 & 0xB7) != 0 )
    return 0;
  if ( (v3 & 0x40) != 0 )
  {
    v6 = (unsigned int)(v1 - 1);
    v7 = *(_QWORD *)(a1 + 128);
    v8 = v6;
    while ( v2 + 144 * v6 != v7 )
    {
      v9 = 1LL << *(_DWORD *)(v7 + 144);
      if ( (v9 & 0xB7) != 0 )
        break;
      v7 += 144;
      if ( (v9 & 0x40) == 0 )
      {
        v10 = *(_QWORD *)(a1 + 128);
        while ( v2 + 144 * v8 != v10 )
        {
          v11 = v10 + 144;
          v12 = 1LL << *(_DWORD *)(v10 + 144);
          if ( (v12 & 0xB7) != 0 )
            break;
          v10 += 144;
          if ( (v12 & 0x40) == 0 )
          {
            v2 = v11;
            goto LABEL_4;
          }
        }
        goto LABEL_4;
      }
    }
    return 0;
  }
LABEL_4:
  result = 0;
  if ( *(_DWORD *)(v2 + 72) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v2 + 96) + 16LL);
    if ( v5 )
    {
      if ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x2B )
        return *(_DWORD *)(v5 + 100) != 0;
    }
  }
  return result;
}
