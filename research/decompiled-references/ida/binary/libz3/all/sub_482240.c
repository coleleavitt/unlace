void __fastcall sub_482240(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // r12
  void *v5; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  _QWORD *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // r12
  void *v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 *v17; // rbx
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  void (__fastcall ***v24)(void *); // rbp
  _QWORD *v25; // rbp
  __int64 *v26; // rbp
  __int64 *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 *v30; // rbp
  __int64 *v31; // r12
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 *v34; // rbp
  __int64 *v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdi

  v2 = *(_QWORD **)(a1 + 112);
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( (_DWORD)v3 )
    {
      v4 = &v2[v3];
      do
      {
        while ( *v2 )
        {
          v5 = (void *)(*v2++ - 8LL);
          sub_186B220(v5);
          if ( v4 == v2 )
          {
            v2 = *(_QWORD **)(a1 + 112);
            goto LABEL_7;
          }
        }
        ++v2;
      }
      while ( v2 != v4 );
      v2 = *(_QWORD **)(a1 + 112);
    }
LABEL_7:
    sub_186B220(v2 - 1);
  }
  v6 = *(__int64 **)(a1 + 104);
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v7 )
      goto LABEL_16;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = *(_QWORD *)(a1 + 96);
          v10 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_15;
      }
      sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_15:
    v6 = *(__int64 **)(a1 + 104);
    if ( v6 )
LABEL_16:
      sub_186B220(v6 - 1);
  }
  v11 = *(_QWORD **)(a1 + 80);
  if ( v11 )
  {
    v12 = *((unsigned int *)v11 - 1);
    if ( (_DWORD)v12 )
    {
      v13 = &v11[v12];
      do
      {
        while ( *v11 )
        {
          v14 = (void *)(*v11++ - 8LL);
          sub_186B220(v14);
          if ( v13 == v11 )
          {
            v11 = *(_QWORD **)(a1 + 80);
            goto LABEL_23;
          }
        }
        ++v11;
      }
      while ( v11 != v13 );
      v11 = *(_QWORD **)(a1 + 80);
    }
LABEL_23:
    sub_186B220(v11 - 1);
  }
  v15 = *(_QWORD *)(a1 + 72);
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = *(_QWORD *)(a1 + 64);
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = *(__int64 **)(a1 + 56);
  if ( v17 )
  {
    v18 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v18 )
      goto LABEL_36;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = *(_QWORD *)(a1 + 48);
          v10 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_35;
      }
      sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_35:
    v17 = *(__int64 **)(a1 + 56);
    if ( v17 )
LABEL_36:
      sub_186B220(v17 - 1);
  }
  v21 = *(_QWORD *)(a1 + 40);
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = *(_QWORD *)(a1 + 16);
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  v23 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v10 = (*(_DWORD *)v23)-- == 1;
    if ( v10 )
    {
      v24 = (void (__fastcall ***)(void *))v23[11];
      if ( v24 )
      {
        v10 = (*((_DWORD *)v24 + 4))-- == 1;
        if ( v10 )
        {
          (**v24)(v24);
          sub_186B220(v24);
        }
      }
      v25 = (_QWORD *)v23[10];
      if ( v25 )
      {
        v10 = (*(_DWORD *)v25)-- == 1;
        if ( v10 )
        {
          sub_41CB00(v25);
          sub_186B220(v25);
        }
      }
      v26 = (__int64 *)v23[9];
      if ( v26 )
      {
        v27 = &v26[*((unsigned int *)v26 - 1)];
        if ( v26 >= v27 )
          goto LABEL_62;
        do
        {
          while ( 1 )
          {
            v28 = *v26;
            if ( *v26 )
            {
              v29 = v23[8];
              v10 = (*(_DWORD *)(v28 + 8))-- == 1;
              if ( v10 )
                break;
            }
            if ( ++v26 >= v27 )
              goto LABEL_61;
          }
          sub_15D7BC0(v29, v28);
          ++v26;
        }
        while ( v26 < v27 );
LABEL_61:
        v26 = (__int64 *)v23[9];
        if ( v26 )
LABEL_62:
          sub_186B220(v26 - 1);
      }
      v30 = (__int64 *)v23[7];
      if ( v30 )
      {
        v31 = &v30[*((unsigned int *)v30 - 1)];
        if ( v30 >= v31 )
          goto LABEL_71;
        do
        {
          while ( 1 )
          {
            v32 = *v30;
            if ( *v30 )
            {
              v33 = v23[6];
              v10 = (*(_DWORD *)(v32 + 8))-- == 1;
              if ( v10 )
                break;
            }
            if ( ++v30 >= v31 )
              goto LABEL_70;
          }
          sub_15D7BC0(v33, v32);
          ++v30;
        }
        while ( v30 < v31 );
LABEL_70:
        v30 = (__int64 *)v23[7];
        if ( v30 )
LABEL_71:
          sub_186B220(v30 - 1);
      }
      v34 = (__int64 *)v23[5];
      if ( v34 )
      {
        v35 = &v34[*((unsigned int *)v34 - 1)];
        if ( v34 >= v35 )
          goto LABEL_80;
        do
        {
          while ( 1 )
          {
            v36 = *v34;
            if ( *v34 )
            {
              v37 = v23[4];
              v10 = (*(_DWORD *)(v36 + 8))-- == 1;
              if ( v10 )
                break;
            }
            if ( ++v34 >= v35 )
              goto LABEL_79;
          }
          sub_15D7BC0(v37, v36);
          ++v34;
        }
        while ( v34 < v35 );
LABEL_79:
        v34 = (__int64 *)v23[5];
        if ( v34 )
LABEL_80:
          sub_186B220(v34 - 1);
      }
      v38 = v23[2];
      if ( v38 )
      {
        v39 = v23[3];
        v10 = (*(_DWORD *)(v38 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(v39, v38);
      }
      sub_186B220(v23);
    }
  }
}

