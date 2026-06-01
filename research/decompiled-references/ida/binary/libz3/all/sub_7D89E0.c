__int64 __fastcall sub_7D89E0(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  _QWORD *v10; // r13
  __int64 v11; // rax
  _QWORD *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 *v15; // rbx
  __int64 *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdi
  void *v19; // rdi
  _QWORD *v20; // r12
  _QWORD *v21; // r13
  _QWORD *v22; // r15
  __int64 (__fastcall *v23)(_QWORD *); // rdx
  __int64 *v24; // rbx
  __int64 *v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 *v28; // rbx
  __int64 *v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 *v32; // rbx
  __int64 *v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rdi
  void *v36; // rdi
  void *v37; // rdi
  __int64 v38; // rdi
  void *v39; // rdi
  void ***v40; // rbx
  void ***v41; // r13
  void **v42; // r12
  void (__fastcall ***v43)(void *); // rbx
  void (__fastcall ***v44)(void *); // rbx
  __int64 **v45; // r12
  __int64 **v46; // r13
  __int64 *v47; // r14
  void *v48; // rdi
  void *v49; // rdi
  __int64 *v50; // rbx
  __int64 *v51; // r15
  __int64 v52; // rsi
  __int64 v53; // rdi
  void *v54; // rdi
  void *v55; // rdi
  __int64 result; // rax
  void *v57; // rdi
  void *v58; // rdi

  v2 = (__int64 *)a1[35];
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( (_DWORD)v3 )
    {
      v4 = &v2[4 * v3];
      do
      {
        v8 = v2[2];
        if ( v8 )
        {
          v9 = v2[3];
          v7 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v9, v8);
        }
        v5 = *v2;
        if ( *v2 )
        {
          v6 = v2[1];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v6, v5);
        }
        v2 += 4;
      }
      while ( v2 != v4 );
      v2 = (__int64 *)a1[35];
    }
    sub_186B220(v2 - 1);
  }
  v10 = (_QWORD *)a1[34];
  if ( v10 )
  {
    v11 = *((unsigned int *)v10 - 1);
    if ( (_DWORD)v11 )
    {
      v12 = &v10[6 * v11];
      do
      {
        v13 = v10[3];
        if ( v13 )
        {
          v14 = v10[4];
          v7 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v14, v13);
        }
        v15 = (__int64 *)v10[2];
        if ( v15 )
        {
          v16 = &v15[*((unsigned int *)v15 - 1)];
          if ( v15 >= v16 )
            goto LABEL_27;
          do
          {
            while ( 1 )
            {
              v17 = *v15;
              if ( *v15 )
              {
                v18 = v10[1];
                v7 = (*(_DWORD *)(v17 + 8))-- == 1;
                if ( v7 )
                  break;
              }
              if ( ++v15 >= v16 )
                goto LABEL_26;
            }
            sub_15D7BC0(v18, v17);
            ++v15;
          }
          while ( v15 < v16 );
LABEL_26:
          v15 = (__int64 *)v10[2];
          if ( v15 )
LABEL_27:
            sub_186B220(v15 - 1);
        }
        v10 += 6;
      }
      while ( v10 != v12 );
      v10 = (_QWORD *)a1[34];
    }
    sub_186B220(v10 - 1);
  }
  v19 = (void *)a1[27];
  if ( v19 )
    sub_186B220(v19);
  v20 = (_QWORD *)a1[26];
  if ( v20 )
  {
    v21 = &v20[*((unsigned int *)v20 - 1)];
    if ( v20 == v21 )
      goto LABEL_75;
    do
    {
      v22 = (_QWORD *)*v20;
      if ( *v20 )
      {
        v23 = *(__int64 (__fastcall **)(_QWORD *))*v22;
        if ( v23 == sub_6F1480 )
        {
          v24 = (__int64 *)v22[17];
          *v22 = &off_1C53478;
          if ( v24 )
          {
            v25 = &v24[*((unsigned int *)v24 - 1)];
            if ( v24 >= v25 )
              goto LABEL_45;
            do
            {
              while ( 1 )
              {
                v26 = *v24;
                if ( *v24 )
                {
                  v27 = v22[16];
                  v7 = (*(_DWORD *)(v26 + 8))-- == 1;
                  if ( v7 )
                    break;
                }
                if ( ++v24 >= v25 )
                  goto LABEL_44;
              }
              sub_15D7BC0(v27, v26);
              ++v24;
            }
            while ( v24 < v25 );
LABEL_44:
            v24 = (__int64 *)v22[17];
            if ( v24 )
LABEL_45:
              sub_186B220(v24 - 1);
          }
          v28 = (__int64 *)v22[15];
          if ( v28 )
          {
            v29 = &v28[*((unsigned int *)v28 - 1)];
            if ( v28 >= v29 )
              goto LABEL_54;
            do
            {
              while ( 1 )
              {
                v30 = *v28;
                if ( *v28 )
                {
                  v31 = v22[14];
                  v7 = (*(_DWORD *)(v30 + 8))-- == 1;
                  if ( v7 )
                    break;
                }
                if ( ++v28 >= v29 )
                  goto LABEL_53;
              }
              sub_15D7BC0(v31, v30);
              ++v28;
            }
            while ( v28 < v29 );
LABEL_53:
            v28 = (__int64 *)v22[15];
            if ( v28 )
LABEL_54:
              sub_186B220(v28 - 1);
          }
          v32 = (__int64 *)v22[13];
          if ( v32 )
          {
            v33 = &v32[*((unsigned int *)v32 - 1)];
            if ( v32 >= v33 )
              goto LABEL_63;
            do
            {
              while ( 1 )
              {
                v34 = *v32;
                if ( *v32 )
                {
                  v35 = v22[12];
                  v7 = (*(_DWORD *)(v34 + 8))-- == 1;
                  if ( v7 )
                    break;
                }
                if ( ++v32 >= v33 )
                  goto LABEL_62;
              }
              sub_15D7BC0(v35, v34);
              ++v32;
            }
            while ( v32 < v33 );
LABEL_62:
            v32 = (__int64 *)v22[13];
            if ( v32 )
LABEL_63:
              sub_186B220(v32 - 1);
          }
          v36 = (void *)v22[11];
          if ( v36 )
            sub_186B220(v36);
          v37 = (void *)v22[8];
          if ( v37 )
            sub_186B220(v37);
          v38 = v22[5];
          if ( v38 )
            sub_186B220((void *)(v38 - 8));
          v39 = (void *)v22[4];
          if ( v39 )
            sub_186B220(v39);
        }
        else
        {
          v23((_QWORD *)*v20);
        }
        sub_186B220(v22);
      }
      ++v20;
    }
    while ( v21 != v20 );
    v21 = (_QWORD *)a1[26];
    if ( v21 )
    {
LABEL_75:
      *((_DWORD *)v21 - 1) = 0;
      sub_186B220(v21 - 1);
    }
  }
  v40 = (void ***)a1[25];
  if ( v40 )
  {
    v41 = &v40[*((unsigned int *)v40 - 1)];
    if ( v40 == v41 )
      goto LABEL_84;
    do
    {
      v42 = *v40;
      if ( *v40 )
      {
        if ( *v42 )
          sub_186B220(*v42);
        sub_186B220(v42);
      }
      ++v40;
    }
    while ( v41 != v40 );
    v41 = (void ***)a1[25];
    if ( v41 )
    {
LABEL_84:
      *((_DWORD *)v41 - 1) = 0;
      sub_186B220(v41 - 1);
    }
  }
  v43 = (void (__fastcall ***)(void *))a1[24];
  if ( v43 )
  {
    v7 = (*((_DWORD *)v43 + 12))-- == 1;
    if ( v7 )
    {
      (**v43)(v43);
      sub_186B220(v43);
    }
  }
  sub_18572D0(a1 + 23);
  v44 = (void (__fastcall ***)(void *))a1[22];
  if ( v44 )
  {
    v7 = (*((_DWORD *)v44 + 4))-- == 1;
    if ( v7 )
    {
      (**v44)(v44);
      sub_186B220(v44);
    }
  }
  v45 = (__int64 **)a1[21];
  a1[4] = &off_1C55380;
  if ( v45 )
  {
    v46 = &v45[*((unsigned int *)v45 - 1)];
    if ( v45 == v46 )
      goto LABEL_110;
    do
    {
      v47 = *v45;
      if ( *v45 )
      {
        v48 = (void *)v47[5];
        if ( v48 )
          sub_186B220(v48);
        v49 = (void *)v47[2];
        if ( v49 )
          sub_186B220(v49);
        v50 = (__int64 *)v47[1];
        if ( v50 )
        {
          v51 = &v50[*((unsigned int *)v50 - 1)];
          if ( v50 >= v51 )
            goto LABEL_106;
          do
          {
            while ( 1 )
            {
              v52 = *v50;
              if ( *v50 )
              {
                v53 = *v47;
                v7 = (*(_DWORD *)(v52 + 8))-- == 1;
                if ( v7 )
                  break;
              }
              if ( ++v50 >= v51 )
                goto LABEL_105;
            }
            sub_15D7BC0(v53, v52);
            ++v50;
          }
          while ( v50 < v51 );
LABEL_105:
          v50 = (__int64 *)v47[1];
          if ( v50 )
LABEL_106:
            sub_186B220(v50 - 1);
        }
        sub_186B220(v47);
      }
      ++v45;
    }
    while ( v46 != v45 );
    v46 = (__int64 **)a1[21];
    if ( v46 )
    {
LABEL_110:
      *((_DWORD *)v46 - 1) = 0;
      sub_186B220(v46 - 1);
    }
  }
  v54 = (void *)a1[18];
  if ( v54 )
    sub_186B220(v54);
  v55 = (void *)a1[15];
  if ( v55 )
    sub_186B220(v55);
  result = sub_1600000(a1 + 11);
  v57 = (void *)a1[12];
  if ( v57 )
    result = sub_186B220(v57);
  v58 = (void *)a1[8];
  if ( v58 )
    return sub_186B220(v58);
  return result;
}

