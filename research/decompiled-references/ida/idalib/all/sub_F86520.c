__int64 *__fastcall sub_F86520(char *a1, char *a2, char *a3, __int64 a4, __int64 a5, __int64 *a6, __int64 *a7)
{
  __int64 *v7; // rbx
  __int64 *result; // rax
  __int64 v9; // rbp
  __int64 v10; // r14
  char *v11; // r13
  char *v12; // rbx
  __int64 *v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // r12
  __int64 *v16; // r14
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 *v19; // r12
  __int64 *v20; // rbp
  __int64 *v21; // r14
  __int64 *v22; // r13
  __int64 *v23; // rbp
  __int64 v24; // r12
  char *v25; // rbp
  __int64 v26; // rbx
  __int64 *v27; // r14
  __int64 v28; // rax
  char *v29; // r12
  __int64 *v30; // rbp
  __int64 *v31; // rsi
  char *v32; // rdi
  size_t v33; // rdx
  char *v34; // [rsp+10h] [rbp-78h]
  char *src; // [rsp+18h] [rbp-70h]
  char *srca; // [rsp+18h] [rbp-70h]
  __int64 v39; // [rsp+30h] [rbp-58h]
  __int64 v40; // [rsp+30h] [rbp-58h]
  __int64 v41; // [rsp+38h] [rbp-50h]
  __int64 v42; // [rsp+38h] [rbp-50h]
  __int64 v43; // [rsp+40h] [rbp-48h]
  __int64 v44; // [rsp+40h] [rbp-48h]
  __int64 v45; // [rsp+48h] [rbp-40h]
  __int64 v46; // [rsp+48h] [rbp-40h]

  v7 = a6;
  v34 = a1;
  src = a2;
  result = a7;
  if ( a5 <= (__int64)a7 )
    result = (__int64 *)a5;
  if ( a4 <= (__int64)result )
  {
    v11 = a2;
    v29 = a1;
  }
  else
  {
    v9 = a5;
    if ( a5 <= (__int64)a7 )
    {
      v11 = a2;
      v19 = (__int64 *)a1;
LABEL_20:
      result = (__int64 *)a3;
      if ( a3 != v11 )
        result = (__int64 *)memmove(v7, v11, a3 - v11);
      v20 = (__int64 *)((char *)v7 + a3 - v11);
      if ( v11 == (char *)v19 )
      {
        if ( v7 == v20 )
          return result;
        v33 = a3 - v11;
        v32 = v11;
      }
      else
      {
        if ( v7 == v20 )
          return result;
        v21 = (__int64 *)a3;
        v22 = (__int64 *)(v11 - 8);
        v23 = v20 - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            --v21;
            if ( sub_F79CB0(*v23, *v22) )
              break;
            result = (__int64 *)*v23;
            *v21 = *v23;
            if ( v7 == v23 )
              return result;
            --v23;
          }
          result = (__int64 *)*v22;
          *v21 = *v22;
          if ( v22 == v19 )
            break;
          --v22;
        }
        if ( v7 == v23 + 1 )
          return result;
        v33 = (char *)(v23 + 1) - (char *)v7;
        v32 = (char *)v21 - v33;
      }
      v31 = v7;
      return (__int64 *)memmove(v32, v31, v33);
    }
    v10 = a4;
    while ( 1 )
    {
      if ( v9 >= v10 )
      {
        v12 = v34;
        v42 = v9 / 2;
        v17 = v9 / 2;
        v11 = &src[8 * (v9 / 2)];
        if ( src - v34 > 0 )
        {
          v40 = v9 / 2;
          v24 = (src - v34) >> 3;
          v46 = v9;
          v25 = v34;
          v44 = v10;
          while ( 1 )
          {
            v26 = v24 >> 1;
            v27 = (__int64 *)&v25[8 * (v24 >> 1)];
            if ( sub_F79CB0(*(_QWORD *)v11, *v27) )
            {
              if ( !v26 )
              {
LABEL_34:
                v12 = v25;
                v17 = v40;
                v28 = v25 - v34;
                v9 = v46;
                v39 = v28 >> 3;
                v10 = v44 - (v28 >> 3);
                goto LABEL_35;
              }
            }
            else
            {
              v25 = (char *)(v27 + 1);
              v26 = v24 - v26 - 1;
              if ( v26 <= 0 )
                goto LABEL_34;
            }
            v24 = v26;
          }
        }
        LODWORD(v39) = 0;
LABEL_35:
        v9 -= v42;
      }
      else
      {
        v11 = src;
        v41 = v10 / 2;
        v12 = &v34[8 * (v10 / 2)];
        v39 = v10 / 2;
        if ( a3 - src > 0 )
        {
          v45 = v9;
          v13 = (__int64 *)&v34[8 * (v10 / 2)];
          v14 = (a3 - src) >> 3;
          v43 = v10;
          while ( 1 )
          {
            v15 = v14 >> 1;
            v16 = (__int64 *)&v11[8 * (v14 >> 1)];
            if ( sub_F79CB0(*v16, *v13) )
            {
              v11 = (char *)(v16 + 1);
              v15 = v14 - v15 - 1;
              if ( v15 <= 0 )
                goto LABEL_13;
            }
            else if ( !v15 )
            {
LABEL_13:
              v12 = (char *)v13;
              v17 = (v11 - src) >> 3;
              v10 = v43;
              v9 = v45 - v17;
              goto LABEL_14;
            }
            v14 = v15;
          }
        }
        v17 = 0;
LABEL_14:
        v10 -= v41;
      }
      srca = sub_F86410(v12, src, v11, v10, v17, a6, (__int64)a7);
      sub_F86520((_DWORD)v34, (_DWORD)v12, (_DWORD)srca, v39, v17, (_DWORD)a6, (__int64)a7);
      v18 = v9;
      result = (__int64 *)srca;
      if ( (__int64)a7 <= v9 )
        v18 = (__int64)a7;
      if ( v18 >= v10 )
        break;
      v34 = srca;
      src = v11;
      if ( (__int64)a7 >= v9 )
      {
        v7 = a6;
        v19 = result;
        goto LABEL_20;
      }
    }
    v7 = a6;
    v29 = srca;
  }
  if ( v11 != v29 )
    result = (__int64 *)memmove(v7, v29, v11 - v29);
  v30 = (__int64 *)((char *)v7 + v11 - v29);
  if ( a3 != v11 && v7 != v30 )
  {
    do
    {
      while ( sub_F79CB0(*(_QWORD *)v11, *v7) )
      {
        result = *(__int64 **)v11;
        v29 += 8;
        v11 += 8;
        *((_QWORD *)v29 - 1) = result;
        if ( a3 == v11 || v30 == v7 )
          goto LABEL_48;
      }
      result = (__int64 *)*v7++;
      v29 += 8;
      *((_QWORD *)v29 - 1) = result;
    }
    while ( v30 != v7 && a3 != v11 );
  }
LABEL_48:
  if ( v7 != v30 )
  {
    v31 = v7;
    v32 = v29;
    v33 = (char *)v30 - (char *)v7;
    return (__int64 *)memmove(v32, v31, v33);
  }
  return result;
}
