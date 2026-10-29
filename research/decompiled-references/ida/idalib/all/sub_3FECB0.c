__int64 __fastcall sub_3FECB0(__int64 a1, __int64 *a2)
{
  char *v2; // rbx
  unsigned int utf8_char; // eax
  __int64 v6; // r12
  __int64 v7; // r14
  unsigned __int64 v8; // r13
  __int64 v9; // rsi
  unsigned int v10; // r12d
  __int64 v11; // r14
  unsigned __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // rsi
  char *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r13
  unsigned __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-70h]
  char *v24; // [rsp+18h] [rbp-60h] BYREF
  char *v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+2Fh] [rbp-49h] BYREF
  char v27; // [rsp+37h] [rbp-41h]
  char v28[64]; // [rsp+38h] [rbp-40h] BYREF

  *(_QWORD *)v28 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 24) )
    return 0;
  v2 = (char *)&v26;
  v26 = *(_QWORD *)(a1 + 24);
  v27 = 0;
  v24 = (char *)&v26;
  while ( 1 )
  {
    utf8_char = get_utf8_char(&v24);
    if ( !utf8_char )
      break;
    if ( utf8_char == -1 || !(unsigned __int8)is_valid_cp(utf8_char, 1, 0) )
      return 0;
    if ( v24 >= v28 )
      goto LABEL_8;
  }
  v15 = v24;
  if ( v24 < v28 )
  {
    while ( !*v15 )
    {
      if ( ++v15 == v28 )
        goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v6 = a2[1];
  if ( v6 )
  {
    v8 = v6 + 1;
    v7 = a2[1];
    --v6;
  }
  else
  {
    v7 = 1;
    v8 = 2;
  }
  v9 = *a2;
  if ( a2[2] < v8 )
  {
    v22 = qvector_reserve(a2, v9, v8, 1);
    *a2 = v22;
    v9 = v22;
  }
  a2[1] = v8;
  *(_BYTE *)(v9 + v6) = 39;
  *(_BYTE *)(*a2 + v7) = 0;
  v25 = (char *)&v26;
  if ( &v26 < (__int64 *)v24 )
  {
    while ( 1 )
    {
      v10 = get_utf8_char(&v25);
      if ( v10 == 39 )
        break;
LABEL_14:
      put_cstring_cp(a2, v10, v2, v25 - v2, 2);
      v2 = v25;
      if ( v25 >= v24 )
        goto LABEL_25;
    }
    v11 = a2[1];
    if ( v11 )
    {
      v12 = v11 + 1;
      v13 = a2[1];
      v14 = *a2;
      --v11;
      if ( a2[2] >= v12 )
      {
LABEL_18:
        a2[1] = v12;
        *(_BYTE *)(v14 + v11) = 92;
        *(_BYTE *)(*a2 + v13) = 0;
        goto LABEL_14;
      }
    }
    else
    {
      v14 = *a2;
      v13 = 1;
      v12 = 2;
      if ( (unsigned __int64)a2[2] >= 2 )
        goto LABEL_18;
    }
    v23 = v13;
    v20 = qvector_reserve(a2, v14, v12, 1);
    v13 = v23;
    *a2 = v20;
    v14 = v20;
    goto LABEL_18;
  }
LABEL_25:
  v16 = a2[1];
  if ( v16 )
  {
    v18 = v16 + 1;
    v17 = a2[1];
    --v16;
  }
  else
  {
    v17 = 1;
    v18 = 2;
  }
  v19 = *a2;
  if ( a2[2] < v18 )
  {
    v21 = qvector_reserve(a2, v19, v18, 1);
    *a2 = v21;
    v19 = v21;
  }
  a2[1] = v18;
  *(_BYTE *)(v19 + v16) = 39;
  *(_BYTE *)(*a2 + v17) = 0;
  return 1;
}
