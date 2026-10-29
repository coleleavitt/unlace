void __fastcall sub_1790A90(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r13
  bool v11; // r14
  __int64 *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 *i; // rax
  __int64 v18; // rcx
  unsigned __int64 *v19; // rax
  __int64 *v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 *v23; // rax
  __int64 *v24; // rax
  __int64 *v25; // rax
  __int64 *v26; // rax
  __int64 *j; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v38[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v40; // [rsp+30h] [rbp-98h] BYREF
  char v41; // [rsp+88h] [rbp-40h]
  unsigned int v42; // [rsp+90h] [rbp-38h]
  char v43; // [rsp+94h] [rbp-34h]

  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 89) & 4) == 0 )
    return;
  v5 = 1;
  v10 = sub_15F1640(*a1, 1);
  if ( !v10 )
    return;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_5;
  v24 = sub_B8C3D0(a2, 1, v6, v7, v8, v9);
  v7 = *v24;
  v6 = *v24 + 8LL * *((unsigned int *)v24 + 2);
  if ( *v24 < v6 )
  {
    v25 = (__int64 *)*v24;
    while ( 1 )
    {
      v5 = *v25;
      v7 = (__int64)v25;
      if ( *(_WORD *)(*v25 + 36) == 160 )
        break;
      if ( (__int64 *)v6 == ++v25 )
        goto LABEL_5;
    }
LABEL_31:
    v11 = v7 != v6;
    if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
      goto LABEL_17;
    goto LABEL_6;
  }
  if ( v7 != v6 )
  {
    if ( *(_WORD *)(*(_QWORD *)v6 + 36LL) == 160 )
      goto LABEL_31;
    v26 = (__int64 *)(v6 + 8);
    while ( 1 )
    {
      v6 = (unsigned __int64)v26;
      if ( (__int64 *)v7 == v26 )
        break;
      v5 = *v26++;
      if ( *(_WORD *)(*(_QWORD *)v6 + 36LL) == 160 )
        goto LABEL_31;
    }
  }
LABEL_5:
  v11 = 0;
  if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
    return;
LABEL_6:
  v12 = sub_B8C3D0(v10, v5, v6, v7, v8, v9);
  v15 = *v12;
  v16 = *v12 + 8LL * *((unsigned int *)v12 + 2);
  if ( *v12 < v16 )
  {
    v23 = (__int64 *)*v12;
    while ( 1 )
    {
      v15 = *v23;
      if ( *(_WORD *)(*v23 + 36) == 163 )
        break;
      if ( (__int64 *)v16 == ++v23 )
        goto LABEL_12;
    }
    if ( (__int64 *)v16 != v23 )
      return;
  }
  else if ( v15 != v16 )
  {
    if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 163 )
      return;
    for ( i = (__int64 *)(v16 + 8); ; ++i )
    {
      v16 = (unsigned __int64)i;
      if ( (__int64 *)v15 == i )
        break;
      v18 = *i;
      if ( *(_WORD *)(v18 + 36) == 163 )
        return;
    }
  }
LABEL_12:
  if ( (*(_BYTE *)(v10 + 29) & 1) != 0 )
  {
    v19 = sub_B8C3D0(v10, v5, v15, v16, v13, v14);
    v20 = (__int64 *)*v19;
    v21 = *v19 + 8LL * *((unsigned int *)v19 + 2);
    if ( *v19 >= v21 )
    {
      if ( v20 != (__int64 *)v21 )
      {
        if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) == 160 )
          return;
        for ( j = (__int64 *)(v21 + 8); j != v20; ++j )
        {
          v28 = *j;
          if ( *(_WORD *)(v28 + 36) == 160 )
            return;
        }
      }
    }
    else
    {
      v22 = *v19;
      while ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 160 )
      {
        v22 += 8LL;
        if ( v21 == v22 )
          goto LABEL_17;
      }
      if ( v21 != v22 )
        return;
    }
  }
LABEL_17:
  if ( v11 && (*(_BYTE *)(a3 + 24) & 3) == 1 )
  {
    if ( (*(_BYTE *)(a3 + 24) & 8) != 0 )
    {
LABEL_22:
      sub_1606AE0((__int64)v38, 3u, *(unsigned int *)(a3 + 8), 7085, a2, *a1);
      sub_15F7200(v38);
      return;
    }
    if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 97) & 1) != 0 )
    {
      if ( (*(_BYTE *)(a3 + 24) & 8) != 0 )
        goto LABEL_22;
    }
    else
    {
      sub_1606AE0((__int64)v38, 3u, *(unsigned int *)(a3 + 8), 3397, a2, *a1);
      v29 = *(_QWORD *)a3;
      if ( v41 )
      {
        sub_AE9DF0(&v40, *(_QWORD *)a3, 0xAu);
      }
      else if ( v43 )
      {
        v32 = sub_168B9E0(v38);
        v35 = v39;
        if ( v39 )
          v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 32LL))(v39);
        v37 = v35;
        v36 = sub_1587BC0(v32, &v37, v30, v31, v33, v34);
        sub_AE9DF0((unsigned __int8 **)(*v36 + 32LL * v42 + 8), v29, 0xAu);
      }
      sub_15F7200(v38);
    }
  }
}
