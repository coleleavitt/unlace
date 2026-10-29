void __fastcall sub_4948D0(char *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  char *v7; // r14
  __int64 v8; // rbx
  char *v9; // rbp
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  __int16 v12; // dx
  __int64 v13; // rsi
  _DWORD *v14; // rcx
  _DWORD *v15; // rdx
  _DWORD *v16; // rcx
  _DWORD *v17; // rdx
  bool v18; // dl
  __int64 v19; // rax
  char *v20; // rcx
  _DWORD *v21; // r8
  char *v22; // rdx
  char *v23; // rcx
  _DWORD *v24; // rdi
  _DWORD *v25; // rsi
  char *v26; // r9
  _DWORD *v27; // r10
  _DWORD *v28; // rcx
  __int64 v29; // rdi
  _DWORD *v30; // rdx
  _DWORD *v31; // rdx
  _DWORD *v32; // rdi
  _DWORD *v33; // rdx
  _DWORD *v34; // rcx
  _DWORD *v35; // rdx

  if ( a2 - (__int64)a1 > 112 )
  {
    v5 = (a2 - (__int64)a1) >> 4;
    v7 = &a1[8 * v5];
    v8 = (8 * v5) >> 3;
    sub_4948D0(a1, v7, a3);
    sub_4948D0(v7, a2, a3);
    sub_493EC0(a1, v7, a2, v8, (a2 - (__int64)v7) >> 3, a3);
    return;
  }
  if ( (char *)a2 != a1 )
  {
    v9 = a1 + 8;
    if ( (char *)a2 != a1 + 8 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD **)a1;
        v11 = *(_DWORD **)v9;
        if ( *(_QWORD *)a1 == *(_QWORD *)v9 )
          goto LABEL_19;
        v12 = *((_WORD *)v10 + 2);
        if ( *((_WORD *)v11 + 2)
          || (v13 = *((_QWORD *)v11 + 2), (v14 = *(_DWORD **)(v13 + 24)) == nullptr)
          || *v14 != 5
          || v14[1] != 9
          || v11[6] != 2 )
        {
          if ( !v12
            && (v15 = *(_DWORD **)(*((_QWORD *)v10 + 2) + 24LL)) != nullptr
            && *v15 == 5
            && v15[1] == 9
            && v10[6] == 2 )
          {
            v17 = *((_DWORD **)v10 + 5);
            v16 = *(_DWORD **)v9;
            if ( v11 == v17 )
              goto LABEL_6;
          }
          else
          {
            v16 = *(_DWORD **)v9;
            v17 = *(_DWORD **)a1;
          }
LABEL_17:
          v18 = *v16 < *v17;
          goto LABEL_18;
        }
        v32 = *((_DWORD **)v11 + 4);
        v16 = *((_DWORD **)v11 + 5);
        if ( v12 )
          goto LABEL_90;
        v33 = *(_DWORD **)(*((_QWORD *)v10 + 2) + 24LL);
        if ( !v33 )
        {
          if ( v10 == v16 )
            goto LABEL_73;
LABEL_92:
          v17 = *(_DWORD **)a1;
          goto LABEL_17;
        }
        if ( *v33 != 5 )
        {
LABEL_90:
          v17 = *(_DWORD **)a1;
          if ( v10 != v16 )
            goto LABEL_17;
LABEL_73:
          if ( v32 )
          {
            v19 = *((_QWORD *)v9 - 1);
            v20 = v9 - 8;
            if ( v11 == (_DWORD *)v19 )
            {
LABEL_75:
              *(_QWORD *)v9 = v11;
              goto LABEL_41;
            }
LABEL_22:
            v21 = *(_DWORD **)(v13 + 24);
            v22 = v20;
            while ( 2 )
            {
              while ( 2 )
              {
                v26 = v22 + 8;
                if ( v21 )
                {
                  while ( *v21 != 5 || v21[1] != 9 || v11[6] != 2 )
                  {
                    if ( !*(_WORD *)(v19 + 4) )
                      goto LABEL_34;
                    if ( v11 != (_DWORD *)v19 )
                      goto LABEL_26;
                    v19 = *((_QWORD *)v22 - 1);
                    *((_QWORD *)v22 + 1) = v11;
                    if ( v11 == (_DWORD *)v19 )
                    {
LABEL_82:
                      v23 = v22;
                      goto LABEL_40;
                    }
                    v26 = v22;
                    v22 -= 8;
                  }
                  v27 = *((_DWORD **)v11 + 4);
                  v25 = *((_DWORD **)v11 + 5);
                  if ( *(_WORD *)(v19 + 4) || (v28 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL)) == nullptr )
                  {
                    v23 = v22;
                    v24 = (_DWORD *)v19;
                    if ( v25 == (_DWORD *)v19 )
                      goto LABEL_37;
                    if ( *v25 >= *(_DWORD *)v19 )
                    {
LABEL_65:
                      *(_QWORD *)v26 = v11;
                      goto LABEL_41;
                    }
                    goto LABEL_28;
                  }
                }
                else
                {
                  if ( *(_WORD *)(v19 + 4) )
                  {
                    while ( v11 == (_DWORD *)v19 )
                    {
                      v19 = *((_QWORD *)v22 - 1);
                      *((_QWORD *)v22 + 1) = v11;
                      if ( v11 == (_DWORD *)v19 )
                        goto LABEL_82;
                      v26 = v22;
                      v22 -= 8;
                      if ( !*(_WORD *)(v19 + 4) )
                        goto LABEL_34;
                    }
LABEL_26:
                    v23 = v22;
                    v24 = (_DWORD *)v19;
                    v25 = v11;
                    goto LABEL_27;
                  }
LABEL_34:
                  v25 = v11;
                  v27 = nullptr;
                  v28 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
                  if ( !v28 )
                  {
                    v23 = v22;
                    v24 = (_DWORD *)v19;
                    if ( v11 == (_DWORD *)v19 )
                    {
                      v24 = v11;
LABEL_28:
                      *((_QWORD *)v22 + 1) = v24;
                      v19 = *((_QWORD *)v22 - 1);
                      v22 -= 8;
                      if ( v11 == (_DWORD *)v19 )
                        goto LABEL_40;
                      continue;
                    }
LABEL_27:
                    if ( *v25 >= *(_DWORD *)v19 )
                      goto LABEL_65;
                    goto LABEL_28;
                  }
                }
                break;
              }
              if ( *v28 == 5 && v28[1] == 9 && *(_DWORD *)(v19 + 24) == 2 )
              {
                if ( *(_DWORD **)(v19 + 40) != v25 )
                {
                  v24 = (_DWORD *)v19;
                  v23 = v22;
                  v19 = *(_QWORD *)(v19 + 40);
                  goto LABEL_27;
                }
                if ( v27 )
                {
                  v34 = *(_DWORD **)(v19 + 32);
                  if ( !v34 || *v27 >= *v34 )
                    goto LABEL_65;
                  v23 = v22;
                  v29 = v19;
                  goto LABEL_39;
                }
              }
              else
              {
                v23 = v22;
                v24 = (_DWORD *)v19;
                if ( (_DWORD *)v19 != v25 )
                  goto LABEL_27;
LABEL_37:
                if ( v27 )
                  goto LABEL_65;
              }
              v23 = v22;
              v29 = v19;
LABEL_39:
              *((_QWORD *)v22 + 1) = v29;
              v19 = *((_QWORD *)v22 - 1);
              v22 -= 8;
              if ( v11 == (_DWORD *)v19 )
                goto LABEL_40;
              continue;
            }
          }
LABEL_6:
          if ( v9 - a1 <= 8 )
          {
            if ( v9 - a1 == 8 )
              *(_QWORD *)v9 = v10;
          }
          else
          {
            memmove(a1 + 8, a1, v9 - a1);
          }
          v9 += 8;
          *(_QWORD *)a1 = v11;
          if ( (char *)a2 == v9 )
            return;
        }
        else
        {
          if ( v33[1] != 9 )
          {
            if ( v10 != v16 )
              goto LABEL_92;
LABEL_96:
            if ( !v32 )
              goto LABEL_6;
            goto LABEL_19;
          }
          if ( v10[6] != 2 )
          {
            v17 = *(_DWORD **)a1;
            if ( v10 != v16 )
              goto LABEL_17;
            goto LABEL_96;
          }
          v17 = *((_DWORD **)v10 + 5);
          if ( v16 != v17 )
            goto LABEL_17;
          if ( !v32 )
            goto LABEL_6;
          v35 = *((_DWORD **)v10 + 4);
          if ( v35 )
          {
            v18 = *v32 < *v35;
LABEL_18:
            if ( v18 )
              goto LABEL_6;
          }
LABEL_19:
          v19 = *((_QWORD *)v9 - 1);
          v20 = v9 - 8;
          if ( v11 == (_DWORD *)v19 )
            goto LABEL_75;
          if ( !*((_WORD *)v11 + 2) )
          {
            v13 = *((_QWORD *)v11 + 2);
            goto LABEL_22;
          }
          while ( !*(_WORD *)(v19 + 4) )
          {
            v30 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
            if ( !v30 || *v30 != 5 || v30[1] != 9 || *(_DWORD *)(v19 + 24) != 2 )
              break;
            v31 = *(_DWORD **)(v19 + 40);
            if ( v11 != v31 )
              goto LABEL_48;
LABEL_49:
            *((_QWORD *)v20 + 1) = v19;
            v19 = *((_QWORD *)v20 - 1);
            if ( v11 == (_DWORD *)v19 )
            {
              *(_QWORD *)v20 = v11;
              goto LABEL_41;
            }
            v20 -= 8;
          }
          v31 = (_DWORD *)v19;
          if ( v11 == (_DWORD *)v19 )
            goto LABEL_49;
LABEL_48:
          if ( *v11 < *v31 )
            goto LABEL_49;
          v23 = v20 + 8;
LABEL_40:
          *(_QWORD *)v23 = v11;
LABEL_41:
          v9 += 8;
          if ( (char *)a2 == v9 )
            return;
        }
      }
    }
  }
}

