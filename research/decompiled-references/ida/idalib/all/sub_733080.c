unsigned __int64 __fastcall sub_733080(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  char *v5; // rdi
  __int64 v6; // rdx
  char *v7; // rsi
  char *v8; // rbx
  char *v9; // r15
  char *v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  size_t v14; // rax
  size_t v15; // rbp
  unsigned __int64 v16; // r8
  const void *v17; // r14
  unsigned __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rbp
  char *v23; // rax
  void *v24; // rdi
  unsigned __int64 v26; // [rsp+0h] [rbp-98h]
  unsigned __int64 v27; // [rsp+0h] [rbp-98h]
  unsigned __int64 v28; // [rsp+8h] [rbp-90h]
  unsigned __int64 v29; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int128 v31; // [rsp+18h] [rbp-80h]
  char v32[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-40h]

  v2 = a2 + 8;
  v3 = *(_QWORD *)(a2 + 24);
  v33 = __readfsqword(0x28u);
  v31 = 0;
  ptr = nullptr;
  if ( v3 == a2 + 8 )
    return v33 - __readfsqword(0x28u);
  do
  {
    sub_838D50(v3 + 72, v32, 33);
    v6 = v31;
    v7 = (char *)ptr;
    if ( *((_QWORD *)&v31 + 1) < (unsigned __int64)(v31 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v31 + 1, 24);
      v6 = v31;
      v7 = (char *)ptr;
    }
    v5 = &v7[24 * v6];
    *(_QWORD *)v5 = 0;
    *(_OWORD *)(v5 + 8) = 0;
    *(_QWORD *)&v31 = v31 + 1;
    sub_35A790((char **)v5);
    v3 = std::_Rb_tree_increment(v3);
  }
  while ( v2 != v3 );
  v8 = (char *)ptr;
  v9 = (char *)ptr + 24 * v31;
  if ( v9 != ptr )
  {
    v10 = (char *)ptr;
    v11 = 0;
    do
    {
      v12 = *((_QWORD *)v10 + 1);
      if ( v12 )
        v11 = v11 + v12 - 1;
      v10 += 24;
    }
    while ( v10 != v9 );
    if ( a1[2] >= v11
      || (*a1 = qvector_reserve(a1, *a1, v11, 1), v8 = (char *)ptr, v9 = (char *)ptr + 24 * v31, v9 != ptr) )
    {
      while ( 1 )
      {
        v13 = *((_QWORD *)v8 + 1);
        if ( !v13 )
          goto LABEL_19;
        v14 = v13 - 1;
        v15 = v14;
        if ( !v14 )
          goto LABEL_19;
        v16 = a1[1];
        v17 = *(const void **)v8;
        v18 = v16 + v14;
        if ( __CFADD__(v16, v14) )
        {
          if ( v16 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( v16 != 0x7FFFFFFFFFFFFFFFLL )
              a1[1] = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_18;
          }
          v18 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v19 = *a1;
        v20 = a1[1];
        if ( a1[2] < v18 )
        {
          v29 = a1[1];
          v27 = v18;
          v19 = qvector_reserve(a1, v19, v18, 1);
          v16 = v29;
          v18 = v27;
          *a1 = v19;
          v20 = a1[1];
        }
        v28 = v16;
        v26 = v18;
        memset((void *)(v19 + v20), 0, v18 - v20);
        v16 = v28;
        a1[1] = v26;
LABEL_18:
        memcpy((void *)(v16 + *a1), v17, v15);
LABEL_19:
        v8 += 24;
        if ( v9 == v8 )
        {
          v9 = (char *)ptr;
          v8 = (char *)ptr;
          break;
        }
      }
    }
  }
  if ( v9 )
  {
    v21 = v31;
    if ( (_QWORD)v31 )
    {
      v22 = 0;
      do
      {
        v23 = &v9[24 * v22];
        v24 = *(void **)v23;
        if ( *(_QWORD *)v23 )
        {
          *((_QWORD *)v23 + 1) = 0;
          qfree(v24);
          v8 = (char *)ptr;
        }
        ++v22;
        v9 = v8;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v31 = 0;
    qfree(v9);
  }
  return v33 - __readfsqword(0x28u);
}
