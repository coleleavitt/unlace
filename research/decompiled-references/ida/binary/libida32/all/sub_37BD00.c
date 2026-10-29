__int64 __fastcall sub_37BD00(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int named_type_tid; // ebx
  void *v4; // rdi
  char *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbp
  char *v9; // rbx
  void *v10; // rdi
  void *v11; // rdi
  char v13; // bp
  int v14; // ebp
  int v15; // ebp
  __int64 v16; // r14
  char *v17; // rbp
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rdx
  char *v23; // rsi
  int v24; // edx
  unsigned int v25; // eax
  __int64 v26; // rsi
  int v27; // ecx
  int v28; // r14d
  const char *v29; // r12
  const char *v30; // rbx
  int v31; // edx
  __int64 v33; // [rsp+10h] [rbp-F0h]
  void *ptr; // [rsp+18h] [rbp-E8h] BYREF
  __int128 v35; // [rsp+20h] [rbp-E0h]
  void *v36; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v37; // [rsp+40h] [rbp-C0h]
  void *v38; // [rsp+50h] [rbp-B0h]
  __int128 v39; // [rsp+58h] [rbp-A8h]
  int v40; // [rsp+68h] [rbp-98h]
  char v41; // [rsp+6Ch] [rbp-94h]
  char v42[8]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+90h] [rbp-70h]
  char v45[8]; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v46[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v47; // [rsp+C0h] [rbp-40h]

  v2 = a1 + 32;
  v47 = __readfsqword(0x28u);
  v37 = 0;
  v39 = 0;
  v36 = nullptr;
  v38 = nullptr;
  v40 = 0;
  v41 = 0x80;
  v45[0] = 2;
  memset(v46, 0, 24);
  if ( (unsigned int)get_idcv_attr()
    || (unsigned int)idcv_long(v45, a1 + 32)
    || (v13 = v46[0], free_idcv(v45), v41 = v13, v45[0] = 2, memset(v46, 0, 24), (unsigned int)get_idcv_attr())
    || (unsigned int)idcv_long(v45, v2)
    || (v14 = v46[0], free_idcv(v45), v40 = v14, v45[0] = 2, memset(v46, 0, 24), (unsigned int)get_idcv_attr())
    || (unsigned int)idcv_long(v45, v2) )
  {
    free_idcv(v45);
LABEL_3:
    named_type_tid = -1;
    goto LABEL_4;
  }
  v15 = v46[0];
  free_idcv(v45);
  v33 = v15;
  if ( v15 )
  {
    v16 = 0;
    while ( 1 )
    {
      v35 = 0;
      ptr = nullptr;
      sub_3573A0((char **)&ptr);
      v42[0] = 2;
      v44 = 0;
      v43 = 0;
      if ( (unsigned int)get_idcv_attr() || v42[0] != 5 )
        break;
      v22 = v37;
      v23 = (char *)v36;
      if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)(v37 + 1) )
      {
        v36 = (void *)qvector_reserve(&v36, v36, v37 + 1, 56);
        v22 = v37;
        v23 = (char *)v36;
      }
      v17 = &v23[56 * v22];
      *(_QWORD *)v17 = 0;
      *((_QWORD *)v17 + 3) = 0;
      *(_OWORD *)(v17 + 8) = 0;
      *((_OWORD *)v17 + 2) = 0;
      *(_QWORD *)&v37 = v37 + 1;
      v45[0] = 2;
      memset(v46, 0, 24);
      if ( (unsigned int)get_idcv_attr()
        || v45[0] != 7
        || (v18 = *(_QWORD *)v17,
            v19 = _mm_loadu_si128((const __m128i *)(v17 + 8)),
            *(_OWORD *)v17 = v46[0],
            *((_QWORD *)v17 + 2) = *(_QWORD *)&v46[1],
            *(_QWORD *)&v46[0] = v18,
            *(__m128i *)((char *)v46 + 8) = v19,
            free_idcv(v45),
            (unsigned int)get_idcv_attr())
        || (unsigned int)idcv_int64(v45, v42) )
      {
        free_idcv(v45);
        break;
      }
      *((_QWORD *)v17 + 6) = *(_QWORD *)&v46[0];
      free_idcv(v45);
      if ( !(unsigned int)get_idcv_attr() && v45[0] == 7 )
      {
        v20 = *((_QWORD *)v17 + 3);
        v21 = _mm_loadu_si128((const __m128i *)v17 + 2);
        *((_QWORD *)v17 + 3) = *(_QWORD *)&v46[0];
        *((__m128i *)v17 + 2) = _mm_load_si128((const __m128i *)((char *)v46 + 8));
        *(_QWORD *)&v46[0] = v20;
        *(__m128i *)((char *)v46 + 8) = v21;
      }
      free_idcv(v45);
      free_idcv(v42);
      if ( ptr )
      {
        *(_QWORD *)&v35 = 0;
        qfree(ptr);
      }
      if ( v33 == ++v16 )
        goto LABEL_39;
    }
    free_idcv(v42);
    if ( ptr )
    {
      *(_QWORD *)&v35 = 0;
      qfree(ptr);
    }
    goto LABEL_3;
  }
