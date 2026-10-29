__int64 *__fastcall sub_E32260(__int64 *a1, __int64 *a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  int v6; // r12d
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi

  if ( a1 != a2 )
  {
    v3 = *((unsigned int *)a2 + 2);
    v4 = *((unsigned int *)a1 + 2);
    v6 = *((_DWORD *)a2 + 2);
    if ( v3 <= v4 )
    {
      if ( *((_DWORD *)a2 + 2) )
      {
        v12 = *a1;
        v13 = *a2;
        v14 = 0;
        do
        {
          *(_QWORD *)(v12 + v14) = *(_QWORD *)(v13 + v14);
          *(_BYTE *)(v12 + v14 + 8) = *(_BYTE *)(v13 + v14 + 8);
          v14 += 12;
        }
        while ( 12 * v3 != v14 );
      }
    }
    else
    {
      if ( v3 > *((unsigned int *)a1 + 3) )
      {
        *((_DWORD *)a1 + 2) = 0;
        sub_2237220(a1, a1 + 2, v3, 12);
        v7 = *a1;
        v8 = *a2;
        v9 = 0;
        v3 = *((unsigned int *)a2 + 2);
        v4 = 0;
      }
      else
      {
        v7 = *a1;
        v8 = *a2;
        v9 = 0;
        if ( v4 )
        {
          v15 = 0;
          v16 = 12 * v4;
          v4 = v16;
          v9 = v16;
          do
          {
            *(_QWORD *)(v7 + v15) = *(_QWORD *)(v8 + v15);
            *(_BYTE *)(v7 + v15 + 8) = *(_BYTE *)(v8 + v15 + 8);
            v15 += 12;
          }
          while ( v16 != v15 );
          v3 = *((unsigned int *)a2 + 2);
        }
      }
      v10 = 12 * v3;
      if ( v8 + v4 != v10 + v8 )
        memcpy((void *)(v4 + v7), (const void *)(v8 + v4), v10 - v9);
    }
    *((_DWORD *)a1 + 2) = v6;
  }
  return a1;
}
