__int64 __fastcall sub_D28D90(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r13
  void *v11; // r14
  unsigned int v12; // ebx
  void *v13; // r12
  void *v14; // rdi
  _QWORD *v15; // rax
  __m128i v17; // [rsp+0h] [rbp-68h] BYREF
  __m128i v18; // [rsp+10h] [rbp-58h] BYREF
  void *v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-40h]
  char v21; // [rsp+2Ch] [rbp-3Ch]
  void *src; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-30h]

  v7 = sub_D21CE0(a1, a2, a3, a4, a5, a6);
  v8 = a1[22];
  v10 = v9;
  v11 = (void *)v7;
  v17 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v8, 16));
  sub_DFDA50(v8, 16);
  v18 = _mm_load_si128(&v17);
  sub_D27A40((__int64)&v19, (__int64)&v18, 0);
  if ( v21 )
    sub_21E3050(&src, &v19, a2);
  else
    sub_21E30A0(&src, &v19, a2);
  v12 = v23;
  v13 = src;
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  if ( v12 > 0x40 )
  {
    memcpy(v11, v13, 8 * (((unsigned __int64)v12 + 63) >> 6));
    v14 = v13;
    v13 = v11;
    operator delete[](v14);
  }
  v15 = (_QWORD *)sub_DFD980(a1[22], 16);
  *v15 = v13;
  v15[1] = v10;
  return 1;
}

