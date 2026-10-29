unsigned __int64 __fastcall sub_45ECA0(__int64 a1, __int64 a2)
{
  int v2; // r14d
  const char *v3; // r15
  unsigned int v4; // r12d
  size_t v6; // r13
  size_t v7; // r13
  __int64 (__fastcall *v8)(__int64 *); // rax
  __int64 v9; // rbp
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD); // rsi
  void (__fastcall *v11)(__int64); // rax
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
  v2 = *(_DWORD *)(a2 + 24);
  if ( v2 >= 0 )
  {
    v3 = *(const char **)a2;
    v4 = *(_DWORD *)(a2 + 28);
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v3 )
    {
      v6 = strlen(v3);
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
        v21 = (void *)qalloc_or_throw(n[0]);
        v22[1] = v7;
        memcpy(v21, src, v7);
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
    v8 = *(__int64 (__fastcall **)(__int64 *))(a2 + 16);
    if ( v8 )
    {
      v9 = v8(&v20);
    }
    else
    {
      v9 = operator new(0x98u);
      v13 = v22[0];
      *(_QWORD *)v9 = &off_2B26160;
      v14 = v20;
      *(_QWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 8) = v14;
      *(_OWORD *)(v9 + 24) = 0;
      if ( v13 )
      {
        v16 = (void *)qalloc_or_throw(v13);
        *(_QWORD *)(v9 + 16) = v16;
        v17 = v21;
        *(_QWORD *)(v9 + 32) = v13;
        memcpy(v16, v17, v13);
        *(_QWORD *)(v9 + 24) = v13;
      }
      v15 = v23;
      *(_QWORD *)(v9 + 120) = -1;
      *(_QWORD *)(v9 + 40) = v15;
      LODWORD(v15) = v24;
      *(_QWORD *)(v9 + 128) = -1;
      *(_DWORD *)(v9 + 48) = v15;
      *(_QWORD *)(v9 + 136) = -1;
      *(_QWORD *)(v9 + 144) = 0;
      *(_OWORD *)(v9 + 56) = 0;
      *(_OWORD *)(v9 + 72) = 0;
      *(_OWORD *)(v9 + 88) = 0;
      *(_OWORD *)(v9 + 104) = 0;
      merge_handler_ctr(v9, 0);
    }
    v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 8);
    if ( v10 )
    {
      v11 = *(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL);
      if ( (char *)v11 == (char *)j__merge_handler_init )
        merge_handler_init(v9, v10);
      else
        v11(v9);
    }
    if ( v21 )
    {
      v22[0] = 0;
      qfree(v21);
    }
  }
  return v25 - __readfsqword(0x28u);
}
