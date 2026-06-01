/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463500
// Address: 0x0000000000463500

//----- (0000000000463500) ----------------------------------------------------
__int64 __fastcall sub_463500(
        __int64 *a1,
        __int64 a2,
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
        __m128 a14)
{
  __int64 v14; // rax
  const char *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  void *v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // r15d
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  __int64 v32; // rdx
  char *v33; // rsi
  char *v34; // rax
  __int64 v35; // rax
  int v36; // edx
  __int16 v37; // cx
  void *v38; // rdi
  bool v39; // al
  bool v40; // zf
  __off64_t v42; // r14
  __int64 v43; // rcx
  __int64 v44; // r8
  _BYTE *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  _BYTE *v48; // r15
  size_t v49; // rax
  char *v50; // rax
  void *ptr; // [rsp+0h] [rbp-2E8h] BYREF
  __m128i v52; // [rsp+8h] [rbp-2E0h]
  _QWORD v53[3]; // [rsp+20h] [rbp-2C8h] BYREF
  unsigned __int8 v54; // [rsp+38h] [rbp-2B0h]
  __int64 (__fastcall **v55)(); // [rsp+40h] [rbp-2A8h] BYREF
  void *v56; // [rsp+48h] [rbp-2A0h]
  __int128 v57; // [rsp+50h] [rbp-298h]
  int v58; // [rsp+88h] [rbp-260h]
  __int16 v59; // [rsp+8Ch] [rbp-25Ch]
  unsigned __int16 v60; // [rsp+8Eh] [rbp-25Ah]
  unsigned int v61; // [rsp+94h] [rbp-254h]
  int v62; // [rsp+98h] [rbp-250h]
  unsigned __int16 v63; // [rsp+9Ch] [rbp-24Ch]
  __int16 v64; // [rsp+9Eh] [rbp-24Ah]
  __int64 v65; // [rsp+290h] [rbp-58h]
  unsigned __int64 v66; // [rsp+2A8h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  v14 = *a1;
  if ( !*a1 || *(_DWORD *)(v14 + 8) != 1 )
  {
    sub_410EA0(
      (int)"Input source is not local file.\n",
      a2,
      a3,
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
    return 0;
  }
  v16 = s1;
  if ( *(_QWORD *)(v14 + 24) )
    v16 = *(const char **)(v14 + 16);
  v17 = sub_47F560(v16, 0);
  v24 = (void *)v17;
  if ( !v17 )
  {
    sub_410EA0(
      (int)"Cannot open file: %s.\n",
      (__int64)v16,
      v18,
      v19,
      v20,
      v21,
      a7,
      a8,
      a9,
      a10,
      v22,
      v23,
      a13,
      a14,
      (char)ptr);
    return 0;
  }
  v55 = off_4C33F8;
  v56 = nullptr;
  v57 = 0;
  v29 = sub_45D5F0(
          (__int64)&v55,
          v17,
          1u,
          1u,
          (__m128)0LL,
          a8,
          a9,
          a10,
          *(double *)v22.m128_u64,
          *(double *)v23.m128_u64,
          a13,
          a14);
  if ( (_BYTE)v29 )
  {
    v32 = a1[14];
    v33 = (char *)a1[13];
    if ( a1[15] < (unsigned __int64)(v32 + 1) )
    {
      v50 = (char *)sub_481540((__int64)(a1 + 13), v33, v32 + 1, 0x78u);
      a1[13] = (__int64)v50;
      v32 = a1[14];
      v33 = v50;
    }
    v34 = &v33[120 * v32];
    *(_QWORD *)v34 = 0;
    *((_QWORD *)v34 + 14) = 0;
    memset(
      (void *)((unsigned __int64)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v34 - (((_DWORD)v34 + 8) & 0xFFFFFFF8) + 120) >> 3));
    ptr = nullptr;
    v52 = 0;
    v35 = v61;
    ++a1[14];
    if ( (_DWORD)v35 )
    {
      v42 = v35 + (unsigned int)(18 * v62);
      if ( v42 == sub_47F740((__int64)v24, v42, 0)
        && sub_47F6E0((__int64)v24, v53, 4, v43, v44) == 4
        && LODWORD(v53[0]) > 4 )
      {
        sub_47F740((__int64)v24, -4, 1);
        if ( (unsigned __int8)sub_462B80((__int64)v24, v53, 1u, -1, -1) )
        {
          v45 = sub_4813B0((unsigned int)(LODWORD(v53[0]) + 1));
          v48 = v45;
          if ( v45 )
          {
            v49 = sub_47F6E0((__int64)v24, v45, LODWORD(v53[0]), v46, v47);
            if ( v49 == LODWORD(v53[0]) )
            {
              v48[v49] = 0;
              if ( ptr )
              {
                v52.m128i_i64[0] = 0;
                j__free(ptr);
              }
              ptr = v48;
              v52 = _mm_unpacklo_epi64(
                      (__m128i)(unsigned int)(LODWORD(v53[0]) + 1),
                      (__m128i)(unsigned int)(LODWORD(v53[0]) + 1));
            }
            else
            {
              j__free(v48);
            }
          }
        }
      }
    }
    v53[1] = a1;
    v53[0] = off_4C3420;
    v53[2] = &ptr;
    v54 = 0;
    if ( v58 == 23126 )
      v36 = v65 + 40;
    else
      v36 = v63 + (_DWORD)v65 + 24;
    sub_45C810((__int64)&v55, (__int64)v24, v36, v60, (__int64)v53);
    v37 = v59;
    v38 = ptr;
    v29 = v54;
    v39 = v59 == -31132;
    v40 = v59 == 512;
    *((_BYTE *)a1 + 169) = v64 < 0;
    *((_BYTE *)a1 + 168) = v37 == -21916 || v40 || v39;
    if ( v38 )
    {
      v52.m128i_i64[0] = 0;
      j__free(v38);
    }
  }
  else
  {
    sub_410EA0(
      (int)"Failed to read PE header from: %s\n",
      (__int64)v16,
      v25,
      v26,
      v27,
      v28,
      (__m128)0LL,
      a8,
      a9,
      a10,
      v30,
      v31,
      a13,
      a14,
      (char)ptr);
  }
  v55 = off_4C33F8;
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    j__free(v56);
  }
  sub_47F680(v24);
  return v29;
}
// 463596: variable 'v22' is possibly undefined
// 463596: variable 'v23' is possibly undefined
// 463777: variable 'v43' is possibly undefined
// 463777: variable 'v44' is possibly undefined
// 4637ED: variable 'v46' is possibly undefined
// 4637ED: variable 'v47' is possibly undefined
// 463844: variable 'v25' is possibly undefined
// 463844: variable 'v26' is possibly undefined
// 463844: variable 'v27' is possibly undefined
// 463844: variable 'v28' is possibly undefined
// 463844: variable 'v30' is possibly undefined
// 463844: variable 'v31' is possibly undefined
// 46385C: variable 'v18' is possibly undefined
// 46385C: variable 'v19' is possibly undefined
// 46385C: variable 'v20' is possibly undefined
// 46385C: variable 'v21' is possibly undefined
// 4C33F8: using guessed type __int64 (__fastcall *off_4C33F8[2])();
// 4C3420: using guessed type __int64 (__fastcall *off_4C3420[4])();
