unsigned __int64 __fastcall sub_6A6DA0(
        _QWORD *a1,
        void **a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5,
        double a6,
        double a7)
{
  void **v7; // r12
  unsigned int *v11; // rsi
  void *v12; // rdx
  unsigned int *v13; // rcx
  unsigned int *v14; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  char *v20; // rdi
  __int64 v21; // rbp
  __int64 v22; // rbx
  char *v23; // rdi
  char *v24; // rbx
  char *v25; // rbp
  void **p_ptr; // r14
  __int64 v27; // rax
  void *v28; // rdx
  unsigned int v29; // [rsp+18h] [rbp-E0h] BYREF
  char v30; // [rsp+1Ch] [rbp-DCh]
  void *ptr; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v32; // [rsp+28h] [rbp-D0h]
  _QWORD v33[2]; // [rsp+40h] [rbp-B8h] BYREF
  void *s; // [rsp+50h] [rbp-A8h]
  __int64 v35; // [rsp+58h] [rbp-A0h]
  void *v36; // [rsp+60h] [rbp-98h]
  __int64 v37; // [rsp+68h] [rbp-90h]
  int v38; // [rsp+70h] [rbp-88h]
  __int64 v39; // [rsp+78h] [rbp-80h]
  void *v40[2]; // [rsp+80h] [rbp-78h] BYREF
  __int128 v41; // [rsp+90h] [rbp-68h]
  void *v42; // [rsp+A0h] [rbp-58h]
  __int128 v43; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v44; // [rsp+B8h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( *a4 <= 0 )
    return v44 - __readfsqword(0x28u);
  v7 = a2;
  ptr = nullptr;
  v32 = 0;
  if ( !a2 )
  {
    v16 = 1;
    p_ptr = &ptr;
    goto LABEL_27;
  }
  v11 = (unsigned int *)*a2;
  v12 = v7[1];
  v13 = &v11[(_QWORD)v12];
  if ( v11 == v13 )
    goto LABEL_9;
  v14 = v11;
  while ( *v14 != a3 )
  {
    if ( v13 == ++v14 )
      goto LABEL_9;
  }
  if ( v13 == v14 )
  {
LABEL_9:
    v16 = (unsigned __int64)v12 + 1;
    if ( (unsigned __int64)v7[2] >= v16 )
      goto LABEL_10;
    p_ptr = v7;
    v7 = (void **)v11;
LABEL_27:
    v27 = qvector_reserve(p_ptr, v7, v16, 4);
    v28 = p_ptr[1];
    *p_ptr = (void *)v27;
    v7 = p_ptr;
    v13 = (unsigned int *)(v27 + 4LL * (_QWORD)v28);
LABEL_10:
    *v13 = a3;
    v7[1] = (char *)v7[1] + 1;
    v33[1] = a5;
    v33[0] = a1;
    s = v40;
    v35 = 1;
    v36 = nullptr;
    v37 = 0;
    v38 = 1065353216;
    v39 = 0;
    v42 = nullptr;
    v29 = -1;
    v30 = 0;
    *(_OWORD *)v40 = 0;
    v41 = 0;
    v43 = 0;
    sub_3FD660(a1, (__int64)&v29, a3);
    while ( v29 != -1 )
    {
      sub_6A6A80((__int64)v33, v29, 0.0, a7, v17, v18, v19);
      sub_3FD7C0(a1, &v29, a3);
    }
    sub_6A70A0(v33, v7, a3, a4);
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v42);
    }
    v20 = (char *)v40[1];
    if ( v40[1] )
    {
      v21 = v41;
      if ( (_QWORD)v41 )
      {
        v22 = 0;
        do
        {
          v23 = &v20[8 * v22++];
          clear_tinfo_t(v23);
          v20 = (char *)v40[1];
        }
        while ( v21 != v22 );
      }
      *(_QWORD *)&v41 = 0;
      qfree(v20);
    }
    v24 = (char *)v36;
    if ( v36 )
    {
      do
      {
        v25 = v24;
        v24 = *(char **)v24;
        clear_tinfo_t(v25 + 184);
        sub_6304F0((__int64)(v25 + 16));
        operator delete(v25, 0xC0u);
      }
      while ( v24 );
    }
    memset(s, 0, 8 * v35);
    v37 = 0;
    v36 = nullptr;
    if ( s != v40 )
      operator delete(s, 8 * v35);
    if ( ptr )
    {
      *(_QWORD *)&v32 = 0;
      qfree(ptr);
    }
  }
  return v44 - __readfsqword(0x28u);
}

