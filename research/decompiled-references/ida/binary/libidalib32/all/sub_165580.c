__int64 __fastcall sub_165580(__int64 *a1, __m128i *a2, __m128i *a3)
{
  const __m128i *v3; // r12
  __int64 v6; // r13
  _OWORD *v7; // rdx
  __int64 v8; // rdi
  _OWORD *v9; // rcx
  const __m128i *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r12
  __m128i v15; // xmm0
  int v16; // eax
  __int64 v17; // rax
  __int64 *v18; // rdi
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  unsigned __int64 v23; // r14
  __int64 v24; // r13
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r15
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rsi
  __m128i v35; // xmm0
  struct _Unwind_Exception *v37; // rbx
  __int64 (**v38)(); // [rsp+0h] [rbp-D8h] BYREF
  int v39; // [rsp+8h] [rbp-D0h]
  int v40; // [rsp+Ch] [rbp-CCh]
  __m128i v41; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v42; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+30h] [rbp-A8h]
  __int64 v44; // [rsp+38h] [rbp-A0h]
  __m128i v45; // [rsp+40h] [rbp-98h] BYREF
  __m128i v46; // [rsp+50h] [rbp-88h]
  __int64 v47; // [rsp+60h] [rbp-78h]
  __int64 (***v48)(); // [rsp+68h] [rbp-70h]
  int v49; // [rsp+70h] [rbp-68h] BYREF
  __int64 v50; // [rsp+78h] [rbp-60h]
  __int128 v51; // [rsp+80h] [rbp-58h]
  unsigned __int64 v52; // [rsp+98h] [rbp-40h]

  v3 = a2;
  v52 = __readfsqword(0x28u);
  v6 = sub_15B020(a1, a3);
  if ( !v6 )
  {
    v6 = sub_15B020(a1, a2);
    if ( !v6 )
    {
      v22 = a1[1];
      v23 = a1[2];
      if ( v23 < v22 + 1 )
      {
        v28 = qvector_reserve();
        v29 = a1[1];
        v30 = a1[2];
        a1[2] = v23;
        v31 = *a1;
        v24 = v28;
        v32 = v29 - 1;
        if ( v32 >= 0 )
        {
          v33 = v28;
          do
          {
            v34 = *(_QWORD *)v31;
            v35 = _mm_loadu_si128((const __m128i *)(v31 + 8));
            v33 += 24;
            v31 += 24;
            *(_QWORD *)(v31 - 24) = 0;
            *(_QWORD *)(v33 - 24) = v34;
            *(__m128i *)(v33 - 16) = v35;
            *(_QWORD *)(v31 - 8) = 0;
          }
          while ( v32-- != 0 );
        }
        qfree();
        *a1 = v24;
        v22 = a1[1];
        a1[2] = v30;
      }
      else
      {
        v24 = *a1;
      }
      v6 = v24 + 24 * v22;
      *(_QWORD *)v6 = 0;
      *(_OWORD *)(v6 + 8) = 0;
      ++a1[1];
    }
  }
  v7 = *(_OWORD **)v6;
  v8 = *(_QWORD *)v6 + 16LL * *(_QWORD *)(v6 + 8);
  if ( *(_QWORD *)v6 != v8 )
  {
    v9 = *(_OWORD **)v6;
    while ( *v9 - *a3 != 0 )
    {
      if ( (_OWORD *)v8 == ++v9 )
        goto LABEL_26;
    }
    if ( v9 != (_OWORD *)v8 )
      goto LABEL_9;
  }
LABEL_26:
  sub_165400((__int64)a1, v6, a3);
  v7 = *(_OWORD **)v6;
  v8 = *(_QWORD *)v6 + 16LL * *(_QWORD *)(v6 + 8);
  if ( *(_QWORD *)v6 == v8 )
    goto LABEL_27;
LABEL_9:
  while ( *v7 - *(_OWORD *)v3 != 0 )
  {
    if ( ++v7 == (_OWORD *)v8 )
      goto LABEL_27;
  }
  if ( v7 == (_OWORD *)v8 )
LABEL_27:
    sub_165400((__int64)a1, v6, v3);
  if ( v3->m128i_i8[0] )
  {
    if ( a3->m128i_i8[0] )
      return 1;
    v11 = v3;
    v3 = a3;
  }
  else
  {
    v11 = a3;
  }
  if ( v3 )
  {
    v12 = sub_153DC0(v3->m128i_i64[1]);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 480);
      if ( !v13 )
        sub_1582F0(0);
      v14 = v12 + 440;
      v42.m128i_i64[0] = 0;
      v42.m128i_i64[1] = -1;
      v43 = 0;
      v44 = 0;
      v41 = 0;
      if ( (__m128i *)(v12 + 440) != &v41 )
      {
        v41 = _mm_loadu_si128((const __m128i *)(v12 + 440));
        v15 = _mm_loadu_si128((const __m128i *)(v12 + 456));
        v16 = *(_DWORD *)(v12 + 472);
        v42 = v15;
        LODWORD(v43) = v16;
        v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( v11->m128i_i8[0] )
      {
        v49 = -2;
        v50 = -1;
        v51 = 0;
        if ( (unsigned __int8)sub_CECF0(v11->m128i_i8, (__int64)&v49) )
        {
          v25 = _mm_load_si128(&v41);
          v39 = 0;
          v38 = off_22FD98;
          v45 = v25;
          v26 = _mm_load_si128(&v42);
          v40 = v50;
          v48 = &v38;
          v47 = v43;
          v46 = v26;
          v48 = (__int64 (***)())idaplace_t__clone();
          sub_1616C0(v14, &v45, a3, 4, 0, v27);
          if ( v48 )
            qfree();
        }
        if ( v49 >= -1 && v50 )
        {
          *(_QWORD *)&v51 = 0;
          qfree();
        }
      }
      else
      {
        v17 = sub_153DC0(v11->m128i_i64[1]);
        if ( v17 )
        {
          v18 = *(__int64 **)(v17 + 480);
          if ( !v18 )
          {
            v37 = (struct _Unwind_Exception *)sub_1582F0(0);
            if ( v48 )
              qfree();
            if ( v49 >= -1 && v50 )
            {
              *(_QWORD *)&v51 = 0;
              qfree();
            }
            if ( v44 )
              qfree();
            _Unwind_Resume(v37);
          }
          v19 = _mm_load_si128(&v41);
          v48 = *(__int64 (****)())(v17 + 480);
          v47 = v43;
          v20 = *v18;
          v45 = v19;
          v46 = _mm_load_si128(&v42);
          v48 = (__int64 (***)())(*(__int64 (__fastcall **)(__int64 *))(v20 + 16))(v18);
          sub_1616C0(v14, &v45, a3, 4, 0, v21);
          if ( v48 )
            qfree();
        }
      }
      if ( v44 )
        qfree();
    }
  }
  return 1;
}

