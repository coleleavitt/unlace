__int64 __fastcall sub_61FD60(__int64 a1, __int64 *a2)
{
  int v3; // eax
  unsigned __int64 v5; // rbp
  int *v6; // r13
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  int v9; // edx
  unsigned __int64 v10; // rbp
  __int16 *v11; // r13
  unsigned __int64 v12; // r12
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  size_t v15; // rdx
  __int64 v16; // rax
  __int16 v17; // dx
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  size_t v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax

  v3 = *(_DWORD *)(a1 + 32);
  if ( v3 == 2 )
  {
    v10 = a2[1];
    v11 = (__int16 *)&unk_22B5BF1;
    if ( (*(_BYTE *)(a1 + 36) & 1) != 0 )
      v11 = (__int16 *)&unk_22D6138;
    v12 = v10 + 2;
    if ( v10 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v13 = *a2;
      v14 = v10;
      v15 = 2;
      if ( a2[2] < v12 )
      {
        v21 = qvector_reserve(a2, v13, v10 + 2, 1);
        *a2 = v21;
        v13 = v21;
        v14 = a2[1];
        v15 = v12 - v14;
      }
      memset((void *)(v13 + v14), 0, v15);
    }
    v16 = *a2;
    v17 = *v11;
    a2[1] = v12;
    *(_WORD *)(v16 + v10) = v17;
  }
  else
  {
    if ( v3 <= 2 )
    {
      if ( (unsigned int)v3 <= 1 )
        return 0;
LABEL_23:
      if ( !under_debugger )
        interr(1501);
      BUG();
    }
    if ( v3 != 4 )
      goto LABEL_23;
    v5 = a2[1];
    v6 = (int *)&unk_238D4B9;
    if ( (*(_BYTE *)(a1 + 36) & 1) != 0 )
      v6 = (int *)&unk_238D4B4;
    v7 = v5 + 4;
    if ( v5 < 0xFFFFFFFFFFFFFFFCLL )
    {
      v18 = *a2;
      v19 = v5;
      v20 = 4;
      if ( a2[2] < v7 )
      {
        v22 = qvector_reserve(a2, v18, v5 + 4, 1);
        *a2 = v22;
        v18 = v22;
        v19 = a2[1];
        v20 = v7 - v19;
      }
      memset((void *)(v18 + v19), 0, v20);
    }
    else
    {
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v8 = *a2;
    v9 = *v6;
    a2[1] = v7;
    *(_DWORD *)(v8 + v5) = v9;
  }
  return 1;
}

