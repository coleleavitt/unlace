unsigned __int64 __fastcall sub_210770(__int64 a1)
{
  int v1; // ebx
  __int64 *v2; // r12
  __int64 v3; // rsi
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r13
  const void *v8; // r14
  size_t v9; // rax
  size_t v10; // r15
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  void *v16; // rdi
  size_t v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r13
  __int64 i; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r15
  __int64 v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // rdi
  __int64 v33; // rax
  size_t v34; // [rsp+0h] [rbp-D0h]
  __int64 v36; // [rsp+30h] [rbp-A0h] BYREF
  __int128 v37; // [rsp+38h] [rbp-98h]
  __int64 v38; // [rsp+48h] [rbp-88h] BYREF
  __int128 v39; // [rsp+50h] [rbp-80h]
  __int64 v40; // [rsp+60h] [rbp-70h] BYREF
  __int128 v41; // [rsp+68h] [rbp-68h]
  __int64 v42; // [rsp+78h] [rbp-58h]
  __int128 v43; // [rsp+80h] [rbp-50h]
  int v44; // [rsp+90h] [rbp-40h]
  unsigned __int64 v45; // [rsp+98h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  v44 = 1;
  v40 = 0;
  v42 = 0;
  v41 = 0;
  v43 = 0;
  v1 = *(_DWORD *)(dbg + 48LL);
  v39 = 0;
  v2 = *(__int64 **)(dbg + 40LL);
  v36 = 0;
  v38 = 0;
  v37 = 0;
  v3 = *v2;
  if ( !*v2 )
  {
    v18 = 1;
LABEL_38:
    v40 = qvector_reserve(&v40, v3, v18, 8);
    v3 = v40;
    v15 = v41;
    goto LABEL_16;
  }
  v4 = 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    if ( v5 < v6 + 1 )
    {
      v38 = qvector_reserve(&v38, v4, v6 + 1, 24);
      v6 = v39;
      v4 = v38;
    }
    ++v2;
    v7 = v4 + 24 * v6;
    *(_QWORD *)v7 = 0;
    *(_OWORD *)(v7 + 8) = 0;
    *(_QWORD *)&v39 = v39 + 1;
    v8 = (const void *)*(v2 - 1);
    if ( v8 && (v9 = strlen((const char *)*(v2 - 1)), (v10 = v9) != 0) )
    {
      v16 = *(void **)v7;
      v17 = v9 + 1;
      if ( *(_QWORD *)(v7 + 16) < v9 + 1 )
      {
        v34 = v9 + 1;
        v33 = qvector_reserve(v7, *(_QWORD *)v7, v17, 1);
        *(_QWORD *)v7 = v33;
        v17 = v34;
        v16 = (void *)v33;
      }
      *(_QWORD *)(v7 + 8) = v17;
      memmove(v16, v8, v10);
      *(_BYTE *)(*(_QWORD *)v7 + v10) = 0;
    }
    else
    {
      *(_QWORD *)(v7 + 8) = 0;
    }
    v11 = v41;
    v12 = *(_QWORD *)v7;
    v13 = v40;
    if ( *((_QWORD *)&v41 + 1) < (unsigned __int64)(v41 + 1) )
    {
      v40 = qvector_reserve(&v40, v40, v41 + 1, 8);
      v13 = v40;
      v11 = v41;
    }
    *(_QWORD *)(v13 + 8 * v11) = v12;
    v14 = v41;
    v15 = v41 + 1;
    *(_QWORD *)&v41 = v41 + 1;
    if ( !*v2 )
      break;
    v5 = *((_QWORD *)&v39 + 1);
    v6 = v39;
    v4 = v38;
  }
  v18 = v14 + 2;
  v3 = v40;
  if ( *((_QWORD *)&v41 + 1) < v18 )
    goto LABEL_38;
LABEL_16:
  *(_QWORD *)(v3 + 8 * v15) = 0;
  v19 = 0;
  *(_QWORD *)&v41 = v41 + 1;
  v44 = v1;
  for ( i = dbg; v19 < *(int *)(dbg + 64LL); i = dbg )
  {
    v21 = *(_QWORD *)(i + 56) + 32LL * (int)v19;
    sub_20C9C0(
      &v36,
      *(const void **)v21,
      *(unsigned int *)(v21 + 8),
      *(unsigned __int8 *)(v21 + 13),
      *(_BYTE *)(v21 + 12),
      *(_QWORD *)(v21 + 16),
      0.0,
      *(_QWORD *)(v21 + 24));
    ++v19;
  }
  serialize_dynamic_register_set(a1 + 368, &v36);
  v22 = v42;
  if ( v42 )
  {
    v23 = v43;
    if ( (_QWORD)v43 )
    {
      v24 = 0;
      do
      {
        v25 = (__int64 *)(v22 + 24 * v24);
        v26 = *v25;
        if ( *v25 )
        {
          v25[1] = 0;
          qfree(v26, (const char *)&v36);
          v22 = v42;
        }
        ++v24;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v43 = 0;
    qfree(v22, (const char *)&v36);
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40, (const char *)&v36);
  }
  v27 = v38;
  if ( v38 )
  {
    v28 = v39;
    if ( (_QWORD)v39 )
    {
      v29 = 0;
      do
      {
        v30 = (__int64 *)(v27 + 24 * v29);
        v31 = *v30;
        if ( *v30 )
        {
          v30[1] = 0;
          qfree(v31, (const char *)&v36);
          v27 = v38;
        }
        ++v29;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v39 = 0;
    qfree(v27, (const char *)&v36);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36, (const char *)&v36);
  }
  return v45 - __readfsqword(0x28u);
}
