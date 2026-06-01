__int64 __fastcall sub_3E4DC0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned int v10; // r12d
  int v11; // ebp
  char v12; // al
  __int64 *v13; // rdi
  const char *v14; // rsi
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rdi
  __m128i v18; // xmm0
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // ebp
  const char *v23; // rsi
  int v24; // eax
  const char *v25; // rsi
  double v27; // xmm4_8
  double v28; // xmm5_8
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  size_t v32; // r13
  void *v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  void *v37; // r13
  void *v38; // rdi
  signed int v39[4]; // [rsp+0h] [rbp-C8h] BYREF
  const char *v40; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v41; // [rsp+18h] [rbp-B0h]
  __m128i v42; // [rsp+30h] [rbp-98h] BYREF
  int v43; // [rsp+40h] [rbp-88h] BYREF
  void *src; // [rsp+48h] [rbp-80h]
  size_t n[2]; // [rsp+50h] [rbp-78h]
  __int64 v46; // [rsp+60h] [rbp-68h] BYREF
  __m128i v47; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v48; // [rsp+88h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v41 = 0;
  v40 = nullptr;
  v10 = *(unsigned __int16 *)(a1 + 112);
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v12 = sub_3E2540((__int64 *)&v40, v10, v11, *(_WORD *)(a1 + 114));
  v13 = (__int64 *)(a1 + 216);
  if ( v12 )
  {
    v14 = &s1;
    if ( (_QWORD)v41 )
      v14 = v40;
    sub_3E3770(v13, v14, 1, 0.0);
  }
  else
  {
    sub_3E3770(v13, "Cannot format register location", 0, 0.0);
  }
  v17 = *(_QWORD *)(a1 + 72);
  v18.m128i_i64[0] = 0;
  v43 = -2;
  src = (void *)-1LL;
  *(_OWORD *)n = 0;
  if ( (_BYTE)v17 )
  {
    if ( (get_tinfo_property(v17, 2) & 0xF) == 0xA )
    {
      sub_3DFD50(v39, (__int64 *)a1, 0.0, a3, a4, a5, v27, v28, a8, a9);
      v25 = (const char *)v39;
      v22 = sub_3E4010(a1, (const char *)v39, 0, v29, v30, v31);
      cleanup_argloc(v39);
      goto LABEL_10;
    }
    v22 = sub_3DFA40((unsigned int *)&v43, v39, v10, v11, 0.0, a3, a4, a5, v27, v28, a8, a9);
    if ( !(_BYTE)v22 )
    {
LABEL_28:
      v25 = "Failed to get register value";
      sub_3E3770((__int64 *)(a1 + 120), "Failed to get register value", 0, 0.0);
      goto LABEL_10;
    }
    v21 = (unsigned int)v39[0];
    v20 = 0;
    if ( v39[0] >= 0 && v39[0] < (unsigned __int64)xmmword_8CC398 )
      v20 = qword_8CC390 + 56LL * v39[0];
    if ( *(_DWORD *)(v20 + 40) != -1 )
      goto LABEL_7;
    v18.m128i_i64[0] = 0;
    LOBYTE(v46) = 2;
    memset(&v47, 0, 24);
    if ( v43 == -2 )
    {
      v37 = src;
    }
    else
    {
      if ( v43 == -1 )
      {
        if ( (unsigned int)cpu2ieee(&v42, src, LODWORD(n[0])) == 1 )
        {
          free_idcv(&v46);
          v18 = _mm_load_si128(&v42);
          LOBYTE(v46) = 3;
          v47 = v18;
          goto LABEL_27;
        }
      }
      else if ( v43 != -3 )
      {
        v32 = n[0];
        v33 = src;
        free_idcv(&v46);
        v18.m128i_i64[0] = 0;
        LOBYTE(v46) = 7;
        memset(&v47, 0, 24);
        if ( v32 )
        {
          v38 = nullptr;
          if ( v32 != -1 )
          {
            v47.m128i_i64[0] = qvector_reserve(&v47, 0, v32 + 1, 1);
            v38 = (void *)v47.m128i_i64[0];
          }
          v47.m128i_i64[1] = v32 + 1;
          memmove(v38, v33, v32);
          *(_BYTE *)(v47.m128i_i64[0] + v32) = 0;
        }
        goto LABEL_27;
      }
      v37 = nullptr;
    }
    free_idcv(&v46);
    LOBYTE(v46) = 2;
    v47.m128i_i64[0] = (__int64)v37;
LABEL_27:
    v25 = (const char *)&v46;
    sub_3E3C40(a1, &v46, v34, v35, v36);
    free_idcv(&v46);
    goto LABEL_10;
  }
  v19 = sub_3DFA40((unsigned int *)&v43, v39, v10, v11, 0.0, a3, a4, a5, v15, v16, a8, a9);
  v21 = (unsigned int)v39[0];
  v22 = v19;
  if ( !(_BYTE)v19 )
    goto LABEL_28;
LABEL_7:
  sub_24B690((__int64 *)&v40, (unsigned int *)&v43, v21, v20, 0.0);
  v23 = &s1;
  if ( (_QWORD)v41 )
    v23 = v40;
  sub_3E3770((__int64 *)(a1 + 120), v23, 1, 0.0);
  v24 = *(_DWORD *)(a1 + 312);
  v25 = (_BYTE *)(&dword_0 + 1);
  *(_DWORD *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 316) = v24;
  sub_3E3920(a1 + 312, 1, 0.0);
  v22 = 1;
LABEL_10:
  if ( v43 >= -1 && src )
  {
    n[0] = 0;
    *(double *)v18.m128i_i64 = qfree(src, v25);
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40, v25, *(double *)v18.m128i_i64);
  }
  return v22;
}
