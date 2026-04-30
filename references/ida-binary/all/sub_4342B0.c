unsigned __int64 __fastcall ida_ui_proxy_t__::vfunc_3(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v11; // r12d
  __int64 (__fastcall *v12)(__int64); // rax
  const char *path; // rax
  __int64 v14; // rdx
  char *v15; // rcx
  double v16; // xmm4_8
  double v17; // xmm5_8
  const char *v18; // rbp
  size_t v19; // rax
  size_t v20; // r14
  size_t v21; // r13
  char *v22; // rax
  __int128 v23; // kr00_16
  __int64 v24; // rdi
  __m128 v25; // xmm0
  const char *v26; // rdi
  const char *v28; // [rsp+0h] [rbp-48h] BYREF
  __int128 v29; // [rsp+8h] [rbp-40h]
  unsigned __int64 v30; // [rsp+18h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 32) )
    return v30 - __readfsqword(0x28u);
  v11 = (int)QT::QCoreApplication::self;
  v12 = **(__int64 (__fastcall ***)(__int64))a1;
  if ( v12 == ida_ui_proxy_t__::vfunc_0 )
  {
    path = (const char *)get_path(1);
    v28 = nullptr;
    v18 = path;
    v29 = 0;
    if ( path )
    {
      v19 = strlen(path);
      v20 = v19 + 1;
      v21 = v19;
      v22 = (char *)qvector_reserve(&v28, 0, v19 + 1, 1);
      a2 = v18;
      *(_QWORD *)&v29 = v20;
      v28 = v22;
      memmove(v22, v18, v21);
      v28[v21] = 0;
      v18 = v28;
      v23 = v29;
    }
    else
    {
      v23 = 0u;
    }
  }
  else
  {
    a2 = (const char *)a1;
    ((void (__fastcall *)(const char **, __int64))v12)(&v28, a1);
    v18 = v28;
    v23 = v29;
  }
  v24 = *(_QWORD *)(a1 + 8);
  v25 = 0;
  v28 = nullptr;
  v29 = 0;
  if ( v24 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    *(double *)v25.m128_u64 = qfree(v24, a2);
    v26 = v28;
    *(_QWORD *)(a1 + 8) = v18;
    *(_OWORD *)(a1 + 16) = v23;
    if ( v26 )
    {
      *(_QWORD *)&v29 = 0;
      *(double *)v25.m128_u64 = qfree(v26, a2, *(double *)v25.m128_u64);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v18;
    *(_OWORD *)(a1 + 16) = v23;
  }
  sub_308340(0, (__int64)a2, v14, v15, v25, a4, a5, a6, v16, v17, a9, a10);
  return sub_4341F0(v11 + 16, (int)"HIDECANCEL\nNODELAY\nWaiting for child process...");
}
