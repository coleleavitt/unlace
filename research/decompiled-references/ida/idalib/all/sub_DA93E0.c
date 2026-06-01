__int64 __fastcall sub_DA93E0(__int64 a1, void **a2, __int64 a3, void *a4, __int64 a5, unsigned __int64 a6, _BYTE *a7)
{
  unsigned __int64 v10; // rbp
  void *v11; // rax
  void *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rax
  _QWORD *v17; // rdi
  __int64 (*v18)(void); // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // rdi
  _QWORD **v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned int v27; // r14d
  __int64 *v28; // rsi
  __m128 v29; // xmm0
  _QWORD *v30; // rdi
  __int64 (*v31)(void); // rax
  _QWORD *v32; // rdi
  _QWORD *v33; // rdi
  _QWORD **v34; // rdi
  __int64 v35; // rax
  void *v36; // rbp
  void **v38; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+8h] [rbp-C0h]
  size_t n; // [rsp+10h] [rbp-B8h]
  void *dest; // [rsp+18h] [rbp-B0h]
  int v42; // [rsp+2Ch] [rbp-9Ch] BYREF
  void *src[2]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v44; // [rsp+40h] [rbp-88h] BYREF
  void *v45; // [rsp+48h] [rbp-80h]
  void *ptr; // [rsp+50h] [rbp-78h]
  __int64 v47; // [rsp+58h] [rbp-70h]
  _BYTE v48[104]; // [rsp+60h] [rbp-68h] BYREF

  dest = a4;
  v38 = a2;
  ptr = v48;
  v47 = 0x300000000LL;
  v39 = a5;
  v10 = (unsigned int)(a6 >> 3);
  v44 = a6;
  n = a6 >> 3;
  v45 = nullptr;
  v11 = (void *)operator new[](v10);
  v12 = v11;
  if ( v10 )
    v12 = memset(v11, 0, v10);
  v45 = v12;
  v13 = *(_DWORD *)(a3 + 24);
  if ( v13 == 1 )
  {
    v15 = *(_QWORD *)(a3 + 32);
  }
  else if ( v13 )
  {
    v15 = 0;
    if ( v13 != 2 && v13 != 3 )
      v15 = *(_QWORD *)(*(_QWORD *)(a3 + 32) + 32LL);
  }
  else
  {
    v14 = *(_QWORD *)(a3 + 32);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 32);
      v16 = *(unsigned int *)(a3 + 40);
      if ( *(_DWORD *)(v15 + 24) != (_DWORD)v16 && (_DWORD)v16 )
        v15 = *(_QWORD *)(v14 + v16 + 32);
    }
    else
    {
      v15 = 64;
    }
  }
  v17 = *(_QWORD **)(a1 + 24);
  v18 = *(__int64 (**)(void))(*v17 + 104LL);
  if ( (char *)v18 == (char *)sub_D8A670
    && (v19 = (_QWORD *)v17[3], v18 = *(__int64 (**)(void))(*v19 + 104LL), (char *)v18 == (char *)sub_D8A670)
    && (v20 = (_QWORD *)v19[3], v18 = *(__int64 (**)(void))(*v20 + 104LL), (char *)v18 == (char *)sub_D8A670)
    && (v21 = (_QWORD **)v20[3], v18 = (__int64 (*)(void))(*v21)[13], (char *)v18 == (char *)sub_D8A670) )
  {
    v24 = (*(__int64 (__fastcall **)(_QWORD *))(*v21[3] + 104LL))(v21[3]);
  }
  else
  {
    v24 = v18();
  }
  v26 = sub_CEF7B0(v15, v24, v22, v23, v25);
  v27 = sub_DA43B0(a1, v38, v26, 0);
  if ( (_BYTE)v27 )
  {
    v38 = (void **)&v44;
    v28 = *(__int64 **)(a1 + 184);
    v42 = *(unsigned __int8 *)(*(_QWORD *)(*v28 + 17448) + 272LL);
    v38 = (void **)&v42;
    v29 = _mm_loadh_ps((const double *)&v38);
    v38 = src;
    *(__m128 *)src = v29;
    v27 = sub_DA2FF0(
            (unsigned int *)a3,
            v28,
            0,
            v44,
            (__int64 (__fastcall *)(__int64, __int64 *, _QWORD, unsigned __int64, __int64, __int64))sub_DA1070,
            (__int64)src);
    *a7 = sub_C9F200((__int64)&v44, 0, v39) ^ 1;
    v30 = *(_QWORD **)(a1 + 24);
    v31 = *(__int64 (**)(void))(*v30 + 104LL);
    if ( (char *)v31 == (char *)sub_D8A670
      && (v32 = (_QWORD *)v30[3], v31 = *(__int64 (**)(void))(*v32 + 104LL), (char *)v31 == (char *)sub_D8A670)
      && (v33 = (_QWORD *)v32[3], v31 = *(__int64 (**)(void))(*v33 + 104LL), (char *)v31 == (char *)sub_D8A670)
      && (v34 = (_QWORD **)v33[3], v31 = (__int64 (*)(void))(*v34)[13], (char *)v31 == (char *)sub_D8A670) )
    {
      v35 = (*(__int64 (__fastcall **)(_QWORD *))(*v34[3] + 104LL))(v34[3]);
    }
    else
    {
      v35 = v31();
    }
    sub_C9EE60(v38, (__int64)&v44, 0, v39, a6, *(unsigned __int8 *)(*(_QWORD *)(v35 + 17448) + 272LL));
    v36 = src[0];
    memcpy(dest, src[0], n);
    operator delete[](v36);
  }
  if ( ptr != v48 )
    free(ptr);
  if ( v45 )
    operator delete[](v45);
  return v27;
}
