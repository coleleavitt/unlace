__int64 __fastcall sub_E33F80(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 *v8; // rbp
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rbp
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  void (__fastcall ***v16)(void *); // rbp
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 *v22; // rbp
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  void (__fastcall ***v26)(void *); // rbp
  __int64 result; // rax
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 *v30; // rbp
  __int64 *v31; // r12
  __int64 v32; // rsi
  __int64 v33; // rdi
  unsigned int v34; // eax

  *(_QWORD *)a1 = &off_1C764B8;
  v2 = *(_BYTE *)(a1 + 208) == 0;
  *(_QWORD *)(a1 + 72) = off_1C76668;
  if ( !v2 )
  {
    v34 = sub_E1EF70(a1);
    sub_E1EF90((_QWORD *)a1, v34);
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v3 + 856) != *(_QWORD *)(a1 + 128) )
  {
    v4 = sub_15E1A70(v3);
    v5 = v4;
    if ( v4 )
      ++*(_DWORD *)(v4 + 8);
    v6 = *(_QWORD *)(a1 + 128);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 136);
      v2 = (*(_DWORD *)(v6 + 8))-- == 1;
      if ( v2 )
        sub_15D7BC0(v7, v6);
    }
    *(_QWORD *)(a1 + 128) = v5;
    sub_E5EBF0(*(_QWORD *)(a1 + 160), v5);
  }
  v8 = *(__int64 **)(a1 + 200);
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = *(_QWORD *)(a1 + 192);
          v2 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v2 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_17;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_17:
    v8 = *(__int64 **)(a1 + 200);
    if ( v8 )
LABEL_18:
      sub_186B220(v8 - 1);
  }
  v12 = *(__int64 **)(a1 + 176);
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = *(_QWORD *)(a1 + 168);
          v2 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v2 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_26;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_26:
    v12 = *(__int64 **)(a1 + 176);
    if ( v12 )
LABEL_27:
      sub_186B220(v12 - 1);
  }
  v16 = *(void (__fastcall ****)(void *))(a1 + 160);
  if ( v16 )
  {
    v2 = (*((_DWORD *)v16 + 12))-- == 1;
    if ( v2 )
    {
      (**v16)(v16);
      sub_186B220(v16);
    }
  }
  v17 = *(_QWORD *)(a1 + 144);
  if ( v17 )
  {
    v18 = *(_QWORD *)(a1 + 152);
    v2 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v2 )
      sub_15D7BC0(v18, v17);
  }
  v19 = *(_QWORD *)(a1 + 128);
  if ( v19 )
  {
    v20 = *(_QWORD *)(a1 + 136);
    v2 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v2 )
      sub_15D7BC0(v20, v19);
  }
  v21 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)a1 = qword_1C75FB0;
  *(_QWORD *)(a1 + 72) = qword_1C76160;
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = *(__int64 **)(a1 + 104);
  if ( v22 )
  {
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v22 >= v23 )
      goto LABEL_47;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = *(_QWORD *)(a1 + 96);
          v2 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v2 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_46;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_46:
    v22 = *(__int64 **)(a1 + 104);
    if ( v22 )
LABEL_47:
      sub_186B220(v22 - 1);
  }
  *(_QWORD *)(a1 + 72) = qword_1C77178;
  *(_QWORD *)a1 = qword_1C76FE8;
  sub_18572D0((void *)(a1 + 80));
  v26 = *(void (__fastcall ****)(void *))(a1 + 56);
  result = (__int64)qword_1C63FB0;
  *(_QWORD *)a1 = qword_1C63FB0;
  if ( v26 )
  {
    v2 = (*((_DWORD *)v26 + 2))-- == 1;
    if ( v2 )
    {
      (**v26)(v26);
      result = sub_186B220(v26);
    }
  }
  v28 = *(_QWORD *)(a1 + 32);
  if ( v28 )
  {
    v29 = *(_QWORD *)(a1 + 40);
    v2 = (*(_DWORD *)(v28 + 8))-- == 1;
    if ( v2 )
      result = sub_15D7BC0(v29, v28);
  }
  v30 = *(__int64 **)(a1 + 24);
  if ( v30 )
  {
    result = *((unsigned int *)v30 - 1);
    v31 = &v30[result];
    if ( v30 >= v31 )
      return sub_186B220(v30 - 1);
    do
    {
      while ( 1 )
      {
        v32 = *v30;
        if ( *v30 )
        {
          v33 = *(_QWORD *)(a1 + 16);
          v2 = (*(_DWORD *)(v32 + 8))-- == 1;
          if ( v2 )
            break;
        }
        if ( ++v30 >= v31 )
          goto LABEL_61;
      }
      result = sub_15D7BC0(v33, v32);
      ++v30;
    }
    while ( v30 < v31 );
LABEL_61:
    v30 = *(__int64 **)(a1 + 24);
    if ( v30 )
      return sub_186B220(v30 - 1);
  }
  return result;
}

