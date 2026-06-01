__int64 __fastcall sub_417610(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rax
  int v12; // r9d
  bool v13; // cc
  unsigned int v14; // edi
  __int64 v15; // r8
  int v16; // r10d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // r9d
  int v21; // edi
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 *v27; // rdi
  unsigned int v28; // [rsp+Ch] [rbp-1Ch] BYREF
  _QWORD v29[3]; // [rsp+10h] [rbp-18h] BYREF

  if ( a3 != 2 )
  {
    sub_458930(a2, 1, a4, "list");
    return 1;
  }
  v7 = *(_QWORD *)(a4 + 8);
  if ( *(_UNKNOWN ***)(v7 + 24) == &off_655E20 )
  {
    v19 = *(_QWORD *)(v7 + 32);
    v8 = *(unsigned int *)(v19 + 8);
    v29[0] = v19 + 16;
    v28 = v8;
  }
  else
  {
    if ( (unsigned int)sub_46FD90(a2, v7, &v28, v29) )
      return 1;
    v7 = *(_QWORD *)(a4 + 8);
    v8 = v28;
  }
  if ( (_DWORD)v8 )
  {
    if ( *(int *)v7 > 1 || **(int **)(v7 + 32) > 1 )
    {
      v9 = sub_46EEB0(v8, 0);
      v10 = v28;
      v7 = v9;
      v11 = *(_QWORD *)(v9 + 32);
      v12 = 0;
      v13 = (int)v28 > 0;
      *(_DWORD *)(v11 + 8) = v28;
      v14 = v10 - 1;
      if ( v13 )
      {
        v15 = v29[0];
        v16 = v10;
        do
        {
          v17 = v12;
          v18 = (int)v14;
          ++v12;
          --v14;
          *(_QWORD *)(v11 + 16 + 8 * v18) = *(_QWORD *)(v15 + 8 * v17);
          ++**(_DWORD **)(v15 + 8 * v17);
        }
        while ( v12 < v16 );
      }
    }
    else
    {
      v20 = 0;
      v21 = v8 - 1;
      if ( v21 > 0 )
      {
        v22 = v29[0];
        do
        {
          v23 = v20;
          v24 = v21;
          ++v20;
          v25 = *(_QWORD *)(v22 + 8 * v23);
          v26 = *(_QWORD *)(v22 + 8LL * v21--);
          *(_QWORD *)(v22 + 8 * v23) = v26;
          *(_QWORD *)(v22 + 8 * v24) = v25;
        }
        while ( v20 < v21 );
        v7 = *(_QWORD *)(a4 + 8);
      }
      v27 = *(__int64 **)(v7 + 8);
      if ( v27 )
      {
        if ( v27 != off_656088 )
        {
          Tcl_Free((__int64)v27);
          v7 = *(_QWORD *)(a4 + 8);
        }
        *(_QWORD *)(v7 + 8) = 0;
      }
    }
  }
  sub_48AFD0(a2, v7);
  return 0;
}

