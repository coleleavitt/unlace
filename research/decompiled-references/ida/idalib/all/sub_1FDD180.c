_QWORD *__fastcall sub_1FDD180(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rsi

  v2 = *(_QWORD *)(a2 + 280);
  if ( v2 )
  {
    *(_QWORD *)(a2 + 280) = 0;
    v3 = *(_QWORD *)(v2 + 88);
    *(_QWORD *)(v2 + 88) = 0;
    *(_QWORD *)(a2 + 280) = v3;
    *a1 = v2;
    return a1;
  }
  else
  {
    v5 = *(unsigned int *)(a2 + 8);
    v6 = operator new(0x60u);
    *(_QWORD *)v6 = v6 + 16;
    v7 = v6 + 64;
    *(_QWORD *)(v6 + 8) = 0x400000000LL;
    *(_QWORD *)(v6 + 48) = v6 + 64;
    *(_QWORD *)(v6 + 56) = 0x400000000LL;
    if ( v5 > 4 )
    {
      sub_2237220(v6 + 48, v7, v5, 4);
      memset(*(void **)(v6 + 48), 0, 4 * v5);
      *(_DWORD *)(v6 + 56) = v5;
      v8 = *(unsigned int *)(v6 + 12);
    }
    else
    {
      v8 = 4;
      if ( v5 )
      {
        v9 = 4 * v5;
        if ( (unsigned int)(4 * v5) >= 8 )
        {
          *(_QWORD *)(v6 + 64) = 0;
          *(_QWORD *)(v7 + v9 - 8) = 0;
          v10 = (v6 + 72) & 0xFFFFFFFFFFFFFFF8LL;
          v11 = (v7 - v10 + v9) & 0xFFFFFFF8;
          if ( v11 >= 8 )
          {
            v12 = v11 & 0xFFFFFFF8;
            v13 = 0;
            do
            {
              v14 = v13;
              v13 += 8;
              *(_QWORD *)(v10 + v14) = 0;
            }
            while ( v13 < v12 );
          }
        }
        else if ( (v9 & 4) != 0 )
        {
          *(_DWORD *)(v6 + 64) = 0;
          *(_DWORD *)(v7 + v9 - 4) = 0;
        }
        else if ( v9 )
        {
          *(_BYTE *)(v6 + 64) = 0;
        }
        v8 = *(unsigned int *)(v6 + 12);
      }
      *(_DWORD *)(v6 + 56) = v5;
    }
    *(_DWORD *)(v6 + 80) = 1;
    *(_QWORD *)(v6 + 88) = 0;
    if ( v5 > v8 )
      sub_2237220(v6, v6 + 16, v5, 8);
    *a1 = v6;
    return a1;
  }
}
