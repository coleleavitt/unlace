void __fastcall sub_482EA0(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v4; // r12
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // r14
  void *v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  _QWORD *v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // r14
  void *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 *v20; // rbx
  __int64 *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  _QWORD *v26; // rbx
  void (__fastcall ***v27)(void *); // r14
  _QWORD *v28; // r14
  __int64 *v29; // r14
  __int64 *v30; // r15
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 *v33; // r14
  __int64 *v34; // r15
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 *v37; // r14
  __int64 *v38; // r15
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v2 )
    {
      v4 = v1 + 136 * v2;
      do
      {
        v5 = *(_QWORD **)(v1 + 112);
        if ( v5 )
        {
          v6 = *((unsigned int *)v5 - 1);
          if ( (_DWORD)v6 )
          {
            v7 = &v5[v6];
            do
            {
              while ( *v5 )
              {
                v8 = (void *)(*v5++ - 8LL);
                sub_186B220(v8);
                if ( v7 == v5 )
                  goto LABEL_9;
              }
              ++v5;
            }
            while ( v5 != v7 );
LABEL_9:
            v5 = *(_QWORD **)(v1 + 112);
          }
          sub_186B220(v5 - 1);
        }
        v9 = *(__int64 **)(v1 + 104);
        if ( v9 )
        {
          v10 = &v9[*((unsigned int *)v9 - 1)];
          if ( v9 >= v10 )
            goto LABEL_19;
          do
          {
            while ( 1 )
            {
              v11 = *v9;
              if ( *v9 )
              {
                v12 = *(_QWORD *)(v1 + 96);
                v13 = (*(_DWORD *)(v11 + 8))-- == 1;
                if ( v13 )
                  break;
              }
              if ( ++v9 >= v10 )
                goto LABEL_18;
            }
            sub_15D7BC0(v12, v11);
            ++v9;
          }
          while ( v9 < v10 );
LABEL_18:
          v9 = *(__int64 **)(v1 + 104);
          if ( v9 )
LABEL_19:
            sub_186B220(v9 - 1);
        }
        v14 = *(_QWORD **)(v1 + 80);
        if ( v14 )
        {
          v15 = *((unsigned int *)v14 - 1);
          if ( (_DWORD)v15 )
          {
            v16 = &v14[v15];
            do
            {
              while ( *v14 )
              {
                v17 = (void *)(*v14++ - 8LL);
                sub_186B220(v17);
                if ( v16 == v14 )
                  goto LABEL_25;
              }
              ++v14;
            }
            while ( v14 != v16 );
LABEL_25:
            v14 = *(_QWORD **)(v1 + 80);
          }
          sub_186B220(v14 - 1);
        }
        v18 = *(_QWORD *)(v1 + 72);
        if ( v18 )
          sub_186B220((void *)(v18 - 8));
        v19 = *(_QWORD *)(v1 + 64);
        if ( v19 )
          sub_186B220((void *)(v19 - 8));
        v20 = *(__int64 **)(v1 + 56);
        if ( v20 )
        {
          v21 = &v20[*((unsigned int *)v20 - 1)];
          if ( v20 >= v21 )
            goto LABEL_39;
          do
          {
            while ( 1 )
            {
              v22 = *v20;
              if ( *v20 )
              {
                v23 = *(_QWORD *)(v1 + 48);
                v13 = (*(_DWORD *)(v22 + 8))-- == 1;
                if ( v13 )
                  break;
              }
              if ( ++v20 >= v21 )
                goto LABEL_38;
            }
            sub_15D7BC0(v23, v22);
            ++v20;
          }
          while ( v20 < v21 );
LABEL_38:
          v20 = *(__int64 **)(v1 + 56);
          if ( v20 )
LABEL_39:
            sub_186B220(v20 - 1);
        }
        v24 = *(_QWORD *)(v1 + 40);
        if ( v24 )
          sub_186B220((void *)(v24 - 8));
        v25 = *(_QWORD *)(v1 + 16);
        if ( v25 )
          sub_186B220((void *)(v25 - 8));
        v26 = *(_QWORD **)v1;
        if ( *(_QWORD *)v1 )
        {
          v13 = (*(_DWORD *)v26)-- == 1;
          if ( v13 )
          {
            v27 = (void (__fastcall ***)(void *))v26[11];
            if ( v27 )
            {
              v13 = (*((_DWORD *)v27 + 4))-- == 1;
              if ( v13 )
              {
                (**v27)(v27);
                sub_186B220(v27);
              }
            }
            v28 = (_QWORD *)v26[10];
            if ( v28 )
            {
              v13 = (*(_DWORD *)v28)-- == 1;
              if ( v13 )
              {
                sub_41CB00(v28);
                sub_186B220(v28);
              }
            }
            v29 = (__int64 *)v26[9];
            if ( v29 )
            {
              v30 = &v29[*((unsigned int *)v29 - 1)];
              if ( v29 >= v30 )
                goto LABEL_67;
              do
              {
                while ( 1 )
                {
                  v31 = *v29;
                  if ( *v29 )
                  {
                    v32 = v26[8];
                    v13 = (*(_DWORD *)(v31 + 8))-- == 1;
                    if ( v13 )
                      break;
                  }
                  if ( ++v29 >= v30 )
                    goto LABEL_66;
                }
                sub_15D7BC0(v32, v31);
                ++v29;
              }
              while ( v29 < v30 );
LABEL_66:
              v29 = (__int64 *)v26[9];
              if ( v29 )
LABEL_67:
                sub_186B220(v29 - 1);
            }
            v33 = (__int64 *)v26[7];
            if ( v33 )
            {
              v34 = &v33[*((unsigned int *)v33 - 1)];
              if ( v33 >= v34 )
                goto LABEL_76;
              do
              {
                while ( 1 )
                {
                  v35 = *v33;
                  if ( *v33 )
                  {
                    v36 = v26[6];
                    v13 = (*(_DWORD *)(v35 + 8))-- == 1;
                    if ( v13 )
                      break;
                  }
                  if ( ++v33 >= v34 )
                    goto LABEL_75;
                }
                sub_15D7BC0(v36, v35);
                ++v33;
              }
              while ( v33 < v34 );
LABEL_75:
              v33 = (__int64 *)v26[7];
              if ( v33 )
LABEL_76:
                sub_186B220(v33 - 1);
            }
            v37 = (__int64 *)v26[5];
            if ( v37 )
            {
              v38 = &v37[*((unsigned int *)v37 - 1)];
              if ( v37 >= v38 )
                goto LABEL_85;
              do
              {
                while ( 1 )
                {
                  v39 = *v37;
                  if ( *v37 )
                  {
                    v40 = v26[4];
                    v13 = (*(_DWORD *)(v39 + 8))-- == 1;
                    if ( v13 )
                      break;
                  }
                  if ( ++v37 >= v38 )
                    goto LABEL_84;
                }
                sub_15D7BC0(v40, v39);
                ++v37;
              }
              while ( v37 < v38 );
LABEL_84:
              v37 = (__int64 *)v26[5];
              if ( v37 )
LABEL_85:
                sub_186B220(v37 - 1);
            }
            v41 = v26[2];
            if ( v41 )
            {
              v42 = v26[3];
              v13 = (*(_DWORD *)(v41 + 8))-- == 1;
              if ( v13 )
                sub_15D7BC0(v42, v41);
            }
            sub_186B220(v26);
          }
        }
        v1 += 136;
      }
      while ( v1 != v4 );
      v1 = *a1;
    }
    sub_186B220((void *)(v1 - 8));
  }
}

