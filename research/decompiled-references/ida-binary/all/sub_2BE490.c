__int64 __fastcall sub_2BE490(
        _QWORD *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rdx
  char v15; // r14
  __int64 (*v16)(); // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rbx
  int v20; // ebp
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 (__fastcall *v24)(__int64); // rax
  int v25; // eax
  __int64 v26; // rcx
  int v27; // r9d
  int v28; // ecx
  int v29; // ecx
  __int64 (__fastcall *v30)(__int64, __int64); // rax
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  char v34; // bl
  __int64 v35; // r8
  __int64 v36; // r9
  __m128 v37; // xmm4
  __m128 v38; // xmm5
  __int64 v39; // rax
  __m128 si128; // xmm0
  double *v41; // rbx
  QT::QCursor *v42; // rax
  __m128 v43; // xmm4
  __m128 v44; // xmm5
  __int64 (*v45)(); // rax
  __int64 (*v46)(); // rax
  __int64 (*v48)(); // rax
  __int64 v49; // [rsp+0h] [rbp-88h]
  int v50; // [rsp+8h] [rbp-80h]
  int v51; // [rsp+Ch] [rbp-7Ch]
  int v52; // [rsp+10h] [rbp-78h]
  __m128i v53; // [rsp+18h] [rbp-70h] BYREF
  __int64 v54; // [rsp+28h] [rbp-60h]
  __int64 v55; // [rsp+30h] [rbp-58h]
  unsigned __int64 v56; // [rsp+48h] [rbp-40h]
  int v57; // [rsp+50h] [rbp-38h]
  int v58; // [rsp+58h] [rbp-30h]
  __int64 v59; // [rsp+60h] [rbp-28h]

  v11 = a1[55];
  v12 = *a1;
  v56 = __readfsqword(0x28u);
  v13 = a2;
  v14 = a1[25];
  if ( !v11 )
  {
    if ( !v14 )
    {
      v48 = *(__int64 (**)())(v12 + 704);
      if ( v48 != sub_2B2320 )
        ((void (__fastcall *)(_QWORD *, __int64, _QWORD))v48)(a1, a2, 0);
      v15 = 0;
      goto LABEL_28;
    }
    goto LABEL_22;
  }
  v11 = *(_QWORD *)(v11 + 8);
  v15 = 0;
  if ( v14 )
  {
LABEL_22:
    v30 = *(__int64 (__fastcall **)(__int64, __int64))(v12 + 696);
    if ( v30 == sub_2B2540 )
    {
      v31 = a2;
      a2 = unk_8CA4E0;
      sub_5399B0(v31, unk_8CA4E0, 0, 1);
    }
    else
    {
      ((void (__fastcall *)(_QWORD *, __int64, __int64))v30)(a1, a2, v11);
    }
    v12 = *a1;
    v15 = 1;
  }
  v16 = *(__int64 (**)())(v12 + 704);
  if ( v16 != sub_2B2320 )
  {
    a2 = v13;
    ((void (__fastcall *)(_QWORD *, __int64, __int64))v16)(a1, v13, v11);
  }
  if ( !v11 )
    goto LABEL_28;
  v17 = a1[25];
  v18 = a1[24];
  v19 = v18;
  if ( !(20 * v17) )
    goto LABEL_28;
  v20 = 0;
  do
  {
    if ( *(_BYTE *)v19 )
    {
      v23 = *(unsigned int *)(v19 + 4);
      v24 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL);
      if ( v24 == interactive_graph_t__::vfunc_7 )
      {
        v25 = *(_DWORD *)(v11 + 184);
      }
      else
      {
        v51 = *(_DWORD *)(v19 + 4);
        v25 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64 (__fastcall *)(__int64)))v24)(
                v11,
                a2,
                v17,
                v23,
                interactive_graph_t__::vfunc_7);
        v17 = a1[25];
        v18 = a1[24];
        LODWORD(v23) = v51;
      }
      if ( (int)v23 < v25 )
      {
        v26 = *(int *)(v19 + 4);
        a2 = *(unsigned int *)(*(_QWORD *)(v11 + 80) + 4 * v26);
        v27 = *(_DWORD *)(*(_QWORD *)(v11 + 80) + 4 * v26) & 0x7FFFFFFF;
        if ( (*(_BYTE *)(*(_QWORD *)(v11 + 104) + v26) & 1) != 0 )
        {
          v28 = v20;
          v20 |= 5u;
          v29 = v28 | 1;
          if ( (int)a2 >= 0 )
            v20 = v29;
          if ( v27 != *(_DWORD *)(v19 + 4) )
            goto LABEL_11;
        }
        else
        {
          if ( v27 != (_DWORD)v26 )
          {
            v21 = v20;
            v20 |= 1u;
            v22 = v21 | 5;
            if ( (int)a2 < 0 )
              v20 = v22;
LABEL_11:
            v20 |= 2u;
            goto LABEL_12;
          }
          if ( (int)a2 < 0 )
            v20 |= 4u;
        }
      }
    }
