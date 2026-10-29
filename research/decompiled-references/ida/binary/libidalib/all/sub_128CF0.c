__int64 __fastcall sub_128CF0(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  const char *v4; // r14
  char *v8; // rax
  size_t v9; // rbx
  char *v10; // rax
  unsigned __int64 v11; // r15
  size_t v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r13
  __int128 v16; // kr00_16
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r14
  size_t v19; // rbx
  const char *v20; // rbp
  void *v21; // rdi
  void *v22; // rdi
  size_t v23; // rdx
  size_t v24; // [rsp+8h] [rbp-70h]
  __int64 v25; // [rsp+18h] [rbp-60h]
  size_t v26; // [rsp+18h] [rbp-60h]
  __int64 v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+20h] [rbp-58h]
  void *v29; // [rsp+20h] [rbp-58h]
  __int128 v30; // [rsp+28h] [rbp-50h]
  size_t v31; // [rsp+28h] [rbp-50h]

  v3 = *(_QWORD *)(a3 + 8);
  if ( !v3 )
  {
    v4 = s1;
LABEL_3:
    sub_92200((__int64)"Incorrect ABI option format '%s', should be <name>:<description>", v4);
    return 0;
  }
  v4 = *(const char **)a3;
  v8 = strchr(*(const char **)a3, 58);
  if ( !v8 )
    goto LABEL_3;
  v24 = v8 - v4;
  if ( v8 - v4 == -1 )
    goto LABEL_3;
  v9 = v3 - 1;
  if ( v9 < v24 )
    goto LABEL_33;
  v10 = strrchr(v8, 35);
  if ( !v10 || (v11 = v10 - v4, v10 - v4 == -1) )
  {
    v9 = v24;
LABEL_33:
    v13 = 0;
    v11 = -1;
    if ( v9 )
    {
      v29 = (void *)qvector_reserve();
      v11 = -1;
      memmove(v29, v4, v9);
      *((_BYTE *)v29 + v9) = 0;
      v13 = (__int64)v29;
      ++v9;
    }
    goto LABEL_12;
  }
  v12 = v11 + 1;
  v27 = 0;
  if ( v11 + 1 > v9 )
    v12 = v9;
  v13 = 0;
  v9 -= v12;
  if ( v9 )
  {
    v22 = nullptr;
    v23 = v9 + 1;
    if ( v9 != -1 )
    {
      v26 = v12;
      v27 = qvector_reserve();
      v12 = v26;
      v22 = (void *)v27;
      v23 = v9 + 1;
    }
    v31 = v23;
    memmove(v22, &v4[v12], v9);
    *(_BYTE *)(v27 + v9) = 0;
    v13 = v27;
    v9 = v31;
  }
LABEL_12:
  if ( *a1 )
  {
    a1[1] = 0;
    v25 = v13;
    qfree();
    a1[1] = v9;
    *a1 = v25;
  }
  else
  {
    *a1 = v13;
    a1[1] = v9;
  }
  a1[2] = 0;
  v14 = *(_QWORD *)(a3 + 8);
  if ( !v14 )
    goto LABEL_15;
  v17 = v14 - 1;
  v18 = v24 + 1;
  if ( v14 - 1 < v11 )
  {
    if ( v18 > v17 )
      v18 = v14 - 1;
    v19 = v17 - v18;
  }
  else
  {
    if ( v18 > v11 )
      v18 = v11;
    v19 = v11 - v18;
  }
  v20 = *(const char **)a3;
  v28 = 0;
  v30 = 0;
  if ( v19 )
  {
    v21 = nullptr;
    if ( v19 != -1 )
    {
      v28 = qvector_reserve();
      v21 = (void *)v28;
    }
    *(_QWORD *)&v30 = v19 + 1;
    memmove(v21, &v20[v18], v19);
    *(_BYTE *)(v28 + v19) = 0;
    v15 = v28;
    v16 = v30;
  }
  else
  {
LABEL_15:
    v15 = 0;
    v16 = 0u;
  }
  if ( *a2 )
  {
    a2[1] = 0;
    qfree();
  }
  *a2 = v15;
  *(_OWORD *)(a2 + 1) = v16;
  return 1;
}

