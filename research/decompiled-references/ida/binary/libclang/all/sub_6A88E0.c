__int64 __fastcall sub_6A88E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 *v9; // rbp
  bool v10; // zf
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 *v13; // rax
  unsigned __int64 v14; // rcx
  __int64 *v15; // rax
  char v16; // si
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned int v26; // ebx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 *v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // [rsp+8h] [rbp-180h]
  void *v34; // [rsp+30h] [rbp-158h] BYREF
  __int64 v35; // [rsp+38h] [rbp-150h]
  _BYTE v36[128]; // [rsp+40h] [rbp-148h] BYREF
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+C8h] [rbp-C0h]
  _BYTE v39[184]; // [rsp+D0h] [rbp-B8h] BYREF

  v34 = v36;
  v35 = 0x2000000000LL;
  ptr = v39;
  v38 = 0x2000000000LL;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v3 = sub_79A2B0(a1);
    v4 = *(_QWORD *)v3 + 8LL * *(unsigned int *)(v3 + 8);
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
      v5 = *(_QWORD *)sub_79A2B0(a1);
    else
      v5 = 0;
    v6 = a2;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      goto LABEL_5;
LABEL_99:
    v8 = 0;
    v9 = nullptr;
    goto LABEL_7;
  }
  v6 = a2;
  v4 = 0;
  v5 = 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_99;
LABEL_5:
  v7 = sub_79A2B0(v6);
  v8 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
  if ( (*(_BYTE *)(v6 + 29) & 1) != 0 )
    v9 = *(__int64 **)sub_79A2B0(v6);
  else
    v9 = nullptr;
LABEL_7:
  v10 = v5 == v4;
  while ( v5 >= v4 )
  {
    if ( v10 )
      goto LABEL_82;
    v12 = v4;
    while ( *(_WORD *)(*(_QWORD *)v12 + 32LL) != 200 )
    {
      v12 += 8LL;
      if ( v5 == v12 )
        goto LABEL_82;
    }
    v11 = v5;
LABEL_12:
    if ( v11 == v12 )
      goto LABEL_82;
LABEL_13:
    v13 = v9;
    if ( (unsigned __int64)v9 < v8 )
    {
      while ( *(_WORD *)(*v13 + 32) != 200 )
      {
        if ( ++v13 == (__int64 *)v8 )
          goto LABEL_88;
      }
      v14 = v8;
      goto LABEL_18;
    }
    if ( v9 != (__int64 *)v8 )
      goto LABEL_71;
LABEL_88:
    if ( v5 >= v4 )
    {
      if ( v5 == v4 )
        goto LABEL_54;
      v16 = 0;
      goto LABEL_25;
    }
    v16 = 0;
LABEL_78:
    v19 = v5;
    while ( *(_WORD *)(*(_QWORD *)v19 + 32LL) != 200 )
    {
      v19 += 8LL;
      if ( v19 == v4 )
        goto LABEL_54;
    }
    v18 = v4;
LABEL_29:
    if ( v19 == v18 )
      goto LABEL_54;
    while ( *(_WORD *)(*(_QWORD *)v5 + 32LL) != 200 )
      v5 += 8LL;
    v32 = *(_QWORD *)v5;
    if ( !v16
      || (LODWORD(v35) = 0,
          LODWORD(v38) = 0,
          v20 = sub_798D40(a1),
          sub_AFCA50(*(_QWORD *)(v32 + 40), &v34, v20, 1, 0),
          v21 = sub_798D40(a2),
          sub_AFCA50(*(_QWORD *)(v2 + 40), &ptr, v21, 1, 0),
          !(unsigned __int8)sub_25ABE00(&v34, &ptr)) )
    {
LABEL_54:
      v26 = 0;
      goto LABEL_55;
    }
    if ( (unsigned __int64)v9 >= v8 )
    {
      if ( v9 == (__int64 *)v8 )
        goto LABEL_42;
      v28 = v8;
      while ( 1 )
      {
        v23 = v28;
        if ( *(_WORD *)(*(_QWORD *)v28 + 32LL) == 200 )
          break;
        v28 += 8LL;
        if ( v9 == (__int64 *)v28 )
          goto LABEL_76;
      }
      v22 = v9;
    }
    else
    {
      v22 = v9;
      while ( *(_WORD *)(*v22 + 32) != 200 )
      {
        if ( ++v22 == (__int64 *)v8 )
          goto LABEL_76;
      }
      v23 = v8;
    }
    if ( v22 == (__int64 *)v23 )
LABEL_76:
      v9 = (__int64 *)v8;
    else
      ++v9;
LABEL_42:
    if ( v5 >= v4 )
    {
      if ( v5 == v4 )
        goto LABEL_7;
      v25 = v4;
      while ( *(_WORD *)(*(_QWORD *)v25 + 32LL) != 200 )
      {
        v25 += 8LL;
        if ( v25 == v5 )
          goto LABEL_75;
      }
      v24 = v5;
    }
    else
    {
      v24 = v5;
      while ( *(_WORD *)(*(_QWORD *)v24 + 32LL) != 200 )
      {
        v24 += 8LL;
        if ( v24 == v4 )
          goto LABEL_75;
      }
      v25 = v4;
    }
    if ( v24 == v25 )
    {
LABEL_75:
      v5 = v4;
      goto LABEL_7;
    }
    v5 += 8LL;
    v10 = v5 == v4;
  }
  v11 = v5;
  do
  {
    if ( *(_WORD *)(*(_QWORD *)v11 + 32LL) == 200 )
    {
      v12 = v4;
      goto LABEL_12;
    }
    v11 += 8LL;
  }
  while ( v11 != v4 );
