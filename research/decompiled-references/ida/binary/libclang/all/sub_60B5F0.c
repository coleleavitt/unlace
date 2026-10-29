_DWORD *__fastcall sub_60B5F0(__int64 a1, int a2, __int64 a3)
{
  _DWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 *v9; // rax

  if ( !a2 || !a3 || (*(_BYTE *)(a1 + 3) & 4) == 0 )
    return nullptr;
  v7 = sub_11CFB40(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 64LL), a1);
  if ( v7 )
  {
    do
    {
      v9 = (__int64 *)sub_1181E10(v7, a1, v5, v6, v8);
      if ( !v9 )
        break;
      v5 = (_DWORD *)v9[2];
      if ( a2 == *v5 )
        return v5;
      v7 = *v9;
    }
    while ( *v9 );
  }
  return nullptr;
}

