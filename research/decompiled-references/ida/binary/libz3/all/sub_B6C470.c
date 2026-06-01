signed int *__fastcall sub_B6C470(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rcx
  unsigned int **v4; // r8
  int v5; // r12d
  __int64 v6; // rdx
  unsigned int **v7; // r13
  int v8; // r12d
  unsigned int **v9; // r15
  _DWORD *v10; // rsi
  unsigned int v11; // eax
  unsigned int *v12; // rax
  _DWORD *v13; // rdx
  __int64 v14; // rdx
  int v15; // r14d
  __int64 v16; // rcx
  int v17; // r14d
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r10
  signed int *result; // rax
  int v24[2]; // [rsp+28h] [rbp-90h] BYREF
  void *v25; // [rsp+30h] [rbp-88h]
  int v26[2]; // [rsp+38h] [rbp-80h]
  _DWORD v27[30]; // [rsp+40h] [rbp-78h] BYREF

  v5 = sub_B645B0(a1, a2);
  v6 = *(unsigned int *)(v3 + 24);
  v25 = v27;
  v7 = &v4[v6];
  v27[0] = v5;
  *(_QWORD *)v26 = 0x1000000001LL;
  if ( v6 * 8 )
  {
    v8 = v5 ^ 1;
    v9 = v4;
    do
    {
      v12 = *v9;
      if ( !*((_WORD *)*v9 + 2)
        && (v13 = *(_DWORD **)(*((_QWORD *)v12 + 2) + 24LL)) != nullptr
        && !*v13
        && v13[1] == 8
        && v12[6] == 1 )
      {
        v15 = sub_B645B0(a1, *((unsigned int **)v12 + 4)) ^ 1;
      }
      else
      {
        v14 = *(_QWORD *)(a1 + 104);
        v15 = dword_1C7ED6C;
        if ( v12 != *(unsigned int **)(v14 + 856) )
        {
          v15 = dword_1C7ED68;
          if ( v12 != *(unsigned int **)(v14 + 864) )
            v15 = 2 * *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4LL * *v12);
        }
      }
      v24[0] = v8;
      v24[1] = v15;
      sub_B6BA00(a1, (unsigned int *)v24);
      v16 = (unsigned int)v26[0];
      v17 = v15 ^ 1;
      if ( v26[0] < (unsigned int)v26[1] )
      {
        v10 = v25;
      }
      else
      {
        v18 = (unsigned int)(2 * v26[1]);
        v19 = sub_186B270(4 * v18);
        v20 = (__int64 *)v25;
        v10 = (_DWORD *)v19;
        v21 = 0;
        v16 = (unsigned int)v26[0];
        v22 = 4LL * (unsigned int)v26[0];
        if ( v26[0] )
        {
          do
          {
            *(_DWORD *)(v19 + v21) = *(_DWORD *)((char *)v20 + v21);
            v21 += 4;
          }
          while ( v21 != v22 );
        }
        if ( v20 != (__int64 *)v27 && v20 )
        {
          sub_186B220(v20);
          v16 = (unsigned int)v26[0];
        }
        v25 = v10;
        v26[1] = v18;
      }
      v10[v16] = v17;
      ++v9;
      v11 = ++v26[0];
    }
    while ( v7 != v9 );
  }
  else
  {
    v10 = v27;
    v11 = 1;
  }
  result = sub_B6A4E0(a1, v11, v10);
  if ( v25 )
  {
    result = v27;
    if ( v25 != v27 )
      return (signed int *)sub_186B220(v25);
  }
  return result;
}

