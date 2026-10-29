__int64 __fastcall sub_795AE0(__int64 a1)
{
  __int64 v2; // r12
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 **v10; // r15
  __int64 **v11; // r12
  __int64 *v12; // r13
  __int64 *v13; // rbx
  __int64 *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  void *v18; // rdi
  void *v19; // rdi
  void ***v20; // rbx
  __int64 result; // rax
  void ***v22; // r13
  void **v23; // r12
  __int64 *v24; // rbx
  __int64 *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 *v28; // rbx
  __int64 *v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdi
  void *v32; // rdi

  v2 = *(unsigned int *)(a1 + 184);
  v3 = *(__int64 **)(a1 + 176);
  v4 = v3;
  v5 = &v3[2 * v2];
  if ( v3 != v5 )
  {
    while ( (unsigned __int64)*v4 <= 1 )
    {
      v4 += 2;
      if ( v5 == v4 )
        goto LABEL_15;
    }
    if ( v5 != v4 )
    {
      v6 = *v4;
      do
      {
        v7 = *(_QWORD *)(v4[1] + 8);
        if ( v7 )
          v8 = *(unsigned int *)(v7 - 4);
        else
          v8 = 0;
        sub_1376FA0(**(_QWORD **)(a1 + 16), v6, v8, v7);
        v9 = v4 + 2;
        if ( v5 == v4 + 2 )
          break;
        while ( 1 )
        {
          v6 = *v9;
          v4 = v9;
          if ( (unsigned __int64)*v9 > 1 )
            break;
          v9 += 2;
          if ( v5 == v9 )
            goto LABEL_14;
        }
      }
      while ( v5 != v9 );
LABEL_14:
      v3 = *(__int64 **)(a1 + 176);
    }
  }
LABEL_15:
  if ( v3 )
    sub_186B220(v3);
  v10 = *(__int64 ***)(a1 + 168);
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 == v11 )
      goto LABEL_32;
    do
    {
      v12 = *v10;
      if ( *v10 )
      {
        v13 = (__int64 *)v12[1];
        if ( v13 )
        {
          v14 = &v13[*((unsigned int *)v13 - 1)];
          if ( v13 >= v14 )
            goto LABEL_28;
          do
          {
            while ( 1 )
            {
              v15 = *v13;
              if ( *v13 )
              {
                v16 = *v12;
                v17 = (*(_DWORD *)(v15 + 8))-- == 1;
                if ( v17 )
                  break;
              }
              if ( ++v13 >= v14 )
                goto LABEL_27;
            }
            sub_15D7BC0(v16, v15);
            ++v13;
          }
          while ( v13 < v14 );
LABEL_27:
          v13 = (__int64 *)v12[1];
          if ( v13 )
LABEL_28:
            sub_186B220(v13 - 1);
        }
        sub_186B220(v12);
      }
      ++v10;
    }
    while ( v11 != v10 );
    v11 = *(__int64 ***)(a1 + 168);
    if ( v11 )
    {
LABEL_32:
      *((_DWORD *)v11 - 1) = 0;
      sub_186B220(v11 - 1);
    }
  }
  v18 = *(void **)(a1 + 144);
  *(_QWORD *)(a1 + 32) = &off_1C611F0;
  if ( v18 )
    sub_186B220(v18);
  v19 = *(void **)(a1 + 120);
  if ( v19 )
    sub_186B220(v19);
  v20 = *(void ****)(a1 + 112);
  result = (__int64)qword_1C6A598;
  *(_QWORD *)(a1 + 32) = qword_1C6A598;
  if ( v20 )
  {
    result = *((unsigned int *)v20 - 1);
    v22 = &v20[result];
    if ( v20 == v22 )
      goto LABEL_45;
    do
    {
      v23 = *v20;
      if ( *v20 )
      {
        if ( *v23 )
          sub_186B220(*v23);
        result = sub_186B220(v23);
      }
      ++v20;
    }
    while ( v22 != v20 );
    v22 = *(void ****)(a1 + 112);
    if ( v22 )
LABEL_45:
      result = sub_186B220(v22 - 1);
  }
  v24 = *(__int64 **)(a1 + 104);
  if ( v24 )
  {
    result = *((unsigned int *)v24 - 1);
    v25 = &v24[result];
    if ( v24 >= v25 )
      goto LABEL_54;
    do
    {
      while ( 1 )
      {
        v26 = *v24;
        if ( *v24 )
        {
          v27 = *(_QWORD *)(a1 + 96);
          v17 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( ++v24 >= v25 )
          goto LABEL_53;
      }
      result = sub_15D7BC0(v27, v26);
      ++v24;
    }
    while ( v24 < v25 );
LABEL_53:
    v24 = *(__int64 **)(a1 + 104);
    if ( v24 )
LABEL_54:
      result = sub_186B220(v24 - 1);
  }
  v28 = *(__int64 **)(a1 + 88);
  if ( v28 )
  {
    result = *((unsigned int *)v28 - 1);
    v29 = &v28[result];
    if ( v28 >= v29 )
      goto LABEL_63;
    do
    {
      while ( 1 )
      {
        v30 = *v28;
        if ( *v28 )
        {
          v31 = *(_QWORD *)(a1 + 80);
          v17 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( ++v28 >= v29 )
          goto LABEL_62;
      }
      result = sub_15D7BC0(v31, v30);
      ++v28;
    }
    while ( v28 < v29 );
LABEL_62:
    v28 = *(__int64 **)(a1 + 88);
    if ( v28 )
LABEL_63:
      result = sub_186B220(v28 - 1);
  }
  v32 = *(void **)(a1 + 56);
  if ( v32 )
    return sub_186B220(v32);
  return result;
}

