_BYTE *__fastcall sub_3C68A0(_QWORD *a1, _BYTE *a2, int a3, int a4)
{
  __int64 v4; // rdx
  int v5; // r15d
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v10; // r14
  _QWORD *v11; // r14
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, int, int); // rax
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  const char *v20; // rbx
  char *v21; // rax
  __int64 v22; // rax
  const char *v23; // r13
  int v24; // ebx
  int v25; // r12d
  char *v26; // rax
  __int64 v27; // [rsp+0h] [rbp-80h]
  __int64 v28; // [rsp+8h] [rbp-78h]
  unsigned __int64 v29; // [rsp+10h] [rbp-70h]
  unsigned __int64 v33; // [rsp+28h] [rbp-58h]
  const char *v34; // [rsp+30h] [rbp-50h] BYREF
  __int128 v35; // [rsp+38h] [rbp-48h]
  unsigned __int64 v36; // [rsp+48h] [rbp-38h]

  v4 = a1[38];
  v36 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(v4 + 4LL * a4);
  if ( v5 )
  {
    v10 = a1[6];
    v35 = 0;
    v11 = (_QWORD *)(24LL * a4 + v10);
    v34 = nullptr;
    v27 = 24LL * a4;
    v33 = 0;
    if ( v11[1] )
    {
      while ( 1 )
      {
        sub_F7090((__int64 *)&v34, (__int64)"%d", *(_DWORD *)(*v11 + 4 * v33++));
        if ( v33 >= v11[1] )
          break;
        v12 = v35;
        v13 = 2;
        if ( (_QWORD)v35 )
        {
          v13 = v35 + 1;
          v12 = v35 - 1;
        }
        v14 = (__int64)v34;
        if ( *((_QWORD *)&v35 + 1) < v13 )
        {
          v28 = v12;
          v29 = v13;
          v22 = qvector_reserve(&v34, v34, v13, 1);
          v12 = v28;
          v13 = v29;
          v34 = (const char *)v22;
          v14 = v22;
        }
        *(_QWORD *)&v35 = v13;
        *(_BYTE *)(v14 + v12) = 44;
        v34[v12 + 1] = 0;
      }
      if ( v5 <= 14 )
        goto LABEL_25;
    }
    else if ( v5 <= 14 )
    {
      goto LABEL_33;
    }
    v15 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
    if ( v15 == sub_61690 )
      v16 = **(_DWORD **)(a1[6] + v27);
    else
      v16 = v15((__int64)a1, a4, 0);
    v17 = (_QWORD *)a1[23];
    if ( v17 )
    {
      v18 = 24;
      v19 = *v17 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v19 )
        goto LABEL_34;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)v19 & 2) != 0 )
            goto LABEL_25;
          v18 = v19 + 24;
          if ( v16 >= *(_DWORD *)(v19 + 24) )
            break;
          v19 = *(_QWORD *)(v19 + 8);
        }
        if ( v16 <= *(_DWORD *)(v19 + 24) )
          break;
        v19 = *(_QWORD *)(v19 + 16);
      }
      if ( v17 != (_QWORD *)v19 )
      {
LABEL_34:
        v23 = s1;
        if ( (_QWORD)v35 )
          v23 = v34;
        v24 = *(_DWORD *)(v18 + 8);
        v25 = *(_DWORD *)(v18 + 4);
        v26 = sub_69730((unsigned int)v5);
        qsnprintf(a2, a3, "%s %d->%d {%s}", v26, v25, v24, v23);
        goto LABEL_28;
      }
    }
LABEL_25:
    if ( (_QWORD)v35 )
    {
      v20 = v34;
LABEL_27:
      v21 = sub_69730((unsigned int)v5);
      qsnprintf(a2, a3, "%s {%s}", v21, v20);
LABEL_28:
      if ( v34 )
      {
        *(_QWORD *)&v35 = 0;
        qfree(v34);
      }
      return a2;
    }
LABEL_33:
    v20 = s1;
    goto LABEL_27;
  }
  *a2 = 0;
  v6 = (_QWORD *)a1[30];
  if ( v6 )
  {
    v7 = 24;
    v8 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v8 )
      goto LABEL_31;
    while ( (*(_BYTE *)v8 & 2) == 0 )
    {
      v7 = v8 + 24;
      if ( *(_DWORD *)(v8 + 24) <= a4 )
      {
        if ( *(_DWORD *)(v8 + 24) >= a4 )
        {
          if ( (_QWORD *)v8 != v6 )
LABEL_31:
            qsnprintf(a2, a3, "norm(%d)", *(_DWORD *)(v7 + 4));
          return a2;
        }
        v8 = *(_QWORD *)(v8 + 16);
      }
      else
      {
        v8 = *(_QWORD *)(v8 + 8);
      }
    }
  }
  return a2;
}
