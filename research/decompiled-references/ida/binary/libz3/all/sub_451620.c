__int64 __fastcall sub_451620(_QWORD *a1)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 *v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r13
  _QWORD *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // r14
  void *v14; // rdi
  __int64 *v15; // rbx
  __int64 *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdi
  _QWORD *v19; // rbx
  __int64 v20; // rax
  _QWORD *v21; // r14
  void *v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 *v25; // rbx
  __int64 *v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  _QWORD *v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // rdi
  void (__fastcall ***v34)(void *); // r14
  _QWORD *v35; // r14
  __int64 *v36; // r14
  __int64 *v37; // r15
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 *v40; // r14
  __int64 *v41; // r15
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 *v44; // r14
  __int64 *v45; // r15
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdi

  result = a1[17];
  if ( result )
    result = sub_186B220((void *)(result - 8));
  v3 = (__int64 *)a1[15];
  if ( v3 )
  {
    result = *((unsigned int *)v3 - 1);
    v4 = &v3[result];
    if ( v3 >= v4 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = a1[14];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_10;
      }
      result = sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_10:
    v3 = (__int64 *)a1[15];
    if ( v3 )
LABEL_11:
      result = sub_186B220(v3 - 1);
  }
  v8 = a1[10];
  if ( v8 )
  {
    v9 = *(unsigned int *)(v8 - 4);
    if ( (_DWORD)v9 )
    {
      v10 = v8 + 136 * v9;
      do
      {
        v11 = *(_QWORD **)(v8 + 112);
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
                  goto LABEL_20;
              }
              ++v11;
            }
            while ( v11 != v13 );
LABEL_20:
            v11 = *(_QWORD **)(v8 + 112);
          }
          sub_186B220(v11 - 1);
        }
        v15 = *(__int64 **)(v8 + 104);
        if ( v15 )
        {
          v16 = &v15[*((unsigned int *)v15 - 1)];
          if ( v15 >= v16 )
            goto LABEL_30;
          do
          {
            while ( 1 )
            {
              v17 = *v15;
              if ( *v15 )
              {
                v18 = *(_QWORD *)(v8 + 96);
                v7 = (*(_DWORD *)(v17 + 8))-- == 1;
                if ( v7 )
                  break;
              }
              if ( ++v15 >= v16 )
                goto LABEL_29;
            }
            sub_15D7BC0(v18, v17);
            ++v15;
          }
          while ( v15 < v16 );
LABEL_29:
          v15 = *(__int64 **)(v8 + 104);
          if ( v15 )
LABEL_30:
            sub_186B220(v15 - 1);
        }
        v19 = *(_QWORD **)(v8 + 80);
        if ( v19 )
        {
          v20 = *((unsigned int *)v19 - 1);
          if ( (_DWORD)v20 )
          {
            v21 = &v19[v20];
            do
            {
              while ( *v19 )
              {
                v22 = (void *)(*v19++ - 8LL);
                sub_186B220(v22);
                if ( v21 == v19 )
                  goto LABEL_36;
              }
              ++v19;
            }
            while ( v19 != v21 );
LABEL_36:
            v19 = *(_QWORD **)(v8 + 80);
          }
          sub_186B220(v19 - 1);
        }
        v23 = *(_QWORD *)(v8 + 72);
        if ( v23 )
          sub_186B220((void *)(v23 - 8));
        v24 = *(_QWORD *)(v8 + 64);
        if ( v24 )
          sub_186B220((void *)(v24 - 8));
        v25 = *(__int64 **)(v8 + 56);
        if ( v25 )
        {
          v26 = &v25[*((unsigned int *)v25 - 1)];
          if ( v25 >= v26 )
            goto LABEL_50;
          do
          {
            while ( 1 )
            {
              v27 = *v25;
              if ( *v25 )
              {
                v28 = *(_QWORD *)(v8 + 48);
                v7 = (*(_DWORD *)(v27 + 8))-- == 1;
                if ( v7 )
                  break;
              }
              if ( ++v25 >= v26 )
                goto LABEL_49;
            }
            sub_15D7BC0(v28, v27);
            ++v25;
          }
          while ( v25 < v26 );
LABEL_49:
          v25 = *(__int64 **)(v8 + 56);
          if ( v25 )
LABEL_50:
            sub_186B220(v25 - 1);
        }
        v29 = *(_QWORD *)(v8 + 40);
        if ( v29 )
          sub_186B220((void *)(v29 - 8));
        v30 = *(_QWORD *)(v8 + 16);
        if ( v30 )
          sub_186B220((void *)(v30 - 8));
        v31 = *(_QWORD **)v8;
        if ( *(_QWORD *)v8 )
        {
          v7 = (*(_DWORD *)v31)-- == 1;
          if ( v7 )
          {
            v34 = (void (__fastcall ***)(void *))v31[11];
            if ( v34 )
            {
              v7 = (*((_DWORD *)v34 + 4))-- == 1;
              if ( v7 )
              {
                (**v34)(v34);
                sub_186B220(v34);
              }
            }
            v35 = (_QWORD *)v31[10];
            if ( v35 )
            {
              v7 = (*(_DWORD *)v35)-- == 1;
              if ( v7 )
              {
                sub_41CB00(v35);
                sub_186B220(v35);
              }
            }
            v36 = (__int64 *)v31[9];
            if ( v36 )
            {
              v37 = &v36[*((unsigned int *)v36 - 1)];
              if ( v36 >= v37 )
                goto LABEL_82;
              do
              {
                while ( 1 )
                {
                  v38 = *v36;
                  if ( *v36 )
                  {
                    v39 = v31[8];
                    v7 = (*(_DWORD *)(v38 + 8))-- == 1;
                    if ( v7 )
                      break;
                  }
                  if ( ++v36 >= v37 )
                    goto LABEL_81;
                }
                sub_15D7BC0(v39, v38);
                ++v36;
              }
              while ( v36 < v37 );
LABEL_81:
              v36 = (__int64 *)v31[9];
              if ( v36 )
LABEL_82:
                sub_186B220(v36 - 1);
            }
            v40 = (__int64 *)v31[7];
            if ( v40 )
            {
              v41 = &v40[*((unsigned int *)v40 - 1)];
              if ( v40 >= v41 )
                goto LABEL_91;
              do
              {
                while ( 1 )
                {
                  v42 = *v40;
                  if ( *v40 )
                  {
                    v43 = v31[6];
                    v7 = (*(_DWORD *)(v42 + 8))-- == 1;
                    if ( v7 )
                      break;
                  }
                  if ( ++v40 >= v41 )
                    goto LABEL_90;
                }
                sub_15D7BC0(v43, v42);
                ++v40;
              }
              while ( v40 < v41 );
LABEL_90:
              v40 = (__int64 *)v31[7];
              if ( v40 )
LABEL_91:
                sub_186B220(v40 - 1);
            }
            v44 = (__int64 *)v31[5];
            if ( v44 )
            {
              v45 = &v44[*((unsigned int *)v44 - 1)];
              if ( v44 >= v45 )
                goto LABEL_100;
              do
              {
                while ( 1 )
                {
                  v46 = *v44;
                  if ( *v44 )
                  {
                    v47 = v31[4];
                    v7 = (*(_DWORD *)(v46 + 8))-- == 1;
                    if ( v7 )
                      break;
                  }
                  if ( ++v44 >= v45 )
                    goto LABEL_99;
                }
                sub_15D7BC0(v47, v46);
                ++v44;
              }
              while ( v44 < v45 );
LABEL_99:
              v44 = (__int64 *)v31[5];
              if ( v44 )
LABEL_100:
                sub_186B220(v44 - 1);
            }
            v48 = v31[2];
            if ( v48 )
            {
              v49 = v31[3];
              v7 = (*(_DWORD *)(v48 + 8))-- == 1;
              if ( v7 )
                sub_15D7BC0(v49, v48);
            }
            sub_186B220(v31);
          }
        }
        v8 += 136;
      }
      while ( v8 != v10 );
      v8 = a1[10];
    }
    result = sub_186B220((void *)(v8 - 8));
  }
  v32 = a1[7];
  if ( v32 )
  {
    v33 = a1[8];
    v7 = (*(_DWORD *)(v32 + 8))-- == 1;
    if ( v7 )
      return sub_15D7BC0(v33, v32);
  }
  return result;
}

