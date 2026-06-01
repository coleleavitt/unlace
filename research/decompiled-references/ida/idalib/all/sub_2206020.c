void __fastcall sub_2206020(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r13
  char v10; // si
  unsigned int v11; // esi
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  const void *v17; // rsi
  __int64 v18; // r13
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // eax

  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    if ( v4 == v3 )
    {
      if ( v4 > 0x40 )
      {
        if ( a2 == a1 )
          return;
        sub_2205620(a1, v3);
        v21 = *(_DWORD *)(a1 + 8);
        if ( v21 > 0x40 )
        {
          memcpy(*(void **)a1, *(const void **)a2, 8 * (((unsigned __int64)v21 + 63) >> 6));
          return;
        }
      }
      *(_QWORD *)a1 = *(_QWORD *)a2;
      return;
    }
    v7 = *(_QWORD *)a1;
    if ( v4 <= 0x40 )
    {
      v14 = ~(0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v3) << a3) & v7;
      *(_QWORD *)a1 = v14;
      *(_QWORD *)a1 = (*(_QWORD *)a2 << a3) | v14;
    }
    else
    {
      v8 = a3 >> 6;
      v9 = (v3 + a3 - 1) >> 6;
      v10 = a3 & 0x3F;
      if ( (_DWORD)v8 == (_DWORD)v9 )
      {
        v20 = 8 * v8;
        *(_QWORD *)(v7 + v20) &= ~(0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v3) << v10);
        *(_QWORD *)(*(_QWORD *)a1 + v20) |= *(_QWORD *)a2 << v10;
      }
      else if ( (a3 & 0x3F) != 0 )
      {
        v11 = 0;
        if ( v3 > 0x40 )
        {
          while ( 1 )
          {
            v12 = 1LL << ((unsigned __int8)a3 + (unsigned __int8)v11);
            v13 = (a3 + v11) >> 6;
            if ( ((1LL << v11) & *(_QWORD *)(*(_QWORD *)a2 + 8LL * (v11 >> 6))) != 0 )
            {
              ++v11;
              *(_QWORD *)(v7 + 8 * v13) |= v12;
              if ( v11 == v3 )
                return;
            }
            else
            {
              ++v11;
              *(_QWORD *)(v7 + 8 * v13) &= ~v12;
              if ( v11 == v3 )
                return;
            }
            v7 = *(_QWORD *)a1;
          }
        }
        while ( 1 )
        {
          v15 = (a3 + v11) >> 6;
          v16 = 1LL << ((unsigned __int8)a3 + (unsigned __int8)v11);
          if ( ((1LL << v11) & *(_QWORD *)a2) != 0 )
            *(_QWORD *)(v7 + 8 * v15) |= v16;
          else
            *(_QWORD *)(v7 + 8 * v15) &= ~v16;
          if ( ++v11 == v3 )
            break;
          v7 = *(_QWORD *)a1;
        }
      }
      else
      {
        v17 = (const void *)a2;
        if ( v3 > 0x40 )
          v17 = *(const void **)a2;
        memcpy((void *)(v7 + 8 * v8), v17, 8 * (v3 >> 6));
        if ( (v3 & 0x3F) != 0 )
        {
          v18 = 8 * v9;
          *(_QWORD *)(v18 + *(_QWORD *)a1) &= ~(0xFFFFFFFFFFFFFFFFLL >> (64 - (v3 & 0x3F)));
          if ( *(_DWORD *)(a2 + 8) <= 0x40u )
            v19 = *(_QWORD *)a2;
          else
            v19 = *(_QWORD *)(*(_QWORD *)a2 + 8LL * ((v3 - 1) >> 6));
          *(_QWORD *)(*(_QWORD *)a1 + v18) |= v19;
        }
      }
    }
  }
}
