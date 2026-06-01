char **__fastcall sub_4C3490(char **a1, __int64 a2)
{
  char *v3; // rax
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 *v6; // r15
  __int64 v7; // r12
  __int64 v8; // r8
  int v9; // edx
  int v10; // eax
  unsigned int v11; // r10d
  _QWORD *v12; // rbp
  unsigned int v13; // r9d
  __int64 v14; // r8
  char *v15; // r13
  int v16; // esi
  __int64 v17; // r9
  _QWORD *v18; // r10
  _QWORD *v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // r13
  _QWORD *v25; // rax
  int v26; // r10d
  char *v27; // rax
  char *v28; // r11
  __int64 v29; // rdx
  _QWORD *v30; // rsi
  _QWORD *v31; // rdx
  __int64 v32; // rsi
  size_t v34; // [rsp+0h] [rbp-58h]
  unsigned int v35; // [rsp+0h] [rbp-58h]
  int v36; // [rsp+8h] [rbp-50h]
  __int64 v37; // [rsp+8h] [rbp-50h]
  int v38; // [rsp+18h] [rbp-40h]

  v3 = (char *)sub_186B270(0x40u);
  v4 = *(__int64 **)(a2 + 120);
  a1[1] = &byte_8;
  v5 = *(unsigned int *)(a2 + 128);
  *a1 = v3;
  *((_DWORD *)a1 + 4) = 0;
  v5 *= 16;
  *(_OWORD *)v3 = 0;
  v6 = (__int64 *)((char *)v4 + v5);
  *((_OWORD *)v3 + 1) = 0;
  *((_OWORD *)v3 + 2) = 0;
  *((_OWORD *)v3 + 3) = 0;
  if ( v4 == (__int64 *)((char *)v4 + v5) )
    return a1;
  while ( (unsigned __int64)*v4 <= 1 )
  {
    v4 += 2;
    if ( v6 == v4 )
      return a1;
  }
  if ( v6 == v4 )
    return a1;
  v7 = *v4;
  v8 = 8;
  v9 = 0;
  v10 = 0;
  while ( 2 )
  {
    v11 = 2 * v8;
    if ( 3 * (int)v8 < (unsigned int)(4 * (v9 + v10)) )
    {
      v24 = v11;
      v36 = 2 * v8;
      v34 = 8LL * v11;
      v25 = (_QWORD *)sub_186B270(v34);
      v26 = v36;
      v14 = v34;
      v12 = v25;
      if ( v36 )
      {
        memset(v25, 0, 8 * v24);
        v14 = v34;
        v26 = v36;
      }
      v27 = *a1;
      v13 = v26 - 1;
      v15 = (char *)v12 + v14;
      v28 = &(*a1)[8 * *((unsigned int *)a1 + 2)];
      if ( *a1 != v28 )
      {
        do
        {
          while ( *(_QWORD *)v27 <= 1u )
          {
            v27 += 8;
            if ( v28 == v27 )
              goto LABEL_42;
          }
          v29 = 8LL * (*(_DWORD *)(*(_QWORD *)v27 + 12LL) & v13);
          v30 = &v12[(unsigned __int64)v29 / 8];
          if ( v14 == v29 )
          {
LABEL_46:
            if ( v12 == v30 )
            {
LABEL_55:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v31 = v12;
            while ( *v31 )
            {
              if ( v30 == ++v31 )
                goto LABEL_55;
            }
          }
          else
          {
            v31 = &v12[(unsigned __int64)v29 / 8];
            while ( *v31 )
            {
              if ( v15 == (char *)++v31 )
                goto LABEL_46;
            }
          }
          v32 = *(_QWORD *)v27;
          v27 += 8;
          *v31 = v32;
        }
        while ( v28 != v27 );
LABEL_42:
        v28 = *a1;
      }
      if ( v28 )
      {
        v38 = v26;
        v37 = v14;
        v35 = v26 - 1;
        sub_186B220(v28);
        v26 = v38;
        v14 = v37;
        v13 = v35;
      }
      *a1 = (char *)v12;
      *((_DWORD *)a1 + 2) = v26;
      *((_DWORD *)a1 + 4) = 0;
    }
    else
    {
      v12 = *a1;
      v13 = v8 - 1;
      v14 = 8 * v8;
      v15 = &(*a1)[v14];
    }
    v16 = *(_DWORD *)(v7 + 12);
    v17 = 8LL * (v16 & v13);
    v18 = &v12[(unsigned __int64)v17 / 8];
    if ( v17 != v14 )
    {
      v19 = &v12[(unsigned __int64)v17 / 8];
      v20 = nullptr;
      while ( 1 )
      {
        v21 = *v19;
        if ( *v19 > 1u )
        {
          if ( *(_DWORD *)(v21 + 12) == v16 && v21 == v7 )
          {
            *v19 = v7;
LABEL_25:
            v23 = v4 + 2;
            if ( v6 != v4 + 2 )
              goto LABEL_28;
            return a1;
          }
        }
        else
        {
          if ( !v21 )
          {
            if ( v20 )
              goto LABEL_52;
            v20 = v19;
            goto LABEL_53;
          }
          v20 = v19;
        }
        if ( ++v19 == (_QWORD *)v15 )
          goto LABEL_20;
      }
    }
    v20 = nullptr;
    while ( 1 )
    {
LABEL_20:
      if ( v18 == v12 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v22 = *v12;
      if ( *v12 <= 1u )
        break;
      if ( *(_DWORD *)(v22 + 12) == v16 && v22 == v7 )
      {
        *v12 = v7;
        goto LABEL_25;
      }
LABEL_19:
      ++v12;
    }
    if ( v22 )
    {
      v20 = v12;
      goto LABEL_19;
    }
    if ( v20 )
LABEL_52:
      --*((_DWORD *)a1 + 4);
    else
      v20 = v12;
LABEL_53:
    v23 = v4 + 2;
    *v20 = v7;
    ++*((_DWORD *)a1 + 3);
    if ( v6 == v4 + 2 )
      return a1;
LABEL_28:
    while ( 1 )
    {
      v7 = *v23;
      v4 = v23;
      if ( (unsigned __int64)*v23 > 1 )
        break;
      v23 += 2;
      if ( v6 == v23 )
        return a1;
    }
    if ( v6 != v23 )
    {
      v10 = *((_DWORD *)a1 + 3);
      v9 = *((_DWORD *)a1 + 4);
      v8 = *((unsigned int *)a1 + 2);
      continue;
    }
    return a1;
  }
}

