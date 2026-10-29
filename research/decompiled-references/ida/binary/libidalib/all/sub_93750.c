unsigned __int64 __fastcall sub_93750(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, int a5)
{
  char *v6; // r15
  char *v7; // r12
  char *v8; // r14
  char *v9; // r13
  __int64 *v10; // r8
  size_t v11; // rax
  size_t v12; // rbp
  __int64 *v13; // r15
  size_t v14; // rax
  size_t v15; // rbp
  __int64 *v16; // r14
  size_t v17; // rax
  size_t v18; // rbp
  __int64 *v19; // rbp
  size_t v20; // rax
  size_t v21; // rbx
  void *v22; // rdi
  size_t v23; // rdx
  void *v24; // rdi
  size_t v25; // r13
  void *v26; // rdi
  size_t v27; // r15
  void *v28; // rdi
  size_t v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 *v34; // [rsp+0h] [rbp-98h]
  __int64 *v35; // [rsp+0h] [rbp-98h]
  size_t v36; // [rsp+0h] [rbp-98h]
  size_t v37; // [rsp+8h] [rbp-90h]
  __int64 v38; // [rsp+10h] [rbp-88h] BYREF
  char *s[2]; // [rsp+18h] [rbp-80h]
  char *v40[2]; // [rsp+28h] [rbp-70h]
  __int128 v41; // [rsp+38h] [rbp-60h]
  __int64 v42; // [rsp+48h] [rbp-50h]
  __int64 v43; // [rsp+50h] [rbp-48h]
  unsigned __int64 v44; // [rsp+58h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  *(_OWORD *)s = 0;
  v38 = 72;
  v42 = 0;
  v43 = 0;
  *(_OWORD *)v40 = 0;
  v41 = 0;
  if ( sub_93360(a5, &v38) )
  {
    v6 = s[1];
    v7 = s[0];
    v8 = v40[0];
    v9 = v40[1];
    v10 = *a2;
    if ( s[1] && (v34 = *a2, v11 = strlen(s[1]), v10 = v34, (v12 = v11) != 0) )
    {
      v22 = (void *)*v34;
      v23 = v11 + 1;
      if ( v34[2] < v11 + 1 )
      {
        v37 = v11 + 1;
        v30 = qvector_reserve();
        v10 = v34;
        v23 = v37;
        v22 = (void *)v30;
        *v34 = v30;
      }
      v10[1] = v23;
      v35 = v10;
      memmove(v22, v6, v12);
      *(_BYTE *)(*v35 + v12) = 0;
    }
    else
    {
      v10[1] = 0;
    }
    v13 = *a2;
    if ( v8 && (v14 = strlen(v8), (v15 = v14) != 0) )
    {
      v28 = (void *)v13[3];
      v29 = v14 + 1;
      if ( v13[5] < v14 + 1 )
      {
        v36 = v14 + 1;
        v31 = qvector_reserve();
        v29 = v36;
        v13[3] = v31;
        v28 = (void *)v31;
      }
      v13[4] = v29;
      memmove(v28, v8, v15);
      *(_BYTE *)(v13[3] + v15) = 0;
    }
    else
    {
      v13[4] = 0;
    }
    v16 = *a2;
    if ( v9 && (v17 = strlen(v9), (v18 = v17) != 0) )
    {
      v26 = (void *)v16[6];
      v27 = v17 + 1;
      if ( v16[8] < v17 + 1 )
      {
        v32 = qvector_reserve();
        v16[6] = v32;
        v26 = (void *)v32;
      }
      v16[7] = v27;
      memmove(v26, v9, v18);
      *(_BYTE *)(v16[6] + v18) = 0;
    }
    else
    {
      v16[7] = 0;
    }
    v19 = *a2;
    if ( v7 && (v20 = strlen(v7), (v21 = v20) != 0) )
    {
      v24 = (void *)v19[9];
      v25 = v20 + 1;
      if ( v19[11] < v20 + 1 )
      {
        v33 = qvector_reserve();
        v19[9] = v33;
        v24 = (void *)v33;
      }
      v19[10] = v25;
      memmove(v24, v7, v21);
      *(_BYTE *)(v19[9] + v21) = 0;
    }
    else
    {
      v19[10] = 0;
    }
  }
  return v44 - __readfsqword(0x28u);
}

