unsigned __int64 __fastcall sub_44AA60(__int64 a1, _DWORD *a2)
{
  int v2; // r14d
  const char *v3; // r15
  unsigned int v4; // r12d
  _DWORD *v5; // rbx
  size_t v6; // r13
  size_t v7; // r13
  void *v8; // rax
  __int64 (__fastcall *v9)(__int64 *); // rax
  __int64 v10; // rbp
  __int64 (*v11)(); // rax
  size_t v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  void *v16; // rax
  void *v17; // rsi
  void *src; // [rsp+10h] [rbp-98h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-90h]
  __int64 v20; // [rsp+30h] [rbp-78h] BYREF
  void *v21; // [rsp+38h] [rbp-70h]
  size_t v22[2]; // [rsp+40h] [rbp-68h]
  unsigned __int64 v23; // [rsp+50h] [rbp-58h]
  int v24; // [rsp+58h] [rbp-50h]
  unsigned __int64 v25; // [rsp+68h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v2 = a2[6];
  if ( v2 >= 0 )
  {
    v3 = *(const char **)a2;
    v4 = a2[7];
    src = nullptr;
    v5 = a2;
    *(_OWORD *)n = 0;
    if ( v3 )
    {
      v6 = strlen(v3);
      a2 = v3;
      src = (void *)qvector_reserve(&src, 0, v6 + 1, 1);
      n[0] = v6 + 1;
      memmove(src, v3, v6);
      *((_BYTE *)src + v6) = 0;
      v7 = n[0];
      v20 = a1 + 344;
      v21 = nullptr;
      *(_OWORD *)v22 = 0;
      if ( n[0] )
      {
        v8 = (void *)qalloc_or_throw(n[0], v3);
        a2 = src;
        v21 = v8;
        v22[1] = v7;
        memcpy(v8, src, v7);
        v22[0] = v7;
      }
    }
    else
    {
      *(_OWORD *)v22 = 0;
      v20 = a1 + 344;
      v21 = nullptr;
    }
    v23 = v4 | 0xFFFFFFFF00000000LL;
    v24 = v2;
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    v9 = *((__int64 (__fastcall **)(__int64 *))v5 + 2);
    if ( v9 )
    {
      v10 = v9(&v20);
    }
    else
    {
      v10 = operator new(0x98u);
      v13 = v22[0];
      *(_QWORD *)v10 = &off_2AFD020;
      v14 = v20;
      *(_QWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 8) = v14;
      *(_OWORD *)(v10 + 24) = 0;
      if ( v13 )
      {
        v16 = (void *)qalloc_or_throw(v13, (const char *)a2);
        *(_QWORD *)(v10 + 16) = v16;
        v17 = v21;
        *(_QWORD *)(v10 + 32) = v13;
        memcpy(v16, v17, v13);
        *(_QWORD *)(v10 + 24) = v13;
      }
      v15 = v23;
      *(_QWORD *)(v10 + 120) = -1;
      *(_QWORD *)(v10 + 40) = v15;
      LODWORD(v15) = v24;
      *(_QWORD *)(v10 + 128) = -1;
      *(_DWORD *)(v10 + 48) = v15;
      *(_QWORD *)(v10 + 136) = 0xFFFFFFFFLL;
      *(_DWORD *)(v10 + 144) = 0;
      *(_OWORD *)(v10 + 56) = 0;
      *(_OWORD *)(v10 + 72) = 0;
      *(_OWORD *)(v10 + 88) = 0;
      *(_OWORD *)(v10 + 104) = 0;
      merge_handler_ctr();
    }
    if ( *((_QWORD *)v5 + 1) )
    {
      v11 = *(__int64 (**)())(*(_QWORD *)v10 + 16LL);
      if ( v11 == j__merge_handler_init )
        merge_handler_init(v10);
      else
        ((void (__fastcall *)(__int64))v11)(v10);
    }
    if ( v21 )
    {
      v22[0] = 0;
      qfree(v21);
    }
  }
  return v25 - __readfsqword(0x28u);
}

