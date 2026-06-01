unsigned __int64 __fastcall liblicui::license_dialog_t__::vfunc_4(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  void **v12; // rsi
  double v13; // xmm4_8
  double v14; // xmm5_8
  int v15; // eax
  const char *v17; // rdi
  char v18; // al
  double v19; // xmm4_8
  double v20; // xmm5_8
  double v21; // xmm0_8
  void *v22; // rdi
  size_t v23; // rbp
  size_t v24; // rbp
  size_t v25; // rbp
  void *v26; // [rsp+0h] [rbp-F8h] BYREF
  size_t v27[2]; // [rsp+8h] [rbp-F0h]
  __int16 v28; // [rsp+18h] [rbp-E0h]
  char v29; // [rsp+1Ah] [rbp-DEh]
  char v30; // [rsp+20h] [rbp-D8h]
  void *v31; // [rsp+28h] [rbp-D0h]
  size_t v32[2]; // [rsp+30h] [rbp-C8h]
  void *src; // [rsp+40h] [rbp-B8h]
  size_t n[3]; // [rsp+48h] [rbp-B0h]
  void *v35; // [rsp+60h] [rbp-98h] BYREF
  __int128 v36; // [rsp+68h] [rbp-90h]
  Elf64_Sym *v37; // [rsp+78h] [rbp-80h]
  __int64 v38; // [rsp+80h] [rbp-78h]
  void *v39; // [rsp+88h] [rbp-70h]
  __int128 v40; // [rsp+90h] [rbp-68h]
  void *v41; // [rsp+A0h] [rbp-58h]
  __int128 v42; // [rsp+A8h] [rbp-50h]
  __int128 v43; // [rsp+C0h] [rbp-38h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-28h]
  unsigned __int64 v45; // [rsp+D8h] [rbp-20h]

  v45 = __readfsqword(0x28u);
  v26 = nullptr;
  v28 = 0;
  v12 = &v26;
  v29 = 1;
  v30 = 0;
  v31 = nullptr;
  src = nullptr;
  *(_OWORD *)v27 = 0;
  *(_OWORD *)v32 = 0;
  *(_OWORD *)n = 0;
  sub_5521F0(a1 + 264, (__int64)&v26);
  v15 = *(_DWORD *)(a2 + 12);
  if ( v15 > 2 )
  {
    if ( ((v15 - 6) & 0xFFFFFFFD) != 0 )
      goto LABEL_10;
    v36 = 0;
    v12 = (void **)(&dword_0 + 2);
    v35 = nullptr;
    v21 = callui(203, 2, a1, 2 * (unsigned int)(v15 == 6) + 6, (unsigned int)&v35, (unsigned int)&callui);
    v22 = v35;
    if ( !v35 )
      goto LABEL_10;
    goto LABEL_26;
  }
  if ( v15 <= 0 )
  {
    if ( !v15 )
    {
      v43 = 0;
      v12 = &v35;
      v44 = 0;
      v35 = nullptr;
      v37 = &stru_10000;
      v38 = 0;
      v39 = nullptr;
      v41 = nullptr;
      v36 = 0;
      v40 = 0;
      v42 = 0;
      sub_5574C0(a1, (__int64 *)&v35, (int *)&v43, 0.0, a4, a5, a6, v13, v14, a9, a10);
      if ( v41 )
      {
        *(_QWORD *)&v42 = 0;
        qfree(v41, (const char *)&v35);
      }
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree(v39, (const char *)&v35);
      }
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree(v35, (const char *)&v35);
      }
    }
    goto LABEL_10;
  }
  v44 = 0;
  v17 = &s1;
  v43 = 0;
  if ( v32[0] )
    v17 = (const char *)v31;
  v18 = qfileexist(v17);
  v35 = nullptr;
  v21 = 0.0;
  v36 = 0;
  if ( v18 )
  {
    v23 = v27[0];
    if ( v27[0] )
    {
      v35 = (void *)qalloc_or_throw(v27[0]);
      *((_QWORD *)&v36 + 1) = v23;
      memcpy(v35, v26, v23);
      *(_QWORD *)&v36 = v23;
    }
    v24 = v32[0];
    v39 = nullptr;
    v40 = 0;
    LOWORD(v37) = v28;
    BYTE2(v37) = v29;
    LOBYTE(v38) = v30;
    if ( v32[0] )
    {
      v39 = (void *)qalloc_or_throw(v32[0]);
      *((_QWORD *)&v40 + 1) = v24;
      memcpy(v39, v31, v24);
      *(_QWORD *)&v40 = v24;
    }
    v25 = n[0];
    v21 = 0.0;
    v41 = nullptr;
    v42 = 0;
    if ( n[0] )
    {
      v41 = (void *)qalloc_or_throw(n[0]);
      *((_QWORD *)&v42 + 1) = v25;
      memcpy(v41, src, v25);
      *(_QWORD *)&v42 = v25;
    }
  }
  else
  {
    v37 = &stru_10000;
    v38 = 0;
    v39 = nullptr;
    v41 = nullptr;
    v40 = 0;
    v42 = 0;
  }
  v12 = &v35;
  sub_5574C0(a1, (__int64 *)&v35, (int *)&v43, 0.0, a4, a5, a6, v19, v20, a9, a10);
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    v21 = qfree(v41, (const char *)&v35);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    v21 = qfree(v39, (const char *)&v35, v21);
  }
  v22 = v35;
  if ( v35 )
  {
LABEL_26:
    *(_QWORD *)&v36 = 0;
    qfree(v22, (const char *)v12, v21);
  }
LABEL_10:
  sub_552450(a1);
  if ( src )
  {
    n[0] = 0;
    qfree(src, (const char *)v12);
  }
  if ( v31 )
  {
    v32[0] = 0;
    qfree(v31, (const char *)v12);
  }
  if ( v26 )
  {
    v27[0] = 0;
    qfree(v26, (const char *)v12);
  }
  return v45 - __readfsqword(0x28u);
}
