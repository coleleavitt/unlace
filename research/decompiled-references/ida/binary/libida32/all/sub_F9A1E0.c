__int64 __fastcall sub_F9A1E0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 v6; // rsi
  int v7; // ebp
  unsigned __int64 v8; // rbx
  char v9; // r15
  unsigned __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // r13
  unsigned int v13; // eax
  int v14; // eax
  __int64 *v15; // r14
  unsigned __int64 v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rbx
  unsigned int v19; // eax
  int v20; // eax
  __int64 *v21; // rsi
  __int64 *v22; // r12
  __int64 v24; // [rsp+10h] [rbp-58h]
  __int64 *v25[8]; // [rsp+28h] [rbp-40h] BYREF

  if ( !a3 )
    return 0;
  v3 = a3;
  v4 = 0;
  result = 1;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = v4 + 1;
    v9 = *(_BYTE *)(a2 + v4);
    if ( v9 == 41 )
    {
      --v7;
      goto LABEL_13;
    }
    if ( v9 <= 41 )
      break;
    if ( v9 != 44 && v9 != 124 )
      goto LABEL_7;
LABEL_13:
    if ( v7 )
      goto LABEL_7;
    if ( v6 == v4 || !(_BYTE)result )
      goto LABEL_26;
    if ( v3 < v6 )
    {
      v10 = 0;
      v11 = a2 + v3;
      if ( v9 == 41 )
        goto LABEL_45;
    }
    else
    {
      v10 = 0;
      if ( v6 <= v4 )
      {
        if ( v3 <= v4 )
          v4 = v3;
        v10 = v4 - v6;
      }
      v11 = a2 + v6;
      if ( v9 == 41 )
      {
LABEL_45:
        result = sub_F9A1E0(a1, v11, v10);
        v6 = v8;
        goto LABEL_7;
      }
    }
    v24 = v11;
    v12 = *a1;
    v13 = sub_2220DF0(v11, v10);
    v14 = sub_2221120(v12, v24, v10, v13);
    if ( v14 == -1 )
      sub_E9D250(v25, (__int64 *)(*(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8)), 1);
    else
      sub_E9D250(v25, (__int64 *)(*(_QWORD *)v12 + 8LL * v14), 1);
    v15 = v25[0];
    sub_E9D250(v25, (__int64 *)(*(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8)), 1);
    if ( v25[0] != v15 )
    {
      result = *(unsigned __int8 *)(*v15 + 8);
LABEL_26:
      v6 = v8;
      if ( v9 != 124 )
        goto LABEL_7;
      if ( v3 < v8 )
        goto LABEL_42;
      v3 -= v8;
      a2 += v8;
      if ( (_BYTE)result )
        return result;
      goto LABEL_29;
    }
    v6 = v8;
    result = 0;
    if ( v9 != 124 )
      goto LABEL_7;
    if ( v3 < v8 )
      return 0;
    v3 -= v8;
    a2 += v8;
LABEL_29:
    if ( !v3 )
      return 0;
    v8 = 0;
    result = 1;
    v6 = 0;
LABEL_8:
    v4 = v8;
  }
  if ( v9 == 40 )
  {
    if ( !v7 )
      v6 = v4 + 1;
    ++v7;
  }
LABEL_7:
  if ( v3 != v8 )
    goto LABEL_8;
  if ( !(_BYTE)result )
    return 0;
  if ( v6 != v8 )
  {
    v16 = 0;
    v17 = *a1;
    if ( v6 <= v8 )
    {
      v16 = v8 - v6;
      v8 = v6;
    }
    v18 = a2 + v8;
    v19 = sub_2220DF0(v18, v16);
    v20 = sub_2221120(v17, v18, v16, v19);
    if ( v20 == -1 )
      v21 = (__int64 *)(*(_QWORD *)v17 + 8LL * *(unsigned int *)(v17 + 8));
    else
      v21 = (__int64 *)(*(_QWORD *)v17 + 8LL * v20);
    sub_E9D250(v25, v21, 1);
    v22 = v25[0];
    sub_E9D250(v25, (__int64 *)(*(_QWORD *)v17 + 8LL * *(unsigned int *)(v17 + 8)), 1);
    if ( v25[0] != v22 )
    {
      result = *(unsigned __int8 *)(*v22 + 8);
LABEL_42:
      if ( !(_BYTE)result )
        return 0;
      return result;
    }
    return 0;
  }
  return result;
}

