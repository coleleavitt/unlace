__int64 __fastcall sub_41FE00(char *a1, char *a2, char *a3)
{
  char *v3; // r14
  __int64 v4; // r13
  char *v5; // r15
  __int64 result; // rax
  char *v7; // rbx
  char *v8; // r13
  char v9; // al
  __int64 v10; // r15
  char *i; // r14
  __int64 v12; // rdx
  char *v13; // r12
  __int64 *v14; // r12
  __int64 *v15; // rcx
  __int64 *v16; // r15
  __int64 v17; // r13
  __int64 *j; // r14
  __int64 v19; // rdx
  __int64 *v20; // rbp
  __int64 v21; // rbp
  __int64 v22; // rbx
  _QWORD *v23; // r8
  char *v24; // r14
  char *v25; // rdi
  __int64 v26; // rdx
  _QWORD *v27; // r8
  char *v28; // r14
  char *v29; // rdi
  __int64 v30; // rdx
  char *v31; // [rsp+0h] [rbp-88h]
  char *src; // [rsp+8h] [rbp-80h]
  __int64 *srca; // [rsp+8h] [rbp-80h]
  __int64 v34; // [rsp+10h] [rbp-78h]
  __int64 v37; // [rsp+28h] [rbp-60h]
  char *v38; // [rsp+30h] [rbp-58h]
  char *v39; // [rsp+38h] [rbp-50h]
  char v40; // [rsp+4Eh] [rbp-3Ah] BYREF
  _BYTE v41[57]; // [rsp+4Fh] [rbp-39h] BYREF

  v3 = a2;
  v4 = a2 - a1;
  v5 = &a3[a2 - a1];
  result = (a2 - a1) >> 3;
  v34 = result;
  if ( a2 - a1 <= 48 )
  {
    if ( a2 == a1 )
      return result;
    result = (__int64)&v40;
    v15 = (__int64 *)(a1 + 8);
    v14 = (__int64 *)a1;
    if ( a2 == a1 + 8 )
      return result;
  }
  else
  {
    v7 = a1;
    v39 = &a3[a2 - a1];
    do
    {
      src = v7;
      v7 += 56;
      v8 = v7 - 48;
      do
      {
        while ( 1 )
        {
          v9 = sub_422720(&v40, *(_QWORD *)v8, *((_QWORD *)v7 - 7));
          v10 = *(_QWORD *)v8;
          if ( v9 )
            break;
          for ( i = v8; ; *((_QWORD *)i + 1) = *(_QWORD *)i )
          {
            v12 = *((_QWORD *)i - 1);
            v13 = i;
            i -= 8;
            if ( !(unsigned __int8)sub_422720(v41, v10, v12) )
              break;
          }
          v8 += 8;
          *(_QWORD *)v13 = v10;
          if ( v7 == v8 )
            goto LABEL_12;
        }
        if ( v8 - src <= 8 )
        {
          if ( v8 - src == 8 )
            *(_QWORD *)v8 = *((_QWORD *)v7 - 7);
        }
        else
        {
          memmove(src + 8, src, v8 - src);
        }
        v8 += 8;
        *((_QWORD *)v7 - 7) = v10;
      }
      while ( v7 != v8 );
LABEL_12:
      result = a2 - v7;
    }
    while ( a2 - v7 > 48 );
    v3 = a2;
    v4 = a2 - a1;
    v14 = (__int64 *)v7;
    v5 = v39;
    if ( a2 == v7 )
      goto LABEL_25;
    v15 = (__int64 *)(src + 64);
    if ( a2 == src + 64 )
      goto LABEL_25;
  }
  v38 = v5;
  v16 = v15;
  v37 = v4;
  srca = (__int64 *)v3;
  do
  {
    while ( 1 )
    {
      result = sub_422720(&v40, *v16, *v14);
      v17 = *v16;
      if ( (_BYTE)result )
        break;
      for ( j = v16; ; j[1] = *j )
      {
        v19 = *(j - 1);
        v20 = j--;
        result = sub_422720(v41, v17, v19);
        if ( !(_BYTE)result )
          break;
      }
      *v20 = v17;
      if ( srca == ++v16 )
        goto LABEL_24;
    }
    if ( (char *)v16 - (char *)v14 <= 8 )
    {
      if ( (char *)v16 - (char *)v14 == 8 )
      {
        result = *v14;
        *v16 = *v14;
      }
    }
    else
    {
      result = (__int64)memmove(v14 + 1, v14, (char *)v16 - (char *)v14);
    }
    *v14 = v17;
    ++v16;
  }
  while ( srca != v16 );
LABEL_24:
  v4 = v37;
  v5 = v38;
  v3 = (char *)srca;
LABEL_25:
  v21 = 7;
  if ( v4 > 56 )
  {
    v31 = v3;
    while ( 1 )
    {
      v22 = 2 * v21;
      if ( v34 < 2 * v21 )
      {
        v26 = v34;
        v23 = a3;
        v24 = a1;
      }
      else
      {
        v23 = a3;
        v24 = a1;
        do
        {
          v25 = v24;
          v24 += 16 * v21;
          v23 = (_QWORD *)sub_41FD10(v25, &v24[-8 * v21], &v24[-8 * v21], v24, v23);
          v26 = (v31 - v24) >> 3;
        }
        while ( v22 <= v26 );
      }
      if ( v21 <= v26 )
        v26 = v21;
      v21 *= 4;
      sub_41FD10(v24, &v24[8 * v26], &v24[8 * v26], v31, v23);
      if ( v34 < v21 )
        break;
      v27 = a1;
      v28 = a3;
      do
      {
        v29 = v28;
        v28 += 8 * v21;
        v27 = (_QWORD *)sub_41FD10(v29, &v28[8 * v22 - 8 * v21], &v28[8 * v22 - 8 * v21], v28, v27);
        v30 = (v5 - v28) >> 3;
      }
      while ( v21 <= v30 );
      if ( v30 > v22 )
        v30 = v22;
      result = sub_41FD10(v28, &v28[8 * v30], &v28[8 * v30], v5, v27);
      if ( v34 <= v21 )
        return result;
    }
    if ( v34 <= v22 )
      v22 = v34;
    return sub_41FD10(a3, &a3[8 * v22], &a3[8 * v22], v5, a1);
  }
  return result;
}

