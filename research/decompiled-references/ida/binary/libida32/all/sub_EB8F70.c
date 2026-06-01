void *__fastcall sub_EB8F70(char *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, void **a6, void *a7, __int64 a8)
{
  void **v8; // rbx
  void *result; // rax
  __int64 v10; // r12
  __int64 v11; // r14
  char *v12; // r11
  __int64 v13; // r13
  __int64 *v14; // rbp
  char *v15; // rax
  char *v16; // r11
  char *v17; // r10
  __int64 v18; // rbx
  __int64 *v19; // r10
  char *v20; // rbp
  size_t v21; // r12
  void **v22; // r15
  __int64 *v23; // r14
  __int64 *v24; // r13
  __int64 *v25; // r15
  __int64 *v26; // rbx
  __int64 v27; // r12
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 *v34; // rax
  __int64 *v35; // rbp
  signed __int64 v36; // r15
  void **v37; // r15
  __int64 *v38; // r13
  __int64 *v39; // r12
  __int64 v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  void **v45; // rsi
  char *v46; // rdi
  size_t v47; // rdx
  __int64 *v48; // [rsp+0h] [rbp-68h]
  char *v49; // [rsp+8h] [rbp-60h]
  __int64 *v50; // [rsp+8h] [rbp-60h]
  __int64 *v51; // [rsp+8h] [rbp-60h]
  __int64 *v52; // [rsp+8h] [rbp-60h]
  __int64 v53; // [rsp+8h] [rbp-60h]
  char *v55; // [rsp+20h] [rbp-48h]
  char *v56; // [rsp+20h] [rbp-48h]
  char *src; // [rsp+28h] [rbp-40h]
  __int64 *srca; // [rsp+28h] [rbp-40h]

  v8 = a6;
  v49 = a1;
  v48 = (__int64 *)a3;
  result = (void *)a5;
  if ( (__int64)a7 <= a5 )
    result = a7;
  if ( a4 <= (__int64)result )
  {
    v35 = (__int64 *)a1;
    v19 = a2;
  }
  else
  {
    v10 = a5;
    if ( (__int64)a7 >= a5 )
    {
      v20 = a1;
      v19 = a2;
LABEL_13:
      result = v48;
      v21 = (char *)v48 - (char *)v19;
      if ( v48 != v19 )
      {
        v50 = v19;
        result = memmove(v8, v19, (char *)v48 - (char *)v19);
        v19 = v50;
      }
      v22 = (void **)((char *)v8 + v21);
      if ( v20 == (char *)v19 )
      {
        if ( v22 == v8 )
          return result;
        v47 = v21;
        v46 = (char *)v48 - v21;
      }
      else
      {
        if ( v22 == v8 )
          return result;
        v23 = (__int64 *)(v22 - 1);
        v24 = v19 - 1;
        v25 = (__int64 *)v8;
        v26 = (__int64 *)v20;
        v51 = (__int64 *)(a8 + 72);
        while ( 1 )
        {
          while ( 1 )
          {
            v27 = *v23;
            v28 = sub_EB7560(v51, *v24, a3, a4, a5, (__int64)a6);
            v33 = sub_EB7560(v51, v27, v29, v30, v31, v32);
            a4 = (__int64)--v48;
            if ( v33 < v28 )
              break;
            result = (void *)*v23;
            *v48 = *v23;
            if ( v25 == v23 )
              return result;
            --v23;
          }
          result = (void *)*v24;
          *v48 = *v24;
          if ( v24 == v26 )
            break;
          --v24;
        }
        v8 = (void **)v25;
        if ( v25 == v23 + 1 )
          return result;
        v47 = (char *)(v23 + 1) - (char *)v25;
        v46 = (char *)v48 - v47;
      }
      v45 = v8;
      return memmove(v46, v45, v47);
    }
    v11 = a4;
    v12 = (char *)a2;
    while ( 1 )
    {
      v55 = v12;
      if ( v10 >= v11 )
      {
        v18 = v10 / 2;
        srca = (__int64 *)&v12[8 * (v10 / 2)];
        v34 = sub_EB61D0(v49, (__int64)v12, srca, a8, a5, (__int64)a6);
        v17 = (char *)srca;
        v16 = v55;
        v14 = v34;
        v13 = ((char *)v34 - v49) >> 3;
      }
      else
      {
        v13 = v11 / 2;
        v14 = (__int64 *)&v49[8 * (v11 / 2)];
        v15 = (char *)sub_EB5D50(v12, (__int64)v48, v14, a8, a5, (__int64)a6);
        v16 = v55;
        v17 = v15;
        v18 = (v15 - v55) >> 3;
      }
      v11 -= v13;
      v10 -= v18;
      src = v17;
      v56 = sub_EB8E60((char *)v14, v16, v17, v11, v18, a6, (__int64)a7);
      sub_EB8F70((_DWORD)v49, (_DWORD)v14, (_DWORD)v56, v13, v18, (_DWORD)a6, (__int64)a7, a8);
      a3 = (__int64)a7;
      if ( v10 <= (__int64)a7 )
        a3 = v10;
      result = v56;
      v19 = (__int64 *)src;
      if ( v11 <= a3 )
        break;
      v49 = v56;
      v12 = src;
      if ( v10 <= (__int64)a7 )
      {
        v8 = a6;
        v20 = v56;
        goto LABEL_13;
      }
    }
    v8 = a6;
    v35 = (__int64 *)v56;
  }
  v36 = (char *)v19 - (char *)v35;
  if ( v35 != v19 )
  {
    v52 = v19;
    result = memmove(v8, v35, (char *)v19 - (char *)v35);
    v19 = v52;
  }
  v37 = (void **)((char *)v8 + v36);
  if ( v37 != v8 && v48 != v19 )
  {
    v38 = v19;
    v39 = (__int64 *)(a8 + 72);
    do
    {
      while ( 1 )
      {
        v53 = *v38;
        v40 = sub_EB7560(v39, (__int64)*v8, a3, a4, a5, (__int64)a6);
        if ( sub_EB7560(v39, v53, v41, v42, v43, v44) >= v40 )
          break;
        result = (void *)*v38;
        ++v35;
        ++v38;
        *(v35 - 1) = (__int64)result;
        if ( v48 == v38 || v37 == v8 )
          goto LABEL_35;
      }
      result = *v8++;
      *v35++ = (__int64)result;
    }
    while ( v37 != v8 && v48 != v38 );
  }
LABEL_35:
  if ( v8 != v37 )
  {
    v45 = v8;
    v46 = (char *)v35;
    v47 = (char *)v37 - (char *)v8;
    return memmove(v46, v45, v47);
  }
  return result;
}