LABEL_12:
    v19 += 20;
  }
  while ( v19 != v18 + 20 * v17 );
  if ( (v20 & 2) == 0 )
  {
    if ( (v20 & 4) == 0 )
      goto LABEL_27;
LABEL_41:
    v15 = 1;
    a2 = unk_8CA4F8;
    sub_5399B0(v13, unk_8CA4F8, 0, 1);
    if ( (v20 & 1) != 0 )
      goto LABEL_39;
LABEL_28:
    v34 = sub_29ACF0(v11);
    if ( !v34 )
      goto LABEL_29;
LABEL_40:
    v15 = v34;
    sub_5399B0(v13, unk_8CA500, 0, 1);
    a2 = unk_8CA508;
    sub_5399B0(v13, unk_8CA508, 0, 1);
    goto LABEL_29;
  }
  v15 = 1;
  a2 = unk_8CA4F0;
  sub_5399B0(v13, unk_8CA4F0, 0, 1);
  if ( (v20 & 4) != 0 )
    goto LABEL_41;
LABEL_27:
  if ( (v20 & 1) == 0 )
    goto LABEL_28;
LABEL_39:
  v15 = 1;
  a2 = unk_8CA4E8;
  sub_5399B0(v13, unk_8CA4E8, 0, 1);
  v34 = sub_29ACF0(v11);
  if ( v34 )
    goto LABEL_40;
LABEL_29:
  v39 = a1[2];
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DC310);
  LODWORD(v54) = 0;
  HIDWORD(v55) = si128.m128_i32[0];
  v41 = (double *)sub_1EA6C0(
                    v39 + 384,
                    a2,
                    v32,
                    v33,
                    v35,
                    v36,
                    si128,
                    a4,
                    a5,
                    a6,
                    v37,
                    v38,
                    a9,
                    a10,
                    v49,
                    v50,
                    v52,
                    v53.m128i_i32[0],
                    v53.m128i_u32[2],
                    v54,
                    v55,
                    si128.m128_i32[1],
                    si128.m128_i32[3],
                    v56,
                    v57,
                    v58,
                    v59);
  v42 = (QT::QCursor *)QT::QAbstractScrollArea::viewport((QT::QAbstractScrollArea *)a1[2]);
  v53.m128i_i64[0] = sub_1C7B10(v42);
  if ( (unsigned __int8)sub_2BC760(
                          a1,
                          (__int64)&v53.m128i_i64[1],
                          0,
                          0,
                          v11,
                          v41,
                          *(double *)si128.m128_u64,
                          a4,
                          a5,
                          a6,
                          v43,
                          v44,
                          a9,
                          a10,
                          &v53,
                          1u)
    && v53.m128i_i32[2] == 4 )
  {
    if ( v15 )
      sub_5392E0(v13, 0, 1);
    return 0;
  }
  else
  {
    v45 = *(__int64 (**)())(*a1 + 712LL);
    if ( v45 != sub_2B2330 )
      ((void (__fastcall *)(_QWORD *, __int64))v45)(a1, v13);
    sub_5399B0(v13, unk_8CA420, 0, 1);
    sub_5399B0(v13, unk_8CA418, 0, 1);
    sub_5399B0(v13, unk_8CA3F0, 0, 1);
    sub_5399B0(v13, unk_8CA3E8, 0, 1);
    v46 = *(__int64 (**)())(*a1 + 720LL);
    if ( v46 != sub_2B2340 )
      ((void (__fastcall *)(_QWORD *, __int64))v46)(a1, v13);
    return 1;
  }
}
