__int64 __fastcall sub_EE80(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        __int128 a9,
        __int64 a10)
{
  __int64 v10; // r13
  __int128 v12; // xmm0
  const char *v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  char v27; // al
  void *v28; // r14
  size_t v29; // r15
  size_t v30; // r8
  size_t v31; // r9
  _BYTE *v32; // rsi
  __int64 v33; // r8
  void *v34; // r15
  size_t v35; // r10
  size_t v36; // r9
  __int64 v37; // rax
  size_t v38; // [rsp+20h] [rbp-140h]
  size_t v39; // [rsp+28h] [rbp-138h]
  size_t v40; // [rsp+28h] [rbp-138h]
  __int64 v41; // [rsp+30h] [rbp-130h]
  __int64 v42; // [rsp+30h] [rbp-130h]
  size_t v43; // [rsp+30h] [rbp-130h]
  void *v45; // [rsp+40h] [rbp-120h] BYREF
  __int128 v46; // [rsp+48h] [rbp-118h]
  void *v47; // [rsp+60h] [rbp-100h] BYREF
  size_t n; // [rsp+68h] [rbp-F8h]
  __int64 v49; // [rsp+70h] [rbp-F0h]
  void *src; // [rsp+80h] [rbp-E0h] BYREF
  __int128 v51; // [rsp+88h] [rbp-D8h]
  void *v52; // [rsp+A0h] [rbp-C0h] BYREF
  size_t v53[3]; // [rsp+A8h] [rbp-B8h]
  char *v54; // [rsp+C0h] [rbp-A0h] BYREF
  __int128 v55; // [rsp+C8h] [rbp-98h]
  __int128 v56; // [rsp+E0h] [rbp-80h] BYREF
  __int128 v57; // [rsp+100h] [rbp-60h] BYREF
  __m128i v58; // [rsp+110h] [rbp-50h] BYREF
  unsigned __int64 v59; // [rsp+128h] [rbp-38h]

  v10 = (__int64)&v45;
  v59 = __readfsqword(0x28u);
  v46 = 0;
  v12 = (__int128)_mm_loadu_si128((const __m128i *)&a9);
  v45 = nullptr;
  if ( !(unsigned __int8)sub_D270((__int64)&v45, *(double *)&v12, a8, (__int64)a2, (__int64)a3, a4, a5, a6, v12, a10) )
  {
    LODWORD(v10) = tinfo_t__build_anon_type_name(&v45, a1);
    if ( !(_BYTE)v10 )
      goto LABEL_5;
    v49 = 0;
    v15 = sub_BB20();
    sub_A6E0((__int64)&v56, v15, v16, v17, v18, v19, (__int128)_mm_loadu_si128((const __m128i *)&a9), a10);
    v20 = sub_BB20();
    sub_B370((__int64)&v57, v20, v21, v22);
    v47 = nullptr;
    n = 0;
    v27 = sub_CCA0((__int64)&v47, v20, v23, v24, v25, v26, _mm_load_si128(&v58), a8);
    v28 = v47;
    if ( !v27 )
      goto LABEL_10;
    v10 = n;
    src = nullptr;
    v51 = 0;
    src = (void *)qvector_reserve(&src, 0, 3, 1);
    *(_QWORD *)&v51 = 3;
    strcpy((char *)src, "::");
    v52 = nullptr;
    *(_OWORD *)v53 = 0;
    if ( v10 )
    {
      v52 = (void *)qalloc_or_throw(v10);
      v53[1] = v10;
      memcpy(v52, v28, v10);
      v53[0] = v10;
      if ( !(_QWORD)v51 || (v31 = v51 - 1, (_QWORD)v51 == 1) )
      {
        v54 = nullptr;
        v55 = 0;
        goto LABEL_36;
      }
      --v10;
      v30 = v51 - 1 + v10;
      v29 = v51 + v10;
    }
    else
    {
      v29 = v51;
      if ( !(_QWORD)v51 || (v30 = v51 - 1, (_QWORD)v51 == 1) )
      {
        v54 = nullptr;
        v55 = 0;
LABEL_19:
        v10 = v46;
        if ( !(_QWORD)v46 )
        {
          v33 = 0;
          v34 = nullptr;
          goto LABEL_22;
        }
        v33 = v46 - 1;
        if ( (_QWORD)v46 == 1 )
        {
          v10 = 0;
          v34 = nullptr;
LABEL_22:
          v54 = nullptr;
          v55 = 0;
          if ( v45 )
          {
            v41 = v33;
            *(_QWORD *)&v46 = 0;
            qfree(v45);
            v45 = v34;
            *(_QWORD *)&v46 = v10;
            *((_QWORD *)&v46 + 1) = v41;
            if ( v54 )
            {
              *(_QWORD *)&v55 = 0;
              qfree(v54);
            }
          }
          else
          {
            v45 = v34;
            *(_QWORD *)&v46 = v10;
            *((_QWORD *)&v46 + 1) = v33;
          }
          if ( v52 )
          {
            v53[0] = 0;
            qfree(v52);
          }
          if ( src )
          {
            *(_QWORD *)&v51 = 0;
            qfree(src);
          }
LABEL_10:
          if ( v28 )
            qfree(v28);
          goto LABEL_2;
        }
        v35 = v46 - 1;
        v34 = nullptr;
        v36 = 0;
        goto LABEL_41;
      }
      v31 = v51 - 1;
    }
    v32 = v52;
    if ( v53[1] < v29 )
    {
      v40 = v31;
      v43 = v30;
      v52 = (void *)qvector_reserve(&v52, v52, v29, 1);
      v31 = v40;
      v32 = v52;
      v30 = v43;
    }
    v53[0] = v29;
    v32[v30] = 0;
    memcpy((char *)v52 + v10, src, v31);
    v10 = v53[0];
    v54 = nullptr;
    v55 = 0;
    if ( !v53[0] )
      goto LABEL_19;
LABEL_36:
    v54 = (char *)qalloc_or_throw(v10);
    *((_QWORD *)&v55 + 1) = v10;
    memcpy(v54, v52, v10);
    *(_QWORD *)&v55 = v10;
    v33 = *((_QWORD *)&v55 + 1);
    v34 = v54;
    if ( !(_QWORD)v46 )
      goto LABEL_22;
    v35 = v46 - 1;
    if ( (_QWORD)v46 == 1 )
      goto LABEL_22;
    v36 = v10 - 1;
    v37 = v46 - 1 + v10 - 1;
    v10 = v37 + 1;
    if ( *((_QWORD *)&v55 + 1) >= (unsigned __int64)(v37 + 1) )
      goto LABEL_39;
    v33 = v37;
LABEL_41:
    v38 = v36;
    v39 = v35;
    v42 = v33;
    v54 = (char *)qvector_reserve(&v54, v34, v10, 1);
    v34 = v54;
    v36 = v38;
    v37 = v42;
    v35 = v39;
LABEL_39:
    *(_QWORD *)&v55 = v10;
    *((_BYTE *)v34 + v37) = 0;
    memcpy(&v54[v36], v45, v35);
    v34 = v54;
    v33 = *((_QWORD *)&v55 + 1);
    v10 = v55;
    goto LABEL_22;
  }
LABEL_2:
  v13 = s1;
  if ( (_QWORD)v46 )
    v13 = (const char *)v45;
  LOBYTE(v10) = (unsigned int)sub_EB50(a1, v13, a2, 1u, a3) == 0;
LABEL_5:
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
  return (unsigned int)v10;
}
