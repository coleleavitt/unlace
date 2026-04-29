_QWORD *__fastcall sub_7BD10(_QWORD *a1, const void ***a2)
{
  const void **v3; // rdx
  _BYTE *v4; // r14
  _BYTE *v5; // rax
  _BYTE *v6; // r14
  _BYTE *v7; // rax
  _BYTE *v8; // r13
  _BYTE *v9; // rax
  bool v10; // cc
  __int64 v11; // rax
  __int64 *v12; // r8
  __int64 *v13; // rcx
  __int64 v15; // r12
  size_t v16; // rbx
  size_t v17; // r14
  __int64 v18; // rsi
  __int64 v19; // r13
  size_t v20; // rbx
  size_t v21; // r15
  __int64 v22; // rsi
  size_t v23; // rdx
  __int64 v24; // r13
  size_t v25; // rbx
  size_t v26; // r15
  __int64 v27; // rsi
  size_t v28; // rdx
  __int64 v29; // [rsp+10h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+18h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+20h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+28h] [rbp-98h] BYREF
  __int128 v33; // [rsp+30h] [rbp-90h]
  __int64 v34; // [rsp+48h] [rbp-78h] BYREF
  __int128 v35; // [rsp+50h] [rbp-70h]
  __int64 v36; // [rsp+68h] [rbp-58h] BYREF
  __int128 v37; // [rsp+70h] [rbp-50h]
  unsigned __int64 v38; // [rsp+80h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v33 = 0;
  v32 = 0;
  v3 = *a2;
  v4 = **a2;
  v5 = v4;
  while ( v5 < (*a2)[1] )
  {
    if ( !*v5++ )
    {
      *v3 = v5;
      if ( v4 )
      {
        v19 = v33;
        v20 = v5 - v4 - 1;
        v21 = v20;
        if ( (_QWORD)v33 )
        {
          v19 = v33 - 1;
          v21 = v20 + v33 - 1;
        }
        v22 = v32;
        v23 = v21 + 1;
        if ( *((_QWORD *)&v33 + 1) < v21 + 1 )
        {
          v32 = qvector_reserve(&v32, v32, v23, 1);
          v23 = v21 + 1;
          v22 = v32;
        }
        *(_QWORD *)&v33 = v23;
        *(_BYTE *)(v22 + v21) = 0;
        memmove((void *)(v19 + v32), v4, v20);
      }
      v3 = *a2;
      break;
    }
  }
  v34 = 0;
  v35 = 0;
  v6 = *v3;
  v7 = *v3;
  while ( v7 < v3[1] )
  {
    if ( !*v7++ )
    {
      *v3 = v7;
      if ( v6 )
      {
        v24 = v35;
        v25 = v7 - v6 - 1;
        v26 = v25;
        if ( (_QWORD)v35 )
        {
          v24 = v35 - 1;
          v26 = v25 + v35 - 1;
        }
        v27 = v34;
        v28 = v26 + 1;
        if ( *((_QWORD *)&v35 + 1) < v26 + 1 )
        {
          v34 = qvector_reserve(&v34, v34, v28, 1);
          v28 = v26 + 1;
          v27 = v34;
        }
        *(_QWORD *)&v35 = v28;
        *(_BYTE *)(v27 + v26) = 0;
        memmove((void *)(v24 + v34), v6, v25);
      }
      v3 = *a2;
      break;
    }
  }
  v36 = 0;
  v37 = 0;
  v8 = *v3;
  v9 = *v3;
  while ( v9 < v3[1] )
  {
    if ( !*v9++ )
    {
      *v3 = v9;
      if ( v8 )
      {
        v15 = v37;
        v16 = v9 - v8 - 1;
        v17 = v16;
        if ( (_QWORD)v37 )
        {
          v15 = v37 - 1;
          v17 = v16 + v37 - 1;
        }
        v18 = v36;
        if ( *((_QWORD *)&v37 + 1) < v17 + 1 )
        {
          v36 = qvector_reserve(&v36, v36, v17 + 1, 1);
          v18 = v36;
        }
        *(_QWORD *)&v37 = v17 + 1;
        *(_BYTE *)(v18 + v17) = 0;
        memmove((void *)(v15 + v36), v8, v16);
      }
      break;
    }
  }
  v10 = (unsigned __int64)v33 <= 1;
  *a1 = 0;
  if ( !v10 )
  {
    v29 = v32;
    if ( (unsigned __int64)v35 <= 1 )
    {
      v30 = 0;
      if ( (unsigned __int64)v37 <= 1 )
      {
        v31 = 0;
      }
      else
      {
        v12 = &v31;
        v31 = v36;
        if ( v36 )
          goto LABEL_47;
      }
      v12 = nullptr;
      v13 = nullptr;
      goto LABEL_17;
    }
    v30 = v34;
    if ( (unsigned __int64)v37 <= 1 )
    {
      v11 = 0;
    }
    else
    {
      v11 = v36;
      if ( v36 )
      {
        v12 = &v31;
        goto LABEL_15;
      }
    }
    v12 = nullptr;
LABEL_15:
    v31 = v11;
    if ( v34 )
    {
      v13 = &v30;
LABEL_17:
      deserialize_tinfo(a1, 0, &v29, v13, v12, 0);
      goto LABEL_18;
    }
LABEL_47:
    v13 = nullptr;
    goto LABEL_17;
  }
LABEL_18:
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  return a1;
}
