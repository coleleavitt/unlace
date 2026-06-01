__m128i **__fastcall sub_2257220(_QWORD *a1, unsigned __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  __m128i *v5; // rbp
  unsigned __int64 *v6; // rbx
  char v7; // bp
  size_t v8; // r12
  void *v9; // r13
  size_t v10; // rcx
  __int64 v11; // r14
  signed __int64 v12; // r14
  unsigned __int64 v13; // rdi
  _BYTE *v14; // rax
  _QWORD *v15; // r9
  size_t v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  char *v19; // rax
  char *v20; // rbp
  _BYTE *v21; // rcx
  unsigned __int64 i; // rax
  __m128 v23; // xmm0
  __m128i *v25; // r12
  __m128i *v26; // rdi
  int v27; // r15d
  __m128i **v28; // rax
  unsigned __int64 *v29; // [rsp+0h] [rbp-138h] BYREF
  _QWORD *v30; // [rsp+8h] [rbp-130h]
  __m128i **v31; // [rsp+10h] [rbp-128h]
  void **p_src; // [rsp+18h] [rbp-120h]
  size_t v33; // [rsp+20h] [rbp-118h]
  __int64 v34; // [rsp+28h] [rbp-110h] BYREF
  __int64 v35; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-100h] BYREF
  void **v37; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v38; // [rsp+48h] [rbp-F0h]
  _QWORD v39[4]; // [rsp+50h] [rbp-E8h] BYREF
  void *v40[2]; // [rsp+70h] [rbp-C8h] BYREF
  char *v41; // [rsp+80h] [rbp-B8h]
  void *src; // [rsp+90h] [rbp-A8h] BYREF
  size_t n; // [rsp+98h] [rbp-A0h]
  _QWORD v44[2]; // [rsp+A0h] [rbp-98h] BYREF
  _OWORD v45[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v46; // [rsp+D0h] [rbp-68h] BYREF
  __int128 v47; // [rsp+E0h] [rbp-58h]
  __int128 v48; // [rsp+F0h] [rbp-48h]

  v5 = (__m128i *)(a1 + 2);
  v6 = a2;
  *a1 = a1 + 2;
  v31 = (__m128i **)a1;
  v34 = a4;
  v35 = 0;
  a1[1] = 0x100000000LL;
  if ( (unsigned __int64)(a4 + 1) > 1 )
  {
    v25 = (__m128i *)sub_2237400((__int64)a1, a1 + 2, a4 + 1, 40, (unsigned __int64 *)&v46);
    sub_2255F90((__int64)a1, v25);
    v26 = (__m128i *)*a1;
    v27 = v46;
    if ( v5 != v26 )
      free(v26);
    v28 = v31;
    *v31 = v25;
    *((_DWORD *)v28 + 3) = v27;
  }
  n = 0;
  v39[0] = &v35;
  p_src = &src;
  v39[1] = v31;
  v39[2] = &v34;
  src = v44;
  LOBYTE(v44[0]) = 0;
  sub_995C30((__int64)&src, a3);
  v29 = (unsigned __int64 *)((char *)a2 + a3);
  if ( a2 != (unsigned __int64 *)((char *)a2 + a3) )
  {
    do
    {
      v7 = *(_BYTE *)v6;
      if ( (unsigned __int8)(*(_BYTE *)v6 - 97) <= 0x19u )
      {
        v7 -= 32;
      }
      else if ( (unsigned __int8)(v7 - 65) > 0x19u && (unsigned __int8)(v7 - 48) > 9u )
      {
        goto LABEL_8;
      }
      v8 = n;
      v9 = src;
      v10 = n + 1;
      if ( src == v44 )
      {
        if ( v10 > 0xF )
        {
          v11 = 15;
LABEL_15:
          if ( (v10 & 0x8000000000000000LL) != 0LL )
            std::__throw_length_error("basic_string::_M_create");
          v12 = 2 * v11;
          if ( v10 < v12 )
          {
            v13 = v12 + 1;
            if ( v12 < 0 )
            {
              v13 = 0x8000000000000000LL;
              v12 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            v13 = n + 2;
            v12 = n + 1;
          }
          v30 = (_QWORD *)(n + 1);
          v14 = (_BYTE *)operator new(v13);
          v10 = (size_t)v30;
          v15 = src;
          v9 = v14;
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              *v14 = *(_BYTE *)src;
            }
            else
            {
              v33 = (size_t)v30;
              v30 = src;
              memcpy(v14, src, v8);
              v10 = v33;
              v15 = v30;
            }
          }
          if ( v15 != v44 )
          {
            v30 = (_QWORD *)v10;
            operator delete(v15);
            v10 = (size_t)v30;
          }
          src = v9;
          v44[0] = v12;
        }
      }
      else
      {
        v11 = v44[0];
        if ( v10 > v44[0] )
          goto LABEL_15;
      }
      *((_BYTE *)v9 + v8) = v7;
      n = v10;
      *((_BYTE *)src + v8 + 1) = 0;
LABEL_8:
      v6 = (unsigned __int64 *)((char *)v6 + 1);
    }
    while ( v29 != v6 );
  }
  v16 = unk_26FADD8;
  if ( n <= unk_26FADD8 )
    v16 = n;
  v36 = v16 + 1;
  if ( !(_BYTE)byte_2D0ABE8 && __cxa_guard_acquire(&byte_2D0ABE8) )
    __cxa_guard_release(&byte_2D0ABE8);
  v17 = v36;
  v41 = nullptr;
  *(_OWORD *)v40 = 0;
  v18 = v36 * (unk_26FADD8 + 1LL);
  if ( v18 )
  {
    v19 = (char *)operator new(v18);
    v20 = &v19[v18];
    v40[0] = v19;
    v41 = &v19[v18];
    v21 = memset(v19, 0, v18);
    v17 = v36;
  }
  else
  {
    v21 = nullptr;
    v20 = nullptr;
  }
  v40[1] = v20;
  v37 = v40;
  v38 = v17;
  if ( v17 )
  {
    *v21 = 0;
    if ( v36 > 1 )
    {
      for ( i = 1; i < v36; ++i )
        *((_BYTE *)*v37 + i) = i;
    }
  }
  v29 = &v36;
  v23 = _mm_loadh_ps((const double *)&v29);
  v29 = v39;
  v45[0] = v23;
  v45[1] = _mm_loadh_ps((const double *)&v29);
  v46 = 0;
  v47 = 0;
  v48 = 0;
  LOBYTE(v46) = 1;
  *(_QWORD *)((char *)&v46 + 4) = 0x1FFFFFFFFLL;
  LODWORD(v47) = 1;
  sub_2256080((__int64 ***)v45, (__int64)&v46, (void **)((char *)&dword_0 + 1), (__int64)v45);
  if ( v40[0] )
    operator delete(v40[0]);
  if ( src != p_src + 2 )
    operator delete(src);
  return v31;
}
