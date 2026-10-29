__int64 __fastcall sub_716FA0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  _QWORD *v10; // rbx
  _QWORD *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 result; // rax
  _QWORD *v15; // r13
  _QWORD *v16; // r12
  __int64 *v17; // rbx
  __int64 *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdi
  void (__fastcall ***v21)(void *); // rbx
  _QWORD *v22; // rbx
  _QWORD *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  void (__fastcall ***v26)(void *); // rbx
  void (__fastcall ***v27)(void *); // rbx

  v2 = a1 + 40;
  sub_1816990(a1 + 40);
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 16LL))(v3, v2);
  v4 = *(_QWORD *)(a1 + 120);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, v2);
  sub_18183E0(v2, "qsat num predicates", *(unsigned int *)(a1 + 196));
  v5 = *(_QWORD **)(a1 + 368);
  *(_DWORD *)(a1 + 400) = 0;
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v6 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = *(_QWORD *)(a1 + 360);
          v9 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_12;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_12:
    v5 = *(_QWORD **)(a1 + 368);
    if ( v5 )
LABEL_13:
      *((_DWORD *)v5 - 1) = 0;
  }
  v10 = *(_QWORD **)(a1 + 384);
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 >= v11 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = *(_QWORD *)(a1 + 376);
          v9 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_21;
      }
      sub_15D7BC0(v13, v12);
      ++v10;
    }
    while ( v10 < v11 );
LABEL_21:
    v10 = *(_QWORD **)(a1 + 384);
    if ( v10 )
LABEL_22:
      *((_DWORD *)v10 - 1) = 0;
  }
  result = sub_710AD0((__int64 *)(a1 + 144));
  v15 = *(_QWORD **)(a1 + 392);
  if ( v15 )
  {
    result = *((unsigned int *)v15 - 1);
    if ( (_DWORD)result )
    {
      result *= 16;
      v16 = (_QWORD *)((char *)v15 + result);
      do
      {
        v17 = (__int64 *)v15[1];
        if ( v17 )
        {
          result = *((unsigned int *)v17 - 1);
          v18 = &v17[result];
          if ( v17 >= v18 )
            goto LABEL_34;
          do
          {
            while ( 1 )
            {
              v19 = *v17;
              if ( *v17 )
              {
                v20 = *v15;
                v9 = (*(_DWORD *)(v19 + 8))-- == 1;
                if ( v9 )
                  break;
              }
              if ( ++v17 >= v18 )
                goto LABEL_33;
            }
            result = sub_15D7BC0(v20, v19);
            ++v17;
          }
          while ( v17 < v18 );
LABEL_33:
          v17 = (__int64 *)v15[1];
          if ( v17 )
LABEL_34:
            result = sub_186B220(v17 - 1);
        }
        v15 += 2;
      }
      while ( v15 != v16 );
      v15 = *(_QWORD **)(a1 + 392);
    }
    *((_DWORD *)v15 - 1) = 0;
  }
  v21 = *(void (__fastcall ****)(void *))(a1 + 408);
  if ( v21 )
  {
    v9 = (*((_DWORD *)v21 + 4))-- == 1;
    if ( v9 )
    {
      (**v21)(v21);
      result = sub_186B220(v21);
    }
  }
  v22 = *(_QWORD **)(a1 + 448);
  *(_QWORD *)(a1 + 408) = 0;
  if ( v22 )
  {
    result = *((unsigned int *)v22 - 1);
    v23 = &v22[result];
    if ( v22 >= v23 )
      goto LABEL_49;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = *(_QWORD *)(a1 + 440);
          v9 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_48;
      }
      result = sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_48:
    v22 = *(_QWORD **)(a1 + 448);
    if ( v22 )
LABEL_49:
      *((_DWORD *)v22 - 1) = 0;
  }
  v26 = *(void (__fastcall ****)(void *))(a1 + 80);
  if ( v26 )
  {
    v9 = (*((_DWORD *)v26 + 12))-- == 1;
    if ( v9 )
    {
      (**v26)(v26);
      result = sub_186B220(v26);
    }
  }
  v27 = *(void (__fastcall ****)(void *))(a1 + 120);
  *(_QWORD *)(a1 + 80) = 0;
  if ( v27 )
  {
    v9 = (*((_DWORD *)v27 + 12))-- == 1;
    if ( v9 )
    {
      (**v27)(v27);
      result = sub_186B220(v27);
    }
  }
  *(_QWORD *)(a1 + 120) = 0;
  return result;
}

