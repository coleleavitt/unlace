__int64 __fastcall sub_44CB40(QT::QAbstractItemView *this, __int64 a2, unsigned __int64 a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  _QWORD *v8; // rax
  _QWORD *v9; // r12
  __int64 v10; // r13
  size_t v11; // r14
  const char *v12; // rsi
  _BYTE *v13; // rax
  __int64 v14; // rax
  const char *v15; // rsi
  char *v16; // rdi
  __int64 v17; // r15
  unsigned __int64 v18; // r13
  __int64 v19; // r14
  int v20; // eax
  const char *action_name; // rax
  size_t v22; // r11
  size_t v23; // rax
  char *v24; // r9
  size_t v25; // r10
  const char *v26; // rsi
  void *v27; // rcx
  __int64 v28; // rax
  void *v29; // rdi
  __int64 v30; // rdx
  int v31; // eax
  unsigned __int8 v32; // r12
  _QWORD *v33; // rax
  void *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  void *v37; // rdi
  size_t v38; // rdx
  void *v39; // rsi
  size_t v40; // rdi
  __int64 v41; // rax
  _QWORD *v42; // [rsp+8h] [rbp-150h]
  int v43; // [rsp+14h] [rbp-144h]
  char *s; // [rsp+20h] [rbp-138h]
  char *sb; // [rsp+20h] [rbp-138h]
  char *sa; // [rsp+20h] [rbp-138h]
  size_t n; // [rsp+28h] [rbp-130h]
  size_t na; // [rsp+28h] [rbp-130h]
  size_t nb; // [rsp+28h] [rbp-130h]
  _QWORD *nd; // [rsp+28h] [rbp-130h]
  size_t nc; // [rsp+28h] [rbp-130h]
  char *v52; // [rsp+30h] [rbp-128h]
  size_t v53; // [rsp+38h] [rbp-120h]
  __int64 v54; // [rsp+48h] [rbp-110h] BYREF
  _BYTE *v55; // [rsp+50h] [rbp-108h] BYREF
  __int128 v56; // [rsp+58h] [rbp-100h]
  void *v57; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v58; // [rsp+78h] [rbp-E0h]
  char *s1; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v60; // [rsp+98h] [rbp-C0h]
  int v61; // [rsp+A8h] [rbp-B0h]
  char v62[40]; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+D8h] [rbp-80h]
  __int64 v64; // [rsp+F0h] [rbp-68h]
  char v65[24]; // [rsp+100h] [rbp-58h] BYREF
  unsigned __int64 v66; // [rsp+118h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  v5 = sub_521430();
  if ( !(_BYTE)v5 )
    return 0;
  v6 = v5;
  v42 = sub_426230(this, (const char *)a2);
  v8 = (_QWORD *)QT::QAbstractItemView::model(this);
  v9 = v8;
  if ( a3 >= v8[42] )
    return 0;
  v10 = *(_QWORD *)(v8[41] + 8 * a3);
  v56 = 0;
  v55 = nullptr;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( v11 )
    {
      v13 = (_BYTE *)qalloc_or_throw(*(_QWORD *)(v10 + 8));
      *((_QWORD *)&v56 + 1) = v11;
      v55 = v13;
      memcpy(v13, *(const void **)v10, v11);
      *(_QWORD *)&v56 = v11;
    }
  }
  else
  {
    v55 = (_BYTE *)qvector_reserve(&v55, 0, 1, 1);
    *(_QWORD *)&v56 = 1;
    *v55 = 0;
  }
  v12 = (const char *)&v54;
  v60 = 0;
  s1 = nullptr;
  v61 = 0;
  if ( (unsigned __int8)sub_4463F0((__int64)v9, &v54, (__int64)&v55, (__int64)&s1) )
  {
    v14 = sub_4170A0((__int64)v42);
    v15 = &::s1;
    if ( *(_QWORD *)(v14 + 8) )
      v15 = *(const char **)v14;
    v16 = (char *)&::s1;
    if ( (_QWORD)v60 )
      v16 = s1;
    v17 = 0;
    v18 = 0;
    v43 = strcmp(v16, v15);
    v19 = v54;
    if ( !*(_QWORD *)(a2 + 8) )
    {
LABEL_32:
      v31 = *(_DWORD *)(v19 + 76);
      v32 = *(_DWORD *)(v19 + 72) == v31;
      if ( *(_DWORD *)(v19 + 72) != v31 )
        *(_DWORD *)(a2 + 132) |= 2u;
      if ( sub_418280((__int64)v42, v19 + 48) )
        *(_DWORD *)(a2 + 132) |= 1u;
      v33 = sub_426230(v42, (const char *)(v19 + 48));
      v12 = (const char *)*(unsigned __int8 *)(v19 + 84);
      *(_DWORD *)(a2 + 140) = sub_41F810((__int64)v33, (unsigned __int8)v12, v32, v19 + 48);
      goto LABEL_9;
    }
    while ( 1 )
    {
      v20 = *(_DWORD *)(v9[60] + 4 * v18);
      if ( v20 == 4 )
        break;
      if ( v20 == 8 )
      {
        action_name = (const char *)vault_get_action_name(*(unsigned __int8 *)(v19 + 84));
        v22 = v17 + *(_QWORD *)a2;
        if ( action_name
          && (n = v17 + *(_QWORD *)a2,
              s = (char *)action_name,
              v23 = strlen(action_name),
              v24 = s,
              v22 = n,
              (v25 = v23) != 0) )
        {
          v37 = *(void **)n;
          v38 = v23 + 1;
          if ( *(_QWORD *)(n + 16) < v23 + 1 )
          {
            v39 = *(void **)n;
            v40 = n;
            v53 = v23;
            v52 = s;
            nc = v23 + 1;
            sa = (char *)v22;
            v41 = qvector_reserve(v40, v39, v38, 1);
            v22 = (size_t)sa;
            v25 = v53;
            v37 = (void *)v41;
            v24 = v52;
            v38 = nc;
            *(_QWORD *)sa = v41;
          }
          *(_QWORD *)(v22 + 8) = v38;
          nd = (_QWORD *)v22;
          sb = (char *)v25;
          memmove(v37, v24, v25);
          sb[*nd] = 0;
        }
        else
        {
          *(_QWORD *)(v22 + 8) = 0;
        }
        goto LABEL_21;
      }
      if ( v20 == 2 && !v43 )
      {
        v26 = v62;
        if ( (unsigned __int8)sub_445AD0(v9, v62, (__int64)&s1, v19 + 48) )
        {
          qstrftime64(v65, 20, "%F %T", v64);
          v57 = nullptr;
          v58 = 0;
          nb = strlen(v65);
          v26 = v65;
          v57 = (void *)qvector_reserve(&v57, 0, nb + 1, 1);
          *(_QWORD *)&v58 = nb + 1;
          memmove(v57, v65, nb);
          *((_BYTE *)v57 + nb) = 0;
          v34 = v57;
        }
        else
        {
          v57 = nullptr;
          v34 = nullptr;
          v58 = 0;
        }
        v35 = v17 + *(_QWORD *)a2;
        v29 = *(void **)v35;
        v36 = *(_QWORD *)(v35 + 16);
        *(_QWORD *)v35 = v34;
        *(_OWORD *)(v35 + 8) = v58;
        v57 = v29;
        *((_QWORD *)&v58 + 1) = v36;
        if ( v29 )
          goto LABEL_31;
      }
LABEL_21:
      ++v18;
      v17 += 24;
      if ( v18 >= *(_QWORD *)(a2 + 8) )
        goto LABEL_32;
    }
    if ( v43 )
      goto LABEL_21;
    v26 = v62;
    if ( (unsigned __int8)sub_445AD0(v9, v62, (__int64)&s1, v19 + 48) )
    {
      pretty_print_size(v65, 10, v63);
      v57 = nullptr;
      v58 = 0;
      na = strlen(v65);
      v26 = v65;
      v57 = (void *)qvector_reserve(&v57, 0, na + 1, 1);
      *(_QWORD *)&v58 = na + 1;
      memmove(v57, v65, na);
      *((_BYTE *)v57 + na) = 0;
      v27 = v57;
    }
    else
    {
      v57 = nullptr;
      v27 = nullptr;
      v58 = 0;
    }
    v28 = v17 + *(_QWORD *)a2;
    v29 = *(void **)v28;
    v30 = *(_QWORD *)(v28 + 16);
    *(_QWORD *)v28 = v27;
    *(_OWORD *)(v28 + 8) = v58;
    v57 = v29;
    *((_QWORD *)&v58 + 1) = v30;
    if ( !v29 )
      goto LABEL_21;
LABEL_31:
    *(_QWORD *)&v58 = 0;
    qfree(v29, v26);
    goto LABEL_21;
  }
LABEL_9:
  if ( s1 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(s1, v12);
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55, v12);
  }
  return v6;
}
