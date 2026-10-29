/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007F4B0
// Address: 0x000000010007F4B0

//----- (000000010007F4B0) ----------------------------------------------------
_QWORD *__fastcall sub_10007F4B0(char *__s, char *a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r12
  __int128 v9; // xmm0
  size_t v10; // rax
  size_t v11; // rbx
  size_t v12; // r15
  void *v13; // rdi
  size_t v15; // r14
  void *v16; // r15
  void *v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  __int64 v20; // rcx
  size_t v21; // rax
  size_t v22; // r14
  size_t v23; // r15
  void *v24; // rdi
  size_t v25; // rax
  char *v26; // rbx
  __int128 v27; // kr10_16
  __int64 v28; // rax
  char *v29; // r14
  __int64 v30; // r12
  unsigned __int64 v31; // r14
  _QWORD *v32; // rbx
  int v33; // r12d
  unsigned __int64 i; // r15
  __int64 v35; // r13
  void *v36; // rax
  unsigned __int64 v37; // rsi
  void *v38; // rdi
  __int64 v39; // r14
  __int64 v40; // r15
  __int64 v41; // r12
  void *v42; // rdi
  size_t v44; // [rsp+8h] [rbp-98h]
  _OWORD v45[2]; // [rsp+10h] [rbp-90h] BYREF
  __int128 v46; // [rsp+30h] [rbp-70h] BYREF
  unsigned __int64 v47; // [rsp+40h] [rbp-60h]
  __int128 v48; // [rsp+50h] [rbp-50h] BYREF
  size_t v49; // [rsp+60h] [rbp-40h]

  v46 = 0;
  v47 = 0;
  if ( (a3 & 8) != 0 )
  {
    v48 = 0;
    v49 = 0;
    v15 = *(_QWORD *)(a5 + 8);
    if ( v15 )
    {
      v16 = qalloc_or_throw(*(_QWORD *)(a5 + 8));
      *(_QWORD *)&v48 = v16;
      v49 = v15;
      memcpy(v16, *(const void **)a5, v15);
      *((_QWORD *)&v48 + 1) = v15;
      v18 = *((_QWORD *)&v46 + 1);
      v17 = (void *)v46;
      v19 = v47;
    }
    else
    {
      v17 = nullptr;
      v19 = 0;
      v18 = 0;
      v16 = nullptr;
    }
    if ( v19 < v18 + 1 )
    {
      v17 = qvector_reserve((__int64)&v46, v17, v18 + 1, 0x18u);
      *(_QWORD *)&v46 = v17;
      v18 = *((_QWORD *)&v46 + 1);
    }
    v20 = 3 * v18;
    *((_QWORD *)v17 + v20) = v16;
    *((_QWORD *)v17 + v20 + 1) = v15;
    *((_QWORD *)v17 + v20 + 2) = v15;
    ++*((_QWORD *)&v46 + 1);
    if ( a2 && *a2 )
    {
      v48 = 0;
      v49 = 0;
      *(_QWORD *)&v48 = qvector_reserve((__int64)&v48, nullptr, 3u, 1u);
      *((_QWORD *)&v48 + 1) = 3;
      strcpy((char *)v48, "-c");
      sub_100015270((void **)&v46, (char *)&v48);
      if ( (_QWORD)v48 )
      {
        *((_QWORD *)&v48 + 1) = 0;
        qfree((void *)v48);
      }
      v48 = 0;
      v49 = 0;
      v21 = strlen(a2);
      v22 = v21;
      v23 = v21 + 1;
      if ( v21 == -1 )
      {
        v24 = nullptr;
      }
      else
      {
        v24 = qvector_reserve((__int64)&v48, nullptr, v21 + 1, 1u);
        *(_QWORD *)&v48 = v24;
      }
      *((_QWORD *)&v48 + 1) = v23;
      memmove(v24, a2, v22);
      *(_BYTE *)(v48 + v22) = 0;
      sub_100015270((void **)&v46, (char *)&v48);
      if ( (_QWORD)v48 )
      {
        *((_QWORD *)&v48 + 1) = 0;
        qfree((void *)v48);
      }
    }
  }
  else
  {
    if ( a2 )
      parse_command_line(&v46, a4, a2, a3);
    if ( (a3 & 4) == 0 )
    {
      v8 = v46;
      v9 = 0;
      memset(v45, 0, 24);
      if ( __s )
      {
        v10 = strlen(__s);
        v11 = v10;
        v12 = v10 + 1;
        if ( v10 == -1 )
        {
          v13 = nullptr;
        }
        else
        {
          v13 = qvector_reserve((__int64)v45, nullptr, v10 + 1, 1u);
          *(_QWORD *)&v45[0] = v13;
        }
        *((_QWORD *)&v45[0] + 1) = v12;
        memmove(v13, __s, v11);
        *(_BYTE *)(*(_QWORD *)&v45[0] + v11) = 0;
        v27 = v45[0];
        v25 = *(_QWORD *)&v45[1];
        v26 = (char *)v46;
        v9 = 0;
      }
      else
      {
        v25 = 0;
        v26 = (char *)v46;
        v27 = 0u;
      }
      v48 = v27;
      *(_QWORD *)&v45[0] = 0;
      *(_OWORD *)((char *)v45 + 8) = v9;
      v44 = v25;
      v49 = v25;
      v28 = *((_QWORD *)&v46 + 1);
      v29 = v26;
      if ( v47 < *((_QWORD *)&v46 + 1) + 1LL )
      {
        v29 = (char *)qvector_reserve((__int64)&v46, v26, *((_QWORD *)&v46 + 1) + 1LL, 0x18u);
        *(_QWORD *)&v46 = v29;
        v28 = *((_QWORD *)&v46 + 1);
      }
      v30 = v8 - (_QWORD)v26;
      memmove(&v29[v30 + 24], &v29[v30], 24 * v28 - v30);
      *(_OWORD *)&v29[v30] = v27;
      *(_QWORD *)&v29[v30 + 16] = v44;
      ++*((_QWORD *)&v46 + 1);
      if ( *(_QWORD *)&v45[0] )
      {
        *((_QWORD *)&v45[0] + 1) = 0;
        qfree(*(void **)&v45[0]);
      }
    }
  }
  v31 = *((_QWORD *)&v46 + 1);
  v32 = qalloc(8LL * *((_QWORD *)&v46 + 1) + 8);
  if ( !v32 )
    sub_100000CB0((int)"prepare_arguments");
  if ( v31 )
  {
    v33 = 1;
    for ( i = 0; i < v31; i = v33++ )
    {
      v35 = v46 + 24 * i;
      v36 = *(void **)v35;
      v37 = *(_QWORD *)(v35 + 8);
      if ( *(_QWORD *)(v35 + 16) > v37 && v36 != nullptr && v37 != 0 )
      {
        v36 = qrealloc(*(void **)v35, v37);
        if ( !v36 )
          v36 = *(void **)v35;
      }
      *(_OWORD *)v35 = 0;
      *(_QWORD *)(v35 + 16) = 0;
      v32[i] = v36;
    }
  }
  v32[v31] = 0;
  v38 = (void *)v46;
  if ( (_QWORD)v46 )
  {
    v39 = *((_QWORD *)&v46 + 1);
    if ( *((_QWORD *)&v46 + 1) )
    {
      v40 = 0;
      do
      {
        v41 = v46;
        v42 = *(void **)(v46 + v40);
        if ( v42 )
        {
          *(_QWORD *)(v46 + v40 + 8) = 0;
          qfree(v42);
          *(_QWORD *)(v41 + v40) = 0;
          *(_QWORD *)(v41 + v40 + 16) = 0;
        }
        v40 += 24;
        --v39;
      }
      while ( v39 );
      v38 = (void *)v46;
    }
    *((_QWORD *)&v46 + 1) = 0;
    qfree(v38);
  }
  return v32;
}
