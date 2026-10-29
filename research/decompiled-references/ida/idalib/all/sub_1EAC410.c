__int64 __fastcall sub_1EAC410(__int64 a1, __int64 **a2, char *a3)
{
  __int64 *v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r15
  unsigned int v7; // r13d
  unsigned int v8; // eax
  unsigned int v9; // ecx
  int v10; // esi
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rsi

  v4 = *a2;
  v5 = a1 + 16;
  v6 = *v4;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x600000000LL;
  v7 = (unsigned int)(v6 + 63) >> 6;
  if ( v7 > 6 )
  {
    sub_2237220(a1, v5, v7, 8);
    memset(*(void **)a1, 0, 8LL * v7);
    *(_DWORD *)(a1 + 8) = v7;
  }
  else
  {
    if ( v7 )
    {
      v12 = 8LL * v7;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(v5 + v12 - 8) = 0;
      v13 = (a1 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (((_DWORD)v12 + (_DWORD)v5 - (_DWORD)v13) & 0xFFFFFFF8) >= 8 )
      {
        v14 = (v12 + v5 - v13) & 0xFFFFFFF8;
        v15 = 0;
        do
        {
          v16 = v15;
          v15 += 8;
          *(_QWORD *)(v13 + v16) = 0;
        }
        while ( v15 < v14 );
      }
    }
    *(_DWORD *)(a1 + 8) = v7;
  }
  *(_DWORD *)(a1 + 64) = v6;
  v8 = 0;
  v9 = 0;
  if ( (_DWORD)v6 )
  {
    while ( 1 )
    {
      do
      {
        v10 = *a3;
        if ( _bittest(&v10, v8) )
          *(_QWORD *)(*(_QWORD *)a1 + 8LL * (v9 >> 6)) |= 1LL << v9;
        ++v8;
        ++v9;
      }
      while ( v8 <= 7 && (unsigned int)v6 > v9 );
      if ( (unsigned int)v6 <= v9 )
        break;
      ++a3;
      v8 = 0;
    }
  }
  return a1;
}