LABEL_82:
  if ( (unsigned __int64)v9 < v8 )
  {
    v30 = v9;
    while ( *(_WORD *)(*v30 + 32) != 200 )
    {
      if ( (__int64 *)v8 == ++v30 )
        goto LABEL_87;
    }
    if ( v30 == (__int64 *)v8 )
      goto LABEL_87;
    goto LABEL_13;
  }
  if ( v9 != (__int64 *)v8 )
  {
    v31 = v8;
    while ( *(_WORD *)(*(_QWORD *)v31 + 32LL) != 200 )
    {
      v31 += 8LL;
      if ( v9 == (__int64 *)v31 )
        goto LABEL_87;
    }
    if ( (__int64 *)v31 != v9 )
    {
LABEL_71:
      v29 = v8;
      while ( 1 )
      {
        v14 = v29;
        if ( *(_WORD *)(*(_QWORD *)v29 + 32LL) == 200 )
          break;
        v29 += 8LL;
        if ( v9 == (__int64 *)v29 )
          goto LABEL_88;
      }
      v13 = v9;
LABEL_18:
      if ( v13 == (__int64 *)v14 )
        goto LABEL_88;
      v2 = *v9;
      if ( *(_WORD *)(*v9 + 32) != 200 )
      {
        v15 = v9 + 1;
        do
        {
          v2 = *v15;
          v9 = v15++;
        }
        while ( *(_WORD *)(v2 + 32) != 200 );
      }
      if ( v5 < v4 )
      {
        v16 = 1;
        goto LABEL_78;
      }
      if ( v5 == v4 )
        goto LABEL_54;
      v16 = 1;
LABEL_25:
      v17 = v4;
      while ( 1 )
      {
        v18 = v17;
        if ( *(_WORD *)(*(_QWORD *)v17 + 32LL) == 200 )
          break;
        v17 += 8LL;
        if ( v5 == v17 )
          goto LABEL_54;
      }
      v19 = v5;
      goto LABEL_29;
    }
  }
LABEL_87:
  v26 = 1;
LABEL_55:
  if ( ptr != v39 )
    free(ptr);
  if ( v34 != v36 )
    free(v34);
  return v26;
}

