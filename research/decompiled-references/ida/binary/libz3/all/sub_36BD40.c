void __fastcall sub_36BD40(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rdx
  __int64 v4; // rbp
  unsigned int i; // ecx
  __int64 v6; // rax
  _QWORD *v7; // r12
  _QWORD **v8; // r15
  __int64 *v9; // r14
  _QWORD *v10; // rax
  unsigned int v11; // ecx
  _QWORD *v12; // rbx
  _QWORD *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  _QWORD *v17; // rbx
  _QWORD *v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rdi
  _QWORD *v21; // r14
  _QWORD *v22; // rbx
  _QWORD *v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // rbx
  _QWORD *v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v32; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v2 = a1 + 2;
    if ( a2 != a1 + 2 )
    {
      v4 = a1[3];
      if ( !v4 )
        goto LABEL_35;
LABEL_4:
      for ( i = *(_DWORD *)(v4 - 4); ; i = 0 )
      {
        v6 = a1[1];
        v7 = v2 + 2;
        if ( !v6 || i >= *(_DWORD *)(v6 - 4) )
          break;
        v2[1] = 0;
        v21 = v2 + 1;
        v32 = ((char *)v2 - (char *)a1) >> 4;
        if ( (char *)v2 - (char *)a1 > 0 )
        {
          do
          {
            v22 = (_QWORD *)*v21;
            if ( *v21 )
            {
              v23 = &v22[*((unsigned int *)v22 - 1)];
              if ( v22 >= v23 )
                goto LABEL_45;
              do
              {
                while ( 1 )
                {
                  v24 = *v22;
                  if ( *v22 )
                  {
                    v25 = *(v21 - 1);
                    v16 = (*(_DWORD *)(v24 + 8))-- == 1;
                    if ( v16 )
                      break;
                  }
                  if ( ++v22 >= v23 )
                    goto LABEL_44;
                }
                sub_15D7BC0(v25, v24);
                ++v22;
              }
              while ( v22 < v23 );
LABEL_44:
              v22 = (_QWORD *)*v21;
              if ( *v21 )
              {
LABEL_45:
                *((_DWORD *)v22 - 1) = 0;
                sub_186B220(v22 - 1);
              }
            }
            v26 = *(v21 - 2);
            *(v21 - 2) = 0;
            v21 -= 2;
            v21[2] = v26;
            --v32;
          }
          while ( v32 );
        }
        v27 = (_QWORD *)a1[1];
        if ( v27 )
        {
          v28 = &v27[*((unsigned int *)v27 - 1)];
          if ( v27 >= v28 )
            goto LABEL_55;
          do
          {
            while ( 1 )
            {
              v29 = *v27;
              if ( *v27 )
              {
                v30 = *a1;
                v16 = (*(_DWORD *)(v29 + 8))-- == 1;
                if ( v16 )
                  break;
              }
              if ( ++v27 >= v28 )
                goto LABEL_54;
            }
            sub_15D7BC0(v30, v29);
            ++v27;
          }
          while ( v27 < v28 );
LABEL_54:
          v27 = (_QWORD *)a1[1];
          if ( v27 )
          {
LABEL_55:
            *((_DWORD *)v27 - 1) = 0;
            sub_186B220(v27 - 1);
          }
        }
        a1[1] = v4;
        if ( a2 == v7 )
          return;
LABEL_34:
        v2 = v7;
        v4 = v7[1];
        if ( v4 )
          goto LABEL_4;
LABEL_35:
        ;
      }
      v2[1] = 0;
      v8 = (_QWORD **)(v2 + 1);
      v9 = v2;
      if ( !v4 )
        goto LABEL_23;
LABEL_8:
      v10 = *(v8 - 2);
      v11 = *(_DWORD *)(v4 - 4);
      if ( v10 )
      {
        while ( v11 < *((_DWORD *)v10 - 1) )
        {
          if ( v9 != (__int64 *)(v8 - 3) )
          {
            v12 = *v8;
            if ( *v8 )
            {
              v13 = &v12[*((unsigned int *)v12 - 1)];
              if ( v12 >= v13 )
                goto LABEL_19;
              do
              {
                while ( 1 )
                {
                  v14 = *v12;
                  if ( *v12 )
                  {
                    v15 = (__int64)*(v8 - 1);
                    v16 = (*(_DWORD *)(v14 + 8))-- == 1;
                    if ( v16 )
                      break;
                  }
                  if ( ++v12 >= v13 )
                    goto LABEL_18;
                }
                sub_15D7BC0(v15, v14);
                ++v12;
              }
              while ( v12 < v13 );
LABEL_18:
              v12 = *v8;
              if ( *v8 )
              {
LABEL_19:
                *((_DWORD *)v12 - 1) = 0;
                sub_186B220(v12 - 1);
              }
              v10 = *(v8 - 2);
            }
            *v8 = v10;
            *(v8 - 2) = nullptr;
          }
          v8 -= 2;
          v9 = (__int64 *)(v8 - 1);
          if ( v4 )
            goto LABEL_8;
LABEL_23:
          v10 = *(v8 - 2);
          v11 = 0;
          if ( !v10 )
            break;
        }
      }
      v17 = (_QWORD *)v9[1];
      if ( v17 )
      {
        v18 = &v17[*((unsigned int *)v17 - 1)];
        if ( v17 >= v18 )
          goto LABEL_32;
        do
        {
          while ( 1 )
          {
            v19 = *v17;
            if ( *v17 )
            {
              v20 = *v9;
              v16 = (*(_DWORD *)(v19 + 8))-- == 1;
              if ( v16 )
                break;
            }
            if ( ++v17 >= v18 )
              goto LABEL_31;
          }
          sub_15D7BC0(v20, v19);
          ++v17;
        }
        while ( v17 < v18 );
LABEL_31:
        v17 = (_QWORD *)v9[1];
        if ( v17 )
        {
LABEL_32:
          *((_DWORD *)v17 - 1) = 0;
          sub_186B220(v17 - 1);
        }
      }
      v9[1] = v4;
      if ( a2 == v7 )
        return;
      goto LABEL_34;
    }
  }
}

