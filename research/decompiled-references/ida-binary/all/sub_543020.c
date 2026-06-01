_BOOL8 __fastcall sub_543020(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  __m128i v5; // xmm0
  char *v6; // rbx
  char *v7; // r12
  char *v8; // rbp
  char *v9; // rsi
  char *v10; // rax
  __int64 v11; // rbp
  unsigned __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // rdx
  char *v16; // rdi
  char *v17; // rax
  __int64 v18; // rsi
  char *v19; // rbp
  char *v20; // rbp
  const char *v21; // rsi
  char *v22; // r12
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  _BOOL4 v28; // ebx
  __int64 v30; // r15
  size_t v31; // rax
  size_t v32; // r8
  size_t v33; // r12
  __int64 v34; // [rsp+0h] [rbp-D8h]
  size_t v35; // [rsp+0h] [rbp-D8h]
  __int64 v36; // [rsp+8h] [rbp-D0h]
  __int64 v37; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v38; // [rsp+18h] [rbp-C0h] BYREF
  _QWORD v39[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+40h] [rbp-98h]
  __int64 v41; // [rsp+48h] [rbp-90h]
  char *s; // [rsp+50h] [rbp-88h] BYREF
  __m128i v43; // [rsp+58h] [rbp-80h]
  __int64 v44; // [rsp+68h] [rbp-70h] BYREF
  __int128 v45; // [rsp+70h] [rbp-68h]
  char *s1; // [rsp+80h] [rbp-58h]
  __int16 v47; // [rsp+88h] [rbp-50h]
  char v48; // [rsp+8Ah] [rbp-4Eh]
  unsigned __int64 v49; // [rsp+98h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v41 = a1;
  v39[0] = &_base_app_mixin_t::push_wait_dialog_request;
  v39[1] = 0;
  v40 = 0;
  s = nullptr;
  v44 = 0;
  s1 = nullptr;
  v47 = 257;
  v48 = a4;
  v43 = 0;
  v45 = 0;
  sub_169980((__int64 *)&s, a2, a3, a4, a5, 257);
  sub_4BEE60(nullptr, nullptr, (__int64)&s);
  v5.m128i_i64[0] = 0;
  v6 = nullptr;
  v37 = 0;
  v38 = 0;
  v7 = (char *)&::s1;
  if ( v43.m128i_i64[0] )
  {
    v7 = s;
    v6 = strchr(s, 3);
  }
  v8 = v7;
  v9 = nullptr;
  while ( v6 )
  {
    if ( v6 != v8 )
    {
      v13 = v38.m128i_i64[0];
      v14 = v6 - v8;
      if ( v38.m128i_i64[0] )
      {
        v13 = v38.m128i_i64[0] - 1;
        v14 = v6 - v8 + v38.m128i_i64[0] - 1;
      }
      v15 = v14 + 1;
      if ( v38.m128i_i64[1] < (unsigned __int64)(v14 + 1) )
      {
        v36 = v14;
        v34 = v14 + 1;
        v37 = qvector_reserve(&v37, v9, v15, 1);
        v14 = v36;
        v9 = (char *)v37;
        v15 = v34;
      }
      v38.m128i_i64[0] = v15;
      v9[v14] = 0;
      memmove((void *)(v13 + v37), v8, v6 - v8);
      v9 = (char *)v37;
    }
    v11 = v38.m128i_i64[0];
    v12 = 1;
    if ( v38.m128i_i64[0] )
    {
      v12 = v38.m128i_i64[0];
      v11 = v38.m128i_i64[0] - 1;
    }
    if ( v38.m128i_i64[1] < v12 )
    {
      v37 = qvector_reserve(&v37, v9, v12, 1);
      v9 = (char *)v37;
    }
    v38.m128i_i64[0] = v12;
    v9[v11] = 0;
    v8 = v6 + 1;
    v10 = strchr(v6 + 1, 3);
    v9 = (char *)v37;
    v6 = v10;
  }
  if ( v8 == v7 )
  {
    v16 = v9;
  }
  else
  {
    if ( *v8 && v8 )
    {
      v30 = v38.m128i_i64[0];
      v31 = strlen(v8);
      v32 = v31;
      v33 = v31;
      if ( v30 )
      {
        --v30;
        v33 = v31 + v30;
      }
      if ( v38.m128i_i64[1] < v33 + 1 )
      {
        v35 = v31;
        v37 = qvector_reserve(&v37, v9, v33 + 1, 1);
        v32 = v35;
        v9 = (char *)v37;
      }
      v38.m128i_i64[0] = v33 + 1;
      v9[v33] = 0;
      memmove((void *)(v30 + v37), v8, v32);
      v9 = (char *)v37;
    }
    v16 = s;
    s = v9;
    v5 = _mm_loadu_si128(&v38);
    v37 = (__int64)v16;
    v38.m128i_i64[1] = v43.m128i_i64[1];
    v43 = v5;
  }
  if ( v16 )
  {
    v38.m128i_i64[0] = 0;
    *(double *)v5.m128i_i64 = qfree(v16, v9);
  }
  v17 = (char *)&::s1;
  if ( v43.m128i_i64[0] )
    v17 = s;
  s1 = v17;
  v18 = v44;
  if ( *((_QWORD *)&v45 + 1) <= 6u )
  {
    v44 = qvector_reserve(&v44, v44, 7, 1);
    v18 = v44;
  }
  *(_QWORD *)&v45 = 7;
  *(_DWORD *)v18 = 1668178243;
  *(_WORD *)(v18 + 4) = 27749;
  *(_BYTE *)(v44 + 6) = 0;
  v19 = s1;
  while ( 1 )
  {
    if ( !strncmp(v19, "HIDECANCEL\n", 0xBu) )
    {
      v19 += 11;
      LOBYTE(v47) = 0;
      s1 = v19;
      goto LABEL_41;
    }
    if ( strncmp(v19, "NODELAY\n", 8u) )
      break;
    v19 += 8;
    s1 = v19;
LABEL_41:
    HIBYTE(v47) = 0;
  }
  if ( !strncmp(v19, "CANCEL ", 7u) )
  {
    v20 = v19 + 7;
    v21 = byte_9 + 1;
    s1 = v20;
    v22 = strchr(v20, 10);
    if ( !v22 )
      v22 = &v20[strlen(v20)];
    v5.m128i_i64[0] = 0;
    v23 = 0;
    v37 = 0;
    v38 = 0;
    v24 = v22 - v20;
    if ( v22 != v20 )
    {
      if ( v24 != -1 )
      {
        v37 = qvector_reserve(&v37, 0, v24 + 1, 1);
        v6 = (char *)v37;
      }
      v21 = v20;
      v38.m128i_i64[0] = v24 + 1;
      memmove(v6, v20, v22 - v20);
      *(_BYTE *)(v37 + v24) = 0;
      v6 = (char *)v37;
      v23 = v38.m128i_i64[1];
      v24 = v38.m128i_i64[0];
    }
    v25 = v44;
    v26 = *((_QWORD *)&v45 + 1);
    v44 = (__int64)v6;
    *(_QWORD *)&v45 = v24;
    *((_QWORD *)&v45 + 1) = v23;
    v37 = v25;
    v38.m128i_i64[1] = v26;
    s1 = v22;
    if ( v25 )
    {
      v38.m128i_i64[0] = 0;
      *(double *)v5.m128i_i64 = qfree(v25, v21);
    }
  }
  v27 = sub_4797E0((__int64)v39, 0, 0);
  v39[0] = &_base_app_mixin_t::push_wait_dialog_request;
  v28 = v27 != 0;
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    *(double *)v5.m128i_i64 = qfree(v44, nullptr, *(double *)v5.m128i_i64);
  }
  if ( s )
  {
    v43.m128i_i64[0] = 0;
    qfree(s, nullptr, *(double *)v5.m128i_i64);
  }
  v39[0] = &off_86FF78;
  qsem_free(v40);
  return v28;
}
