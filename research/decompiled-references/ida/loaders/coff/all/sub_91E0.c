_BYTE *__fastcall sub_91E0(_QWORD *a1, unsigned int a2, _BYTE *a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // r8

  if ( a4 <= 0 || (unsigned __int64)a2 >= a1[8] )
    return nullptr;
  v5 = a1[7] + 24LL * a2;
  if ( *(_DWORD *)v5 )
  {
    v7 = a4 - 1;
    if ( (unsigned __int64)(a4 - 1) > 8 )
      v7 = 8;
    if ( (unsigned int)v7 >= 8 )
    {
      *(_QWORD *)a3 = *(_QWORD *)v5;
      *(_QWORD *)&a3[(unsigned int)v7 - 8] = *(_QWORD *)(v5 + (unsigned int)v7 - 8);
      v8 = (unsigned __int64)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v9 = v5 - (_QWORD)&a3[-v8];
      if ( (((_DWORD)v7 + (_DWORD)a3 - (_DWORD)v8) & 0xFFFFFFF8) >= 8 )
      {
        v10 = 0;
        do
        {
          v11 = v10;
          v10 += 8;
          *(_QWORD *)(v8 + v11) = *(_QWORD *)(v9 + v11);
        }
        while ( v10 < (((_DWORD)v7 + (_DWORD)a3 - (_DWORD)v8) & 0xFFFFFFF8) );
      }
    }
    else if ( (v7 & 4) != 0 )
    {
      *(_DWORD *)a3 = *(_DWORD *)v5;
      *(_DWORD *)&a3[(unsigned int)v7 - 4] = *(_DWORD *)(v5 + (unsigned int)v7 - 4);
    }
    else if ( (_DWORD)v7 )
    {
      *a3 = *(_BYTE *)v5;
      if ( (v7 & 2) != 0 )
        *(_WORD *)&a3[(unsigned int)v7 - 2] = *(_WORD *)(v5 + (unsigned int)v7 - 2);
    }
    a3[v7] = 0;
    return a3;
  }
  else
  {
    sub_9030(a1, a3, a4, *(_DWORD *)(v5 + 4), 0);
    return a3;
  }
}

