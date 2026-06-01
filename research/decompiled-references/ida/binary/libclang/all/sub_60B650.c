_DWORD *__fastcall sub_60B650(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rsi
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 *v10; // rax

  if ( !a1 )
    return nullptr;
  if ( !a2 )
    return nullptr;
  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return nullptr;
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 )
  {
    if ( (*(_BYTE *)(v2 + 3) & 4) != 0 )
    {
      v4 = *(_QWORD *)(a2 + 8);
      v5 = *(_QWORD *)(a1 + 16);
      v8 = sub_11CFB40(*(_QWORD *)(v4 + 64), v2);
      if ( v8 )
      {
        do
        {
          v10 = (__int64 *)sub_1181E10(v8, v5, v6, v7, v9);
          if ( !v10 )
            break;
          v6 = (_DWORD *)v10[2];
          if ( v3 == *v6 )
            return v6;
          v8 = *v10;
        }
        while ( *v10 );
      }
    }
  }
  return nullptr;
}

