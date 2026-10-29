/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D830
// Address: 0x000000010001D830

//----- (000000010001D830) ----------------------------------------------------
__int64 __fastcall sub_10001D830(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
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
  __int128 v22; // [rsp+0h] [rbp-40h]
  int v23; // [rsp+10h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 <= a2 )
  {
    if ( v3 >= a2 )
      return __stack_chk_guard;
    v4 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)a1 <= a3 && *(_QWORD *)a1 + 20 * v4 > a3 )
    {
      v23 = *(_DWORD *)(a3 + 16);
      v22 = *(_OWORD *)a3;
      if ( v4 < a2 )
      {
        *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x14u);
        v3 = *(_QWORD *)(a1 + 8);
      }
      if ( a2 > v3 )
      {
        v5 = v3;
        if ( (((_BYTE)a2 - (_BYTE)v3) & 1) != 0 )
        {
          v6 = *(_DWORD **)a1;
          v7 = 5 * v3;
          v6[v7 + 4] = v23;
          *(_OWORD *)&v6[v7] = v22;
          v5 = v3 + 1;
        }
        if ( v3 != a2 - 1 )
        {
          v8 = 20 * v5;
          v9 = a2 - v5;
          do
          {
            v10 = *(char **)a1;
            *(_DWORD *)&v10[v8 + 16] = v23;
            *(_OWORD *)&v10[v8] = v22;
            v11 = *(char **)a1;
            *(_DWORD *)&v11[v8 + 36] = v23;
            *(_OWORD *)&v11[v8 + 20] = v22;
            v8 += 40;
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
        v14 = qvector_reserve(a1, *(void **)a1, a2, 0x14u);
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
          v17 = 5 * v3;
          v16[v17 + 4] = *(_DWORD *)(a3 + 16);
          *(_OWORD *)&v16[v17] = *(_OWORD *)a3;
          v15 = v3 + 1;
        }
        if ( v3 != a2 - 1 )
        {
          v18 = 20 * v15;
          v19 = a2 - v15;
          do
          {
            v20 = *(char **)a1;
            *(_DWORD *)&v20[v18 + 16] = *(_DWORD *)(a3 + 16);
            *(_OWORD *)&v20[v18] = *(_OWORD *)a3;
            v21 = *(char **)a1;
            *(_DWORD *)&v21[v18 + 36] = *(_DWORD *)(a3 + 16);
            *(_OWORD *)&v21[v18 + 20] = *(_OWORD *)a3;
            v18 += 40;
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
