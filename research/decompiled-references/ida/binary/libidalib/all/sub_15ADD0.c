__int64 __fastcall sub_15ADD0(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, const char *a6)
{
  __int64 reg_access; // rbx
  void *v9; // rdi
  __int64 v10; // rdx
  __m128 v11; // xmm0
  size_t v12; // rax
  size_t v13; // r13
  void *v14; // rdi
  size_t v15; // r14
  __int64 v16; // rax
  __int128 v17; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  reg_access = find_reg_access();
  if ( reg_access != -1 )
  {
    v17 = 0;
    *a1 = 0;
    get_reg_name();
    if ( (unsigned __int64)v17 <= 1 )
    {
      v12 = strlen(a6);
      v13 = v12;
      if ( v12 )
      {
        v14 = *(void **)a2;
        v15 = v12 + 1;
        if ( *(_QWORD *)(a2 + 16) < v12 + 1 )
        {
          v16 = qvector_reserve();
          *(_QWORD *)a2 = v16;
          v14 = (void *)v16;
        }
        *(_QWORD *)(a2 + 8) = v15;
        memmove(v14, a6, v13);
        *(_BYTE *)(*(_QWORD *)a2 + v13) = 0;
        v9 = nullptr;
      }
      else
      {
        *(_QWORD *)(a2 + 8) = 0;
        v9 = nullptr;
      }
    }
    else
    {
      v9 = *(void **)a2;
      v10 = *(_QWORD *)(a2 + 16);
      v11 = _mm_loadh_ps((const double *)&v17 + 1);
      *(_QWORD *)a2 = 0;
      *((_QWORD *)&v17 + 1) = v10;
      *(__m128 *)(a2 + 8) = v11;
    }
    if ( v9 )
      qfree();
  }
  return reg_access;
}

