__int64 __fastcall sub_20F1990(__int64 *a1, __int64 a2)
{
  int v2; // r11d
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // r10
  unsigned __int64 v7; // r9
  __int64 result; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  int *v12; // rcx
  _DWORD *v13; // rdx
  int *v14; // rdi
  _DWORD *v15; // r8
  int v16; // esi
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // rsi
  int v22; // ecx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r8

  v2 = *((_DWORD *)a1 + 16);
  if ( v2 )
  {
    v4 = 0;
    v5 = (unsigned int)(v2 - 1) >> 6;
    v6 = *a1;
    v7 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v2;
    while ( 1 )
    {
      _RSI = *(_QWORD *)(v6 + 8 * v4);
      if ( v5 == (_DWORD)v4 )
        _RSI = v7 & *(_QWORD *)(v6 + 8 * v4);
      if ( _RSI )
        break;
      if ( (unsigned int)(v2 - 1) >> 6 == v4 )
        goto LABEL_8;
      ++v4;
    }
    __asm { tzcnt   rsi, rsi }
    v18 = _RSI + ((_DWORD)v4 << 6);
    if ( v18 != -1 )
    {
      if ( ((1LL << v18) & *(_QWORD *)(*(_QWORD *)a2 + 8LL * (v18 >> 6))) == 0 )
        return 0;
      while ( 1 )
      {
        v19 = v18 + 1;
        if ( v2 == v19 )
          break;
        v20 = v19 >> 6;
        if ( v5 < v19 >> 6 )
          break;
        v21 = v20;
        v22 = 64 - (v19 & 0x3F);
        v23 = 0xFFFFFFFFFFFFFFFFLL >> v22;
        if ( v22 == 64 )
          v23 = 0;
        v24 = ~v23;
        while ( 1 )
        {
          _RAX = *(_QWORD *)(v6 + 8 * v21);
          if ( v20 == (_DWORD)v21 )
            _RAX = v24 & *(_QWORD *)(v6 + 8 * v21);
          if ( v5 == (_DWORD)v21 )
            _RAX &= v7;
          if ( _RAX )
            break;
          if ( v5 < (unsigned int)++v21 )
            goto LABEL_8;
        }
        __asm { tzcnt   rax, rax }
        v18 = _RAX + ((_DWORD)v21 << 6);
        if ( v18 == -1 )
          break;
        if ( ((1LL << v18) & *(_QWORD *)(*(_QWORD *)a2 + 8LL * (v18 >> 6))) == 0 )
          return 0;
      }
    }
  }
LABEL_8:
  result = 0;
  v10 = *(unsigned int *)(a2 + 224);
  v11 = *((unsigned int *)a1 + 56);
  if ( v10 >= v11 )
  {
    v12 = (int *)a1[27];
    v13 = *(_DWORD **)(a2 + 216);
    v14 = &v12[v11];
    v15 = &v13[v10];
    if ( v12 != v14 )
    {
      if ( v13 == v15 )
        return result;
      while ( 1 )
      {
        v16 = *v12++;
        if ( v16 == *v13 )
          ++v13;
        if ( v14 == v12 )
          break;
        if ( v15 == v13 )
          return 0;
      }
    }
    return 1;
  }
  return result;
}
