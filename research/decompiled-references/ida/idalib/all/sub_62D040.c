unsigned __int64 __fastcall sub_62D040(__int64 a1, const char *a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  const char *v8; // r15
  int v10; // ecx
  int v11; // r14d
  __int64 (__fastcall **v12)(); // rcx
  size_t v13; // r13
  void *v14; // rax
  size_t v15; // r13
  __int64 (__fastcall **v17)(); // [rsp+8h] [rbp-E8h] BYREF
  int v18; // [rsp+10h] [rbp-E0h]
  __int64 v19; // [rsp+18h] [rbp-D8h]
  void *src; // [rsp+28h] [rbp-C8h] BYREF
  size_t n[3]; // [rsp+30h] [rbp-C0h]
  __int128 v22; // [rsp+48h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-98h]
  int v24; // [rsp+60h] [rbp-90h]
  int v25; // [rsp+64h] [rbp-8Ch]
  int v26; // [rsp+68h] [rbp-88h]
  void *v27; // [rsp+70h] [rbp-80h]
  void *v28; // [rsp+78h] [rbp-78h]
  __int128 v29; // [rsp+80h] [rbp-70h]
  void *v30; // [rsp+90h] [rbp-60h]
  __int128 v31; // [rsp+98h] [rbp-58h]
  unsigned __int64 v32; // [rsp+B0h] [rbp-40h]

  v6 = (__int64)a2;
  v7 = *(_QWORD *)(a3 + 1048);
  v8 = *(const char **)(a1 + 8);
  v32 = __readfsqword(0x28u);
  v10 = *(__int16 *)(a3 + 1060);
  v11 = *(_DWORD *)(a3 + 1056);
  src = nullptr;
  v19 = v7;
  v18 = v10;
  v12 = off_2B25850;
  v17 = off_2B25850;
  *(_OWORD *)n = 0;
  if ( v8 )
  {
    v13 = strlen(v8);
    a2 = v8;
    src = (void *)qvector_reserve(&src, 0, v13 + 1, 1);
    n[0] = v13 + 1;
    memmove(src, v8, v13);
    *((_BYTE *)src + v13) = 0;
  }
  v23 = 0;
  v24 = -1;
  v25 = v11;
  v26 = 1;
  v27 = &v17;
  v22 = 0;
  v14 = (void *)idaplace_t__clone(&v17, a2, a3, v12, a5, a6);
  v15 = n[0];
  v27 = v14;
  v28 = nullptr;
  v29 = 0;
  if ( n[0] )
  {
    v28 = (void *)qalloc_or_throw(n[0]);
    *((_QWORD *)&v29 + 1) = v15;
    memcpy(v28, src, v15);
    *(_QWORD *)&v29 = v15;
  }
  v30 = nullptr;
  v31 = 0;
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  if ( *(_BYTE *)a1 )
  {
    navstack_t_stack_jump(v6, 0, (__int64)&v22);
  }
  else
  {
    navstack_t_set_stack_entry(v6, 0, (__int64)&v22);
    *(_BYTE *)a1 = 1;
  }
  if ( a4 )
    navstack_t_set_current(v6, &v22, 1);
  if ( v27 )
  {
    qfree(v27);
    v27 = nullptr;
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
    v28 = nullptr;
    *((_QWORD *)&v29 + 1) = 0;
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  if ( v27 )
    qfree(v27);
  return v32 - __readfsqword(0x28u);
}
