void __fastcall sub_1BD8FC0(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx
  _BYTE *v3; // r12
  unsigned __int64 v4; // rcx
  const void *v5; // r15
  _BYTE *v6; // r13
  signed __int64 v7; // rdx
  unsigned __int64 v8; // rax
  bool v9; // cf
  unsigned __int64 v10; // rcx
  char *v11; // r14
  void *v12; // r9
  size_t v13; // rdx
  char *v14; // rbx
  unsigned __int64 v15; // r14
  char *v16; // rax
  void *dest; // [rsp+8h] [rbp-50h] BYREF
  void *v18; // [rsp+10h] [rbp-48h]
  void *v19; // [rsp+18h] [rbp-40h]

  v2 = 8LL * *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v3 = *(_BYTE **)(a1 + 8);
    v4 = v2 >> 3;
    v5 = *(const void **)a2;
    if ( v2 >> 3 <= (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v3) >> 3) )
    {
      memmove(*(void **)(a1 + 8), *(const void **)a2, v2);
      *(_QWORD *)(a1 + 8) += v2;
      return;
    }
    v6 = *(_BYTE **)a1;
    v7 = (signed __int64)&v3[-*(_QWORD *)a1];
    v8 = v7 >> 3;
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL - (v7 >> 3) )
      std::__throw_length_error("vector::_M_range_insert");
    if ( v4 < v8 )
      v4 = (__int64)&v3[-*(_QWORD *)a1] >> 3;
    v9 = __CFADD__(v8, v4);
    v10 = v8 + v4;
    if ( v9 || v10 > 0x1FFFFFFFFFFFFFFFLL )
    {
      v15 = -8;
    }
    else
    {
      dest = nullptr;
      v11 = nullptr;
      if ( !v10 )
        goto LABEL_11;
      v15 = 8 * v10;
    }
    v16 = (char *)operator new(v15);
    v6 = *(_BYTE **)a1;
    dest = v16;
    v11 = &v16[v15];
    v7 = v3 - v6;
LABEL_11:
    if ( v3 == v6 )
    {
      v18 = (char *)dest + v7 + v2;
      memmove((char *)dest + v7, v5, v2);
      v12 = v18;
      v13 = *(_QWORD *)(a1 + 8) - (_QWORD)v3;
      v14 = (char *)v18 + v13;
      if ( v3 == *(_BYTE **)(a1 + 8) )
      {
LABEL_14:
        if ( !v6 )
        {
LABEL_15:
          dest = v14;
          *(_QWORD *)(a1 + 16) = v11;
          *(__m128 *)a1 = _mm_loadh_ps((const double *)&dest);
          return;
        }
LABEL_18:
        operator delete(v6);
        goto LABEL_15;
      }
    }
    else
    {
      v19 = (char *)dest + v7 + v2;
      v18 = (char *)dest + v7;
      memmove(dest, v6, v7);
      memmove(v18, v5, v2);
      v12 = v19;
      v13 = *(_QWORD *)(a1 + 8) - (_QWORD)v3;
      v14 = (char *)v19 + v13;
      if ( v3 == *(_BYTE **)(a1 + 8) )
        goto LABEL_18;
    }
    memmove(v12, v3, v13);
    goto LABEL_14;
  }
}
