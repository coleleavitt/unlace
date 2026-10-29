void __fastcall sub_FB3D70(__int64 a1, void **a2, const void *a3, size_t a4)
{
  size_t v7; // rax
  void *v8; // r14
  size_t v9; // r12
  _QWORD *v10; // rax
  _BYTE *v11; // rdi
  void *v12; // rax
  char *v13; // rdi
  size_t v14; // rdx
  __int64 v15; // [rsp+8h] [rbp-100h] BYREF
  void *src; // [rsp+10h] [rbp-F8h] BYREF
  size_t v17; // [rsp+18h] [rbp-F0h]
  _QWORD v18[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int16 v19; // [rsp+30h] [rbp-D8h]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-C0h]
  _BYTE v22[176]; // [rsp+58h] [rbp-B0h] BYREF

  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  ptr = v22;
  if ( a4 > 0x80 )
  {
    sub_22130D0(&ptr, v22, a4, 1);
    v13 = (char *)ptr + n[0];
  }
  else
  {
    v7 = a4;
    if ( !a4 )
      goto LABEL_3;
    v13 = v22;
  }
  memcpy(v13, a3, a4);
  v7 = a4 + n[0];
LABEL_3:
  n[0] = v7;
  sub_FB3800(a1, (__int64)&ptr);
  v19 = 261;
  src = ptr;
  v17 = n[0];
  if ( !(unsigned __int8)sub_22672E0(&src, 0) )
    (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 8) + 112LL))(*(_QWORD *)(a1 + 8), &ptr);
  sub_226B370(&ptr, 1, 0);
  v8 = ptr;
  v9 = n[0];
  src = v18;
  if ( (char *)ptr + n[0] && !ptr )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( n[0] > 0xF )
  {
    if ( (n[0] & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    v10 = (_QWORD *)operator new(n[0] + 1);
    v18[0] = v9;
    src = v10;
LABEL_26:
    memcpy(v10, v8, v9);
    v10 = src;
    goto LABEL_10;
  }
  if ( n[0] == 1 )
  {
    LOBYTE(v18[0]) = *(_BYTE *)ptr;
    v10 = v18;
    goto LABEL_10;
  }
  v10 = v18;
  if ( n[0] )
    goto LABEL_26;
LABEL_10:
  v17 = v9;
  *((_BYTE *)v10 + v9) = 0;
  v11 = *a2;
  if ( src == v18 )
  {
    v14 = v17;
    if ( v17 )
    {
      if ( v17 == 1 )
        *v11 = v18[0];
      else
        memcpy(v11, src, v17);
      v14 = v17;
      v11 = *a2;
    }
    a2[1] = (void *)v14;
    v11[v14] = 0;
    v11 = src;
  }
  else
  {
    if ( v11 == (_BYTE *)(a2 + 2) )
    {
      v15 = v18[0];
      *a2 = src;
      *(__m128 *)(a2 + 1) = _mm_loadh_ps((const double *)&v15);
    }
    else
    {
      v15 = v18[0];
      v12 = a2[2];
      *a2 = src;
      *(__m128 *)(a2 + 1) = _mm_loadh_ps((const double *)&v15);
      if ( v11 )
      {
        src = v11;
        v18[0] = v12;
        goto LABEL_14;
      }
    }
    v11 = v18;
    src = v18;
  }
LABEL_14:
  v17 = 0;
  *v11 = 0;
  if ( src != v18 )
    operator delete(src);
  if ( ptr != v22 )
    free(ptr);
}

