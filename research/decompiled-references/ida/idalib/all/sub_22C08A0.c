__int64 __fastcall sub_22C08A0(__int64 a1, __int64 **a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  int v6; // ebp
  __int64 *v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // esi
  __int64 *v17; // r8
  __int64 v18; // rsi
  int v19; // edx

  if ( (__int64 **)a1 != a2 )
  {
    v3 = *((unsigned int *)a2 + 2);
    v4 = *(unsigned int *)(a1 + 8);
    v6 = *((_DWORD *)a2 + 2);
    if ( v3 <= v4 )
    {
      if ( *((_DWORD *)a2 + 2) )
      {
        v12 = *(_QWORD *)a1;
        v13 = *a2;
        v14 = *(_QWORD *)a1 + 16 * v3;
        do
        {
          v15 = *v13;
          v16 = *((_DWORD *)v13 + 2);
          v12 += 16;
          v13 += 2;
          *(_QWORD *)(v12 - 16) = v15;
          *(_DWORD *)(v12 - 8) = v16;
        }
        while ( v12 != v14 );
      }
    }
    else
    {
      if ( v3 > *(unsigned int *)(a1 + 12) )
      {
        *(_DWORD *)(a1 + 8) = 0;
        sub_2237220(a1, (const void *)(a1 + 16), v3, 16);
        v3 = *((unsigned int *)a2 + 2);
        v8 = *(_QWORD *)a1;
        v9 = 0;
        v7 = *a2;
        v4 = 0;
      }
      else
      {
        v7 = *a2;
        v8 = *(_QWORD *)a1;
        v9 = 0;
        if ( v4 )
        {
          v4 *= 16LL;
          v9 = v4;
          v17 = (__int64 *)((char *)v7 + v4);
          do
          {
            v18 = *v7;
            v19 = *((_DWORD *)v7 + 2);
            v7 += 2;
            v8 += 16;
            *(_QWORD *)(v8 - 16) = v18;
            *(_DWORD *)(v8 - 8) = v19;
          }
          while ( v7 != v17 );
          v3 = *((unsigned int *)a2 + 2);
          v8 = *(_QWORD *)a1;
          v7 = *a2;
        }
      }
      v10 = 2 * v3;
      if ( (__int64 *)((char *)v7 + v4) != &v7[v10] )
        memcpy((void *)(v4 + v8), (char *)v7 + v4, v10 * 8 - v9);
    }
    *(_DWORD *)(a1 + 8) = v6;
  }
  return a1;
}
