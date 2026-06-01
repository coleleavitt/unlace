__int64 __fastcall sub_36C8C0(__int64 a1, const char *a2, char a3)
{
  __int64 flags; // r14
  unsigned int aflags; // r12d
  __int64 v7; // rcx
  int v8; // r8d
  __int64 func; // rax
  __int64 v10; // r12
  const char *v11; // r15
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // rax
  char *v17; // rdx
  const char *v18; // rsi
  const char *v19; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // r15
  unsigned __int64 v25; // r14
  __int64 v26; // rsi
  __m128i si128; // xmm0
  __int64 v28; // r12
  unsigned __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // rsi
  __m128i v32; // xmm0
  __int64 v33; // r12
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rsi
  __int64 v38; // r8
  unsigned __int64 v39; // rdx
  __int64 v40; // r9
  __int64 v41; // rsi
  __int64 v42; // r8
  unsigned __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // rsi
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // [rsp+0h] [rbp-90h]
  unsigned __int64 v53; // [rsp+0h] [rbp-90h]
  unsigned __int64 v54; // [rsp+0h] [rbp-90h]
  unsigned __int64 v55; // [rsp+0h] [rbp-90h]
  __int64 v56; // [rsp+8h] [rbp-88h]
  __int64 v57; // [rsp+8h] [rbp-88h]
  __int64 v58; // [rsp+8h] [rbp-88h]
  __int64 v59; // [rsp+8h] [rbp-88h]
  __int64 v60; // [rsp+10h] [rbp-80h]
  __int64 v61; // [rsp+10h] [rbp-80h]
  __int64 v62; // [rsp+10h] [rbp-80h]
  const char *v63; // [rsp+18h] [rbp-78h] BYREF
  __int128 v64; // [rsp+20h] [rbp-70h]
  __int64 v65; // [rsp+38h] [rbp-58h] BYREF
  __int128 v66; // [rsp+40h] [rbp-50h]
  unsigned __int64 v67; // [rsp+50h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v63 = nullptr;
  v64 = 0;
  flags = get_flags_ex(a2, 0);
  aflags = get_aflags(a2);
  if ( a3 )
  {
    if ( get_ea_name(&v63, a2, 0, 0) > 0 )
    {
      if ( (aflags & 8) != 0 )
      {
        v42 = *(_QWORD *)(a1 + 8);
        if ( v42 )
        {
          v44 = v42 + 4;
          v43 = v42 + 5;
          --v42;
        }
        else
        {
          v43 = 6;
          v44 = 5;
        }
        v45 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v43 )
        {
          v61 = v42;
          v58 = v44;
          v54 = v43;
          v50 = qvector_reserve(a1, v45, v43, 1);
          v42 = v61;
          v44 = v58;
          *(_QWORD *)a1 = v50;
          v45 = v50;
          v43 = v54;
        }
        *(_QWORD *)(a1 + 8) = v43;
        *(_BYTE *)(v45 + v44) = 0;
        v46 = *(_QWORD *)a1 + v42;
        *(_DWORD *)v46 = 1801545079;
        *(_BYTE *)(v46 + 4) = 32;
      }
      if ( (aflags & 4) != 0 )
      {
        v38 = *(_QWORD *)(a1 + 8);
        if ( v38 )
        {
          v40 = v38 + 3;
          v39 = v38 + 4;
          --v38;
        }
        else
        {
          v39 = 5;
          v40 = 4;
        }
        v41 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v39 )
        {
          v62 = v38;
          v59 = v40;
          v55 = v39;
          v51 = qvector_reserve(a1, v41, v39, 1);
          v38 = v62;
          v40 = v59;
          *(_QWORD *)a1 = v51;
          v41 = v51;
          v39 = v55;
        }
        *(_QWORD *)(a1 + 8) = v39;
        *(_BYTE *)(v41 + v40) = 0;
        *(_DWORD *)(*(_QWORD *)a1 + v38) = 543323504;
      }
      if ( (~(_WORD)flags & 0xC000) == 0 )
      {
        v34 = *(_QWORD *)(a1 + 8);
        if ( v34 )
        {
          v36 = v34 + 7;
          v35 = v34 + 8;
          --v34;
        }
        else
        {
          v35 = 9;
          v36 = 8;
        }
        v37 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v35 )
        {
          v60 = v36;
          v57 = v34;
          v53 = v35;
          v49 = qvector_reserve(a1, v37, v35, 1);
          v36 = v60;
          v34 = v57;
          *(_QWORD *)a1 = v49;
          v37 = v49;
          v35 = v53;
        }
        *(_QWORD *)(a1 + 8) = v35;
        *(_BYTE *)(v37 + v36) = 0;
        *(_QWORD *)(*(_QWORD *)a1 + v34) = 0x656D616E6F747561LL;
      }
      sub_16FAA0((__int64 *)a1, (__int64)"[%s] ", v63);
    }
    if ( (aflags & 0x4000) != 0 )
    {
      get_ea_name(&v63, a2, 64, 0);
      sub_16FAA0((__int64 *)a1, (__int64)"local=[%s] ", v63);
    }
    if ( (~(_WORD)flags & 0x600) != 0 )
      v7 = 1;
    else
      v7 = 7;
    v8 = 3;
  }
  else
  {
    v7 = 7;
    v8 = 2;
    if ( (~BYTE1(flags) & 6) != 0 )
      v7 = 1;
  }
  sub_368570(a1, a2, flags, v7, (aflags >> 9) & 4 | v8);
  func = get_func(a2);
  if ( func && *(const char **)func == a2 )
  {
    v22 = *(_QWORD *)(func + 48);
    if ( v22 )
    {
      sub_16FAA0((__int64 *)a1, (__int64)"function removes %llu bytes from the stack\n", v22);
    }
    else
    {
      v23 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(func + 17) & 0x40) != 0 )
      {
        if ( v23 )
        {
          v24 = v23 + 34;
          v25 = v23 + 35;
          --v23;
        }
        else
        {
          v25 = 36;
          v24 = 35;
        }
        v26 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v25 )
        {
          v48 = qvector_reserve(a1, v26, v25, 1);
          *(_QWORD *)a1 = v48;
          v26 = v48;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_5DD2A0);
        *(_QWORD *)(a1 + 8) = v25;
        *(_BYTE *)(v26 + v24) = 0;
        v28 = *(_QWORD *)a1 + v23;
        *(__m128i *)v28 = si128;
        *(__m128i *)(v28 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DD2B0);
        *(_DWORD *)(v28 + 31) = 174809953;
      }
      else
      {
        if ( v23 )
        {
          v30 = v23 + 38;
          v29 = v23 + 39;
          --v23;
        }
        else
        {
          v29 = 40;
          v30 = 39;
        }
        v31 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v29 )
        {
          v47 = qvector_reserve(a1, v31, v29, 1);
          *(_QWORD *)a1 = v47;
          v31 = v47;
        }
        v32 = _mm_load_si128((const __m128i *)&xmmword_5DD2C0);
        *(_QWORD *)(a1 + 8) = v29;
        *(_BYTE *)(v31 + v30) = 0;
        v33 = *(_QWORD *)a1 + v23;
        *(__m128i *)v33 = v32;
        *(__m128i *)(v33 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DD2D0);
        *(_QWORD *)(v33 + 31) = 0xA6E776F6E6B6E75LL;
      }
    }
  }
  if ( (unsigned __int8)is_problem_present(13, a2) )
  {
    v10 = 55;
    v11 = "decision to convert to instruction/data is made by IDA\n";
    if ( a3 )
    {
      v10 = 14;
      v11 = " ida_decision ";
    }
    v12 = *(_QWORD *)(a1 + 8);
    v13 = v10;
    if ( v12 )
      v13 = --v12 + v10;
    v14 = *(_QWORD *)a1;
    v15 = v13 + 1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v13 + 1) )
    {
      v56 = v13;
      v52 = v13 + 1;
      v21 = qvector_reserve(a1, v14, v15, 1);
      v13 = v56;
      v15 = v52;
      *(_QWORD *)a1 = v21;
      v14 = v21;
    }
    *(_QWORD *)(a1 + 8) = v15;
    *(_BYTE *)(v14 + v13) = 0;
    v16 = (_QWORD *)(v12 + *(_QWORD *)a1);
    *v16 = *(_QWORD *)v11;
    *(_QWORD *)((char *)v16 + v10 - 8) = *(_QWORD *)&v11[v10 - 8];
    qmemcpy(
      (void *)((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)(v11 - ((const char *)v16 - ((unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
      8LL * (((unsigned int)v10 + (_DWORD)v16 - (((_DWORD)v16 + 8) & 0xFFFFFFF8)) >> 3));
  }
  v66 = 0;
  v65 = 0;
  if ( get_cmt(&v65, a2, 0) >= 0 )
  {
    v17 = "comment";
    if ( a3 )
      v17 = "cmt";
    sub_16FAA0((__int64 *)a1, (__int64)"%s: %s\n", v17, v65);
  }
  v18 = a2;
  if ( get_cmt(&v65, a2, 1) >= 0 )
  {
    v19 = "repeatable comment";
    v18 = "%s: %s\n";
    if ( a3 )
      v19 = "rptcmt";
    sub_16FAA0((__int64 *)a1, (__int64)"%s: %s\n", v19, v65);
  }
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v65, v18);
  }
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63, v18);
  }
  return a1;
}
