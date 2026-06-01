__int64 __fastcall sub_43D3B0(
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
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r15
  __int64 (*v15)(); // rax
  double v16; // xmm0_8
  bool v17; // zf
  const char *v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // eax
  double v21; // xmm4_8
  double v22; // xmm5_8
  char v23; // r15
  const char *v24; // rbx
  const char *v25; // rsi
  unsigned int v26; // ebx
  const char *v28; // rdx
  size_t n; // [rsp+8h] [rbp-D8h]
  char v30; // [rsp+1Fh] [rbp-C1h] BYREF
  const char *v31; // [rsp+20h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+28h] [rbp-B8h]
  void *v33; // [rsp+40h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+48h] [rbp-98h]
  __int64 (__fastcall **v35)(); // [rsp+60h] [rbp-80h] BYREF
  __int64 v36; // [rsp+68h] [rbp-78h]
  __int128 v37; // [rsp+70h] [rbp-70h]
  __int64 v38; // [rsp+80h] [rbp-60h]
  __int128 v39; // [rsp+88h] [rbp-58h]
  __int64 v40; // [rsp+98h] [rbp-48h]
  unsigned __int64 v41; // [rsp+A8h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  v11 = sub_426230(a1, a2);
  v12 = sub_417080((__int64)v11);
  v13 = *(_QWORD *)(v12 + 8);
  if ( v13
    && ((v14 = v12, v15 = *(__int64 (**)())(*(_QWORD *)v13 + 480LL), v15 == sub_178B60) || !(unsigned __int8)v15()) )
  {
    v36 = 0;
    v37 = 0;
    v35 = &local_site_t___vtable;
    v38 = 0;
    v40 = 0;
    v39 = 0;
    sub_417360((__int64)v11, &v35);
    v16 = 0.0;
    v17 = *(_QWORD *)(a1 + 8) == 0;
    v31 = nullptr;
    v18 = &s1;
    v19 = *(unsigned int *)(a1 + 24);
    v32 = 0;
    if ( !v17 )
      v18 = *(const char **)a1;
    v20 = (*(__int64 (__fastcall **)(_QWORD, const char **, char *, _QWORD, __int64 (__fastcall ***)(), const char *, __int64))(**(_QWORD **)(v14 + 8) + 456LL))(
            *(_QWORD *)(v14 + 8),
            &v31,
            &v30,
            0,
            &v35,
            v18,
            v19);
    if ( v20 )
    {
      v28 = &s1;
      if ( *(_QWORD *)(a1 + 8) )
        v28 = *(const char **)a1;
      v25 = "Path: %s";
      sub_4168C0(v20, (__int64)"Path: %s", v28);
      v26 = 0;
    }
    else
    {
      v23 = v30;
      v24 = &s1;
      if ( (_QWORD)v32 )
        v24 = v31;
      v16 = 0.0;
      v33 = nullptr;
      v34 = 0;
      if ( v24 )
      {
        n = strlen(v24);
        v33 = (void *)qvector_reserve(&v33, 0, n + 1, 1);
        *(_QWORD *)&v34 = n + 1;
        memmove(v33, v24, n);
        *((_BYTE *)v33 + n) = 0;
      }
      v25 = (const char *)&v33;
      v26 = sub_434A50(0, (const char *)&v33, nullptr, v23, 0, 0, 0.0, a4, a5, a6, v21, v22, a9, a10, 0, 0, 0);
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        v16 = qfree(v33, (const char *)&v33);
      }
    }
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      v16 = qfree(v31, v25, v16);
    }
    v35 = &local_site_t___vtable;
    v40 = 0;
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      v16 = qfree(v38, v25, v16);
    }
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36, v25, v16);
    }
  }
  else
  {
    return 0;
  }
  return v26;
}
