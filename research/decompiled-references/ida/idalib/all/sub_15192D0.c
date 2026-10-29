__int64 __fastcall sub_15192D0(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rdx
  __int64 v6; // rbp
  int v7; // r13d
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 i; // rbx
  int v12; // eax
  __int64 *v13; // rsi
  __int64 *v14; // rdi
  __int64 v16; // rcx
  __int64 v17; // rbx
  void *v18; // rdi
  __int64 v19; // rbx
  void *v20; // rdi
  __int64 v21; // rbx
  __int64 *v22; // r14
  unsigned __int64 v23; // r15
  __int64 v24; // rax
  __int64 *v25; // rsi
  __int64 *v26; // rdi
  __int64 *v27; // rbx
  __int64 *v28; // rbp
  __int64 *v29; // r15
  __int64 v30; // rax
  __int64 *v31; // rsi
  __int64 *v32; // rdi
  __int64 v33; // [rsp+8h] [rbp-40h]
  unsigned __int64 v34; // [rsp+8h] [rbp-40h]

  if ( (__int64 *)a1 != a2 )
  {
    v3 = *((unsigned int *)a2 + 2);
    v4 = *(unsigned int *)(a1 + 8);
    v6 = *(_QWORD *)a1;
    v7 = *((_DWORD *)a2 + 2);
    if ( v3 <= v4 )
    {
      v16 = *(_QWORD *)a1;
      if ( *((_DWORD *)a2 + 2) )
      {
        v21 = *a2 + 16;
        v22 = (__int64 *)(v6 + 16);
        v33 = 56 * v3;
        v23 = v21 + 56 * v3;
        do
        {
          v24 = *(_QWORD *)(v21 - 16);
          v25 = (__int64 *)v21;
          v26 = v22;
          v21 += 56;
          v22 += 7;
          *(v22 - 9) = v24;
          *((_DWORD *)v22 - 16) = *(_DWORD *)(v21 - 64);
          sub_15070E0(v26, v25);
        }
        while ( v23 != v21 );
        v6 += v33;
        v16 = *(_QWORD *)a1;
        v4 = *(unsigned int *)(a1 + 8);
      }
      v17 = v16 + 56 * v4;
      while ( v6 != v17 )
      {
        while ( 1 )
        {
          v17 -= 56;
          v18 = *(void **)(v17 + 16);
          if ( v18 == (void *)(v17 + 32) )
            break;
          free(v18);
          if ( v6 == v17 )
          {
            *(_DWORD *)(a1 + 8) = v7;
            return a1;
          }
        }
      }
    }
    else
    {
      if ( v3 > *(unsigned int *)(a1 + 12) )
      {
        v19 = v6 + 56 * v4;
        while ( v19 != v6 )
        {
          while ( 1 )
          {
            v19 -= 56;
            v20 = *(void **)(v19 + 16);
            if ( v20 == (void *)(v19 + 32) )
              break;
            free(v20);
            if ( v19 == v6 )
              goto LABEL_22;
          }
        }
LABEL_22:
        *(_DWORD *)(a1 + 8) = 0;
        sub_EC11D0(a1, v3);
        v3 = *((unsigned int *)a2 + 2);
        v6 = *(_QWORD *)a1;
        v4 = 0;
        v8 = *a2;
      }
      else
      {
        v8 = *a2;
        if ( *(_DWORD *)(a1 + 8) )
        {
          v27 = (__int64 *)(v8 + 16);
          v28 = (__int64 *)(v6 + 16);
          v4 *= 56LL;
          v29 = (__int64 *)((char *)v27 + v4);
          do
          {
            v30 = *(v27 - 2);
            v31 = v27;
            v32 = v28;
            v27 += 7;
            v34 = v4;
            v28 += 7;
            *(v28 - 9) = v30;
            *((_DWORD *)v28 - 16) = *((_DWORD *)v27 - 16);
            sub_15070E0(v32, v31);
            v4 = v34;
          }
          while ( v27 != v29 );
          v3 = *((unsigned int *)a2 + 2);
          v6 = *(_QWORD *)a1;
          v8 = *a2;
        }
      }
      v9 = v4 + v6;
      v10 = v8 + 56 * v3;
      for ( i = v4 + v8; v10 != i; i += 56 )
      {
        while ( 1 )
        {
          *(_QWORD *)v9 = *(_QWORD *)i;
          v12 = *(_DWORD *)(i + 8);
          *(_DWORD *)(v9 + 24) = 0;
          *(_DWORD *)(v9 + 8) = v12;
          *(_QWORD *)(v9 + 16) = v9 + 32;
          *(_DWORD *)(v9 + 28) = 1;
          if ( *(_DWORD *)(i + 24) )
            break;
          i += 56;
          v9 += 56;
          if ( v10 == i )
            goto LABEL_10;
        }
        v13 = (__int64 *)(i + 16);
        v14 = (__int64 *)(v9 + 16);
        v9 += 56;
        sub_15070E0(v14, v13);
      }
    }
LABEL_10:
    *(_DWORD *)(a1 + 8) = v7;
  }
  return a1;
}
