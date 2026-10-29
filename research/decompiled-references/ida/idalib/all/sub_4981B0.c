__int64 __fastcall sub_4981B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  int v5; // r12d
  const char *numbered_type_name; // rax
  const char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r14
  unsigned int numbered_type; // ebp
  char *v11; // r13
  size_t v12; // rax
  size_t v13; // r12
  char *v14; // r13
  size_t v15; // rax
  size_t v16; // r12
  char *v17; // r13
  size_t v18; // rax
  size_t v19; // r12
  char *v20; // r13
  size_t v21; // rax
  size_t v22; // r12
  char **v24; // rdi
  void *v25; // rdi
  size_t v26; // r15
  void *v27; // rdi
  size_t v28; // r14
  void *v29; // rdi
  size_t v30; // r14
  void *v31; // rdi
  size_t v32; // r14
  void *v33; // rdi
  size_t v34; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  char *s; // [rsp+8h] [rbp-60h] BYREF
  char *v41; // [rsp+10h] [rbp-58h] BYREF
  char *v42; // [rsp+18h] [rbp-50h] BYREF
  char *v43[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(unsigned int *)(a1 + 176);
  v43[1] = (char *)__readfsqword(0x28u);
  v5 = a3;
  numbered_type_name = (const char *)get_numbered_type_name(a3, v4);
  if ( !numbered_type_name )
    return 0;
  v7 = numbered_type_name;
  v8 = strlen(numbered_type_name);
  v9 = v8;
  if ( v8 )
  {
    v25 = *(void **)a1;
    v26 = v8 + 1;
    if ( *(_QWORD *)(a1 + 16) < v8 + 1 )
    {
      v35 = qvector_reserve(a1, *(_QWORD *)a1, v8 + 1, 1);
      *(_QWORD *)a1 = v35;
      v25 = (void *)v35;
    }
    *(_QWORD *)(a1 + 8) = v26;
    memmove(v25, v7, v9);
    *(_BYTE *)(*(_QWORD *)a1 + v9) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
  }
  if ( *v7 )
  {
    v24 = (char **)(a1 + 152);
    if ( (unsigned __int8)is_ordinal_name(v7, 0) )
      sub_35A790(v24);
    else
      sub_4939F0((__int64)v24, a1);
  }
  else
  {
    sub_35A790((char **)(a1 + 152));
  }
  numbered_type = get_numbered_type(
                    v5,
                    *(_DWORD *)(a1 + 176),
                    (unsigned int)&s,
                    (unsigned int)&v41,
                    (unsigned int)&v42,
                    (unsigned int)v43,
                    a1 + 120);
  if ( (_BYTE)numbered_type )
  {
    v11 = s;
    if ( s && (v12 = strlen(s), (v13 = v12) != 0) )
    {
      v27 = *(void **)(a1 + 24);
      v28 = v12 + 1;
      if ( *(_QWORD *)(a1 + 40) < v12 + 1 )
      {
        v36 = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), v28, 1);
        *(_QWORD *)(a1 + 24) = v36;
        v27 = (void *)v36;
      }
      *(_QWORD *)(a1 + 32) = v28;
      memmove(v27, v11, v13);
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + v13) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 32) = 0;
    }
    v14 = v41;
    if ( v41 && (v15 = strlen(v41), (v16 = v15) != 0) )
    {
      v33 = *(void **)(a1 + 48);
      v34 = v15 + 1;
      if ( *(_QWORD *)(a1 + 64) < v15 + 1 )
      {
        v37 = qvector_reserve(a1 + 48, *(_QWORD *)(a1 + 48), v34, 1);
        *(_QWORD *)(a1 + 48) = v37;
        v33 = (void *)v37;
      }
      *(_QWORD *)(a1 + 56) = v34;
      memmove(v33, v14, v16);
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + v16) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 56) = 0;
    }
    v17 = v42;
    if ( v42 && (v18 = strlen(v42), (v19 = v18) != 0) )
    {
      v31 = *(void **)(a1 + 72);
      v32 = v18 + 1;
      if ( *(_QWORD *)(a1 + 88) < v18 + 1 )
      {
        v38 = qvector_reserve(a1 + 72, *(_QWORD *)(a1 + 72), v32, 1);
        *(_QWORD *)(a1 + 72) = v38;
        v31 = (void *)v38;
      }
      *(_QWORD *)(a1 + 80) = v32;
      memmove(v31, v17, v19);
      *(_BYTE *)(*(_QWORD *)(a1 + 72) + v19) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 80) = 0;
    }
    v20 = v43[0];
    if ( v43[0] && (v21 = strlen(v43[0]), (v22 = v21) != 0) )
    {
      v29 = *(void **)(a1 + 96);
      v30 = v21 + 1;
      if ( *(_QWORD *)(a1 + 112) < v21 + 1 )
      {
        v39 = qvector_reserve(a1 + 96, *(_QWORD *)(a1 + 96), v30, 1);
        *(_QWORD *)(a1 + 96) = v39;
        v29 = (void *)v39;
      }
      *(_QWORD *)(a1 + 104) = v30;
      memmove(v29, v20, v22);
      *(_BYTE *)(*(_QWORD *)(a1 + 96) + v22) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 104) = 0;
    }
    *(_BYTE *)(a1 + 184) = *s;
  }
  else
  {
    return 0;
  }
  return numbered_type;
}
