unsigned __int64 __fastcall sub_63F0A0(
        __int64 *a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  double v14; // xmm4_8
  double v15; // xmm5_8
  const char *v16; // r14
  size_t v17; // rax
  size_t v18; // r15
  size_t v19; // r13
  char *v20; // r9
  char *v21; // rcx
  char *v22; // r8
  double v23; // xmm4_8
  double v24; // xmm5_8
  const char *v25; // r8
  unsigned __int8 v27[4]; // [rsp+1Ch] [rbp-C4h] BYREF
  char *v28; // [rsp+20h] [rbp-C0h] BYREF
  char *v29; // [rsp+28h] [rbp-B8h] BYREF
  char *v30; // [rsp+30h] [rbp-B0h] BYREF
  char *v31; // [rsp+38h] [rbp-A8h] BYREF
  void *ptr; // [rsp+40h] [rbp-A0h] BYREF
  __int128 v33; // [rsp+48h] [rbp-98h]
  char *v34[2]; // [rsp+60h] [rbp-80h] BYREF
  void *v35; // [rsp+70h] [rbp-70h]
  __int64 v36; // [rsp+78h] [rbp-68h]
  void *v37; // [rsp+88h] [rbp-58h]
  __int64 v38; // [rsp+90h] [rbp-50h]
  char v39; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v40; // [rsp+A8h] [rbp-38h]

  v11 = a1[1];
  v40 = __readfsqword(0x28u);
  v12 = sub_630800(v11, a2);
  if ( v12 )
  {
    sub_629EE0(
      v12,
      (const char **)&v28,
      (unsigned __int64)&v29,
      (unsigned __int64)&v30,
      (unsigned __int64)&v31,
      (unsigned __int64)v27);
    v13 = sub_630800(a1[1], (unsigned int)a2);
    if ( v13 )
    {
      v16 = (const char *)(v13 + 4);
      if ( *(_BYTE *)(v13 + 4) != 35 || *(_BYTE *)(v13 + 5) )
      {
        ptr = nullptr;
        v33 = 0;
      }
      else
      {
        v16 = (const char *)(v13 + 5);
        ptr = nullptr;
        v33 = 0;
      }
      v17 = strlen(v16);
      v18 = v17 + 1;
      v19 = v17;
      ptr = (void *)qvector_reserve(&ptr, 0, v17 + 1, 1);
      *(_QWORD *)&v33 = v18;
      memmove(ptr, v16, v19);
      v20 = v29;
      v21 = (char *)haystack;
      v22 = v28;
      *((_BYTE *)ptr + v19) = 0;
      if ( (_QWORD)v33 )
        v21 = (char *)ptr;
    }
    else
    {
      v20 = v29;
      ptr = nullptr;
      v21 = (char *)haystack;
      v22 = v28;
      v33 = 0;
    }
    sub_6369F0((__int64)v34, *a1, a1[1], v21, v22, v20, 0.0, a4, a5, a6, v14, v15, a9, a10);
    if ( v39 )
    {
      v25 = haystack;
      if ( (_QWORD)v33 )
        v25 = (const char *)ptr;
      sub_63E120(a1, a1[1], a2, 4, v25, v34[0], 0.0, a4, a5, a6, v23, v24, a9, a10, v34[1], v30, v31, v27, nullptr, 0);
    }
    if ( v37 )
    {
      v38 = 0;
      qfree(v37);
    }
    if ( v35 )
    {
      v36 = 0;
      qfree(v35);
    }
    if ( ptr )
    {
      *(_QWORD *)&v33 = 0;
      qfree(ptr);
    }
  }
  return v40 - __readfsqword(0x28u);
}