LABEL_39:
  v24 = *(_DWORD *)(a1 + 104);
  v25 = *(_DWORD *)(a1 + 72);
  v26 = *(_QWORD *)(a1 + 16);
  v27 = *(_DWORD *)(a2 + 8);
  v28 = *(_DWORD *)(a1 + 136);
  if ( v24 == 1 )
  {
    if ( v27 > 5 && *(_BYTE *)(a1 + 160) == 7 )
    {
      if ( *(_QWORD *)(a1 + 176) )
      {
        v30 = *(const char **)(a1 + 168);
        v29 = haystack;
        if ( !v26 )
          goto LABEL_62;
      }
      else
      {
        v29 = haystack;
        v30 = haystack;
        if ( !v26 )
          goto LABEL_62;
      }
    }
    else
    {
      v29 = haystack;
      v30 = nullptr;
      if ( !v26 )
      {
LABEL_62:
        v40 |= 0x80u;
        goto LABEL_45;
      }
    }
    v29 = *(const char **)(a1 + 8);
    goto LABEL_62;
  }
  if ( v24 == 2 )
  {
    if ( v27 > 5 && *(_BYTE *)(a1 + 160) == 7 )
    {
      if ( *(_QWORD *)(a1 + 176) )
      {
        v30 = *(const char **)(a1 + 168);
        v29 = haystack;
        if ( !v26 )
          goto LABEL_69;
      }
      else
      {
        v29 = haystack;
        v30 = haystack;
        if ( !v26 )
          goto LABEL_69;
      }
    }
    else
    {
      v29 = haystack;
      v30 = nullptr;
      if ( !v26 )
      {
LABEL_69:
        v40 |= 0x40u;
        goto LABEL_45;
      }
    }
    v29 = *(const char **)(a1 + 8);
    goto LABEL_69;
  }
  if ( v27 <= 5 || *(_BYTE *)(a1 + 160) != 7 )
  {
    v29 = haystack;
    v30 = nullptr;
    if ( !v26 )
      goto LABEL_45;
    goto LABEL_44;
  }
  if ( *(_QWORD *)(a1 + 176) )
  {
    v30 = *(const char **)(a1 + 168);
    v29 = haystack;
    if ( v26 )
      goto LABEL_44;
  }
  else
  {
    v29 = haystack;
    v30 = haystack;
    if ( v26 )
LABEL_44:
      v29 = *(const char **)(a1 + 8);
  }
LABEL_45:
  if ( v25 <= 8 && (v25 & (v25 - 1)) == 0 )
  {
    LOBYTE(v31) = 0;
    if ( v25 )
      v31 = log2ceil((int)v25, v26, 0) + 1;
    v41 = v31 | v41 & 0xF8;
  }
  ptr = nullptr;
  if ( !(unsigned __int8)create_tinfo(&ptr, 45, 45, &v36)
    || v30 && (unsigned int)set_tinfo_property4(&ptr, 5, v30, 0, 0, 0)
    || (unsigned int)set_tinfo_property4(&ptr, 18, v28 != 0, 0, 0, 0)
    || (unsigned int)save_tinfo(&ptr, 0, 0, v29, 5) )
  {
    named_type_tid = -1;
  }
  else
  {
    named_type_tid = get_named_type_tid(v29);
  }
  clear_tinfo_t(&ptr);
LABEL_4:
  v4 = v38;
  *(_DWORD *)(a2 + 8) = named_type_tid;
  if ( v4 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v4);
  }
  v5 = (char *)v36;
  if ( v36 )
  {
    v6 = v37;
    if ( (_QWORD)v37 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = &v5[v7];
        v10 = *(void **)&v5[v7 + 24];
        if ( v10 )
        {
          *((_QWORD *)v9 + 4) = 0;
          qfree(v10);
        }
        v11 = *(void **)v9;
        if ( *(_QWORD *)v9 )
        {
          *((_QWORD *)v9 + 1) = 0;
          qfree(v11);
        }
        ++v8;
        v5 = (char *)v36;
        v7 += 56;
      }
      while ( v6 != v8 );
    }
    *(_QWORD *)&v37 = 0;
    qfree(v5);
  }
  return 0;
}

