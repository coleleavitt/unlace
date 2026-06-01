__int64 __fastcall sub_AF6AA0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // r8
  unsigned int v8; // eax
  __int64 v9; // rsi
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // ecx

  v4 = *(_QWORD *)(a2 + 40);
  v5 = 0;
LABEL_2:
  if ( v4 )
  {
    while ( v5 < *(_DWORD *)(v4 - 4) )
    {
      v6 = *(_QWORD *)(v4 + 8LL * v5);
      if ( !*(_BYTE *)(v6 + 16) )
      {
        v8 = *(_DWORD *)(v6 + 20);
        v9 = *(_QWORD *)(a2 + 504);
        do
        {
          v10 = v8;
          v8 = *(_DWORD *)(v9 + 4LL * v8);
        }
        while ( v10 != v8 );
        v11 = *(_DWORD *)(v6 + 24);
        do
        {
          v12 = v11;
          v11 = *(_DWORD *)(v9 + 4LL * v11);
        }
        while ( v12 != v11 );
        if ( v11 == v10 )
        {
          if ( (unsigned int)sub_AF6980(a1, *(_QWORD *)(v4 + 8LL * v5)) != 1 )
            return 0xFFFFFFFFLL;
          v4 = *(_QWORD *)(a2 + 40);
          ++v5;
          goto LABEL_2;
        }
      }
      ++v5;
    }
  }
  return 1;
}

