char __fastcall sub_5BFF30(_QWORD *a1, __int64 a2, char a3, char a4)
{
  __int64 v8; // rax
  __int64 v9; // r8
  bool v10; // zf
  unsigned int v11; // ebx
  int v12; // edx
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rsi
  unsigned int v17; // ebx
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // r14d
  __int64 v24; // rbp
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v29; // [rsp+0h] [rbp-48h]
  __int64 v30; // [rsp+0h] [rbp-48h]
  __int64 v31; // [rsp+0h] [rbp-48h]

  v8 = (__int64)sub_5BCCC0((__int64)a1, *(_QWORD *)(a2 + 16));
  if ( *(_DWORD *)(a2 + 24) )
  {
    v9 = v8;
    if ( a4 )
    {
      v16 = *(_QWORD *)(v8 + 8);
      v17 = 0;
      do
      {
        LODWORD(v8) = 1 << v17;
        v18 = v17 >> 5;
        *(_DWORD *)(v16 + 4 * v18) &= ~(1 << v17);
        v19 = *(_QWORD *)(a2 + 8LL * v17 + 32);
        if ( *(_WORD *)(v19 + 4) == 1 )
        {
          v20 = *(unsigned int *)(v19 + 16);
          v21 = a1[6];
          if ( !v21 || (unsigned int)v20 >= *(_DWORD *)(v21 - 4) )
          {
            v30 = v9;
            sub_5BF460(a1, v20);
            v9 = v30;
            LODWORD(v8) = 1 << v17;
            v16 = *(_QWORD *)(v30 + 8);
          }
          if ( a3 )
            v22 = a1[7];
          else
            v22 = a1[6];
          *(_BYTE *)(v22 + v20) = 1;
          LOBYTE(v8) = (*(_DWORD *)(v16 + 4 * v18) & (unsigned int)v8) != 0;
          *(_BYTE *)(a1[10] + v20) &= v8;
        }
        ++v17;
      }
      while ( v17 < *(_DWORD *)(a2 + 24) );
    }
    else
    {
      v10 = a3 == 0;
      v11 = 0;
      if ( v10 )
      {
        do
        {
          while ( 1 )
          {
            v12 = 1 << v11;
            v13 = v11 >> 5;
            v14 = *(_QWORD *)(a2 + 8LL * v11 + 32);
            if ( *(_WORD *)(v14 + 4) == 1 )
              break;
            v8 = *(_QWORD *)(v9 + 8) + 4 * v13;
            ++v11;
            *(_DWORD *)v8 &= ~v12;
            if ( v11 >= *(_DWORD *)(a2 + 24) )
              return v8;
          }
          v8 = a1[6];
          v15 = *(unsigned int *)(v14 + 16);
          if ( !v8 || (unsigned int)v15 >= *(_DWORD *)(v8 - 4) )
          {
            v29 = v9;
            sub_5BF460(a1, v15);
            v8 = a1[6];
            v9 = v29;
            v12 = 1 << v11;
          }
          *(_BYTE *)(v8 + v15) = 1;
          LOBYTE(v8) = (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 4 * v13) & v12) != 0;
          ++v11;
          *(_BYTE *)(a1[10] + v15) &= v8;
        }
        while ( v11 < *(_DWORD *)(a2 + 24) );
      }
      else
      {
        do
        {
          v23 = 1 << v11;
          v24 = v11 >> 5;
          v25 = *(_QWORD *)(a2 + 8LL * v11 + 32);
          if ( *(_WORD *)(v25 + 4) == 1 )
          {
            v26 = a1[6];
            v27 = *(unsigned int *)(v25 + 16);
            if ( !v26 || (unsigned int)v27 >= *(_DWORD *)(v26 - 4) )
            {
              v31 = v9;
              sub_5BF460(a1, v27);
              v9 = v31;
            }
            *(_BYTE *)(a1[7] + v27) = 1;
            LOBYTE(v8) = (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 4 * v24) & v23) != 0;
            *(_BYTE *)(a1[10] + v27) &= v8;
          }
          else
          {
            v8 = *(_QWORD *)(v9 + 8) + 4 * v24;
            *(_DWORD *)v8 &= ~v23;
          }
          ++v11;
        }
        while ( v11 < *(_DWORD *)(a2 + 24) );
      }
    }
  }
  return v8;
}

