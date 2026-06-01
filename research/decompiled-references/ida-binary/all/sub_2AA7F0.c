__int64 __fastcall sub_2AA7F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  _DWORD *v12; // r14
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // r15
  int v20; // r13d
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r13d
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  char v36; // al
  unsigned __int64 v37; // r14
  _QWORD *v38; // r13
  __int64 v39; // rbp
  int v40; // eax
  __int64 v41; // r15
  unsigned int v42; // eax
  unsigned int v43; // edx
  __int64 v44; // rdi
  __int64 v45; // rax
  __int16 v46; // ax
  __int16 v47; // r8
  __int16 v48; // r14
  int v49; // eax
  char v50; // [rsp+0h] [rbp-98h]
  unsigned __int8 v51; // [rsp+Fh] [rbp-89h]
  __int64 v52; // [rsp+10h] [rbp-88h]
  unsigned __int64 v53; // [rsp+10h] [rbp-88h]
  int v54; // [rsp+10h] [rbp-88h]
  unsigned int v55; // [rsp+10h] [rbp-88h]
  unsigned int v56; // [rsp+10h] [rbp-88h]
  __int64 v57; // [rsp+10h] [rbp-88h]
  unsigned int v59; // [rsp+28h] [rbp-70h]
  int v60; // [rsp+2Ch] [rbp-6Ch]
  __int64 v61; // [rsp+30h] [rbp-68h]
  __int64 *v62; // [rsp+40h] [rbp-58h] BYREF
  int v63; // [rsp+48h] [rbp-50h]
  __int64 v64; // [rsp+50h] [rbp-48h]
  unsigned __int64 v65; // [rsp+58h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v12 = *(_DWORD **)(a3 + 40);
  if ( !v12 )
    return 0;
  v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 112LL))(*(_QWORD *)(a3 + 40));
  if ( !get_place_class(&v62, 0, v16) )
    goto LABEL_50;
  v51 = (unsigned __int8)v62 & 1;
  if ( ((unsigned __int8)v62 & 1) == 0 )
    goto LABEL_50;
  v19 = (_QWORD *)a4[1];
  if ( !v19 )
  {
    if ( under_debugger )
      goto LABEL_52;
    interr(40424, 0, v17, v18, *(double *)a5.m128_u64);
LABEL_50:
    if ( !under_debugger )
      interr(40423, 0, v17, v18, *(double *)a5.m128_u64);
LABEL_52:
    BUG();
  }
  v20 = v12[2];
  v21 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 128LL))(v12);
  v63 = v20;
  v22 = v21;
  v62 = &idaplace_t___vtable;
  v64 = v21;
  if ( (*(_BYTE *)(a1 + 520) & 1) != 0 )
  {
    v23 = v21;
    v27 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v19 + 288LL))(v19, v21);
    if ( v27 >= 0 )
    {
      v30 = v27;
      if ( (unsigned __int64)v27 < a4[3] )
        goto LABEL_8;
      goto LABEL_39;
    }
    v22 = v64;
  }
  if ( !sub_27D410(v22) )
    idaplace_t__adjust(&v62, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 728LL));
  v23 = v64;
  v27 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v19 + 288LL))(v19, v64);
  if ( v27 < 0 )
    return 0;
  v30 = v27;
  if ( (unsigned __int64)v27 < a4[3] )
  {
LABEL_8:
    v31 = *(_QWORD *)(a2 + 40);
    if ( !v31 )
      goto LABEL_10;
    goto LABEL_9;
  }
LABEL_39:
  v57 = v30;
  sub_169700(
    (int)"Coherency check failed: bidx < gmd.nodes_text.size()\n",
    v23,
    v30,
    v24,
    v25,
    v26,
    a5,
    a6,
    a7,
    a8,
    v28,
    v29,
    a11,
    a12,
    v50);
  v31 = *(_QWORD *)(a2 + 40);
  v30 = v57;
  if ( v31 )
  {
LABEL_9:
    v52 = v30;
    *(double *)a5.m128_u64 = qfree(v31, (const char *)v23);
    *(_QWORD *)(a2 + 40) = 0;
    v30 = v52;
  }
LABEL_10:
  v53 = v30;
  v32 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
  v34 = v53;
  *(_QWORD *)(a2 + 40) = v32;
  if ( v53 >= a4[3] )
    return 0;
  v36 = *(_BYTE *)(v19[13] + v53);
  if ( (v36 & 1) == 0 && (v36 & 8) == 0 )
  {
    if ( *(_QWORD *)(a4[2] + 24 * v53 + 8) )
    {
      v60 = v27;
      v37 = 0;
      v61 = a2;
      v38 = (_QWORD *)(a4[2] + 24 * v53);
      v39 = 0;
      v54 = 0x7FFFFFFF;
      v59 = 0;
      do
      {
        v41 = *(_QWORD *)(*v38 + v39);
        v42 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 **))(**(_QWORD **)(a1 + 16) + 464LL))(
                *(_QWORD *)(a1 + 16),
                v41,
                &v62);
        if ( v42 != -1 )
        {
          v43 = v42;
          v44 = *(_QWORD *)(v61 + 40);
          if ( v44 )
          {
            v55 = v42;
            qfree(v44, (const char *)v41, v42);
            *(_QWORD *)(v61 + 40) = 0;
            v43 = v55;
          }
          if ( v41 )
          {
            v56 = v43;
            v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
            v43 = v56;
            *(_QWORD *)(v61 + 40) = v45;
          }
          v46 = v43;
          if ( v43 == -2 )
            v46 = *(_WORD *)(a3 + 28);
          *(_WORD *)(v61 + 28) = v46;
          *(_WORD *)(v61 + 30) = v37;
          *(_DWORD *)(v61 + 24) = v60;
          return v51;
        }
        v23 = (__int64)&v62;
        if ( !(unsigned int)sub_1F0900(*(_QWORD *)(a1 + 16), (__int64 *)&v62, v41) )
        {
          if ( v63 == -2 )
          {
            v27 = v60;
            a2 = v61;
            v47 = v37;
            goto LABEL_42;
          }
          v40 = v63 - *(_DWORD *)(v41 + 8);
          if ( v40 >= 0 )
          {
            v33 = (unsigned int)v54;
            v23 = v59;
            LOBYTE(v34) = v54 > v40;
            if ( v54 <= v40 )
              v40 = v54;
            else
              v23 = (unsigned int)v37;
            v59 = v23;
            v54 = v40;
          }
        }
        ++v37;
        v39 += 272;
      }
      while ( v37 < v38[1] );
      v47 = v59;
      v27 = v60;
      a2 = v61;
      if ( v54 != 0x7FFFFFFF )
        goto LABEL_42;
    }
    return 0;
  }
  v47 = 0;
LABEL_42:
  *(_WORD *)(a2 + 30) = v47;
  *(_DWORD *)(a2 + 24) = v27;
  v48 = *(_WORD *)(sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, v23, v34, v33, *(double *)a5.m128_u64) + 28);
  v49 = sub_2B5980(a1, a4, (unsigned int)v27);
  if ( v49 < v48 )
    v48 = v49;
  *(_WORD *)(a2 + 28) = v48;
  return v51;
}
