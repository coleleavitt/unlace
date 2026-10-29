__int64 __fastcall sub_1C38400(__int64 a1, __int64 a2, unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  void *v9; // rdi
  char v10; // al
  __int64 v11; // r14

  v4 = a1;
  if ( a1 == a2 )
    return a1;
  while ( 1 )
  {
    v5 = v4 + 24;
    v11 = v4 + 24;
    if ( a2 == v4 + 24 )
      break;
    if ( a3(v4, v4 + 24) )
    {
      if ( a2 == v4 )
        return a2;
      v7 = v4 + 48;
      if ( a2 != v4 + 48 )
      {
        v8 = v5 + ((a2 - 48 - v5) & 0xFFFFFFFFFFFFFFF8LL) + 48;
        do
        {
          if ( !a3(v4, v7) )
          {
            if ( *(_DWORD *)(v4 + 32) > 0x40u )
            {
              v9 = *(void **)(v4 + 24);
              if ( v9 )
                operator delete[](v9);
            }
            *(_QWORD *)(v4 + 24) = *(_QWORD *)v7;
            *(_DWORD *)(v4 + 32) = *(_DWORD *)(v7 + 8);
            v10 = *(_BYTE *)(v7 + 12);
            *(_DWORD *)(v7 + 8) = 0;
            *(_BYTE *)(v4 + 36) = v10;
            *(_QWORD *)(v4 + 40) = *(_QWORD *)(v7 + 16);
            v4 = v5;
            v5 += 24;
          }
          v7 += 24;
          v11 = v5;
        }
        while ( v7 != v8 );
      }
      return v11;
    }
    v4 += 24;
  }
  return v11;
}
