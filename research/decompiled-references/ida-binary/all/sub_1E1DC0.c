__int64 __fastcall sub_1E1DC0(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  int v6; // edi
  __int64 custom_data_format; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 (__fastcall *v12)(_QWORD, void **, __int64, _QWORD, __int64, __int64); // r10
  const char *p_src; // rsi
  unsigned int v14; // ebx
  size_t v16; // rbp
  void *v17; // rax
  int dtype_size; // eax
  size_t v19; // r13
  unsigned int v20; // r14d
  void *v21; // rdi
  size_t v22; // r13
  void *v23; // rax
  void *src; // [rsp+0h] [rbp-98h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-90h]
  int v26; // [rsp+20h] [rbp-78h] BYREF
  __int64 v27; // [rsp+28h] [rbp-70h]
  __int128 v28; // [rsp+30h] [rbp-68h]
  char v29[8]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v30; // [rsp+48h] [rbp-50h] BYREF
  __int64 v31; // [rsp+58h] [rbp-40h]
  unsigned __int64 v32; // [rsp+68h] [rbp-30h]

  v6 = *(_DWORD *)(a1 + 40);
  v32 = __readfsqword(0x28u);
  v26 = -2;
  v27 = -1;
  v28 = 0;
  if ( v6 != -1 )
  {
    custom_data_format = get_custom_data_format();
    if ( !custom_data_format
      || (v12 = *(unsigned __int8 (__fastcall **)(_QWORD, void **, __int64, _QWORD, __int64, __int64))(custom_data_format + 72)) == nullptr )
    {
      if ( !under_debugger )
        interr(40143, a2, v10, v11, 0.0);
      BUG();
    }
    p_src = (const char *)&src;
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( !v12(*(_QWORD *)(custom_data_format + 8), &src, a3, xmmword_8CC810, 0xFFFFFFFFLL, a4) )
    {
      if ( src )
      {
        n[0] = 0;
        qfree(src, (const char *)&src);
      }
      goto LABEL_7;
    }
    if ( v26 >= -1 )
    {
      if ( v27 )
      {
        *(_QWORD *)&v28 = 0;
        qfree(v27, (const char *)&src);
      }
      v26 = -2;
    }
    v16 = n[0];
    v27 = 0;
    v28 = 0;
    if ( n[0] )
    {
      v17 = (void *)qalloc_or_throw(n[0]);
      p_src = (const char *)src;
      v27 = (__int64)v17;
      *((_QWORD *)&v28 + 1) = v16;
      memcpy(v17, src, v16);
      *(_QWORD *)&v28 = v16;
    }
    v26 = 0;
    if ( src )
    {
      n[0] = 0;
      qfree(src, p_src);
    }
LABEL_20:
    p_src = a2;
    v14 = sub_254260(*(unsigned int *)(a1 + 44), a2, &v26);
    goto LABEL_8;
  }
  v29[0] = 2;
  v30 = 0;
  v31 = 0;
  p_src = (const char *)xmmword_8CC810;
  if ( (unsigned __int8)eval_expr(v29, xmmword_8CC810, a3, 0) )
  {
    if ( (unsigned __int8)sub_235DE0(a1) )
    {
      idcv_int64(v29);
      v27 = v30;
    }
    else
    {
      idcv_float(v29);
      dtype_size = get_dtype_size(*(unsigned __int8 *)(a1 + 34));
      v19 = dtype_size;
      v20 = dtype_size;
      v21 = nullptr;
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( dtype_size )
      {
        src = (void *)qvector_reserve(&src, 0, dtype_size, 1);
        memset((char *)src + n[0], 0, v19 - n[0]);
        n[0] = v19;
        v21 = src;
      }
      p_src = (const char *)&v30;
      if ( (unsigned int)ieee2cpu(v21, &v30, v20) != 1 )
      {
        if ( src )
        {
          n[0] = 0;
          qfree(src, (const char *)&v30);
        }
        goto LABEL_22;
      }
      v22 = n[0];
      v27 = 0;
      v28 = 0;
      if ( n[0] )
      {
        v23 = (void *)qalloc_or_throw(n[0]);
        p_src = (const char *)src;
        v27 = (__int64)v23;
        *((_QWORD *)&v28 + 1) = v22;
        memcpy(v23, src, v22);
        *(_QWORD *)&v28 = v22;
      }
      v26 = -1;
      if ( src )
      {
        n[0] = 0;
        qfree(src, p_src);
      }
    }
    free_idcv(v29);
    goto LABEL_20;
  }
LABEL_22:
  free_idcv(v29);
LABEL_7:
  v14 = 0;
LABEL_8:
  if ( v26 >= -1 && v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27, p_src);
  }
  return v14;
}
