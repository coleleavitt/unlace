__int64 __fastcall sub_116BC50(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *, void *, __int64); // r15
  __int64 v8; // r15
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  const char **v16; // rax
  const char *v17; // rbx
  size_t v18; // rax
  __int64 v19; // rax
  _QWORD v20[4]; // [rsp+0h] [rbp-188h] BYREF
  __int16 v21; // [rsp+20h] [rbp-168h]
  void *ptr; // [rsp+30h] [rbp-158h] BYREF
  __m128i si128; // [rsp+38h] [rbp-150h]
  _BYTE v24[320]; // [rsp+48h] [rbp-140h] BYREF

  if ( (unsigned __int8)sub_1131B70((__int64)a2) )
  {
    v20[0] = "-u";
    v20[2] = "__llvm_profile_runtime";
    v21 = 1283;
    v6 = *a2;
    ptr = v24;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v7 = *(__int64 (__fastcall **)(__int64 *, void *, __int64))(v6 + 16);
    v20[3] = 22;
    sub_22538C0(v20, &ptr);
    v8 = v7(a2, ptr, si128.m128i_i64[0]);
    if ( ptr != v24 )
      free(ptr);
    v9 = *(unsigned int *)(a3 + 8);
    if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v9 + 1, 8);
      v9 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v9) = v8;
    ++*(_DWORD *)(a3 + 8);
    LODWORD(ptr) = 1649;
    v10 = sub_21B6DA0(a2, &ptr, 1);
    v11 = a2[1];
    v12 = v11 + 8LL * (unsigned int)v10;
    v13 = v11 + 8 * HIDWORD(v10);
    if ( v13 != v12 )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v13 - 8);
        if ( v14 )
        {
          if ( (unsigned __int8)sub_21B9810(v14, 1649) )
            break;
        }
        v13 -= 8;
        if ( v12 == v13 )
          return sub_1133870(a1, (__int64)a2, a3);
      }
      if ( v12 != v13 )
      {
        v15 = *(_QWORD *)(v13 - 8);
        if ( v15 )
        {
          v16 = *(const char ***)(v15 + 48);
          v17 = *v16;
          if ( *v16 )
          {
            v18 = strlen(*v16);
            if ( v18 == 6 )
            {
              if ( *(_DWORD *)v17 != 1836020833 || *((_WORD *)v17 + 2) != 25449 )
                return sub_1133870(a1, (__int64)a2, a3);
            }
            else if ( v18 != 13
                   || *(_QWORD *)v17 != 0x612D726566657270LL
                   || *((_DWORD *)v17 + 2) != 1768779636
                   || v17[12] != 99 )
            {
              return sub_1133870(a1, (__int64)a2, a3);
            }
            v19 = *(unsigned int *)(a3 + 8);
            if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
            {
              sub_2237220(a3, a3 + 16, v19 + 1, 8);
              v19 = *(unsigned int *)(a3 + 8);
            }
            *(_QWORD *)(*(_QWORD *)a3 + 8 * v19) = "-latomic";
            ++*(_DWORD *)(a3 + 8);
          }
        }
      }
    }
  }
  return sub_1133870(a1, (__int64)a2, a3);
}
