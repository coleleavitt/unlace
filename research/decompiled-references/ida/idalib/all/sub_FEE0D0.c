unsigned __int64 *__fastcall sub_FEE0D0(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // r10
  __int64 v4; // rax
  unsigned __int64 *v5; // r10
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int64 *result; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  bool v27; // zf
  unsigned __int64 v28; // r8
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  __int64 v35; // r8

  v3 = (a2 - (__int64)a1) >> 5;
  v4 = (a2 - (__int64)a1) >> 3;
  if ( v3 <= 0 )
    goto LABEL_41;
  v5 = &a1[4 * v3];
  while ( 2 )
  {
    v6 = *a1;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v6 + 8);
      if ( !v7 )
        break;
      v6 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v7 & 4) == 0 || !v6 )
        goto LABEL_7;
    }
    v6 = 0;
LABEL_7:
    v8 = *a3;
    do
    {
      v9 = *(_QWORD *)(v8 + 8);
      if ( !v9 )
      {
        if ( v6 )
          goto LABEL_12;
        return a1;
      }
      v8 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( (v9 & 4) != 0 && v8 );
    if ( v6 == v8 )
      return a1;
LABEL_12:
    v10 = a1[1];
    while ( 1 )
    {
      v11 = *(_QWORD *)(v10 + 8);
      if ( !v11 )
        break;
      v10 = v11 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v11 & 4) == 0 || !v10 )
        goto LABEL_16;
    }
    v10 = 0;
LABEL_16:
    v12 = *a3;
    while ( 2 )
    {
      v13 = *(_QWORD *)(v12 + 8);
      if ( !v13 )
      {
        if ( v10 )
          goto LABEL_21;
        return a1 + 1;
      }
      v12 = v13 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v13 & 4) != 0 && v12 )
        continue;
      break;
    }
    if ( v12 == v10 )
      return a1 + 1;
LABEL_21:
    v14 = a1[2];
    while ( 1 )
    {
      v15 = *(_QWORD *)(v14 + 8);
      if ( !v15 )
        break;
      v14 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v15 & 4) == 0 || !v14 )
        goto LABEL_25;
    }
    v14 = 0;
LABEL_25:
    v16 = *a3;
    while ( 2 )
    {
      v17 = *(_QWORD *)(v16 + 8);
      if ( !v17 )
      {
        if ( v14 )
          goto LABEL_30;
        return a1 + 2;
      }
      v16 = v17 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v17 & 4) != 0 && v16 )
        continue;
      break;
    }
    if ( v16 == v14 )
      return a1 + 2;
LABEL_30:
    v18 = a1[3];
    while ( 1 )
    {
      v19 = *(_QWORD *)(v18 + 8);
      if ( !v19 )
        break;
      v18 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v19 & 4) == 0 || !v18 )
        goto LABEL_34;
    }
    v18 = 0;
LABEL_34:
    v20 = *a3;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v20 + 8);
      if ( !v21 )
        break;
      v20 = v21 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v21 & 4) == 0 || !v20 )
      {
        if ( v18 != v20 )
          goto LABEL_39;
        return a1 + 3;
      }
    }
    if ( !v18 )
      return a1 + 3;
LABEL_39:
    a1 += 4;
    if ( a1 != v5 )
      continue;
    break;
  }
  v4 = (a2 - (__int64)a1) >> 3;
LABEL_41:
  switch ( v4 )
  {
    case 2LL:
      v23 = *a3;
      result = a1;
      break;
    case 3LL:
      v28 = *a1;
      while ( 1 )
      {
        v29 = *(_QWORD *)(v28 + 8);
        if ( !v29 )
          break;
        v28 = v29 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v29 & 4) == 0 || !v28 )
          goto LABEL_73;
      }
      v28 = 0;
LABEL_73:
      v23 = *a3;
      v30 = v23;
      while ( 1 )
      {
        v31 = *(_QWORD *)(v30 + 8);
        if ( !v31 )
          break;
        v30 = v31 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v31 & 4) == 0 || !v30 )
          goto LABEL_77;
      }
      v30 = 0;
LABEL_77:
      result = a1;
      if ( v28 == v30 )
        return result;
      result = a1 + 1;
      break;
    case 1LL:
      v23 = *a3;
LABEL_59:
      v24 = *a1;
      do
      {
        v25 = *(_QWORD *)(v24 + 8);
        if ( !v25 )
        {
          v24 = 0;
          break;
        }
        v24 = v25 & 0xFFFFFFFFFFFFFFF8LL;
      }
      while ( (v25 & 4) != 0 && v24 );
      while ( 1 )
      {
        v26 = *(_QWORD *)(v23 + 8);
        if ( !v26 )
          break;
        v23 = v26 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v26 & 4) == 0 || !v23 )
          goto LABEL_66;
      }
      v23 = 0;
LABEL_66:
      v27 = v24 == v23;
      result = a1;
      if ( !v27 )
        return (unsigned __int64 *)a2;
      return result;
    default:
      return (unsigned __int64 *)a2;
  }
  v32 = *result;
  while ( 1 )
  {
    v33 = *(_QWORD *)(v32 + 8);
    if ( !v33 )
      break;
    v32 = v33 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v33 & 4) == 0 || !v32 )
      goto LABEL_84;
  }
  v32 = 0;
LABEL_84:
  v34 = v23;
  while ( 1 )
  {
    v35 = *(_QWORD *)(v34 + 8);
    if ( !v35 )
      break;
    v34 = v35 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v35 & 4) == 0 || !v34 )
      goto LABEL_88;
  }
  v34 = 0;
LABEL_88:
  if ( v32 != v34 )
  {
    a1 = result + 1;
    goto LABEL_59;
  }
  return result;
}
