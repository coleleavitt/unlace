/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429400
// Address: 0x0000000000429400

//----- (0000000000429400) ----------------------------------------------------
double __fastcall sub_429400(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  const char *v26; // rsi
  __int64 v27; // rdx
  char *v28; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v31; // [rsp+8h] [rbp-30h]
  unsigned __int64 v32; // [rsp+18h] [rbp-20h]

  v32 = __readfsqword(0x28u);
  v16 = *(unsigned int *)(a3 + 4);
  if ( (unsigned int)v16 <= 0xB && (v17 = 2645, _bittest64(&v17, v16)) )
  {
    sub_429350((__int64)&ptr, a1 + 80, v16);
    v26 = s1;
    if ( v31 )
      v26 = (const char *)ptr;
    *(double *)a7.m128_u64 = sub_410EA0(
                               (int)"Illegal type %s of the string table section\n",
                               (__int64)v26,
                               v20,
                               v21,
                               v22,
                               v23,
                               a7,
                               a8,
                               a9,
                               a10,
                               v24,
                               v25,
                               a13,
                               a14,
                               (char)ptr);
    if ( ptr )
    {
      v31 = 0;
      j__free(ptr);
    }
  }
  else
  {
    v18 = *(_QWORD *)(a3 + 24);
    if ( v18 )
    {
      if ( *a2 <= 0 || !a2[2] )
      {
LABEL_11:
        *a2 = v18;
        a2[1] = *(_QWORD *)(a3 + 16);
        a2[2] = *(_QWORD *)(a3 + 32);
        return *(double *)a7.m128_u64;
      }
      if ( *a2 != v18 )
      {
        v19 = (__int64 *)(a1 + 352);
        if ( (_BYTE)a4 )
        {
          if ( a2 == v19 )
            *(double *)a7.m128_u64 = sub_4240B0(
                                       (int)"AUTOHIDE SESSION\n"
                                            "More than one string table for %ssymbols, using one at offset %08llX",
                                       (__int64)"dynamic linking ",
                                       v18,
                                       a4,
                                       a5,
                                       a6,
                                       a7,
                                       a8,
                                       a9,
                                       a10,
                                       a11,
                                       a12,
                                       a13,
                                       a14,
                                       (char)ptr);
          else
            *(double *)a7.m128_u64 = sub_4240B0(
                                       (int)"AUTOHIDE SESSION\n"
                                            "More than one string table for %ssymbols, using one at offset %08llX",
                                       (__int64)"",
                                       v18,
                                       a4,
                                       a5,
                                       a6,
                                       a7,
                                       a8,
                                       a9,
                                       a10,
                                       a11,
                                       a12,
                                       a13,
                                       a14,
                                       (char)ptr);
          v18 = *(_QWORD *)(a3 + 24);
          goto LABEL_11;
        }
        v27 = *a2;
        if ( a2 == v19 )
          v28 = "dynamic linking ";
        else
          v28 = "";
        *(double *)a7.m128_u64 = sub_4240B0(
                                   (int)"AUTOHIDE SESSION\n"
                                        "More than one string table for %ssymbols, using one at offset %08llX",
                                   (__int64)v28,
                                   v27,
                                   a4,
                                   a5,
                                   a6,
                                   a7,
                                   a8,
                                   a9,
                                   a10,
                                   a11,
                                   a12,
                                   a13,
                                   a14,
                                   a15);
      }
    }
    else
    {
      *(double *)a7.m128_u64 = sub_410EA0(
                                 (int)"Illegal offset of the string table section\n",
                                 (__int64)a2,
                                 0,
                                 a4,
                                 a5,
                                 a6,
                                 a7,
                                 a8,
                                 a9,
                                 a10,
                                 a11,
                                 a12,
                                 a13,
                                 a14,
                                 a15);
    }
  }
  return *(double *)a7.m128_u64;
}
// 4294E4: variable 'v20' is possibly undefined
// 4294E4: variable 'v21' is possibly undefined
// 4294E4: variable 'v22' is possibly undefined
// 4294E4: variable 'v23' is possibly undefined
// 4294E4: variable 'v24' is possibly undefined
// 4294E4: variable 'v25' is possibly undefined
