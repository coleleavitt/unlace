__int64 __fastcall sub_FBE200(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  int v5; // r13d
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  char v9; // r12
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rdx
  __int64 v12; // r14
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  unsigned __int64 v16; // r12
  __int64 v17; // rbp
  unsigned int v18; // eax
  int v19; // eax
  __int64 *v20; // rsi
  __int64 *v21; // r12
  unsigned __int64 v22; // [rsp+8h] [rbp-60h]
  __int64 *v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+10h] [rbp-58h]
  __int64 v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v26[8]; // [rsp+28h] [rbp-40h] BYREF

  result = 1;
  if ( !a2 )
    return result;
  v4 = 0;
  v5 = 0;
  v7 = a2;
  v8 = 0;
  v25 = a3;
  while ( 1 )
  {
    v9 = *(_BYTE *)(a1 + v8);
    v10 = v8 + 1;
    if ( v9 == 41 )
    {
      --v5;
    }
    else
    {
      if ( v9 <= 41 )
      {
        if ( v9 == 40 )
        {
          if ( !v5 )
            v4 = v8 + 1;
          ++v5;
        }
LABEL_7:
        if ( v7 == v10 )
          goto LABEL_36;
        goto LABEL_8;
      }
      if ( v9 != 44 && v9 != 124 )
        goto LABEL_7;
    }
    if ( v5 )
      goto LABEL_7;
    if ( v4 == v8 || !(_BYTE)result )
      goto LABEL_26;
    if ( v7 < v4 )
    {
      v4 = v7;
      v11 = 0;
    }
    else
    {
      v11 = 0;
      if ( v4 <= v8 )
      {
        if ( v7 <= v8 )
          v8 = v7;
        v11 = v8 - v4;
      }
    }
    if ( v9 == 41 )
      break;
    v12 = v25;
    v24 = a1 + v4;
    v22 = v11;
    v13 = sub_2244B30(a1 + v4, v11);
    v14 = sub_2244E60(v12, v24, v22, v13);
    if ( v14 == -1 )
      sub_EC0F90(v26, (__int64 *)(*(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8)), 1);
    else
      sub_EC0F90(v26, (__int64 *)(*(_QWORD *)v12 + 8LL * v14), 1);
    v23 = v26[0];
    sub_EC0F90(v26, (__int64 *)(*(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8)), 1);
    if ( v26[0] != v23 )
    {
      result = *(unsigned __int8 *)(*v23 + 8);
LABEL_26:
      v4 = v10;
      if ( v9 != 124 )
        goto LABEL_7;
      if ( v7 < v10 )
        return result;
      v7 -= v10;
      a1 += v10;
      if ( (_BYTE)result )
        return result;
      goto LABEL_29;
    }
    v4 = v10;
    result = 0;
    if ( v9 != 124 )
      goto LABEL_7;
    if ( v7 < v10 )
      return result;
    v7 -= v10;
    a1 += v10;
LABEL_29:
    if ( !v7 )
      return 0;
    v10 = 0;
    result = 1;
    v4 = 0;
LABEL_8:
    v8 = v10;
  }
  result = sub_FBDF20(&v25, a1 + v4, v11);
  v4 = v10;
  if ( v7 != v10 )
    goto LABEL_8;
LABEL_36:
  if ( !(_BYTE)result )
    return 0;
  if ( v10 != v4 )
  {
    v15 = v25;
    v16 = 0;
    if ( v10 >= v4 )
    {
      v16 = v10 - v4;
      v10 = v4;
    }
    v17 = v10 + a1;
    v18 = sub_2244B30(v17, v16);
    v19 = sub_2244E60(v15, v17, v16, v18);
    if ( v19 == -1 )
      v20 = (__int64 *)(*(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 8));
    else
      v20 = (__int64 *)(*(_QWORD *)v15 + 8LL * v19);
    sub_EC0F90(v26, v20, 1);
    v21 = v26[0];
    sub_EC0F90(v26, (__int64 *)(*(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 8)), 1);
    if ( v26[0] == v21 )
      return 0;
    return *(unsigned __int8 *)(*v21 + 8);
  }
  return result;
}
