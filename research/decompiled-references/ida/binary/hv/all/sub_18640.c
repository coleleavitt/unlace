__int64 __fastcall sub_18640(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v6; // r12
  __int64 v7; // r9
  __int64 v8; // r15
  _BYTE *v10; // rsi
  char v11; // dl
  _BYTE *v12; // rdi
  int v13; // r8d
  __int64 v14; // rax
  int v15; // ecx
  void *v16; // rbp
  unsigned __int64 v17; // rax
  unsigned int v18; // [rsp+Ch] [rbp-3Ch]

  if ( a1[1] <= 1u )
  {
    return 0;
  }
  else
  {
    v6 = a3;
    v18 = 0;
    do
    {
      v7 = *a1;
      v8 = *a1;
      if ( !*(_QWORD *)(*a1 + 32LL) )
        break;
      v10 = *(_BYTE **)(v7 + 24);
      if ( *v10 != 45 )
        break;
      v11 = v10[1];
      v12 = v10 + 1;
      v13 = 0;
      if ( v11 )
      {
        while ( 1 )
        {
          v14 = 0;
          while ( 1 )
          {
            v15 = v14;
            if ( *(_BYTE *)(a2 + 8 * v14 + 4) == v11 )
              break;
            if ( v6 == ++v14 )
            {
              LODWORD(v14) = v15 + 1;
              break;
            }
          }
          if ( a3 == (_DWORD)v14 )
            return v18;
          v11 = *++v12;
          v13 |= *(_DWORD *)(a2 + 8LL * (int)v14);
          if ( !v11 )
          {
            v18 |= v13;
            break;
          }
        }
      }
      v16 = (void *)(v7 + 24);
      if ( v10 )
      {
        *(_QWORD *)(v7 + 32) = 0;
        j__free(v10);
        v7 = *a1;
      }
      memmove(v16, (const void *)(v8 + 48), v7 + 24LL * a1[1] - (_QWORD)v16 - 24);
      v17 = a1[1] - 1LL;
      a1[1] = v17;
    }
    while ( v17 > 1 );
  }
  return v18;
}

