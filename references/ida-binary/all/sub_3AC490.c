__int64 __fastcall sub_3AC490(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned int v11; // ebp
  int v12; // edx
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  char v24; // [rsp+0h] [rbp-18h]

  LOBYTE(v11) = a2 == 0;
  if ( a2 )
  {
    v18 = tinfo_errstr(a2);
    sub_169630((int)"%s: %s", a3, v18, v19, v20, v21, a4, a5, a6, a7, v22, v23, a10, a11, v24);
    return v11;
  }
  else
  {
    v12 = *((_DWORD *)a1 + 2);
    if ( v12 == 58 || v12 == 25 )
    {
      v14 = a1[26];
      if ( v14 && (*(_BYTE *)(v14 + 31) == 12 || *(_BYTE *)(v14 + 29)) )
      {
        v15 = *a1;
        v16 = *(_QWORD *)(*a1 + 1000);
        if ( (*(_BYTE *)(v16 + 112) & 1) != 0 )
        {
          invalidate_cache_for_tlc(*(_QWORD *)(*a1 + 1000), *(double *)a4.m128_u64);
          *(_BYTE *)(v16 + 58) = 0;
          sub_45F670(v15);
        }
      }
    }
    return v11;
  }
}
