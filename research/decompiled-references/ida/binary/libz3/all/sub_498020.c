__int64 __fastcall sub_498020(__int64 *src, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int64 *v5; // r10
  __int64 *v6; // r11
  __int64 *v8; // rbp
  bool v10; // r13
  _DWORD *v11; // rax
  __int64 v12; // r8
  bool v13; // cl
  _DWORD *v14; // rax
  __int64 v15; // r9
  __int64 v16; // rsi
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // dx
  __int64 v19; // r14
  bool v20; // al
  signed __int64 v21; // r11
  signed __int64 v22; // r13
  signed __int64 v23; // r12
  __int64 *v24; // rbx
  int *v26; // rcx
  int *v27; // rdx
  int v28; // edi
  int v29; // eax
  bool v30; // cf
  int v31; // edx
  int v32; // ecx
  _DWORD *v33; // rax
  _DWORD *v34; // rdx
  unsigned __int16 v35; // ax
  unsigned int v36; // edx
  unsigned int v37; // eax
  _DWORD *v38; // r15
  _DWORD *v39; // rax

  v5 = src;
  v6 = a2;
  v8 = a3;
  v10 = src != a2 && a3 != a4;
  if ( v10 )
  {
    while ( 1 )
    {
      v15 = *v5;
      v16 = *v8;
      if ( *v5 == *v8 )
      {
LABEL_9:
        ++v5;
        *a5++ = v15;
        if ( v5 == v6 )
          goto LABEL_18;
        goto LABEL_10;
      }
      v17 = *(_WORD *)(v16 + 4);
      v18 = *(_WORD *)(v15 + 4);
      if ( v17 )
        break;
      v11 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
      if ( !v11 || *v11 || v11[1] != 8 || *(_DWORD *)(v16 + 24) != 1 )
      {
        if ( v18 )
          goto LABEL_17;
LABEL_6:
        v12 = *v8;
        v13 = 0;
        v14 = *(_DWORD **)(*(_QWORD *)(v15 + 16) + 24LL);
        if ( !v14 )
          goto LABEL_23;
        goto LABEL_7;
      }
      v12 = *(_QWORD *)(v16 + 32);
      if ( v18 )
      {
        if ( v15 == v12 )
          goto LABEL_9;
        v17 = *(_WORD *)(v12 + 4);
        v19 = *v5;
        if ( v17 == v18 )
          goto LABEL_31;
        goto LABEL_15;
      }
      v14 = *(_DWORD **)(*(_QWORD *)(v15 + 16) + 24LL);
      if ( !v14 )
        goto LABEL_8;
      v13 = v10;
LABEL_7:
      if ( *v14 || v14[1] != 8 || *(_DWORD *)(v15 + 24) != 1 )
      {
LABEL_8:
        if ( v15 == v12 )
          goto LABEL_9;
LABEL_23:
        v17 = *(_WORD *)(v12 + 4);
        v19 = *v5;
LABEL_24:
        if ( v17 == v18 )
        {
          if ( v17 )
            goto LABEL_31;
          v26 = *(int **)(*(_QWORD *)(v12 + 16) + 24LL);
          v27 = *(int **)(*(_QWORD *)(v19 + 16) + 24LL);
          if ( v26 )
          {
            v28 = *v26;
            if ( v27 )
            {
              v29 = *v27;
              if ( v28 != *v27 )
                goto LABEL_29;
              v29 = v26[1];
              v31 = v27[1];
              v32 = v31;
              if ( v31 != v29 )
              {
LABEL_46:
                v20 = v29 < v32;
                goto LABEL_16;
              }
              if ( v28 != 5 )
                goto LABEL_31;
              if ( v31 == 2 )
              {
                if ( *(_DWORD *)(v12 + 24) != 2 )
                  goto LABEL_57;
                v33 = *(_DWORD **)(v12 + 40);
                v12 = *(_QWORD *)(v12 + 32);
                goto LABEL_59;
              }
              if ( v31 == 4 || v31 == 3 )
              {
                v33 = nullptr;
                if ( *(_DWORD *)(v12 + 24) != 2 )
                  goto LABEL_58;
              }
              else if ( v29 != 5 || *(_DWORD *)(v12 + 24) != 2 )
              {
LABEL_57:
                v33 = nullptr;
                if ( v31 == 2 )
                {
                  if ( *(_DWORD *)(v19 + 24) != 2 )
                    goto LABEL_31;
                }
                else
                {
LABEL_58:
                  if ( v31 != 4 && v31 != 3 && v31 != 5 )
                    goto LABEL_60;
LABEL_59:
                  if ( *(_DWORD *)(v19 + 24) != 2 )
                  {
LABEL_60:
                    if ( v33 )
                      goto LABEL_9;
                    goto LABEL_31;
                  }
                }
                v34 = *(_DWORD **)(v19 + 40);
                v19 = *(_QWORD *)(v19 + 32);
                if ( v33 )
                {
                  if ( !v34 )
                    goto LABEL_9;
                  if ( v12 == v19 )
                  {
                    v20 = *v33 < *v34;
                    goto LABEL_16;
                  }
                  v35 = *(_WORD *)(v12 + 4);
                  v30 = v35 < *(_WORD *)(v19 + 4);
                  if ( v35 == *(_WORD *)(v19 + 4) )
                  {
                    if ( v35 )
                      goto LABEL_31;
                    v36 = *(unsigned __int16 *)(v12 + 28);
                    v37 = *(unsigned __int16 *)(v19 + 28);
                    v30 = v36 < v37;
                    if ( v36 == v37 )
                    {
                      v38 = sub_490FE0(v12);
                      v39 = sub_490FE0(v19);
                      if ( v38 && v39 )
                      {
                        if ( v38 == v39 )
                          goto LABEL_31;
                        v20 = *v38 < *v39;
LABEL_16:
                        if ( !v20 )
                          goto LABEL_9;
                        goto LABEL_17;
                      }
                      v30 = v38 < v39;
                      if ( v38 == v39 )
                        goto LABEL_31;
                    }
                  }
LABEL_32:
                  v20 = v30;
                  goto LABEL_16;
                }
                if ( v34 )
                  goto LABEL_17;
LABEL_31:
                v30 = *(_DWORD *)v12 < *(_DWORD *)v19;
                goto LABEL_32;
              }
              v33 = *(_DWORD **)(v12 + 40);
              v12 = *(_QWORD *)(v12 + 32);
              goto LABEL_58;
            }
            v29 = -1;
            if ( v28 == -1 )
            {
              v29 = v26[1];
              v32 = -1;
              if ( v29 != -1 )
                goto LABEL_46;
              goto LABEL_31;
            }
          }
          else
          {
            if ( !v27 )
              goto LABEL_31;
            v29 = *v27;
            if ( *v27 == -1 )
            {
              v32 = v27[1];
              if ( v32 != -1 )
                goto LABEL_46;
              goto LABEL_31;
            }
            v28 = -1;
          }
LABEL_29:
          v20 = v29 > v28;
          goto LABEL_16;
        }
LABEL_15:
        v20 = v17 < v18;
        goto LABEL_16;
      }
      v19 = *(_QWORD *)(v15 + 32);
      if ( v19 != v12 )
      {
        v17 = *(_WORD *)(v12 + 4);
        v18 = *(_WORD *)(v19 + 4);
        goto LABEL_24;
      }
      if ( v13 )
        goto LABEL_9;
LABEL_17:
      *a5 = v16;
      ++v8;
      ++a5;
      if ( v5 == v6 )
        goto LABEL_18;
LABEL_10:
      if ( v8 == a4 )
        goto LABEL_18;
    }
    if ( v18 )
    {
      v19 = *v5;
      v12 = *v8;
      if ( v17 == v18 )
        goto LABEL_31;
      goto LABEL_15;
    }
    goto LABEL_6;
  }
LABEL_18:
  v21 = (char *)v6 - (char *)v5;
  v22 = v21;
  if ( v21 <= 8 )
  {
    if ( v21 == 8 )
      *a5 = *v5;
  }
  else
  {
    memmove(a5, v5, v21);
  }
  v23 = (char *)a4 - (char *)v8;
  v24 = (__int64 *)((char *)a5 + v22);
  if ( v23 <= 8 )
  {
    if ( v23 == 8 )
      *v24 = *v8;
  }
  else
  {
    memmove(v24, v8, v23);
  }
  return (__int64)v24 + v23;
}

