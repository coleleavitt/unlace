void __fastcall CoinModelLinkedList::fill(CoinModelLinkedList *this, int a2, int a3)
{
  __int64 v3; // r11
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // r9d
  unsigned __int64 v8; // r10
  __int64 v9; // rax
  int v10; // r11d
  __int64 v11; // rsi
  unsigned int v12; // ecx
  int v13; // ebp
  unsigned int v14; // r10d
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // esi
  __int64 v23; // rax
  __int64 v24; // rdx

  if ( a2 >= a3 )
    return;
  v3 = a2;
  v4 = *((_QWORD *)this + 2);
  v5 = *((_QWORD *)this + 3);
  v6 = 4LL * a2;
  v7 = a3 - a2;
  v8 = v4 + v6;
  if ( v4 + v6 < (unsigned __int64)(v5 + v6 + 16) && v5 + v6 < (unsigned __int64)(v4 + v6 + 16) || v7 <= 0xE )
  {
    v23 = 0;
    v24 = 4LL * (unsigned int)(a3 - 1 - a2) + 4;
    do
    {
      *(_DWORD *)(v8 + v23) = -1;
      *(_DWORD *)(v5 + v6 + v23) = -1;
      v23 += 4;
    }
    while ( v23 != v24 );
    return;
  }
  v9 = -(int)(v8 >> 2) & 3;
  if ( a3 - 1 - a2 < (unsigned int)(v9 + 3) )
    goto LABEL_13;
  v10 = a2;
  if ( (_DWORD)v9 )
  {
    v10 = a2 + 1;
    *(_DWORD *)v8 = -1;
    *(_DWORD *)(v5 + 4LL * a2) = -1;
    if ( (_DWORD)v9 != 1 )
    {
      *(_DWORD *)(v4 + 4LL * v10) = -1;
      *(_DWORD *)(v5 + 4LL * v10) = -1;
      v10 = a2 + 2;
      if ( (_DWORD)v9 != 2 )
      {
        *(_DWORD *)(v4 + 4LL * v10) = -1;
        *(_DWORD *)(v5 + 4LL * v10) = -1;
        v10 = a2 + 3;
      }
    }
  }
  v11 = v6 + 4 * v9;
  v12 = 0;
  v13 = v7 - v9;
  v14 = (v7 - (unsigned int)v9) >> 2;
  v15 = v4 + v11;
  v16 = 0;
  v17 = v5 + v11;
  do
  {
    ++v12;
    *(_OWORD *)(v15 + v16) = -1;
    *(_OWORD *)(v17 + v16) = -1;
    v16 += 16;
  }
  while ( v14 > v12 );
  a2 = (v13 & 0xFFFFFFFC) + v10;
  if ( v13 != (v13 & 0xFFFFFFFC) )
  {
    v3 = a2;
LABEL_13:
    v18 = a2 + 1;
    *(_DWORD *)(v4 + 4 * v3) = -1;
    *(_DWORD *)(v5 + 4 * v3) = -1;
    if ( a3 > a2 + 1 )
    {
      *(_DWORD *)(v4 + 4LL * v18) = -1;
      *(_DWORD *)(v5 + 4LL * v18) = -1;
      v19 = a2 + 2;
      if ( a3 > a2 + 2 )
      {
        *(_DWORD *)(v4 + 4LL * v19) = -1;
        *(_DWORD *)(v5 + 4LL * v19) = -1;
        v20 = a2 + 3;
        if ( a3 > a2 + 3 )
        {
          *(_DWORD *)(v4 + 4LL * v20) = -1;
          *(_DWORD *)(v5 + 4LL * v20) = -1;
          v21 = a2 + 4;
          if ( a3 > a2 + 4 )
          {
            v22 = a2 + 5;
            *(_DWORD *)(v4 + 4LL * v21) = -1;
            *(_DWORD *)(v5 + 4LL * v21) = -1;
            if ( a3 > v22 )
            {
              *(_DWORD *)(v4 + 4LL * v22) = -1;
              *(_DWORD *)(v5 + 4LL * v22) = -1;
            }
          }
        }
      }
    }
  }
}

