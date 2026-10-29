void __fastcall sub_20A0A20(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // eax
  __int64 v3; // rsi
  int v4; // edx
  unsigned int v5; // eax
  __int64 v6; // r12
  _QWORD *v7; // r13
  _QWORD *v8; // r11
  _QWORD *v9; // rsi
  int v10; // ecx

  v1 = *(_QWORD *)sub_20CB0D0(a1);
  v2 = *(_DWORD *)(v1 + 2728);
  v3 = *(_QWORD *)(v1 + 2712);
  if ( v2 )
  {
    v4 = v2 - 1;
    v5 = (v2 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
    v6 = v3 + 40LL * v5;
    if ( a1 != *(_QWORD *)v6 )
    {
      if ( *(_QWORD *)v6 == -4096 )
        goto LABEL_10;
      v10 = 1;
      while ( 1 )
      {
        v5 = v4 & (v10 + v5);
        v6 = v3 + 40LL * v5;
        if ( a1 == *(_QWORD *)v6 )
          break;
        ++v10;
        if ( *(_QWORD *)v6 == -4096 )
          goto LABEL_10;
      }
    }
    v7 = *(_QWORD **)(v6 + 8);
    v8 = &v7[2 * *(unsigned int *)(v6 + 16)];
    if ( v7 != v8 )
    {
      do
      {
        while ( 1 )
        {
          v8 -= 2;
          v9 = (_QWORD *)v8[1];
          if ( !v9 )
            break;
          sub_20A0850((__int64)(v8 + 1), v9);
          if ( v7 == v8 )
            goto LABEL_6;
        }
      }
      while ( v7 != v8 );
LABEL_6:
      v8 = *(_QWORD **)(v6 + 8);
    }
    if ( v8 != (_QWORD *)(v6 + 24) )
      free(v8);
    *(_QWORD *)v6 = -8192;
    --*(_DWORD *)(v1 + 2720);
    ++*(_DWORD *)(v1 + 2724);
  }
LABEL_10:
  *(_BYTE *)(a1 + 7) &= ~0x20u;
}
