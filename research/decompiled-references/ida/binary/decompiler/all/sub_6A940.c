char __fastcall sub_6A940(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // r14d
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD *v13; // r12
  _DWORD *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rax
  int v18; // ebp
  _QWORD *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v24; // [rsp+0h] [rbp-40h]

  LODWORD(v4) = *(_DWORD *)(a1 + 76);
  if ( !(_DWORD)v4 )
    return v4;
  v5 = a2;
  v6 = a1;
  v7 = *(_QWORD *)(a1 + 64);
  v8 = *(_QWORD *)(v7 + 528);
  if ( (unsigned int)a2 >= *(_DWORD *)(v7 + 64) )
    goto LABEL_35;
  v9 = (unsigned int)a2;
  a2 = 1;
  a1 = *(_QWORD *)(v8 + 8 * v9);
  v24 = v9;
  LOBYTE(v4) = sub_6A780(a1, 1);
  if ( (_BYTE)v4 )
  {
    LOBYTE(v4) = sub_6A8E0(v6, 0);
    return v4;
  }
  v10 = *(_DWORD *)(v6 + 76);
  if ( v10 != 3 )
  {
    if ( (unsigned int)(v10 - 4) > 1 && v10 != 2 )
    {
      if ( !under_debugger )
        sub_37EA20(50028);
      BUG();
    }
    v11 = *(_QWORD *)(v6 + 64);
    *(_DWORD *)(v6 + 76) = 3;
    v12 = *(_QWORD *)(v11 + 784);
    if ( v12 )
      *(_DWORD *)(v12 + 48) = 63;
    v13 = *(_DWORD **)(v6 + 368);
    v4 = *(_QWORD *)(v6 + 376);
    v14 = &v13[v4];
    if ( v14 != v13 )
    {
      do
      {
        v15 = (unsigned int)*v13;
        if ( v5 != (_DWORD)v15 )
        {
          v8 = *(_QWORD *)(v6 + 64);
          if ( (unsigned int)v15 >= *(_DWORD *)(v8 + 64) )
            goto LABEL_35;
          v16 = *(_QWORD *)(*(_QWORD *)(v8 + 528) + 8 * v15);
          a1 = *(_QWORD *)(v16 + 344);
          a2 = *(_QWORD *)(v16 + 352);
          v8 = a1 + 4 * a2;
          if ( a1 != v8 )
          {
            while ( *(_DWORD *)(v6 + 72) != *(_DWORD *)a1 )
            {
              a1 += 4;
              if ( v8 == a1 )
                goto LABEL_18;
            }
            if ( a1 != v8 )
            {
              memmove((void *)a1, (const void *)(a1 + 4), v8 - a1 - 4);
              a2 = *(_QWORD *)(v16 + 352) - 1LL;
              *(_QWORD *)(v16 + 352) = a2;
            }
          }
LABEL_18:
          if ( !a2 )
            **(_DWORD **)(v16 + 64) |= 0x400u;
        }
        ++v13;
      }
      while ( v14 != v13 );
      v4 = *(_QWORD *)(v6 + 376);
      v13 = *(_DWORD **)(v6 + 368);
    }
    if ( v4 )
    {
      if ( v4 != 1 )
        *(_QWORD *)(v6 + 376) = 1;
    }
    else
    {
      if ( !*(_QWORD *)(v6 + 384) )
      {
        v22 = qvector_reserve();
        *(_QWORD *)(v6 + 368) = v22;
        v13 = (_DWORD *)v22;
        v4 = *(_QWORD *)(v6 + 376);
      }
      a1 = (__int64)&v13[v4];
      a2 = 0;
      LOBYTE(v4) = (unsigned __int8)memset((void *)a1, 0, 4 * (1 - v4));
      v13 = *(_DWORD **)(v6 + 368);
      *(_QWORD *)(v6 + 376) = 1;
    }
    *v13 = v5;
    if ( v10 == 2 )
    {
      v17 = *(_QWORD *)(v6 + 64);
      if ( v5 < *(_DWORD *)(v17 + 64) )
      {
        v18 = *(_DWORD *)(v6 + 72);
        v19 = *(_QWORD **)(*(_QWORD *)(v17 + 528) + 8 * v24);
        v4 = v19[44];
        v20 = v19[43];
        if ( v19[45] < (unsigned __int64)(v4 + 1) )
        {
          v21 = qvector_reserve();
          v19[43] = v21;
          v20 = v21;
          v4 = v19[44];
        }
        *(_DWORD *)(v20 + 4 * v4) = v18;
        ++v19[44];
        return v4;
      }
LABEL_35:
      sub_64B60(a1, a2, v8, a4);
    }
  }
  return v4;
}
