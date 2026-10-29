unsigned __int64 __fastcall sub_1466D0(__int64 a1, __int64 **a2)
{
  const char *v2; // rax
  const char *v3; // r13
  size_t v4; // r15
  __int64 *v5; // r14
  __int64 v6; // r13
  const char *v7; // rax
  __int64 *v8; // r14
  const char *v9; // rbp
  size_t v10; // rax
  size_t v11; // r13
  void *v13; // rdi
  size_t v14; // r15
  __int64 *v15; // rdi
  void *v16; // r8
  void *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // [rsp+0h] [rbp-1098h]
  void *v21; // [rsp+0h] [rbp-1098h]
  void *src; // [rsp+10h] [rbp-1088h] BYREF
  __int128 v23; // [rsp+18h] [rbp-1080h]
  char *v24; // [rsp+30h] [rbp-1068h]
  __int128 v25; // [rsp+38h] [rbp-1060h]
  unsigned __int64 v26; // [rsp+1058h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v23 = 0;
  src = nullptr;
  get_idasgn_desc();
  if ( (unsigned __int8)qisabspath() && (unsigned __int8)qdirname() )
  {
    v2 = (const char *)qbasename();
    v24 = nullptr;
    v3 = v2;
    v25 = 0;
    if ( !v2
      || (v4 = strlen(v2),
          v24 = (char *)qvector_reserve(),
          *(_QWORD *)&v25 = v4 + 1,
          memmove(v24, v3, v4),
          v24[v4] = 0,
          !(_QWORD)v25) )
    {
      v15 = *a2;
      goto LABEL_23;
    }
    if ( (unsigned __int64)(v25 - 1) > 3 )
    {
      v20 = &v24[v25 - 5];
      if ( !strncmp(v20, ".sig", 4u) )
      {
        if ( (_QWORD)v25 != 5 )
        {
          *(_QWORD *)&v25 = v25 - 4;
          *v20 = 0;
          goto LABEL_30;
        }
        if ( v24 )
        {
          v25 = 0u;
          qfree();
          v24 = nullptr;
LABEL_30:
          v15 = *a2;
LABEL_23:
          sub_94440(v15);
          if ( v24 )
          {
            *(_QWORD *)&v25 = 0;
            qfree();
          }
          goto LABEL_13;
        }
      }
    }
    v15 = *a2;
    goto LABEL_23;
  }
  v5 = *a2;
  if ( *a2 != (__int64 *)&src )
  {
    v6 = v23;
    if ( (unsigned __int64)v23 > 1 )
    {
      v16 = src;
      v17 = (void *)*v5;
      if ( v5[2] < (unsigned __int64)v23 )
      {
        v21 = src;
        v19 = qvector_reserve();
        *v5 = v19;
        v16 = v21;
        v17 = (void *)v19;
      }
      v5[1] = v6;
      memmove(v17, v16, v6 - 1);
      *(_BYTE *)(*v5 + v6 - 1) = 0;
    }
    else
    {
      v5[1] = 0;
    }
  }
LABEL_13:
  calc_idasgn_state();
  v7 = (const char *)strarray();
  v8 = *a2;
  v9 = v7;
  if ( v7 && (v10 = strlen(v7), (v11 = v10) != 0) )
  {
    v13 = (void *)v8[3];
    v14 = v10 + 1;
    if ( v8[5] < v10 + 1 )
    {
      v18 = qvector_reserve();
      v8[3] = v18;
      v13 = (void *)v18;
    }
    v8[4] = v14;
    memmove(v13, v9, v11);
    *(_BYTE *)(v8[3] + v11) = 0;
  }
  else
  {
    v8[4] = 0;
  }
  sub_94440(*a2 + 6);
  get_idasgn_title();
  if ( src )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  return v26 - __readfsqword(0x28u);
}

