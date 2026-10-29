void __fastcall sub_15A1250(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6, __int64 a7)
{
  __m128 v7; // xmm0
  __int64 v8; // rbp
  _BYTE *v9; // r12
  const __m128i *v10; // rbp
  unsigned __int64 v11; // rdx
  __m128i *v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // al
  __int64 v23; // rdx
  char v24; // al
  __int64 *v25; // [rsp+0h] [rbp-188h] BYREF
  __int64 v26; // [rsp+8h] [rbp-180h] BYREF
  __int64 *v27; // [rsp+10h] [rbp-178h] BYREF
  int v28; // [rsp+1Ch] [rbp-16Ch]
  __int64 v29; // [rsp+20h] [rbp-168h] BYREF
  __int64 v30; // [rsp+28h] [rbp-160h] BYREF
  int v31; // [rsp+30h] [rbp-158h] BYREF
  __int64 v32; // [rsp+38h] [rbp-150h]
  __int64 v33; // [rsp+40h] [rbp-148h]
  __m128 v34; // [rsp+50h] [rbp-138h] BYREF
  __int64 v35; // [rsp+60h] [rbp-128h]
  __int64 *v36; // [rsp+68h] [rbp-120h]
  __int64 *v37; // [rsp+70h] [rbp-118h]
  __int64 *v38; // [rsp+78h] [rbp-110h]
  __int64 **v39; // [rsp+80h] [rbp-108h]
  void *ptr; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v41; // [rsp+98h] [rbp-F0h]
  _BYTE v42[232]; // [rsp+A0h] [rbp-E8h] BYREF

  v30 = a2;
  v29 = a3;
  v28 = a4;
  v27 = a5;
  v26 = a6;
  if ( !(_DWORD)a4 )
    return;
  v35 = a1;
  v25 = &v29;
  v36 = &v30;
  v37 = &a7;
  v38 = &v26;
  v7 = _mm_loadh_ps((const double *)&v25);
  v39 = &v27;
  ptr = v42;
  v34 = v7;
  v41 = 0x800000000LL;
  if ( (_DWORD)a4 == 7 )
  {
    if ( (unsigned __int8)sub_FD3830(
                            *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
                            0x1A88u,
                            0,
                            *(_QWORD *)(a1 + 264),
                            (__int64)a5,
                            a6) != 1
      && ((unsigned __int8)sub_1598920(*(_QWORD *)(*a5 + 8), 6792, v14, v15, v16, v17)
       || sub_159CF80(a5[1], 6792, v18, v19, v20, v21)) )
    {
      v10 = (const __m128i *)&v31;
      v22 = sub_159CF80(v27[1], 6792, v18, v19, v20, v21);
      v9 = ptr;
      v33 = 0;
      v31 = !v22 ? 10 : 4;
      v32 = a7;
      v11 = (unsigned int)v41 + 1LL;
      v12 = (__m128i *)((char *)ptr + 24 * (unsigned int)v41);
      if ( v11 <= HIDWORD(v41) )
        goto LABEL_12;
      if ( ptr <= &v31 && v12 > (__m128i *)&v31 )
        goto LABEL_28;
      goto LABEL_29;
    }
  }
  else if ( (_DWORD)a4 == 8 )
  {
    v8 = *(_QWORD *)(a7 + 8);
    if ( (unsigned __int8)sub_1598920(v8, a2, a3, a4, (__int64)a5, a6)
      || (v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          v24 = *(_BYTE *)(v23 + 16),
          v24 == 42)
      || v24 == 13 && ((*(_WORD *)(v23 + 18) >> 3) & 0x1FF) == 0x1E8 )
    {
      v9 = ptr;
      v31 = 9;
      v10 = (const __m128i *)&v31;
      v33 = 0;
      v32 = a7;
      v11 = (unsigned int)v41 + 1LL;
      v12 = (__m128i *)((char *)ptr + 24 * (unsigned int)v41);
      if ( v11 <= HIDWORD(v41) )
      {
LABEL_12:
        *v12 = _mm_loadu_si128(v10);
        v12[1].m128i_i64[0] = v10[1].m128i_i64[0];
        LODWORD(v41) = v41 + 1;
        goto LABEL_4;
      }
      if ( ptr <= &v31 && v12 > (__m128i *)&v31 )
      {
LABEL_28:
        sub_2237220(&ptr, v42, v11, 24);
        v10 = (const __m128i *)((char *)ptr + (char *)&v31 - v9);
        v12 = (__m128i *)((char *)ptr + 24 * (unsigned int)v41);
        goto LABEL_12;
      }
LABEL_29:
      sub_2237220(&ptr, v42, v11, 24);
      v12 = (__m128i *)((char *)ptr + 24 * (unsigned int)v41);
      goto LABEL_12;
    }
  }
LABEL_4:
  if ( (*(_BYTE *)(a7 + 1) & 6) != 0 )
    sub_15A0640(
      (__int64)&ptr,
      (_WORD *)a7,
      0,
      (unsigned __int8 (__fastcall *)(__int64, __int64, __int64, _QWORD))sub_159CF70,
      (__int64)&v34);
  else
    sub_159F540((__int64)&ptr, (unsigned __int16 *)a7, (__int64)sub_159CF70, (__int64)&v34, v30 == 0);
  if ( ptr != v42 )
    free(ptr);
}
