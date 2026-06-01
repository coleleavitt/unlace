/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001E9B0
// Address: 0x000000010001E9B0

//----- (000000010001E9B0) ----------------------------------------------------
__int64 __fastcall sub_10001E9B0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  _DWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  char *v10; // rdx
  char *v11; // rdx
  unsigned __int64 v13; // r15
  void *v14; // rax
  unsigned __int64 v15; // r8
  _DWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  char *v20; // r8
  char *v21; // r8
  __int64 v22; // [rsp+0h] [rbp-30h]
  int v23; // [rsp+8h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 <= a2 )
  {
    if ( v3 >= a2 )
      return __stack_chk_guard;
    v4 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)a1 <= a3 && *(_QWORD *)a1 + 12 * v4 > a3 )
    {
      v23 = *(_DWORD *)(a3 + 8);
      v22 = *(_QWORD *)a3;
      if ( v4 < a2 )
      {
        *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0xCu);
        v3 = *(_QWORD *)(a1 + 8);
      }
      if ( a2 > v3 )
      {
        v5 = v3;
        if ( (((_BYTE)a2 - (_BYTE)v3) & 1) != 0 )
        {
          v6 = *(_DWORD **)a1;
          v7 = 3 * v3;
          v6[v7 + 2] = v23;
          *(_QWORD *)&v6[v7] = v22;
          v5 = v3 + 1;
        }
        if ( v3 != a2 - 1 )
        {
          v8 = 12 * v5;
          v9 = a2 - v5;
          do
          {
            v10 = *(char **)a1;
            *(_DWORD *)&v10[v8 + 8] = v23;
            *(_QWORD *)&v10[v8] = v22;
            v11 = *(char **)a1;
            *(_DWORD *)&v11[v8 + 20] = v23;
            *(_QWORD *)&v11[v8 + 12] = v22;
            v8 += 24;
            v9 -= 2LL;
          }
          while ( v9 );
        }
      }
    }
    else
    {
      if ( v4 < a2 )
      {
        v13 = a3;
        v14 = qvector_reserve(a1, *(void **)a1, a2, 0xCu);
        a3 = v13;
        *(_QWORD *)a1 = v14;
        v3 = *(_QWORD *)(a1 + 8);
      }
      if ( a2 > v3 )
      {
        v15 = v3;
        if ( (((_BYTE)a2 - (_BYTE)v3) & 1) != 0 )
        {
          v16 = *(_DWORD **)a1;
          v17 = 3 * v3;
          v16[v17 + 2] = *(_DWORD *)(a3 + 8);
          *(_QWORD *)&v16[v17] = *(_QWORD *)a3;
          v15 = v3 + 1;
        }
        if ( v3 != a2 - 1 )
        {
          v18 = 12 * v15;
          v19 = a2 - v15;
          do
          {
            v20 = *(char **)a1;
            *(_DWORD *)&v20[v18 + 8] = *(_DWORD *)(a3 + 8);
            *(_QWORD *)&v20[v18] = *(_QWORD *)a3;
            v21 = *(char **)a1;
            *(_DWORD *)&v21[v18 + 20] = *(_DWORD *)(a3 + 8);
            *(_QWORD *)&v21[v18 + 12] = *(_QWORD *)a3;
            v18 += 24;
            v19 -= 2LL;
          }
          while ( v19 );
        }
      }
    }
  }
  *(_QWORD *)(a1 + 8) = a2;
  return __stack_chk_guard;
}
