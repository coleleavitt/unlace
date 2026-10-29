__int64 __fastcall sub_3EBC70(__int64 a1, __int64 *a2)
{
  unsigned int utf8_char; // eax
  __int64 v5; // r12
  __int64 v6; // r14
  unsigned __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // r14
  unsigned __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r13
  unsigned __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-70h]
  __int64 *v22; // [rsp+18h] [rbp-60h] BYREF
  __int64 *v23; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+2Fh] [rbp-49h] BYREF
  char v25; // [rsp+37h] [rbp-41h]
  _QWORD v26[8]; // [rsp+38h] [rbp-40h] BYREF

  v26[0] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 24) )
    return 0;
  v24 = *(_QWORD *)(a1 + 24);
  v25 = 0;
  v22 = &v24;
  while ( 1 )
  {
    utf8_char = get_utf8_char(&v22);
    if ( !utf8_char )
      break;
    if ( utf8_char == -1 || !(unsigned __int8)is_valid_cp(utf8_char, 1, 0) )
      return 0;
    if ( v22 >= v26 )
      goto LABEL_8;
  }
  v13 = v22;
  if ( v22 < v26 )
  {
    while ( !*(_BYTE *)v13 )
    {
      v13 = (__int64 *)((char *)v13 + 1);
      if ( v13 == v26 )
        goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v5 = a2[1];
  if ( v5 )
  {
    v7 = v5 + 1;
    v6 = a2[1];
    --v5;
  }
  else
  {
    v6 = 1;
    v7 = 2;
  }
  v8 = *a2;
  if ( a2[2] < v7 )
  {
    v20 = qvector_reserve(a2, v8, v7, 1);
    *a2 = v20;
    v8 = v20;
  }
  a2[1] = v7;
  *(_BYTE *)(v8 + v5) = 39;
  *(_BYTE *)(*a2 + v6) = 0;
  v23 = &v24;
  if ( &v24 < v22 )
  {
    while ( (unsigned int)get_utf8_char(&v23) != 39 )
    {
LABEL_14:
      put_cstring_cp();
      if ( v23 >= v22 )
        goto LABEL_25;
    }
    v9 = a2[1];
    if ( v9 )
    {
      v10 = v9 + 1;
      v11 = a2[1];
      v12 = *a2;
      --v9;
      if ( a2[2] >= v10 )
      {
LABEL_18:
        a2[1] = v10;
        *(_BYTE *)(v12 + v9) = 92;
        *(_BYTE *)(*a2 + v11) = 0;
        goto LABEL_14;
      }
    }
    else
    {
      v12 = *a2;
      v11 = 1;
      v10 = 2;
      if ( (unsigned __int64)a2[2] >= 2 )
        goto LABEL_18;
    }
    v21 = v11;
    v18 = qvector_reserve(a2, v12, v10, 1);
    v11 = v21;
    *a2 = v18;
    v12 = v18;
    goto LABEL_18;
  }
LABEL_25:
  v14 = a2[1];
  if ( v14 )
  {
    v16 = v14 + 1;
    v15 = a2[1];
    --v14;
  }
  else
  {
    v15 = 1;
    v16 = 2;
  }
  v17 = *a2;
  if ( a2[2] < v16 )
  {
    v19 = qvector_reserve(a2, v17, v16, 1);
    *a2 = v19;
    v17 = v19;
  }
  a2[1] = v16;
  *(_BYTE *)(v17 + v14) = 39;
  *(_BYTE *)(*a2 + v15) = 0;
  return 1;
}

