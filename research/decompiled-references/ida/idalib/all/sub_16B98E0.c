unsigned __int64 __fastcall sub_16B98E0(unsigned __int64 *a1, unsigned int a2)
{
  unsigned int v2; // r12d
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbp
  unsigned __int64 result; // rax
  _QWORD *v6; // rax
  unsigned int v7; // r13d
  unsigned __int64 *v8; // r8
  _QWORD *v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  int v17; // ecx
  unsigned int v18; // ebx
  int v19; // r12d
  unsigned __int64 v20; // r13
  unsigned __int64 *v21; // rax

  v2 = a2;
  v3 = *a1;
  if ( (*a1 & 1) != 0 )
  {
    if ( a2 > 0x39 )
    {
      v6 = (_QWORD *)operator new(0x48u);
      v7 = (a2 + 63) >> 6;
      v8 = v6 + 2;
      v9 = v6;
      *v6 = v6 + 2;
      v6[1] = 0x600000000LL;
      if ( v7 > 6 )
      {
        sub_2237220(v6, v8, v7, 8);
        v21 = (unsigned __int64 *)memset((void *)*v9, 0, 8LL * v7);
        *((_DWORD *)v9 + 2) = v7;
        v8 = v21;
      }
      else
      {
        if ( v7 )
        {
          v6[2] = 0;
          v10 = (unsigned __int64)(v6 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v8[v7 - 1] = 0;
          if ( (((_DWORD)v8 - (_DWORD)v10 + 8 * v7) & 0xFFFFFFF8) >= 8 )
          {
            v11 = 0;
            do
            {
              v12 = v11;
              v11 += 8;
              *(_QWORD *)(v10 + v12) = 0;
            }
            while ( v11 < (((_DWORD)v8 - (_DWORD)v10 + 8 * v7) & 0xFFFFFFF8) );
          }
        }
        *((_DWORD *)v6 + 2) = v7;
      }
      v13 = *a1;
      *((_DWORD *)v9 + 16) = v2;
      result = -1LL << (v13 >> 58);
      if ( v13 >> 58 )
      {
        result = *v8;
        v14 = 0;
        do
        {
          v15 = (1LL << v14) | result;
          result &= ~(1LL << v14);
          if ( ((((v13 >> 1) & ~(-1LL << (v13 >> 58))) >> v14) & 1) != 0 )
            result = v15;
          ++v14;
        }
        while ( v13 >> 58 != v14 );
        *v8 = result;
      }
      *a1 = (unsigned __int64)v9;
    }
    else
    {
      v4 = ((unsigned __int64)a2 << 57) | ~(-1LL << (v3 >> 58)) & (v3 >> 1);
      result = 2 * (((2 * v4) >> 58 << 57) | v4 & ~(-1LL << ((2 * v4) >> 58))) + 1;
      *a1 = result;
    }
  }
  else
  {
    result = *(unsigned int *)(v3 + 8);
    v16 = result;
    v17 = *(_DWORD *)(v3 + 64) & 0x3F;
    if ( v17 )
      *(_QWORD *)(*(_QWORD *)v3 + 8 * result - 8) &= ~(-1LL << v17);
    *(_DWORD *)(v3 + 64) = v2;
    v18 = (v2 + 63) >> 6;
    if ( v18 != result )
    {
      if ( v18 >= result )
      {
        v20 = v18 - result;
        if ( v18 > (unsigned __int64)*(unsigned int *)(v3 + 12) )
        {
          sub_2237220(v3, v3 + 16, v18, 8);
          result = *(unsigned int *)(v3 + 8);
          v2 = *(_DWORD *)(v3 + 64);
          v18 = v20 + result;
        }
        if ( v20 )
          result = (unsigned __int64)memset((void *)(*(_QWORD *)v3 + 8 * result), 0, 8 * v20);
      }
      *(_DWORD *)(v3 + 8) = v18;
      v16 = v18;
    }
    v19 = v2 & 0x3F;
    if ( v19 )
      *(_QWORD *)(*(_QWORD *)v3 + 8 * v16 - 8) &= ~(-1LL << v19);
  }
  return result;
}
