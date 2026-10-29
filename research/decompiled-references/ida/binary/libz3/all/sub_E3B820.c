__int64 __fastcall sub_E3B820(__int64 a1)
{
  _QWORD **v1; // r13
  _QWORD *v2; // rbp
  void (__fastcall ***v3)(void *); // rbx
  bool v4; // zf
  __int64 *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // r14
  __int64 v14; // rax
  __int64 *v15; // r12
  __int64 *v16; // rbx
  __int64 *v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 *v20; // rbx
  __int64 *v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rdi
  void *v24; // rbx
  _QWORD **v25; // r13
  _QWORD *v26; // rbp
  void (__fastcall ***v27)(void *); // rbx
  __int64 *v28; // rbx
  __int64 *v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 *v32; // rbx
  __int64 *v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 *v36; // r14
  __int64 v37; // rax
  __int64 *v38; // r12
  __int64 *v39; // rbx
  __int64 *v40; // r15
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 *v43; // rbx
  __int64 *v44; // r15
  __int64 v45; // rsi
  __int64 v46; // rdi
  void *v47; // rbx
  __int64 v48; // rax
  __int64 result; // rax
  _QWORD **v50; // r15
  __int64 v51; // rax
  _QWORD **v52; // [rsp+0h] [rbp-48h]
  _QWORD **v53; // [rsp+0h] [rbp-48h]

  v1 = *(_QWORD ***)(a1 + 88);
  if ( v1 )
  {
    v52 = &v1[*((unsigned int *)v1 - 1)];
    if ( v52 == v1 )
    {
      v25 = *(_QWORD ***)(a1 + 96);
      if ( v25 )
        goto LABEL_54;
      v50 = v52;
    }
    else
    {
      do
      {
        v2 = *v1;
        if ( *v1 )
        {
          v3 = (void (__fastcall ***)(void *))v2[7];
          if ( v3 )
          {
            v4 = (*((_DWORD *)v3 + 12))-- == 1;
            if ( v4 )
            {
              (**v3)(v3);
              sub_186B220(v3);
            }
          }
          sub_18572D0(v2 + 6);
          v5 = (__int64 *)v2[5];
          if ( v5 )
          {
            v6 = &v5[*((unsigned int *)v5 - 1)];
            if ( v5 >= v6 )
              goto LABEL_15;
            do
            {
              while ( 1 )
              {
                v7 = *v5;
                if ( *v5 )
                {
                  v8 = v2[4];
                  v4 = (*(_DWORD *)(v7 + 8))-- == 1;
                  if ( v4 )
                    break;
                }
                if ( ++v5 >= v6 )
                  goto LABEL_14;
              }
              sub_15D7BC0(v8, v7);
              ++v5;
            }
            while ( v5 < v6 );
LABEL_14:
            v5 = (__int64 *)v2[5];
            if ( v5 )
LABEL_15:
              sub_186B220(v5 - 1);
          }
          v9 = (__int64 *)v2[3];
          if ( v9 )
          {
            v10 = &v9[*((unsigned int *)v9 - 1)];
            if ( v9 >= v10 )
              goto LABEL_24;
            do
            {
              while ( 1 )
              {
                v11 = *v9;
                if ( *v9 )
                {
                  v12 = v2[2];
                  v4 = (*(_DWORD *)(v11 + 8))-- == 1;
                  if ( v4 )
                    break;
                }
                if ( ++v9 >= v10 )
                  goto LABEL_23;
              }
              sub_15D7BC0(v12, v11);
              ++v9;
            }
            while ( v9 < v10 );
LABEL_23:
            v9 = (__int64 *)v2[3];
            if ( v9 )
LABEL_24:
              sub_186B220(v9 - 1);
          }
          v13 = (__int64 *)v2[1];
          if ( v13 )
          {
            v14 = *((unsigned int *)v13 - 1);
            if ( (_DWORD)v14 )
            {
              v15 = &v13[4 * v14];
              do
              {
                v16 = (__int64 *)v13[3];
                if ( v16 )
                {
                  v17 = &v16[*((unsigned int *)v16 - 1)];
                  if ( v16 >= v17 )
                    goto LABEL_36;
                  do
                  {
                    while ( 1 )
                    {
                      v18 = *v16;
                      if ( *v16 )
                      {
                        v19 = v13[2];
                        v4 = (*(_DWORD *)(v18 + 8))-- == 1;
                        if ( v4 )
                          break;
                      }
                      if ( ++v16 >= v17 )
                        goto LABEL_35;
                    }
                    sub_15D7BC0(v19, v18);
                    ++v16;
                  }
                  while ( v16 < v17 );
LABEL_35:
                  v16 = (__int64 *)v13[3];
                  if ( v16 )
LABEL_36:
                    sub_186B220(v16 - 1);
                }
                v20 = (__int64 *)v13[1];
                if ( v20 )
                {
                  v21 = &v20[*((unsigned int *)v20 - 1)];
                  if ( v20 >= v21 )
                    goto LABEL_45;
                  do
                  {
                    while ( 1 )
                    {
                      v22 = *v20;
                      if ( *v20 )
                      {
                        v23 = *v13;
                        v4 = (*(_DWORD *)(v22 + 8))-- == 1;
                        if ( v4 )
                          break;
                      }
                      if ( ++v20 >= v21 )
                        goto LABEL_44;
                    }
                    sub_15D7BC0(v23, v22);
                    ++v20;
                  }
                  while ( v20 < v21 );
LABEL_44:
                  v20 = (__int64 *)v13[1];
                  if ( v20 )
LABEL_45:
                    sub_186B220(v20 - 1);
                }
                v13 += 4;
              }
              while ( v13 != v15 );
              v13 = (__int64 *)v2[1];
            }
            sub_186B220(v13 - 1);
          }
          v24 = (void *)*v2;
          if ( *v2 )
          {
            sub_15D95C0(*v2);
            sub_186B220(v24);
          }
          sub_186B220(v2);
        }
        ++v1;
      }
      while ( v52 != v1 );
      v25 = *(_QWORD ***)(a1 + 96);
      if ( v25 )
        goto LABEL_54;
      v50 = *(_QWORD ***)(a1 + 88);
      if ( !v50 )
        goto LABEL_109;
    }
    *((_DWORD *)v50 - 1) = 0;
    goto LABEL_109;
  }
  v25 = *(_QWORD ***)(a1 + 96);
  if ( !v25 )
    goto LABEL_109;
LABEL_54:
  v53 = &v25[*((unsigned int *)v25 - 1)];
  if ( v53 == v25 )
  {
    v51 = *(_QWORD *)(a1 + 88);
    if ( v51 )
      *(_DWORD *)(v51 - 4) = 0;
LABEL_108:
    *((_DWORD *)v25 - 1) = 0;
    goto LABEL_109;
  }
  do
  {
    v26 = *v25;
    if ( *v25 )
    {
      v27 = (void (__fastcall ***)(void *))v26[7];
      if ( v27 )
      {
        v4 = (*((_DWORD *)v27 + 12))-- == 1;
        if ( v4 )
        {
          (**v27)(v27);
          sub_186B220(v27);
        }
      }
      sub_18572D0(v26 + 6);
      v28 = (__int64 *)v26[5];
      if ( v28 )
      {
        v29 = &v28[*((unsigned int *)v28 - 1)];
        if ( v28 >= v29 )
          goto LABEL_67;
        do
        {
          while ( 1 )
          {
            v30 = *v28;
            if ( *v28 )
            {
              v31 = v26[4];
              v4 = (*(_DWORD *)(v30 + 8))-- == 1;
              if ( v4 )
                break;
            }
            if ( ++v28 >= v29 )
              goto LABEL_66;
          }
          sub_15D7BC0(v31, v30);
          ++v28;
        }
        while ( v28 < v29 );
LABEL_66:
        v28 = (__int64 *)v26[5];
        if ( v28 )
LABEL_67:
          sub_186B220(v28 - 1);
      }
      v32 = (__int64 *)v26[3];
      if ( v32 )
      {
        v33 = &v32[*((unsigned int *)v32 - 1)];
        if ( v32 >= v33 )
          goto LABEL_76;
        do
        {
          while ( 1 )
          {
            v34 = *v32;
            if ( *v32 )
            {
              v35 = v26[2];
              v4 = (*(_DWORD *)(v34 + 8))-- == 1;
              if ( v4 )
                break;
            }
            if ( ++v32 >= v33 )
              goto LABEL_75;
          }
          sub_15D7BC0(v35, v34);
          ++v32;
        }
        while ( v32 < v33 );
LABEL_75:
        v32 = (__int64 *)v26[3];
        if ( v32 )
LABEL_76:
          sub_186B220(v32 - 1);
      }
      v36 = (__int64 *)v26[1];
      if ( v36 )
      {
        v37 = *((unsigned int *)v36 - 1);
        if ( (_DWORD)v37 )
        {
          v38 = &v36[4 * v37];
          do
          {
            v39 = (__int64 *)v36[3];
            if ( v39 )
            {
              v40 = &v39[*((unsigned int *)v39 - 1)];
              if ( v39 >= v40 )
                goto LABEL_88;
              do
              {
                while ( 1 )
                {
                  v41 = *v39;
                  if ( *v39 )
                  {
                    v42 = v36[2];
                    v4 = (*(_DWORD *)(v41 + 8))-- == 1;
                    if ( v4 )
                      break;
                  }
                  if ( ++v39 >= v40 )
                    goto LABEL_87;
                }
                sub_15D7BC0(v42, v41);
                ++v39;
              }
              while ( v39 < v40 );
LABEL_87:
              v39 = (__int64 *)v36[3];
              if ( v39 )
LABEL_88:
                sub_186B220(v39 - 1);
            }
            v43 = (__int64 *)v36[1];
            if ( v43 )
            {
              v44 = &v43[*((unsigned int *)v43 - 1)];
              if ( v43 >= v44 )
                goto LABEL_97;
              do
              {
                while ( 1 )
                {
                  v45 = *v43;
                  if ( *v43 )
                  {
                    v46 = *v36;
                    v4 = (*(_DWORD *)(v45 + 8))-- == 1;
                    if ( v4 )
                      break;
                  }
                  if ( ++v43 >= v44 )
                    goto LABEL_96;
                }
                sub_15D7BC0(v46, v45);
                ++v43;
              }
              while ( v43 < v44 );
LABEL_96:
              v43 = (__int64 *)v36[1];
              if ( v43 )
LABEL_97:
                sub_186B220(v43 - 1);
            }
            v36 += 4;
          }
          while ( v36 != v38 );
          v36 = (__int64 *)v26[1];
        }
        sub_186B220(v36 - 1);
      }
      v47 = (void *)*v26;
      if ( *v26 )
      {
        sub_15D95C0(*v26);
        sub_186B220(v47);
      }
      sub_186B220(v26);
    }
    ++v25;
  }
  while ( v53 != v25 );
  v48 = *(_QWORD *)(a1 + 88);
  v25 = *(_QWORD ***)(a1 + 96);
  if ( v48 )
    *(_DWORD *)(v48 - 4) = 0;
  if ( v25 )
    goto LABEL_108;
LABEL_109:
  *(_DWORD *)(a1 + 104) = 0;
  result = *(unsigned __int8 *)(a1 + 108);
  *(_BYTE *)(a1 + 108) = 0;
  return result;
}

