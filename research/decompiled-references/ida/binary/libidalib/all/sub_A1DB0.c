unsigned __int64 sub_A1DB0()
{
  int v0; // ebx
  _QWORD *v1; // r12
  __int64 v2; // rsi
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r13
  const void *v6; // r14
  size_t v7; // rax
  size_t v8; // r15
  __int64 v9; // rax
  void *v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  void *v14; // rdi
  size_t v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 v17; // r13
  __int64 i; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // rbx
  _QWORD *v27; // rax
  __int64 v29; // rax
  size_t v30; // [rsp+0h] [rbp-D0h]
  __int64 v31; // [rsp+30h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+38h] [rbp-98h]
  __int64 v33; // [rsp+48h] [rbp-88h]
  __int128 v34; // [rsp+50h] [rbp-80h]
  __int64 v35; // [rsp+60h] [rbp-70h]
  __int128 v36; // [rsp+68h] [rbp-68h]
  __int64 v37; // [rsp+78h] [rbp-58h]
  __int128 v38; // [rsp+80h] [rbp-50h]
  int v39; // [rsp+90h] [rbp-40h]
  unsigned __int64 v40; // [rsp+98h] [rbp-38h]

  v40 = __readfsqword(0x28u);
  v39 = 1;
  v35 = 0;
  v37 = 0;
  v36 = 0;
  v38 = 0;
  v0 = *(_DWORD *)(dbg + 48LL);
  v34 = 0;
  v1 = *(_QWORD **)(dbg + 40LL);
  v31 = 0;
  v33 = 0;
  v32 = 0;
  if ( !*v1 )
    goto LABEL_37;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    if ( v3 < v4 + 1 )
    {
      v33 = qvector_reserve();
      v4 = v34;
      v2 = v33;
    }
    ++v1;
    v5 = v2 + 24 * v4;
    *(_QWORD *)v5 = 0;
    *(_OWORD *)(v5 + 8) = 0;
    *(_QWORD *)&v34 = v34 + 1;
    v6 = (const void *)*(v1 - 1);
    if ( v6 && (v7 = strlen((const char *)*(v1 - 1)), (v8 = v7) != 0) )
    {
      v14 = *(void **)v5;
      v15 = v7 + 1;
      if ( *(_QWORD *)(v5 + 16) < v7 + 1 )
      {
        v30 = v7 + 1;
        v29 = qvector_reserve();
        *(_QWORD *)v5 = v29;
        v15 = v30;
        v14 = (void *)v29;
      }
      *(_QWORD *)(v5 + 8) = v15;
      memmove(v14, v6, v8);
      *(_BYTE *)(*(_QWORD *)v5 + v8) = 0;
    }
    else
    {
      *(_QWORD *)(v5 + 8) = 0;
    }
    v9 = v36;
    v10 = *(void **)v5;
    v11 = v35;
    if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
    {
      v35 = qvector_reserve();
      v11 = v35;
      v9 = v36;
    }
    *(_QWORD *)(v11 + 8 * v9) = v10;
    v12 = v36;
    v13 = v36 + 1;
    *(_QWORD *)&v36 = v36 + 1;
    if ( !*v1 )
      break;
    v3 = *((_QWORD *)&v34 + 1);
    v4 = v34;
    v2 = v33;
  }
  v16 = v35;
  if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v12 + 2) )
  {
LABEL_37:
    v35 = qvector_reserve();
    v16 = v35;
    v13 = v36;
  }
  *(_QWORD *)(v16 + 8 * v13) = 0;
  v17 = 0;
  *(_QWORD *)&v36 = v36 + 1;
  v39 = v0;
  for ( i = dbg; v17 < *(int *)(dbg + 64LL); i = dbg )
  {
    v19 = *(_QWORD *)(i + 56) + 32LL * (int)v17;
    sub_9DD00(
      &v31,
      *(const void **)v19,
      *(_DWORD *)(v19 + 8),
      *(_BYTE *)(v19 + 13),
      *(_BYTE *)(v19 + 12),
      *(_QWORD *)(v19 + 16),
      *(_QWORD *)(v19 + 24));
    ++v17;
  }
  serialize_dynamic_register_set();
  v20 = v37;
  if ( v37 )
  {
    v21 = v38;
    if ( (_QWORD)v38 )
    {
      v22 = 0;
      do
      {
        v23 = (_QWORD *)(v20 + 24 * v22);
        if ( *v23 )
        {
          v23[1] = 0;
          qfree();
          v20 = v37;
        }
        ++v22;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree();
  }
  v24 = v33;
  if ( v33 )
  {
    v25 = v34;
    if ( (_QWORD)v34 )
    {
      v26 = 0;
      do
      {
        v27 = (_QWORD *)(v24 + 24 * v26);
        if ( *v27 )
        {
          v27[1] = 0;
          qfree();
          v24 = v33;
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v34 = 0;
    qfree();
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  return v40 - __readfsqword(0x28u);
}

