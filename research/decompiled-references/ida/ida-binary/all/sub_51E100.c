unsigned __int64 __fastcall sub_51E100(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  size_t v10; // rbp
  int v11; // eax
  size_t v12; // rbp
  double v13; // xmm0_8
  _DWORD *v14; // rax
  const char *v15; // rsi
  void *v18; // rbx
  void (__fastcall *v19)(void *); // rdx
  void (__fastcall *v20)(void *); // rax
  char *v21; // rdi
  void *v22; // rax
  const void *v23; // rsi
  void *v24; // rax
  const void *v25; // rsi
  int v26; // [rsp+0h] [rbp-78h] BYREF
  void *v27; // [rsp+8h] [rbp-70h]
  __int128 v28; // [rsp+10h] [rbp-68h]
  int v29; // [rsp+20h] [rbp-58h]
  void *v30; // [rsp+28h] [rbp-50h]
  __int128 v31; // [rsp+30h] [rbp-48h]
  __int64 v32; // [rsp+40h] [rbp-38h]
  void *v33; // [rsp+48h] [rbp-30h]
  unsigned __int64 v34; // [rsp+58h] [rbp-20h]

  v9 = *(_DWORD *)(a1 + 104);
  v10 = *(_QWORD *)(a1 + 120);
  v34 = __readfsqword(0x28u);
  v28 = 0;
  v26 = v9;
  v27 = nullptr;
  if ( v10 )
  {
    v24 = (void *)qalloc_or_throw(v10);
    v25 = *(const void **)(a1 + 112);
    *((_QWORD *)&v28 + 1) = v10;
    v27 = v24;
    memcpy(v24, v25, v10);
    *(_QWORD *)&v28 = v10;
  }
  v11 = *(_DWORD *)(a1 + 136);
  v12 = *(_QWORD *)(a1 + 152);
  v13 = 0.0;
  v30 = nullptr;
  v31 = 0;
  v29 = v11;
  if ( v12 )
  {
    v22 = (void *)qalloc_or_throw(v12);
    v23 = *(const void **)(a1 + 144);
    v30 = v22;
    *((_QWORD *)&v31 + 1) = v12;
    memcpy(v22, v23, v12);
    *(_QWORD *)&v31 = v12;
  }
  v32 = *(_QWORD *)(a1 + 168);
  v14 = *(_DWORD **)(a1 + 176);
  v33 = v14;
  if ( v14 )
    ++v14[2];
  v15 = (const char *)&v26;
  sub_51D9C0(a1, &v26, 0.0, a3, a4, a5, a6, a7, a8, a9);
  if ( v33 )
  {
    if ( (*((_DWORD *)v33 + 2))-- == 1 )
    {
      v18 = v33;
      v19 = **(void (__fastcall ***)(void *))v33;
      if ( v19 == refcnted_regex_t__::vfunc_0 )
      {
        if ( v33 )
        {
          v20 = *(void (__fastcall **)(void *))(*(_QWORD *)v33 + 16LL);
          if ( (char *)v20 == (char *)refcnted_regex_t__::vfunc_2 )
          {
            v21 = (char *)v33 + 16;
            *(_QWORD *)v33 = &refcnted_regex_t___vtable;
            qregfree(v21);
            v15 = (const char *)&dword_30;
            operator delete(v18, 0x30u);
          }
          else
          {
            v20(v33);
          }
        }
      }
      else
      {
        v19(v33);
      }
    }
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    v13 = qfree(v30, v15);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27, v15, v13);
  }
  return v34 - __readfsqword(0x28u);
}
