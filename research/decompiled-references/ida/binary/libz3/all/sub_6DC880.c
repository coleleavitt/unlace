__int64 __fastcall sub_6DC880(__int64 a1)
{
  __int64 v2; // rbp
  _QWORD *v3; // rdi
  _QWORD *v4; // rbp
  _QWORD *v5; // r14
  __int64 *v6; // r13
  __int64 *v7; // rbx
  __int64 *v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 *v12; // rbx
  __int64 *v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 *v16; // rbx
  __int64 *v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 *v20; // rbx
  __int64 *v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rdi
  _QWORD *v24; // rax
  __int64 *v25; // rbx
  __int64 *v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // rdi
  void *v29; // rdi
  void *v30; // rdi
  _QWORD *v31; // rbx
  void *v32; // rdi
  void *v33; // rdi
  __int64 v34; // rax
  __int64 *v35; // rbx
  __int64 *v36; // rbp
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 result; // rax
  __int64 *v42; // rbx
  __int64 *v43; // rbp
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 *v46; // rbx
  __int64 *v47; // rbp
  __int64 v48; // rsi
  __int64 v49; // rdi

  v2 = *(unsigned int *)(a1 + 224);
  *(_QWORD *)a1 = &off_1C53230;
  v3 = *(_QWORD **)(a1 + 216);
  v4 = &v3[4 * v2];
  v5 = v3;
  if ( v3 != v4 )
  {
    while ( *v5 <= 1u )
    {
      v5 += 4;
      if ( v4 == v5 )
        goto LABEL_50;
    }
    if ( v4 != v5 )
    {
      do
      {
        v6 = (__int64 *)v5[2];
        if ( v6 )
        {
          v7 = (__int64 *)v6[7];
          if ( v7 )
          {
            v8 = &v7[*((unsigned int *)v7 - 1)];
            if ( v7 >= v8 )
              goto LABEL_15;
            do
            {
              while ( 1 )
              {
                v9 = *v7;
                if ( *v7 )
                {
                  v10 = v6[6];
                  v11 = (*(_DWORD *)(v9 + 8))-- == 1;
                  if ( v11 )
                    break;
                }
                if ( ++v7 >= v8 )
                  goto LABEL_14;
              }
              sub_15D7BC0(v10, v9);
              ++v7;
            }
            while ( v7 < v8 );
LABEL_14:
            v7 = (__int64 *)v6[7];
            if ( v7 )
LABEL_15:
              sub_186B220(v7 - 1);
          }
          v12 = (__int64 *)v6[5];
          if ( v12 )
          {
            v13 = &v12[*((unsigned int *)v12 - 1)];
            if ( v12 >= v13 )
              goto LABEL_24;
            do
            {
              while ( 1 )
              {
                v14 = *v12;
                if ( *v12 )
                {
                  v15 = v6[4];
                  v11 = (*(_DWORD *)(v14 + 8))-- == 1;
                  if ( v11 )
                    break;
                }
                if ( ++v12 >= v13 )
                  goto LABEL_23;
              }
              sub_15D7BC0(v15, v14);
              ++v12;
            }
            while ( v12 < v13 );
LABEL_23:
            v12 = (__int64 *)v6[5];
            if ( v12 )
LABEL_24:
              sub_186B220(v12 - 1);
          }
          v16 = (__int64 *)v6[3];
          if ( v16 )
          {
            v17 = &v16[*((unsigned int *)v16 - 1)];
            if ( v16 >= v17 )
              goto LABEL_33;
            do
            {
              while ( 1 )
              {
                v18 = *v16;
                if ( *v16 )
                {
                  v19 = v6[2];
                  v11 = (*(_DWORD *)(v18 + 8))-- == 1;
                  if ( v11 )
                    break;
                }
                if ( ++v16 >= v17 )
                  goto LABEL_32;
              }
              sub_15D7BC0(v19, v18);
              ++v16;
            }
            while ( v16 < v17 );
LABEL_32:
            v16 = (__int64 *)v6[3];
            if ( v16 )
LABEL_33:
              sub_186B220(v16 - 1);
          }
          v20 = (__int64 *)v6[1];
          if ( v20 )
          {
            v21 = &v20[*((unsigned int *)v20 - 1)];
            if ( v20 >= v21 )
              goto LABEL_42;
            do
            {
              while ( 1 )
              {
                v22 = *v20;
                if ( *v20 )
                {
                  v23 = *v6;
                  v11 = (*(_DWORD *)(v22 + 8))-- == 1;
                  if ( v11 )
                    break;
                }
                if ( ++v20 >= v21 )
                  goto LABEL_41;
              }
              sub_15D7BC0(v23, v22);
              ++v20;
            }
            while ( v20 < v21 );
LABEL_41:
            v20 = (__int64 *)v6[1];
            if ( v20 )
LABEL_42:
              sub_186B220(v20 - 1);
          }
          sub_186B220(v6);
        }
        v24 = v5 + 4;
        if ( v4 == v5 + 4 )
          break;
        while ( 1 )
        {
          v5 = v24;
          if ( *v24 > 1u )
            break;
          v24 += 4;
          if ( v4 == v24 )
            goto LABEL_49;
        }
      }
      while ( v4 != v24 );
LABEL_49:
      v3 = *(_QWORD **)(a1 + 216);
    }
  }
LABEL_50:
  if ( v3 )
    sub_186B220(v3);
  v25 = *(__int64 **)(a1 + 208);
  if ( v25 )
  {
    v26 = &v25[*((unsigned int *)v25 - 1)];
    if ( v25 >= v26 )
      goto LABEL_60;
    do
    {
      while ( 1 )
      {
        v27 = *v25;
        if ( *v25 )
        {
          v28 = *(_QWORD *)(a1 + 200);
          v11 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v25 >= v26 )
          goto LABEL_59;
      }
      sub_15D7BC0(v28, v27);
      ++v25;
    }
    while ( v25 < v26 );
LABEL_59:
    v25 = *(__int64 **)(a1 + 208);
    if ( v25 )
LABEL_60:
      sub_186B220(v25 - 1);
  }
  v29 = *(void **)(a1 + 184);
  if ( v29 )
    sub_186B220(v29);
  v30 = *(void **)(a1 + 176);
  if ( v30 )
    sub_186B220(v30);
  v31 = *(_QWORD **)(a1 + 128);
  while ( v31 )
  {
    v32 = v31;
    v31 = (_QWORD *)*v31;
    operator delete(v32, 0x18u);
  }
  memset(*(void **)(a1 + 112), 0, 8LL * *(_QWORD *)(a1 + 120));
  v33 = *(void **)(a1 + 112);
  v34 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  if ( v33 != (void *)(a1 + 160) )
    operator delete(v33, 8 * v34);
  v35 = *(__int64 **)(a1 + 104);
  if ( v35 )
  {
    v36 = &v35[*((unsigned int *)v35 - 1)];
    if ( v35 >= v36 )
      goto LABEL_77;
    do
    {
      while ( 1 )
      {
        v37 = *v35;
        if ( *v35 )
        {
          v38 = *(_QWORD *)(a1 + 96);
          v11 = (*(_DWORD *)(v37 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v35 >= v36 )
          goto LABEL_76;
      }
      sub_15D7BC0(v38, v37);
      ++v35;
    }
    while ( v35 < v36 );
LABEL_76:
    v35 = *(__int64 **)(a1 + 104);
    if ( v35 )
LABEL_77:
      sub_186B220(v35 - 1);
  }
  v39 = *(_QWORD *)(a1 + 88);
  if ( v39 )
    sub_186B220((void *)(v39 - 8));
  v40 = *(_QWORD *)(a1 + 80);
  if ( v40 )
    sub_186B220((void *)(v40 - 8));
  result = *(_QWORD *)(a1 + 72);
  if ( result )
    result = sub_186B220((void *)(result - 8));
  v42 = *(__int64 **)(a1 + 64);
  if ( v42 )
  {
    result = *((unsigned int *)v42 - 1);
    v43 = &v42[result];
    if ( v42 >= v43 )
      goto LABEL_92;
    do
    {
      while ( 1 )
      {
        v44 = *v42;
        if ( *v42 )
        {
          v45 = *(_QWORD *)(a1 + 56);
          v11 = (*(_DWORD *)(v44 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v42 >= v43 )
          goto LABEL_91;
      }
      result = sub_15D7BC0(v45, v44);
      ++v42;
    }
    while ( v42 < v43 );
LABEL_91:
    v42 = *(__int64 **)(a1 + 64);
    if ( v42 )
LABEL_92:
      result = sub_186B220(v42 - 1);
  }
  v46 = *(__int64 **)(a1 + 48);
  if ( v46 )
  {
    result = *((unsigned int *)v46 - 1);
    v47 = &v46[result];
    if ( v46 >= v47 )
      return sub_186B220(v46 - 1);
    do
    {
      while ( 1 )
      {
        v48 = *v46;
        if ( *v46 )
        {
          v49 = *(_QWORD *)(a1 + 40);
          v11 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v46 >= v47 )
          goto LABEL_100;
      }
      result = sub_15D7BC0(v49, v48);
      ++v46;
    }
    while ( v46 < v47 );
LABEL_100:
    v46 = *(__int64 **)(a1 + 48);
    if ( v46 )
      return sub_186B220(v46 - 1);
  }
  return result;
}

