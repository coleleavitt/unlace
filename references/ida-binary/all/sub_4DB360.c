void __fastcall sub_4DB360(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // r14
  size_t v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // r15
  size_t v7; // r8
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rax
  size_t v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rax
  size_t v16; // rcx
  size_t v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  size_t v24; // [rsp+0h] [rbp-48h]
  size_t v25; // [rsp+0h] [rbp-48h]
  size_t v26; // [rsp+8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 32) == v1 )
  {
    v13 = 1;
    v3 = 0;
    v12 = 0;
    **(_QWORD **)(a1 + 48) = 0;
    v14 = *(_QWORD *)(a1 + 8);
    v15 = *(_QWORD *)a1;
    v16 = v14 - *(_QWORD *)a1;
  }
  else
  {
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    do
    {
      v8 = *(_QWORD *)(a1 + 48);
      v9 = *(unsigned int *)(v1 + 4 * v2);
      v10 = *(_QWORD *)(v8 + 8 * v2);
      v11 = *(_QWORD *)(v8 + 8 * v2++ + 8);
      v7 = v11 - v10;
      if ( (_DWORD)v9 != -1 )
      {
        if ( v5 + v4 == v10 )
        {
          v4 += v7;
        }
        else
        {
          if ( v6 != v5 )
          {
            v26 = v11 - v10;
            v24 = v4;
            memmove((void *)(v6 + *(_QWORD *)a1), (const void *)(*(_QWORD *)a1 + v5), v4);
            v1 = *(_QWORD *)(a1 + 24);
            v7 = v26;
            v4 = v24;
          }
          v6 += v4;
          v5 = v10;
          v4 = v7;
        }
        *(_DWORD *)(v1 + 4 * v3) = v9;
        *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v3) = v6 + v10 - v5;
        *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v9) = v3;
        v1 = *(_QWORD *)(a1 + 24);
        ++v3;
      }
    }
    while ( v2 < (*(_QWORD *)(a1 + 32) - v1) >> 2 );
    if ( v5 != v6 )
    {
      v25 = v4;
      memmove((void *)(v6 + *(_QWORD *)a1), (const void *)(*(_QWORD *)a1 + v5), v4);
      v4 = v25;
    }
    v12 = v6 + v4;
    v13 = v3 + 1;
    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v3) = v12;
    v14 = *(_QWORD *)(a1 + 8);
    v15 = *(_QWORD *)a1;
    v16 = v14 - *(_QWORD *)a1;
    if ( v16 < v12 )
    {
      sub_4DAF20(a1, v12 - v16);
      goto LABEL_17;
    }
  }
  if ( v12 < v16 )
  {
    v17 = v12 + v15;
    if ( v17 != v14 )
      *(_QWORD *)(a1 + 8) = v17;
  }
LABEL_17:
  v18 = *(_QWORD *)(a1 + 48);
  v19 = (*(_QWORD *)(a1 + 56) - v18) >> 3;
  if ( v19 < v13 )
  {
    sub_4DB080(a1 + 48, v13 - v19);
  }
  else if ( v13 < v19 )
  {
    v20 = v18 + 8 * v13;
    if ( *(_QWORD *)(a1 + 56) != v20 )
      *(_QWORD *)(a1 + 56) = v20;
  }
  v21 = *(_QWORD *)(a1 + 24);
  v22 = (*(_QWORD *)(a1 + 32) - v21) >> 2;
  if ( v22 < v3 )
  {
    sub_4DB1F0(a1 + 24, v3 - v22);
  }
  else if ( v3 < v22 )
  {
    v23 = v21 + 4 * v3;
    if ( *(_QWORD *)(a1 + 32) != v23 )
      *(_QWORD *)(a1 + 32) = v23;
  }
  *(_QWORD *)(a1 + 72) = 0;
}
