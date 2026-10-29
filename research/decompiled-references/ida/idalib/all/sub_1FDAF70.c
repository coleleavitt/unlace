__int64 __fastcall sub_1FDAF70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rsi
  int v9; // edi
  unsigned int v10; // eax
  __int64 *v11; // rcx
  __int64 v12; // r8
  int v14; // ecx
  int v15; // r9d
  __int64 v16; // r8

  v3 = sub_13F8CB0(*(_QWORD *)(a1 + 144) + 632LL, a2, a3);
  if ( v3 )
  {
    v4 = *(_QWORD *)(sub_FEEE40(v3) + 304);
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v4 + 8);
        if ( !v5 )
          break;
        v5 &= 0xFFFFFFFFFFFFFFF8LL;
        v6 = *(_QWORD *)(v4 + 8) & 4LL;
        v4 = v5;
        if ( !v6 || !v5 )
          goto LABEL_6;
      }
      v4 = 0;
LABEL_6:
      v7 = *(_DWORD *)(a1 + 112);
      v8 = *(_QWORD *)(a1 + 96);
      if ( v7 )
      {
        v9 = v7 - 1;
        v10 = (v7 - 1) & (((unsigned int)v5 >> 4) ^ ((unsigned int)v5 >> 9));
        v11 = (__int64 *)(v8 + 16LL * v10);
        v12 = *v11;
        if ( *v11 == v4 )
          return v11[1];
        v14 = 1;
        if ( v12 != -4096 )
        {
          while ( 1 )
          {
            v15 = v14 + 1;
            v10 = v9 & (v14 + v10);
            v11 = (__int64 *)(v8 + 16LL * v10);
            v16 = *v11;
            if ( *v11 == v4 )
              break;
            v14 = v15;
            if ( v16 == -4096 )
              return 0;
          }
          return v11[1];
        }
      }
    }
  }
  return 0;
}
