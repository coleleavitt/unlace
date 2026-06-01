void __fastcall sub_493A80(char *dest, char *a2, char *a3, __int64 a4, __int64 a5, char *a6)
{
  char *v7; // rbp
  char *v8; // rbx
  size_t v9; // r13
  char *v10; // rdx
  __int64 v11; // rsi
  _DWORD *v12; // rax
  __int16 v13; // cx
  _DWORD *v14; // rdi
  _DWORD *v15; // rcx
  _DWORD *v16; // rdi
  _DWORD *v17; // rcx
  bool v18; // cl
  size_t v19; // r13
  char *v20; // rax
  char *v21; // rsi
  char *v22; // rdi
  char *v23; // rsi
  char *i; // rcx
  _DWORD *v25; // rax
  _DWORD *v26; // rdx
  __int16 v27; // r8
  _DWORD *v28; // r10
  _DWORD *v29; // r8
  _DWORD *v30; // r10
  _DWORD *v31; // r8
  bool v32; // r8
  _DWORD *v33; // r11
  _DWORD *v34; // r8
  _DWORD *v35; // rcx
  signed __int64 v36; // rdx
  char *v37; // rsi
  char *v38; // rdi
  _DWORD *v39; // r8
  __int64 v40; // rax
  _DWORD *v41; // rcx
  _DWORD *v42; // r8

  v7 = a2;
  v8 = dest;
  if ( a4 > a5 )
  {
    v19 = a3 - a2;
    if ( a3 - a2 <= 8 )
    {
      if ( a3 - a2 == 8 )
      {
        v40 = *(_QWORD *)a2;
        v21 = a6 + 8;
        *(_QWORD *)a6 = v40;
        if ( v7 == dest )
        {
          *((_QWORD *)a3 - 1) = v40;
          return;
        }
      }
      else
      {
        v21 = &a6[v19];
        if ( v7 == dest )
          return;
      }
    }
    else
    {
      v20 = (char *)memmove(a6, a2, a3 - a2);
      a6 = v20;
      v21 = &v20[v19];
      if ( v7 == dest )
      {
        memmove(v7, v20, v19);
        return;
      }
    }
    if ( a6 == v21 )
      return;
    v22 = v7 - 8;
    v23 = v21 - 8;
    for ( i = a3 - 8; ; i -= 8 )
    {
      v25 = *(_DWORD **)v22;
      v26 = *(_DWORD **)v23;
      if ( *(_QWORD *)v22 == *(_QWORD *)v23 )
      {
LABEL_39:
        *(_QWORD *)i = v26;
        if ( a6 == v23 )
          return;
        v23 -= 8;
        continue;
      }
      v27 = *((_WORD *)v25 + 2);
      if ( !*((_WORD *)v26 + 2)
        && (v28 = *(_DWORD **)(*((_QWORD *)v26 + 2) + 24LL)) != nullptr
        && *v28 == 5
        && v28[1] == 9
        && v26[6] == 2 )
      {
        v33 = *((_DWORD **)v26 + 4);
        v30 = *((_DWORD **)v26 + 5);
        if ( v27 )
          goto LABEL_45;
        v42 = *(_DWORD **)(*((_QWORD *)v25 + 2) + 24LL);
        if ( !v42 )
        {
LABEL_64:
          v31 = *(_DWORD **)v22;
          if ( v25 != v30 )
            goto LABEL_37;
LABEL_65:
          v32 = v33 == nullptr;
          goto LABEL_38;
        }
        if ( *v42 != 5 )
        {
LABEL_45:
          if ( v25 != v30 )
          {
LABEL_36:
            v31 = *(_DWORD **)v22;
LABEL_37:
            v32 = *v30 < *v31;
            goto LABEL_38;
          }
          goto LABEL_65;
        }
        if ( v42[1] != 9 )
          goto LABEL_64;
      }
      else
      {
        if ( v27 || (v29 = *(_DWORD **)(*((_QWORD *)v25 + 2) + 24LL)) == nullptr || *v29 != 5 )
        {
          v30 = *(_DWORD **)v23;
          v31 = *(_DWORD **)v22;
          goto LABEL_37;
        }
        v30 = *(_DWORD **)v23;
        if ( v29[1] != 9 )
          goto LABEL_36;
        v33 = nullptr;
      }
      if ( v25[6] != 2 )
        goto LABEL_64;
      v31 = *((_DWORD **)v25 + 5);
      if ( v30 != v31 )
        goto LABEL_37;
      if ( !v33 )
        goto LABEL_25;
      v39 = *((_DWORD **)v25 + 4);
      if ( !v39 )
        goto LABEL_39;
      v32 = *v33 < *v39;
LABEL_38:
      if ( !v32 )
        goto LABEL_39;
LABEL_25:
      *(_QWORD *)i = v25;
      if ( v8 == v22 )
      {
        v36 = v23 + 8 - a6;
        if ( v36 <= 8 )
        {
          if ( v36 == 8 )
            *((_QWORD *)i - 1) = *(_QWORD *)a6;
        }
        else
        {
          v37 = a6;
          v38 = &i[-v36];
LABEL_61:
          memmove(v38, v37, v36);
        }
        return;
      }
      v22 -= 8;
    }
  }
  v9 = a2 - dest;
  if ( a2 - dest <= 8 )
  {
    if ( a2 - dest == 8 )
      *(_QWORD *)a6 = *(_QWORD *)dest;
  }
  else
  {
    a6 = (char *)memmove(a6, dest, v9);
  }
  v10 = &a6[v9];
  if ( a2 != a3 && a6 != v10 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)a6;
      v12 = *(_DWORD **)v7;
      if ( *(_QWORD *)a6 == *(_QWORD *)v7 )
        goto LABEL_19;
      v13 = *(_WORD *)(v11 + 4);
      if ( *((_WORD *)v12 + 2)
        || (v14 = *(_DWORD **)(*((_QWORD *)v12 + 2) + 24LL)) == nullptr
        || *v14 != 5
        || v14[1] != 9
        || v12[6] != 2 )
      {
        if ( !v13
          && (v15 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL)) != nullptr
          && *v15 == 5
          && v15[1] == 9
          && *(_DWORD *)(v11 + 24) == 2 )
        {
          v17 = *(_DWORD **)(v11 + 40);
          v16 = *(_DWORD **)v7;
          if ( v17 == v12 )
            goto LABEL_7;
        }
        else
        {
          v16 = *(_DWORD **)v7;
          v17 = *(_DWORD **)a6;
        }
        goto LABEL_17;
      }
      v34 = *((_DWORD **)v12 + 4);
      v16 = *((_DWORD **)v12 + 5);
      if ( v13 )
        break;
      v35 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
      if ( !v35 )
        goto LABEL_55;
      if ( *v35 != 5 )
        break;
      if ( v35[1] != 9 )
      {
LABEL_55:
        if ( (_DWORD *)v11 != v16 )
        {
          v17 = *(_DWORD **)a6;
LABEL_17:
          v18 = *v16 < *v17;
          goto LABEL_18;
        }
        goto LABEL_56;
      }
      if ( *(_DWORD *)(v11 + 24) != 2 )
        break;
      v17 = *(_DWORD **)(v11 + 40);
      if ( v16 != v17 )
        goto LABEL_17;
      if ( !v34 )
      {
LABEL_7:
        *(_QWORD *)v8 = v12;
        v7 += 8;
        v8 += 8;
        if ( v10 == a6 )
          return;
        goto LABEL_8;
      }
      v41 = *(_DWORD **)(v11 + 32);
      if ( v41 )
      {
        v18 = *v34 < *v41;
LABEL_18:
        if ( v18 )
          goto LABEL_7;
      }
LABEL_19:
      a6 += 8;
      v8 += 8;
      *((_QWORD *)v8 - 1) = v11;
      if ( v10 == a6 )
        return;
LABEL_8:
      if ( a3 == v7 )
        goto LABEL_58;
    }
    v17 = *(_DWORD **)a6;
    if ( (_DWORD *)v11 != v16 )
      goto LABEL_17;
LABEL_56:
    if ( !v34 )
      goto LABEL_7;
    goto LABEL_19;
  }
LABEL_58:
  if ( v10 != a6 )
  {
    v36 = v10 - a6;
    if ( v36 > 8 )
    {
      v37 = a6;
      v38 = v8;
      goto LABEL_61;
    }
    if ( v36 == 8 )
      *(_QWORD *)v8 = *(_QWORD *)a6;
  }
}

