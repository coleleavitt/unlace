void __fastcall sub_494DE0(__int64 *dest, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 *a6)
{
  char *v6; // r13
  __int64 *v7; // r12
  __int64 *v9; // rbx
  size_t v10; // r14
  char *v11; // r14
  __int64 v12; // r10
  __int64 v13; // r11
  size_t v14; // r14
  char *v15; // r11
  __int64 *v16; // rbx
  char *v17; // r11
  __int64 *i; // r10
  _DWORD *v19; // rax
  __int64 v20; // r9
  char v21; // cl
  _DWORD *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r8
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // dx
  __int64 v27; // rbp
  bool v28; // al
  int *v29; // rcx
  int *v30; // rdx
  int v31; // edi
  int v32; // eax
  bool v33; // cf
  signed __int64 v34; // rdx
  int v35; // edx
  int v36; // ecx
  __int64 v37; // rax
  _DWORD *v38; // rax
  _DWORD *v39; // rdx
  unsigned __int16 v40; // ax
  unsigned int v41; // edx
  unsigned int v42; // eax
  _DWORD *v43; // r14
  _DWORD *v44; // rax

  v6 = (char *)a6;
  v7 = dest;
  v9 = a2;
  if ( a4 > a5 )
  {
    v14 = (char *)a3 - (char *)a2;
    if ( (char *)a3 - (char *)a2 <= 8 )
    {
      if ( (char *)a3 - (char *)a2 == 8 )
      {
        v37 = *a2;
        v15 = (char *)(a6 + 1);
        *a6 = *a2;
        if ( a2 == dest )
        {
          *(a3 - 1) = v37;
          return;
        }
      }
      else
      {
        v15 = (char *)a6 + v14;
        if ( a2 == dest )
          return;
      }
    }
    else
    {
      memmove(a6, a2, (char *)a3 - (char *)a2);
      v15 = &v6[v14];
      if ( a2 == dest )
      {
        memmove(a2, v6, v14);
        return;
      }
    }
    if ( v6 == v15 )
      return;
    v16 = a2 - 1;
    v17 = v15 - 8;
    for ( i = a3 - 1; ; --i )
    {
      v23 = *v16;
      v24 = *(_QWORD *)v17;
      if ( *v16 == *(_QWORD *)v17 )
        goto LABEL_22;
      v25 = *(_WORD *)(v24 + 4);
      v26 = *(_WORD *)(v23 + 4);
      if ( v25 )
        break;
      v19 = *(_DWORD **)(*(_QWORD *)(v24 + 16) + 24LL);
      if ( !v19 || *v19 || v19[1] != 8 || *(_DWORD *)(v24 + 24) != 1 )
      {
        if ( v26 )
          goto LABEL_31;
LABEL_19:
        v20 = *(_QWORD *)v17;
        v21 = 0;
        v22 = *(_DWORD **)(*(_QWORD *)(v23 + 16) + 24LL);
        if ( !v22 )
          goto LABEL_33;
        goto LABEL_20;
      }
      v20 = *(_QWORD *)(v24 + 32);
      if ( v26 )
      {
        if ( v23 == v20 )
          goto LABEL_22;
        v25 = *(_WORD *)(v20 + 4);
        v27 = *v16;
        if ( v25 == v26 )
          goto LABEL_45;
        goto LABEL_29;
      }
      v22 = *(_DWORD **)(*(_QWORD *)(v23 + 16) + 24LL);
      if ( !v22 )
        goto LABEL_21;
      v21 = 1;
LABEL_20:
      if ( *v22 || v22[1] != 8 || *(_DWORD *)(v23 + 24) != 1 )
      {
LABEL_21:
        if ( v23 == v20 )
          goto LABEL_22;
LABEL_33:
        v25 = *(_WORD *)(v20 + 4);
        v27 = *v16;
LABEL_34:
        if ( v25 == v26 )
        {
          if ( v25 )
            goto LABEL_45;
          v29 = *(int **)(*(_QWORD *)(v20 + 16) + 24LL);
          v30 = *(int **)(*(_QWORD *)(v27 + 16) + 24LL);
          if ( v29 )
          {
            v31 = *v29;
            if ( v30 )
            {
              v32 = *v30;
              if ( v31 != *v30 )
                goto LABEL_39;
              v32 = v29[1];
              v35 = v30[1];
              v36 = v35;
              if ( v32 != v35 )
              {
LABEL_64:
                v28 = v32 < v36;
                goto LABEL_30;
              }
              if ( v31 == 5 )
              {
                if ( v35 == 2 || v32 == 4 )
                {
LABEL_75:
                  if ( *(_DWORD *)(v20 + 24) != 2 )
                    goto LABEL_76;
                }
                else
                {
                  if ( v32 != 3 )
                  {
                    if ( v32 == 5 )
                      goto LABEL_75;
LABEL_76:
                    v38 = nullptr;
                    if ( v35 == 2 )
                    {
                      if ( *(_DWORD *)(v27 + 24) != 2 )
                        goto LABEL_45;
                    }
                    else
                    {
LABEL_77:
                      if ( v35 != 4 && v35 != 3 && v35 != 5 )
                        goto LABEL_79;
LABEL_78:
                      if ( *(_DWORD *)(v27 + 24) != 2 )
                      {
LABEL_79:
                        if ( v38 )
                          goto LABEL_22;
                        goto LABEL_45;
                      }
                    }
                    v39 = *(_DWORD **)(v27 + 40);
                    v27 = *(_QWORD *)(v27 + 32);
                    if ( !v38 )
                    {
                      if ( v39 )
                      {
LABEL_31:
                        *i = v23;
                        if ( v7 == v16 )
                          goto LABEL_53;
LABEL_32:
                        --v16;
                        continue;
                      }
                      goto LABEL_45;
                    }
                    if ( !v39 )
                      goto LABEL_22;
                    if ( v20 == v27 )
                    {
                      v28 = *v38 < *v39;
                      goto LABEL_30;
                    }
                    v40 = *(_WORD *)(v20 + 4);
                    v33 = v40 < *(_WORD *)(v27 + 4);
                    if ( v40 == *(_WORD *)(v27 + 4) )
                    {
                      if ( v40 )
                        goto LABEL_45;
                      v41 = *(unsigned __int16 *)(v20 + 28);
                      v42 = *(unsigned __int16 *)(v27 + 28);
                      v33 = v41 < v42;
                      if ( v41 == v42 )
                      {
                        v43 = sub_490FE0(v20);
                        v44 = sub_490FE0(v27);
                        if ( v43 && v44 )
                        {
                          if ( v43 == v44 )
                            goto LABEL_45;
                          v28 = *v43 < *v44;
LABEL_30:
                          if ( v28 )
                            goto LABEL_31;
                          goto LABEL_22;
                        }
                        v33 = v43 < v44;
                        if ( v43 == v44 )
                          goto LABEL_45;
                      }
                    }
LABEL_46:
                    v28 = v33;
                    goto LABEL_30;
                  }
                  if ( *(_DWORD *)(v20 + 24) != 2 )
                  {
                    v38 = nullptr;
LABEL_95:
                    if ( v35 != 2 )
                      goto LABEL_77;
                    goto LABEL_78;
                  }
                }
                v38 = *(_DWORD **)(v20 + 40);
                v20 = *(_QWORD *)(v20 + 32);
                goto LABEL_95;
              }
LABEL_45:
              v33 = *(_DWORD *)v20 < *(_DWORD *)v27;
              goto LABEL_46;
            }
            v32 = -1;
            if ( v31 == -1 )
            {
              v32 = v29[1];
              v36 = -1;
              if ( v32 != -1 )
                goto LABEL_64;
              goto LABEL_45;
            }
          }
          else
          {
            if ( !v30 )
              goto LABEL_45;
            v32 = *v30;
            if ( *v30 == -1 )
            {
              v36 = v30[1];
              if ( v36 != -1 )
                goto LABEL_64;
              goto LABEL_45;
            }
            v31 = -1;
          }
LABEL_39:
          v28 = v32 > v31;
          goto LABEL_30;
        }
LABEL_29:
        v28 = v25 < v26;
        goto LABEL_30;
      }
      v27 = *(_QWORD *)(v23 + 32);
      if ( v27 != v20 )
      {
        v25 = *(_WORD *)(v20 + 4);
        v26 = *(_WORD *)(v27 + 4);
        goto LABEL_34;
      }
      if ( !v21 )
      {
        *i = v23;
        if ( v7 == v16 )
        {
LABEL_53:
          v34 = v17 + 8 - v6;
          if ( v34 <= 8 )
          {
            if ( v34 == 8 )
              *(i - 1) = *(_QWORD *)v6;
          }
          else
          {
            memmove((char *)i - v34, v6, v34);
          }
          return;
        }
        goto LABEL_32;
      }
LABEL_22:
      *i = v24;
      if ( v6 == v17 )
        return;
      v17 -= 8;
    }
    if ( v26 )
    {
      v27 = *v16;
      v20 = *(_QWORD *)v17;
      if ( v25 == v26 )
        goto LABEL_45;
      goto LABEL_29;
    }
    goto LABEL_19;
  }
  v10 = (char *)a2 - (char *)dest;
  if ( (char *)a2 - (char *)dest <= 8 )
  {
    if ( (char *)a2 - (char *)dest == 8 )
      *a6 = *dest;
  }
  else
  {
    memmove(a6, dest, v10);
  }
  v11 = &v6[v10];
  if ( v6 != v11 && a2 != a3 )
  {
    do
    {
      if ( sub_4910B0(*v9, *(_QWORD *)v6) )
      {
        *v7 = v13;
        ++v9;
        ++v7;
        if ( v11 == v6 )
          return;
      }
      else
      {
        v6 += 8;
        *v7++ = v12;
        if ( v11 == v6 )
          return;
      }
    }
    while ( a3 != v9 );
  }
  if ( v11 != v6 )
  {
    if ( v11 - v6 <= 8 )
    {
      if ( v11 - v6 == 8 )
        *v7 = *(_QWORD *)v6;
    }
    else
    {
      memmove(v7, v6, v11 - v6);
    }
  }
}

