__int64 __fastcall sub_179710(__int64 a1, char **a2, __int64 *a3)
{
  char *v5; // rbx
  const char *v6; // r14
  char *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  signed __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rdi
  size_t v13; // rax
  size_t v14; // r14
  size_t v15; // r13
  void *v16; // rax
  __int128 v17; // kr00_16
  char *v18; // rdi
  __int64 v19; // rdi
  void *v21; // rdi
  signed __int64 v22; // rdx
  __int64 v23; // [rsp+0h] [rbp-88h]
  __int64 v24; // [rsp+8h] [rbp-80h]
  char *s1; // [rsp+10h] [rbp-78h] BYREF
  __int128 v26; // [rsp+18h] [rbp-70h]
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int128 v28; // [rsp+38h] [rbp-50h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v26 = 0;
  s1 = nullptr;
  sub_94290((__int64 *)&s1);
  v5 = s1;
  if ( !strncmp(s1, "FILTER ", 7u) )
  {
    v6 = v5 + 7;
    v7 = strchr(v5 + 7, 10);
    if ( !v7 )
      v7 = (char *)&v6[strlen(v6)];
    v8 = 0;
    v9 = 0;
    v27 = 0;
    v28 = 0;
    v10 = v7 - v6;
    if ( v7 != v6 )
    {
      v21 = nullptr;
      v22 = v10 + 1;
      if ( v10 != -1 )
      {
        v27 = qvector_reserve();
        v22 = v10 + 1;
        v21 = (void *)v27;
      }
      *(_QWORD *)&v28 = v22;
      memmove(v21, v6, v7 - v6);
      *(_BYTE *)(v27 + v10) = 0;
      v9 = v27;
      v8 = *((_QWORD *)&v28 + 1);
      v10 = v28;
    }
    v11 = *a3;
    v27 = 0;
    v28 = 0;
    if ( v11 )
    {
      a3[1] = 0;
      v24 = v8;
      v23 = v9;
      qfree();
      a3[1] = v10;
      v12 = v27;
      *a3 = v23;
      a3[2] = v24;
      if ( v12 )
      {
        *(_QWORD *)&v28 = 0;
        qfree();
      }
    }
    else
    {
      *a3 = v9;
      a3[1] = v10;
      a3[2] = v8;
    }
    v5 = &v7[-(*v7 == 0) + 1];
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_17C3C0(a1, 0, v5);
  v27 = 0;
  v28 = 0;
  if ( v5 )
  {
    v13 = strlen(v5);
    v14 = v13 + 1;
    v15 = v13;
    v16 = (void *)qvector_reserve();
    *(_QWORD *)&v28 = v14;
    v27 = (__int64)v16;
    memmove(v16, v5, v15);
    *(_BYTE *)(v27 + v15) = 0;
    v5 = (char *)v27;
    v17 = v28;
  }
  else
  {
    v17 = 0u;
  }
  v18 = *a2;
  v27 = 0;
  v28 = 0;
  if ( v18 )
  {
    a2[1] = nullptr;
    qfree();
    v19 = v27;
    *a2 = v5;
    *(_OWORD *)(a2 + 1) = v17;
    if ( v19 )
    {
      *(_QWORD *)&v28 = 0;
      qfree();
    }
  }
  else
  {
    *a2 = v5;
    *(_OWORD *)(a2 + 1) = v17;
  }
  if ( s1 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return a1;
}

