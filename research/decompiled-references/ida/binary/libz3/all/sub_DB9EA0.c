unsigned __int8 __fastcall sub_DB9EA0(__int64 *a1, __int64 *a2, __int64 *a3, _QWORD *a4)
{
  __int64 *v4; // r8
  __int64 *v5; // r13
  __int64 v7; // rbx
  unsigned __int8 result; // al
  __int64 *v9; // rbx
  __int64 *v10; // r13
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 *v13; // r15
  __int64 v14; // rbx
  __int64 *v15; // rcx
  __int64 *v16; // rbp
  __int64 *v17; // r13
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 *v20; // r14
  __int64 v21; // rbp
  __int64 *v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rbp
  __int64 *v25; // r8
  __int64 *v26; // r14
  __int64 v27; // r15
  __int64 v28; // rbx
  __int64 *v29; // rdi
  __int64 v30; // rax
  __int64 *v31; // r8
  __int64 *v32; // r14
  __int64 *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 *v36; // [rsp+8h] [rbp-A0h]
  __int64 *v37; // [rsp+8h] [rbp-A0h]
  __int64 *v38; // [rsp+10h] [rbp-98h]
  __int64 v39; // [rsp+10h] [rbp-98h]
  __int64 *src; // [rsp+18h] [rbp-90h]
  __int64 *srca; // [rsp+18h] [rbp-90h]
  __int64 v42; // [rsp+20h] [rbp-88h]
  __int64 v45; // [rsp+38h] [rbp-70h]
  __int64 *v46; // [rsp+40h] [rbp-68h]
  _QWORD *v47; // [rsp+58h] [rbp-50h] BYREF
  _QWORD *v48; // [rsp+60h] [rbp-48h] BYREF
  _QWORD *v49[8]; // [rsp+68h] [rbp-40h] BYREF

  v4 = a1;
  v5 = a2;
  v7 = (char *)a2 - (char *)a1;
  v42 = a2 - a1;
  result = (_BYTE)a3 + (_BYTE)a2 - (_BYTE)a1;
  v46 = (__int64 *)((char *)a3 + (char *)a2 - (char *)a1);
  if ( (char *)a2 - (char *)a1 <= 48 )
  {
    if ( a2 == a1 )
      return result;
    v15 = a1 + 1;
    if ( a2 == a1 + 1 )
      return result;
  }
  else
  {
    v9 = a1;
    do
    {
      src = v9;
      v9 += 7;
      v10 = v9 - 6;
      do
      {
        while ( 1 )
        {
          v11 = *(v9 - 7);
          v12 = *v10;
          v47 = a4;
          if ( sub_DB0E50(&v47, v12, v11) )
            break;
          v49[0] = a4;
          v13 = v10;
          v38 = v9;
          while ( 1 )
          {
            v14 = *(v13 - 1);
            if ( !sub_DB0E50(v49, v12, v14) )
              break;
            *v13-- = v14;
          }
          v9 = v38;
          ++v10;
          *v13 = v12;
          if ( v38 == v10 )
            goto LABEL_12;
        }
        if ( (char *)v10 - (char *)src <= 8 )
        {
          if ( (char *)v10 - (char *)src == 8 )
            *v10 = v11;
        }
        else
        {
          memmove(src + 1, src, (char *)v10 - (char *)src);
        }
        ++v10;
        *(v9 - 7) = v12;
      }
      while ( v9 != v10 );
LABEL_12:
      result = (_BYTE)a2 - (_BYTE)v9;
    }
    while ( (char *)a2 - (char *)v9 > 48 );
    v5 = a2;
    v4 = v9;
    v7 = (char *)a2 - (char *)a1;
    if ( a2 == v4 )
      goto LABEL_25;
    v15 = src + 8;
    if ( a2 == src + 8 )
      goto LABEL_25;
  }
  v36 = v5;
  v16 = v4;
  v17 = v15;
  v45 = v7;
  do
  {
    while ( 1 )
    {
      v18 = *v16;
      v19 = *v17;
      v48 = a4;
      result = sub_DB0E50(&v48, v19, v18);
      if ( result )
        break;
      v49[0] = a4;
      v20 = v17;
      srca = v16;
      while ( 1 )
      {
        v21 = *(v20 - 1);
        result = sub_DB0E50(v49, v19, v21);
        if ( !result )
          break;
        *v20-- = v21;
      }
      *v20 = v19;
      v16 = srca;
      if ( v36 == ++v17 )
        goto LABEL_24;
    }
    if ( (char *)v17 - (char *)v16 <= 8 )
    {
      if ( (char *)v17 - (char *)v16 == 8 )
        *v17 = v18;
    }
    else
    {
      result = (unsigned __int8)memmove(v16 + 1, v16, (char *)v17 - (char *)v16);
    }
    *v16 = v19;
    ++v17;
  }
  while ( v36 != v17 );
LABEL_24:
  v7 = v45;
  v5 = v36;
LABEL_25:
  if ( v7 > 56 )
  {
    v22 = v46;
    v23 = 7;
    while ( 1 )
    {
      v24 = 2 * v23;
      if ( v42 < 2 * v23 )
      {
        v30 = v42;
        v25 = a3;
        v26 = a1;
      }
      else
      {
        v25 = a3;
        v37 = v22;
        v26 = a1;
        v39 = v23;
        v27 = 16 * v23;
        v28 = -1 * v23;
        do
        {
          v29 = v26;
          v26 = (__int64 *)((char *)v26 + v27);
          v25 = (__int64 *)sub_DB9DA0(v29, &v26[v28], &v26[v28], v26, v25, a4);
          v30 = v5 - v26;
        }
        while ( v24 <= v30 );
        v22 = v37;
        v23 = v39;
      }
      if ( v23 <= v30 )
        v30 = v23;
      v23 *= 4;
      sub_DB9DA0(v26, &v26[v30], &v26[v30], v5, v25, a4);
      if ( v42 < v23 )
        break;
      v31 = a1;
      v32 = a3;
      do
      {
        v33 = v32;
        v32 += v23;
        v31 = (__int64 *)sub_DB9DA0(
                           v33,
                           (__int64 *)((char *)v32 + 8 * v24 - 8 * v23),
                           (__int64 *)((char *)v32 + 8 * v24 - 8 * v23),
                           v32,
                           v31,
                           a4);
        v34 = v22 - v32;
      }
      while ( v23 <= v34 );
      if ( v34 > v24 )
        v34 = v24;
      result = sub_DB9DA0(v32, &v32[v34], &v32[v34], v22, v31, a4);
      if ( v42 <= v23 )
        return result;
    }
    v35 = v42;
    if ( v42 > v24 )
      v35 = v24;
    return sub_DB9DA0(a3, &a3[v35], &a3[v35], v46, a1, a4);
  }
  return result;
}

