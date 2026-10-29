__int64 __fastcall sub_E0CA70(__int64 *a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 a5)
{
  unsigned int v5; // r13d
  __int64 v7; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // r14
  unsigned __int64 *v10; // r15
  __int64 v11; // r14
  unsigned __int64 *v12; // rbx
  unsigned __int64 *v13; // rbp
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  unsigned int v16; // r15d
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // r15
  __int64 v19; // rdx
  __int64 *v20; // rbx
  __int64 v21; // r14
  __int64 v22; // r12
  __int64 *v23; // rbp
  __int64 *v24; // rax
  __int64 *v26; // r8
  __int64 v27; // r9
  char v28; // al
  unsigned __int64 *v29; // r15
  unsigned __int64 *v30; // rbp
  __int64 *v31; // rbx
  __int64 *v32; // r12
  __int64 v33; // r14
  __int64 v34; // r13
  _DWORD *v35; // rsi
  _DWORD *v36; // rdi
  unsigned int v39; // [rsp+14h] [rbp-94h]
  __int64 v40; // [rsp+18h] [rbp-90h]
  unsigned __int64 v41; // [rsp+20h] [rbp-88h]
  __int64 *v42; // [rsp+28h] [rbp-80h]
  unsigned __int64 v43; // [rsp+38h] [rbp-70h]
  unsigned __int64 v44; // [rsp+40h] [rbp-68h]
  __int64 *v45; // [rsp+48h] [rbp-60h]
  char v46; // [rsp+57h] [rbp-51h] BYREF
  unsigned __int64 v47; // [rsp+58h] [rbp-50h] BYREF
  char v48[72]; // [rsp+60h] [rbp-48h] BYREF

  v5 = a3;
  v7 = (__int64)a4;
  v8 = *a1;
  v46 = 0;
  v47 = 0;
  if ( !v8 || (v8 & 7) == 0 || (v9 = v8 & 0xFFFFFFFFFFFFFFF8LL, v44 = v9, *(_DWORD *)(v9 + 12) <= 1u) )
  {
    v18 = sub_DF6EF0(a1);
    if ( (unsigned __int8)sub_DF6F50((__int64)a1, a2, v18, v5, v26, v27, &v46) )
      return v18;
    v28 = sub_E0BFE0((unsigned __int64 *)a1, a2, v18, v5, v7, a5, (__int64 *)&v47);
    v18 = v47;
    if ( v28 )
      return v18;
    return 0;
  }
  v10 = *(unsigned __int64 **)v9;
  v11 = *(_QWORD *)v9 + 8LL * *(unsigned int *)(v9 + 8);
  if ( v10 == (unsigned __int64 *)v11 )
    return 0;
  v12 = v10;
  while ( *v12 <= 1 )
  {
    if ( (unsigned __int64 *)v11 == ++v12 )
      goto LABEL_19;
  }
  if ( (unsigned __int64 *)v11 == v12 )
  {
LABEL_19:
    if ( v10 != (unsigned __int64 *)v11 )
    {
      while ( *v10 <= 1 )
      {
        if ( ++v10 == (unsigned __int64 *)v11 )
          return 0;
      }
      if ( v10 != (unsigned __int64 *)v11 )
      {
        v19 = *v10;
        v20 = (__int64 *)v11;
        v21 = a5;
        v22 = v7;
        v23 = (__int64 *)v10;
        while ( !(unsigned __int8)sub_E0BFE0((unsigned __int64 *)a1, a2, v19, v5, v22, v21, (__int64 *)&v47) )
        {
          v24 = v23 + 1;
          if ( v23 + 1 != v20 )
          {
            while ( 1 )
            {
              v19 = *v24;
              v23 = v24;
              if ( (unsigned __int64)*v24 > 1 )
                break;
              if ( v20 == ++v24 )
                return 0;
            }
            if ( v24 != v20 )
              continue;
          }
          return 0;
        }
        return v47;
      }
    }
    return 0;
  }
  v13 = (unsigned __int64 *)v11;
  v45 = &a4[a3];
  v14 = *v12;
  v15 = 0;
  v16 = a3;
  do
  {
    if ( a5 && a5 != *(_QWORD *)(v14 + 40) || v16 != *(_DWORD *)(v14 + 32) )
      goto LABEL_12;
    if ( !a4 )
      goto LABEL_54;
    v46 = 0;
    if ( !v16 )
      return v14;
    v43 = v14;
    v41 = v15;
    v39 = v16;
    v29 = v13;
    v30 = v12;
    v31 = a4;
    v40 = a5;
    v32 = (__int64 *)(v14 + 48);
    do
    {
      v33 = *v32;
      v34 = *v31;
      if ( *v32 == *v31 )
        goto LABEL_52;
      v42 = a4;
      v46 = 1;
      sub_16669D0(v48, a2);
      v35 = *(_DWORD **)(v33 + 24);
      v36 = *(_DWORD **)(v34 + 24);
      a4 = v42;
      if ( !v35 || *v35 != 5 || v35[1] )
      {
        if ( !v36 || *v36 != 5 || v36[1] || !v35 || *v35 != 5 )
          goto LABEL_45;
        goto LABEL_51;
      }
      if ( !v36 || *v36 != 5 )
      {
LABEL_45:
        v12 = v30;
        v15 = v41;
        v13 = v29;
        a5 = v40;
        v16 = v39;
        goto LABEL_12;
      }
      if ( v36[1] != 1 )
      {
        if ( v36[1] )
          goto LABEL_45;
LABEL_51:
        if ( v35[1] != 1 )
          goto LABEL_45;
      }
LABEL_52:
      ++v31;
      ++v32;
    }
    while ( v31 != v45 );
    v12 = v30;
    v14 = v43;
    v13 = v29;
    a5 = v40;
    v16 = v39;
LABEL_54:
    v15 = v14;
    if ( !v46 )
      return v15;
LABEL_12:
    v17 = v12 + 1;
    if ( v13 == v12 + 1 )
      break;
    while ( 1 )
    {
      v14 = *v17;
      v12 = v17;
      if ( *v17 > 1 )
        break;
      if ( v13 == ++v17 )
        goto LABEL_17;
    }
  }
  while ( v13 != v17 );
LABEL_17:
  v5 = v16;
  v7 = (__int64)a4;
  v18 = v15;
  if ( !v15 )
  {
    v10 = *(unsigned __int64 **)v44;
    v11 = *(_QWORD *)v44 + 8LL * *(unsigned int *)(v44 + 8);
    goto LABEL_19;
  }
  return v18;
}

