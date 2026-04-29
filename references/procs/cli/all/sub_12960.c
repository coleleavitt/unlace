__int64 __fastcall sub_12960(
        _QWORD *a1,
        unsigned int a2,
        double a3,
        double a4,
        __m128 a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  __int64 v11; // r12
  unsigned int v12; // ebp
  __int16 v14; // di
  const char *v16; // rdx
  char *v17; // rax
  char v18; // cl
  const char *v19; // rdx
  char v20; // cl
  __int64 v21; // rdi
  __int64 v22; // rax
  _BYTE *v23; // rsi
  __int64 v24; // r15
  size_t v25; // r8
  __int64 v26; // r9
  _BYTE *v27; // rax
  double v28; // xmm4_8
  double v29; // xmm5_8
  void *v30; // r9
  void *v31; // r14
  void (__fastcall *v32)(_QWORD *, const char *, __int64); // r15
  void *v33; // r8
  void *v34; // rcx
  const char *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  double v40; // xmm0_8
  double v41; // xmm4_8
  double v42; // xmm5_8
  double v43; // xmm4_8
  double v44; // xmm5_8
  size_t v45; // [rsp+0h] [rbp-8E8h]
  __int64 v46; // [rsp+8h] [rbp-8E0h]
  unsigned __int8 *v47; // [rsp+18h] [rbp-8D0h] BYREF
  void *v48; // [rsp+20h] [rbp-8C8h] BYREF
  __int64 v49; // [rsp+28h] [rbp-8C0h]
  void *src; // [rsp+40h] [rbp-8A8h] BYREF
  __int128 v51; // [rsp+48h] [rbp-8A0h]
  void *v52; // [rsp+60h] [rbp-888h] BYREF
  __int64 v53; // [rsp+68h] [rbp-880h]
  int v54; // [rsp+80h] [rbp-868h] BYREF
  int v55; // [rsp+84h] [rbp-864h]
  int v56; // [rsp+88h] [rbp-860h]
  unsigned int v57; // [rsp+8Ch] [rbp-85Ch]
  unsigned int v58; // [rsp+90h] [rbp-858h]
  _BYTE v59[1023]; // [rsp+A0h] [rbp-848h] BYREF
  char v60; // [rsp+49Fh] [rbp-449h] BYREF
  _BYTE v61[1032]; // [rsp+4A0h] [rbp-448h] BYREF
  unsigned __int64 v62; // [rsp+8A8h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  v11 = a1[77];
  if ( netnode_supval(*(_QWORD *)(v11 + 144), a2, &v54, 28, 97) <= 0 )
    return 0;
  v14 = v55;
  v16 = ".property";
  v17 = v59;
  while ( 1 )
  {
    v18 = *v16++;
    *v17 = v18;
    if ( !v18 )
      break;
    if ( ++v17 == &v60 )
    {
      v60 = 0;
      if ( (v14 & 0x200) == 0 )
        goto LABEL_13;
      goto LABEL_38;
    }
  }
  if ( (v14 & 0x200) == 0 )
    goto LABEL_13;
  if ( v17 >= v61 )
  {
    if ( !under_debugger )
      interr(520);
    BUG();
  }
  if ( v17 == &v60 )
  {
LABEL_38:
    v60 = 0;
    goto LABEL_13;
  }
  v19 = " specialname";
  while ( 1 )
  {
    v20 = *v19++;
    *v17 = v20;
    if ( !v20 )
      break;
    if ( ++v17 == &v60 )
      goto LABEL_38;
  }
LABEL_13:
  v21 = *(_QWORD *)(v11 + 144);
  v47 = nullptr;
  v22 = netnode_supval(v21, a2, v61, 1024, 100);
  if ( v22 < 0 )
    return 0;
  v47 = v61;
  sub_12790((__int64 *)&v48, (__int64)a1, &v47, (unsigned __int64)&v61[v22], a3, a4, a5);
  src = nullptr;
  v51 = 0;
  if ( (v55 & 0x1000) != 0 )
  {
    sub_9490((__int64)a1, (__int64 *)&src, v56, a2);
    v23 = src;
    if ( (_QWORD)v51 )
    {
      v24 = v51 + 3;
      v25 = v51 - 1;
      v26 = v51 + 2;
      if ( *((_QWORD *)&v51 + 1) >= (unsigned __int64)(v51 + 3) )
        goto LABEL_17;
    }
    else
    {
      if ( *((_QWORD *)&v51 + 1) > 3u )
      {
        *(_QWORD *)&v51 = 4;
        *((_BYTE *)src + 3) = 0;
LABEL_19:
        v27 = src;
        *(_WORD *)src = 15648;
        v27[2] = 32;
        goto LABEL_20;
      }
      v25 = 0;
      v24 = 4;
      v26 = 3;
    }
    v46 = v26;
    v45 = v25;
    src = (void *)qvector_reserve(&src, src, v24, 1);
    v26 = v46;
    v23 = src;
    v25 = v45;
LABEL_17:
    *(_QWORD *)&v51 = v24;
    v23[v26] = 0;
    if ( v25 )
      memmove((char *)src + 3, src, v25);
    goto LABEL_19;
  }
LABEL_20:
  sub_7630((__int64)&v52, (__int64)a1, a2, 0.0, a4, a5);
  v30 = &unk_15584;
  v31 = v52;
  v32 = *(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 136LL);
  if ( (_QWORD)v51 )
  {
    v30 = src;
    v33 = v52;
    if ( v53 )
      goto LABEL_23;
    goto LABEL_22;
  }
  v33 = v52;
  if ( !v53 )
LABEL_22:
    v33 = &unk_15584;
LABEL_23:
  v34 = &unk_15584;
  if ( v49 )
    v34 = v48;
  v35 = (const char *)sub_5010(
                        v11,
                        4,
                        0.0,
                        a4,
                        *(double *)a5.m128_u64,
                        a6,
                        v28,
                        v29,
                        a9,
                        a10,
                        v59,
                        v34,
                        v33,
                        v30,
                        v45,
                        v46);
  v32(a1, v35, 2);
  if ( ((v57 | v58) & 0xFFFFFF) != 0 )
  {
    v40 = (*(double (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 136LL))(a1, "{", 2);
    v12 = sub_108C0((__int64)a1, a2, v40, a4, a5, a6, v41, v42, a9, a10);
    if ( (_BYTE)v12
      && ((v58 & 0xFFFFFF) == 0
       || (unsigned int)sub_DC40((__int64)a1, v54, v58, "  .get", nullptr, v40, a4, a5, a6, v43, v44, a9, a10)) )
    {
      if ( (v57 & 0xFFFFFF) != 0 )
        LOBYTE(v12) = (unsigned int)sub_DC40(
                                      (__int64)a1,
                                      v54,
                                      v57,
                                      "  .set",
                                      nullptr,
                                      v40,
                                      a4,
                                      a5,
                                      a6,
                                      v43,
                                      v44,
                                      a9,
                                      a10) != 0;
    }
    else
    {
      v12 = 0;
    }
    v35 = "}";
    (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 136LL))(a1, "}", 2);
  }
  else
  {
    v12 = 1;
  }
  if ( v31 )
    qfree(v31, v35, v36, v37, v38, v39);
  if ( src )
  {
    *(_QWORD *)&v51 = 0;
    qfree(src, v35, v36, v37, v38, v39);
  }
  if ( v48 )
  {
    v49 = 0;
    qfree(v48, v35, v36, v37, v38, v39);
  }
  return v12;
}
