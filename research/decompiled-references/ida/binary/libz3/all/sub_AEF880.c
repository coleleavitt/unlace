void __fastcall sub_AEF880(__int64 a1, void **a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r14
  __int64 v5; // r8
  int v6; // r10d
  __int64 v7; // r13
  _QWORD *v8; // rbp
  unsigned int v9; // r11d
  __int64 v10; // r8
  _QWORD *v11; // r12
  int v12; // ecx
  __int64 v13; // r11
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  int v21; // r9d
  __int64 *v22; // rcx
  char *v23; // r10
  void **v24; // rax
  _QWORD *v25; // r15
  __int64 *v26; // rbx
  __int64 v27; // rcx
  _QWORD *v28; // r13
  __int64 *v29; // rbp
  void **v30; // r10
  __int64 v31; // rax
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 n; // [rsp+8h] [rbp-60h]
  unsigned int na; // [rsp+8h] [rbp-60h]
  int v37; // [rsp+10h] [rbp-58h]
  __int64 v38; // [rsp+10h] [rbp-58h]
  int v39; // [rsp+18h] [rbp-50h]

  v2 = *(_QWORD **)(a1 + 96);
  v3 = &v2[2 * *(unsigned int *)(a1 + 104)];
  if ( v2 == v3 )
    return;
  while ( *v2 <= 1u )
  {
    v2 += 2;
    if ( v3 == v2 )
      return;
  }
LABEL_5:
  if ( v3 == v2 )
    return;
  v5 = *((unsigned int *)a2 + 2);
  v6 = *((_DWORD *)a2 + 4);
  v7 = *(_QWORD *)(v2[1] + 32LL);
  if ( 3 * (int)v5 < (unsigned int)(4 * (v6 + *((_DWORD *)a2 + 3))) )
  {
    v37 = 2 * v5;
    n = 8LL * (unsigned int)(2 * v5);
    v20 = (_QWORD *)sub_186B270(n);
    v21 = v37;
    v10 = n;
    v8 = v20;
    if ( v37 )
    {
      memset(v20, 0, n);
      v10 = n;
      v21 = v37;
    }
    v22 = (__int64 *)*a2;
    v9 = v21 - 1;
    v11 = (_QWORD *)((char *)v8 + v10);
    v23 = (char *)*a2 + 8 * *((unsigned int *)a2 + 2);
    if ( *a2 != v23 )
    {
      v24 = a2;
      v25 = v2;
      v26 = v22;
      v27 = v7;
      v28 = v8;
      v29 = (__int64 *)v23;
      v30 = v24;
      do
      {
        while ( (unsigned __int64)*v26 <= 1 )
        {
          if ( v29 == ++v26 )
            goto LABEL_40;
        }
        v31 = 8LL * (*(_DWORD *)(*v26 + 12) & v9);
        v32 = &v28[(unsigned __int64)v31 / 8];
        if ( v10 == v31 )
        {
LABEL_44:
          if ( v28 == v32 )
          {
LABEL_53:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v33 = v28;
          while ( *v33 )
          {
            if ( v32 == ++v33 )
              goto LABEL_53;
          }
        }
        else
        {
          v33 = &v28[(unsigned __int64)v31 / 8];
          while ( *v33 )
          {
            if ( v11 == ++v33 )
              goto LABEL_44;
          }
        }
        v34 = *v26++;
        *v33 = v34;
      }
      while ( v29 != v26 );
LABEL_40:
      v2 = v25;
      a2 = v30;
      v23 = (char *)*v30;
      v8 = v28;
      v7 = v27;
    }
    if ( v23 )
    {
      v39 = v21;
      v38 = v10;
      na = v21 - 1;
      sub_186B220(v23);
      v21 = v39;
      v10 = v38;
      v9 = na;
    }
    *a2 = v8;
    v6 = 0;
    *((_DWORD *)a2 + 2) = v21;
    *((_DWORD *)a2 + 4) = 0;
  }
  else
  {
    v8 = *a2;
    v9 = v5 - 1;
    v10 = 8 * v5;
    v11 = (char *)*a2 + v10;
  }
  v12 = *(_DWORD *)(v7 + 12);
  v13 = v12 & v9;
  v14 = &v8[v13];
  if ( 8 * v13 == v10 )
  {
    v16 = nullptr;
    while ( 1 )
    {
LABEL_19:
      if ( v14 == v8 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v18 = *v8;
      if ( *v8 > 1u )
      {
        if ( *(_DWORD *)(v18 + 12) == v12 && v7 == v18 )
        {
          *v8 = v7;
          goto LABEL_24;
        }
      }
      else
      {
        if ( !v18 )
        {
          if ( !v16 )
          {
            v16 = v8;
            goto LABEL_51;
          }
LABEL_50:
          *((_DWORD *)a2 + 4) = v6 - 1;
          goto LABEL_51;
        }
        v16 = v8;
      }
      ++v8;
    }
  }
  v15 = &v8[v13];
  v16 = nullptr;
  while ( 1 )
  {
    v17 = *v15;
    if ( *v15 > 1u )
      break;
    if ( !v17 )
    {
      if ( v16 )
        goto LABEL_50;
      v16 = v15;
LABEL_51:
      v19 = v2 + 2;
      *v16 = v7;
      ++*((_DWORD *)a2 + 3);
      if ( v3 == v2 + 2 )
        return;
LABEL_27:
      while ( 1 )
      {
        v2 = v19;
        if ( *v19 > 1u )
          break;
        v19 += 2;
        if ( v3 == v19 )
          return;
      }
      goto LABEL_5;
    }
    v16 = v15;
LABEL_12:
    if ( ++v15 == v11 )
      goto LABEL_19;
  }
  if ( *(_DWORD *)(v17 + 12) != v12 || v7 != v17 )
    goto LABEL_12;
  *v15 = v7;
LABEL_24:
  v19 = v2 + 2;
  if ( v3 != v2 + 2 )
    goto LABEL_27;
}

