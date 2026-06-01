void __fastcall sub_3DBA10(char *a1, char *a2, char *a3, __int64 a4, __int64 a5, int *a6, __int64 a7)
{
  __int64 v7; // r15
  __int64 v8; // rbx
  bool v9; // cc
  __int64 v10; // rcx
  __int64 v11; // r14
  char *v12; // rcx
  char *v13; // rdi
  __int64 v14; // rbp
  int *v15; // r12
  char *v16; // rax
  char *v17; // rcx
  char *v18; // r13
  __int64 v19; // rbx
  __int64 v20; // rax
  int *v21; // rax
  __int64 v22; // r8
  size_t v23; // r9
  __int64 v24; // r9
  int v25; // eax
  char *v26; // [rsp+8h] [rbp-70h]
  size_t v27; // [rsp+8h] [rbp-70h]
  size_t v28; // [rsp+8h] [rbp-70h]
  char *v29; // [rsp+10h] [rbp-68h]
  int *dest; // [rsp+18h] [rbp-60h]
  size_t v32; // [rsp+28h] [rbp-50h]
  __int64 v33; // [rsp+28h] [rbp-50h]
  __int64 n; // [rsp+30h] [rbp-48h]
  int *src; // [rsp+38h] [rbp-40h]

  v7 = a5;
  v8 = a4;
  v9 = a4 <= a5;
  v10 = a5;
  if ( v9 )
    v10 = v8;
  if ( a7 >= v10 )
  {
    v26 = a1;
    v18 = a2;
  }
  else
  {
    v11 = v8;
    v29 = a1;
    v12 = a2;
    dest = a6;
    if ( a5 >= v8 )
      goto LABEL_12;
LABEL_5:
    v13 = v12;
    v14 = v11 / 2;
    v15 = (int *)&v29[4 * (v11 / 2)];
    v11 -= v11 / 2;
    v16 = (char *)sub_3DAEA0(v12, (__int64)a3, *v15);
    v17 = v13;
    v18 = v16;
    v19 = (v16 - v13) >> 2;
    if ( v11 <= v19 )
      goto LABEL_13;
LABEL_6:
    if ( a7 >= v19 )
    {
      v26 = (char *)v15;
      if ( !v19 )
        goto LABEL_8;
      v24 = v17 - (char *)v15;
      v28 = v18 - v17;
      if ( v18 - v17 > 4 )
      {
        v33 = v17 - (char *)v15;
        memmove(dest, v17, v18 - v17);
        if ( v33 <= 4 )
        {
          if ( v33 == 4 )
            *((_DWORD *)v18 - 1) = *v15;
        }
        else
        {
          memmove(&v18[-v33], v15, v33);
        }
        memmove(v15, dest, v28);
        goto LABEL_29;
      }
      if ( v18 - v17 != 4 )
      {
        if ( v24 <= 4 )
        {
          if ( v24 == 4 )
            *((_DWORD *)v18 - 1) = *v15;
        }
        else
        {
          memmove(&v18[-v24], v15, v17 - (char *)v15);
        }
        goto LABEL_29;
      }
      v25 = *(_DWORD *)v17;
      *dest = *(_DWORD *)v17;
      if ( v24 <= 4 )
      {
        if ( v24 != 4 )
          goto LABEL_47;
        *((_DWORD *)v18 - 1) = *v15;
      }
      else
      {
        memmove(&v18[-v24], v15, v17 - (char *)v15);
      }
      v25 = *dest;
LABEL_47:
      *v15 = v25;
LABEL_29:
      v26 = (char *)v15 + v28;
      goto LABEL_8;
    }
    while ( 1 )
    {
LABEL_13:
      if ( a7 < v11 )
      {
        v26 = sub_3DB660((char *)v15, v17, v18);
      }
      else
      {
        v26 = v18;
        if ( v11 )
        {
          v22 = v18 - v17;
          v26 = &v18[-(v17 - (char *)v15)];
          if ( v17 - (char *)v15 <= 4 )
          {
            if ( v17 - (char *)v15 == 4 )
            {
              *dest = *v15;
              if ( v22 <= 4 )
              {
                if ( v22 == 4 )
                  *v15 = *(_DWORD *)v17;
              }
              else
              {
                memmove(v15, v17, v18 - v17);
              }
              *((_DWORD *)v18 - 1) = *dest;
            }
            else if ( v22 <= 4 )
            {
              if ( v22 == 4 )
                *v15 = *(_DWORD *)v17;
            }
            else
            {
              memmove(v15, v17, v18 - v17);
            }
          }
          else
          {
            src = (int *)v17;
            n = v18 - v17;
            v32 = v17 - (char *)v15;
            memmove(dest, v15, v17 - (char *)v15);
            v23 = v32;
            if ( n <= 4 )
            {
              if ( n == 4 )
                *v15 = *src;
            }
            else
            {
              memmove(v15, src, n);
              v23 = v32;
            }
            memmove(v26, dest, v23);
          }
        }
      }
LABEL_8:
      v7 -= v19;
      sub_3DBA10((_DWORD)v29, (_DWORD)v15, (_DWORD)v26, v14, v19, (_DWORD)dest, a7);
      v20 = v7;
      if ( v11 <= v7 )
        v20 = v11;
      if ( v20 <= a7 )
        break;
      v29 = v26;
      v12 = v18;
      if ( v7 < v11 )
        goto LABEL_5;
LABEL_12:
      v27 = (size_t)v12;
      v19 = v7 / 2;
      v18 = &v12[4 * (v7 / 2)];
      v21 = sub_3DAE60(v29, (__int64)v12, *(_DWORD *)v18);
      v17 = (char *)v27;
      v15 = v21;
      v14 = ((char *)v21 - v29) >> 2;
      v11 -= v14;
      if ( v11 > v7 / 2 )
        goto LABEL_6;
    }
    a6 = dest;
    v8 = v11;
  }
  if ( v8 > v7 )
  {
    if ( a3 - v18 <= 4 )
    {
      if ( a3 - v18 == 4 )
        *a6 = *(_DWORD *)v18;
    }
    else
    {
      a6 = (int *)memmove(a6, v18, a3 - v18);
    }
    sub_3DB520(v26, v18, (char *)a6, (char *)a6 + a3 - v18, (__int64)a3);
  }
  else
  {
    sub_3DB3D0(v26, v18, a3, (char *)a6);
  }
}
