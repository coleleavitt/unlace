__int64 __fastcall sub_22A0400(
        char *a1,
        __int64 a2,
        unsigned int a3,
        _WORD *a4,
        unsigned __int64 a5,
        __int64 *a6,
        unsigned int *a7)
{
  unsigned int v7; // r15d
  _BYTE *v8; // r14
  size_t v11; // rbp
  const void **v12; // rbx
  int v13; // eax
  const void **v14; // r8
  unsigned __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 i; // rdx
  __int64 v19; // rdx
  char *v20; // rsi
  __int64 v21; // rdi
  char *v22; // rsi
  __int64 v23; // rsi
  char *v24; // rdi
  unsigned int v25; // eax
  const void **v26; // rax
  __int64 *v27; // rbx
  __int64 j; // rdx
  __int64 v29; // rdx
  char *v30; // rsi
  __int64 v31; // rdi
  char *v32; // rsi
  __int64 v33; // rdx
  _UNKNOWN **v34; // rcx
  char **v35; // rax
  int v36; // ecx
  _DWORD *v37; // rsi
  char **v38; // rax
  unsigned __int64 v39; // [rsp+8h] [rbp-60h]
  unsigned __int64 v40; // [rsp+8h] [rbp-60h]
  __int64 v42; // [rsp+18h] [rbp-50h]
  __int64 v43; // [rsp+20h] [rbp-48h]

  v7 = 0;
  v8 = a4;
  v11 = a5;
  v42 = *a6;
  v43 = a6[1];
  if ( a5 > 1 )
  {
    if ( *a4 != 28526 )
    {
      v7 = 0;
LABEL_5:
      v12 = (const void **)&off_2BEDF60;
      while ( 1 )
      {
        if ( (const void *)v11 == v12[1] )
        {
          v13 = memcmp(v8, *v12, v11);
          v14 = v12;
          if ( !v13 )
            break;
        }
        v12 += 7;
        if ( v12 == (const void **)&unk_2BEE7B0 )
          return 0;
      }
      goto LABEL_11;
    }
    v11 = a5 - 2;
    v8 = a4 + 1;
    v7 = 1;
  }
  if ( v11 )
    goto LABEL_5;
  v26 = (const void **)&off_2BEDF60;
  while ( 1 )
  {
    v11 = (size_t)v26[1];
    v14 = v26;
    if ( !v11 )
      break;
    v26 += 7;
    if ( &unk_2BEE7B0 == (_UNKNOWN *)v26 )
      return 0;
  }
LABEL_11:
  v16 = (unsigned __int64)v14[2];
  if ( v16 )
  {
    if ( !(_BYTE)v7 )
    {
      v17 = (__int64 *)&unk_2BEDF78;
      for ( i = 0; ; i = *(v17 - 1) )
      {
        if ( (i & v16) != i )
          goto LABEL_14;
        v19 = v17[1];
        if ( !v19 )
          goto LABEL_14;
        v20 = (char *)a6[1];
        if ( (char *)a6[2] == v20 )
          break;
        v21 = *v17;
        v22 = v20 + 16;
        *((_QWORD *)v22 - 1) = v19;
        v17 += 7;
        *((_QWORD *)v22 - 2) = v21;
        a6[1] = (__int64)v22;
        if ( &unk_2BEE7C8 == (_UNKNOWN *)v17 )
          goto LABEL_20;
LABEL_15:
        ;
      }
      v39 = v16;
      sub_1245C50((__int64)a6, v20, v17);
      v16 = v39;
LABEL_14:
      v17 += 7;
      if ( &unk_2BEE7C8 == (_UNKNOWN *)v17 )
        goto LABEL_20;
      goto LABEL_15;
    }
    v27 = (__int64 *)&unk_2BEDF88;
    for ( j = 0; ; j = *(v27 - 3) )
    {
      if ( v16 == (v16 & j) )
      {
        v29 = v27[1];
        if ( v29 )
        {
          v30 = (char *)a6[1];
          if ( v30 == (char *)a6[2] )
          {
            v40 = v16;
            sub_1245C50((__int64)a6, v30, v27);
            v16 = v40;
          }
          else
          {
            v31 = *v27;
            v32 = v30 + 16;
            *((_QWORD *)v32 - 1) = v29;
            *((_QWORD *)v32 - 2) = v31;
            a6[1] = (__int64)v32;
          }
        }
      }
      v27 += 7;
      if ( v27 == (__int64 *)&unk_2BEE7D8 )
        break;
    }
LABEL_20:
    v23 = 7;
    v24 = "generic";
    if ( a2 )
    {
      v24 = a1;
      v23 = a2;
    }
    if ( v11 == 2 )
    {
      if ( *(_WORD *)v8 == 28774 )
      {
        v25 = sub_229D0E0((__int64)v24, v23, a3);
        if ( (_BYTE)v7 )
          v25 = 1;
LABEL_26:
        *a7 = v25;
        return 1;
      }
LABEL_41:
      LOBYTE(v7) = a6[1] - *a6 != v43 - v42;
      return v7;
    }
    if ( v11 != 5 || *(_DWORD *)v8 != 1680765030 || v8[4] != 112 )
      goto LABEL_41;
    v25 = sub_229D0E0((__int64)v24, v23, a3);
    v33 = (int)*a7;
    if ( (unsigned int)v33 <= 1 )
    {
      if ( (_BYTE)v7 )
      {
        if ( (_DWORD)v33 )
          return v7;
LABEL_50:
        if ( v25 <= 1 )
          goto LABEL_57;
        v34 = &off_2BED000 + 4 * (int)v25;
        if ( *((_DWORD *)v34 + 7) != 2 )
        {
          v35 = (char **)&off_2BED000;
          v36 = *((_DWORD *)v34 + 5);
          while ( *((_DWORD *)v35 + 5) != v36 || *((_DWORD *)v35 + 7) != 2 )
          {
            v35 += 4;
            if ( v35 == &off_2BED300 )
              goto LABEL_57;
          }
          v25 = *((_DWORD *)v35 + 4);
          if ( !v25 )
LABEL_57:
            v25 = 1;
        }
        goto LABEL_26;
      }
    }
    else
    {
      if ( (int)v33 > 23 || *((_DWORD *)&off_2BED000 + 8 * v33 + 7) != 2 )
      {
        if ( !(_BYTE)v7 )
          return 1;
        goto LABEL_50;
      }
      if ( (_BYTE)v7 )
        return v7;
    }
    if ( v25 > 1 )
    {
      v37 = &off_2BED000 + 4 * (int)v25;
      if ( v37[7] != 2 )
        goto LABEL_26;
      v38 = (char **)&off_2BED000;
      while ( *((_DWORD *)v38 + 5) != v37[5]
           || *((_DWORD *)v38 + 6) != v37[6]
           || (*((_DWORD *)v38 + 7) & 0xFFFFFFFD) == 0 )
      {
        v38 += 4;
        if ( v38 == &off_2BED300 )
          return 0;
      }
      v25 = *((_DWORD *)v38 + 4);
      if ( v25 )
        goto LABEL_26;
    }
  }
  return 0;
}
