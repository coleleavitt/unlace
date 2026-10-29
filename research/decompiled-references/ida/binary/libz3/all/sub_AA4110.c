void __fastcall sub_AA4110(unsigned int *a1, __int64 a2)
{
  char v2; // cl
  __int64 v4; // r12
  __int64 v6; // r12
  __int64 v7; // rbp
  unsigned int *v8; // r13
  int v9; // r8d
  __int64 v10; // rdi
  unsigned int *v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // r9d
  unsigned int *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r11
  char v17; // r10
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rsi

  v2 = *((_BYTE *)a1 + 7);
  if ( (v2 & 8) != 0 )
  {
    v4 = *a1;
    if ( (_DWORD)v4 )
    {
      v6 = 8 * v4;
      v7 = 0;
      v8 = a1 + 2;
      v9 = v2 & 3;
      v10 = a1[1] & 0xFFFFFF;
      do
      {
        v11 = &v8[v10];
        v13 = v9 - 2;
        v14 = v11 + 1;
        if ( (unsigned int)(v9 - 2) >= 2 )
          v14 = &v8[v10];
        v15 = ((unsigned __int64)v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v16 = v2 & 0x20;
        if ( (v2 & 0x20) != 0 )
          v15 += 8LL;
        v17 = v2 & 0x40;
        if ( (v2 & 0x40) != 0 )
          v15 += 8LL;
        v18 = *(_QWORD *)(v15 + v7);
        if ( v18 > 7 )
        {
          v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_DWORD *)(v19 + 8))-- == 1 )
          {
            sub_15D7BC0(a2, v19);
            v2 = *((_BYTE *)a1 + 7);
            v10 = a1[1] & 0xFFFFFF;
            v9 = v2 & 3;
            v11 = &v8[v10];
            v16 = v2 & 0x20;
            v17 = v2 & 0x40;
            v13 = v9 - 2;
          }
        }
        if ( v13 < 2 )
          ++v11;
        v12 = ((unsigned __int64)v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v16 )
          v12 += 8LL;
        if ( v17 )
          v12 += 8LL;
        *(_QWORD *)(v12 + v7) = 0;
        v7 += 8;
      }
      while ( v6 != v7 );
    }
  }
}

