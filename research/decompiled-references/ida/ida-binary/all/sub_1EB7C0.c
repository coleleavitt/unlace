__int64 __fastcall sub_1EB7C0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  unsigned __int64 v7; // r14
  const __m128i *v8; // r13
  __int64 v9; // rbp
  const char *v10; // r15
  __int64 (__fastcall *v11)(__int64, __int64, __int64, _QWORD); // rax
  __int64 result; // rax
  __int64 (__fastcall *v13)(__int64, __int64, __int64); // rax
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rax
  char v20; // dl
  __int64 (__fastcall *v21)(__m128i *, __int64, __int64); // r11
  char v22; // r10
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  char v27; // r10
  __int64 (__fastcall *v28)(__int64, unsigned __int64, __int64); // r9
  __m128i v29; // xmm1
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  int v33; // eax
  QT::QCoreApplication *v34; // rdi
  __int64 v35; // rax
  int v36; // eax
  char v37; // [rsp+Ch] [rbp-8Ch]
  unsigned int v38; // [rsp+Ch] [rbp-8Ch]
  __int64 v39; // [rsp+10h] [rbp-88h]
  char v40; // [rsp+10h] [rbp-88h]
  char v41; // [rsp+10h] [rbp-88h]
  unsigned int v42; // [rsp+10h] [rbp-88h]
  __int64 (__fastcall *v43)(__m128i *, __int64, __int64); // [rsp+18h] [rbp-80h]
  __int64 (__fastcall *v44)(__int64, unsigned __int64, __int64); // [rsp+18h] [rbp-80h]
  __m128i v45; // [rsp+20h] [rbp-78h] BYREF
  __m128i v46; // [rsp+30h] [rbp-68h] BYREF
  __int64 v47; // [rsp+40h] [rbp-58h]
  const __m128i *v48; // [rsp+48h] [rbp-50h]
  unsigned __int64 v49; // [rsp+58h] [rbp-40h]

  v37 = a4;
  v49 = __readfsqword(0x28u);
  LODWORD(v8) = ((unsigned int)a4 >> 2) & 1;
  if ( !a1[26].m128i_i64[1] )
    goto LABEL_43;
  v6 = (__int64)a1;
  v5 = a2;
  v9 = a3;
  *(__m128i *)a2 = _mm_loadu_si128(a1 + 24);
  a5 = _mm_loadu_si128(a1 + 25);
  *(__m128i *)(a2 + 16) = a5;
  *(_DWORD *)(a2 + 32) = a1[26].m128i_i32[0];
  if ( (*(_BYTE *)(a1[32].m128i_i64[0] + 8) & 1) == 0 )
  {
    a1 = (const __m128i *)a1[26].m128i_i64[1];
    if ( !a1 )
      goto LABEL_43;
    v7 = (*(__int64 (__fastcall **)(const __m128i *))(a1->m128i_i64[0] + 120))(a1);
    v10 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 40) + 120LL))(*(_QWORD *)(v9 + 40));
    v11 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))lookup_loc_converter2(v7, v10);
    if ( v11 )
    {
      a2 = v9;
      a1 = (const __m128i *)v5;
      result = v11(v5, v9, v6, (unsigned int)v8);
      goto LABEL_6;
    }
    a2 = (__int64)v10;
    v13 = (__int64 (__fastcall *)(__int64, __int64, __int64))lookup_loc_converter(v7, v10);
    if ( v13 )
    {
      a2 = v9;
      a1 = (const __m128i *)v5;
      result = v13(v5, v9, v6);
      while ( 1 )
      {
LABEL_6:
        if ( (_DWORD)result != 1 )
          return result;
LABEL_24:
        if ( (v37 & 1) == 0 )
          return 1;
        if ( (v37 & 2) == 0 )
          goto LABEL_26;
        if ( !*(_BYTE *)(v6 + 968) )
          break;
        if ( *(_QWORD *)(v6 + 424) )
        {
          v33 = *(_DWORD *)(v6 + 416);
          if ( v33 == 2 )
          {
            v34 = *(QT::QCoreApplication **)(v6 + 896);
          }
          else if ( v33 == 3 )
          {
            v34 = *(QT::QCoreApplication **)(v6 + 904);
          }
          else
          {
            v34 = nullptr;
            if ( v33 == 1 )
              v34 = *(QT::QCoreApplication **)(v6 + 888);
          }
          goto LABEL_35;
        }
LABEL_43:
        sub_1E69C0(*(double *)a5.m128i_i64, (__int64)a1, a2, a3, a4);
LABEL_44:
        a2 = v7;
        if ( v27 )
          result = ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64, _QWORD))v28)(
                     v5,
                     v7,
                     v6,
                     (unsigned int)v8);
        else
          result = v28(v5, v7, v6);
        a1 = v48;
        if ( v48 )
        {
          v42 = result;
          qfree(v48, (const char *)v7);
          result = v42;
        }
      }
      v34 = nullptr;
LABEL_35:
      sub_176E70(v34);
LABEL_26:
      sub_1EB630(v6, v5, a3, a4);
      return 1;
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 40) + 112LL))(*(_QWORD *)(v9 + 40));
    a1 = *(const __m128i **)(v6 + 424);
    v7 = v14;
    if ( !a1 )
      goto LABEL_43;
    if ( v14 == (*(unsigned int (__fastcall **)(const __m128i *))(a1->m128i_i64[0] + 112))(a1) )
    {
      a5 = _mm_loadu_si128((const __m128i *)v9);
      v29 = _mm_loadu_si128((const __m128i *)(v9 + 16));
      v30 = *(_QWORD *)(v9 + 32);
      v8 = *(const __m128i **)(v9 + 40);
      v45 = a5;
      v47 = v30;
      v46 = v29;
      if ( v8 )
      {
        v31 = (*(__int64 (__fastcall **)(const __m128i *))(v8->m128i_i64[0] + 16))(v8);
        a1 = *(const __m128i **)(v5 + 40);
        v8 = (const __m128i *)v31;
        if ( !a1 )
          goto LABEL_22;
      }
      else
      {
        a1 = *(const __m128i **)(v5 + 40);
        if ( !a1 )
        {
          v36 = v47;
          *(__m128i *)v5 = a5;
          *(__m128i *)(v5 + 16) = v29;
          *(_DWORD *)(v5 + 32) = v36;
          goto LABEL_24;
        }
      }
      qfree(a1, v10);
      *(_QWORD *)(v5 + 40) = 0;
LABEL_22:
      v32 = v47;
      *(__m128i *)v5 = _mm_load_si128(&v45);
      a5 = _mm_load_si128(&v46);
      *(_DWORD *)(v5 + 32) = v32;
      *(__m128i *)(v5 + 16) = a5;
      if ( v8 )
      {
        *(_QWORD *)(v5 + 40) = (*(__int64 (__fastcall **)(const __m128i *))(v8->m128i_i64[0] + 16))(v8);
        a1 = v8;
        qfree(v8, v10);
      }
      goto LABEL_24;
    }
  }
  v39 = idaplace_t__name(&qword_8CB4C0);
  a2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 40) + 120LL))(*(_QWORD *)(v9 + 40));
  v7 = a2;
  v15 = lookup_loc_converter2(v39, a2);
  a3 = 1;
  v16 = v15;
  if ( !v15 )
  {
    v16 = lookup_loc_converter(v39, a2);
    if ( !v16 )
      return 0;
    a3 = 0;
  }
  a1 = *(const __m128i **)(v6 + 424);
  v43 = (__int64 (__fastcall *)(__m128i *, __int64, __int64))v16;
  v40 = a3;
  if ( !a1 )
    goto LABEL_43;
  v17 = (*(__int64 (__fastcall **)(const __m128i *))(a1->m128i_i64[0] + 120))(a1);
  v18 = idaplace_t__name(&qword_8CB4C0);
  v19 = lookup_loc_converter2(v17, v18);
  v20 = v40;
  v21 = v43;
  v22 = 1;
  v23 = v19;
  if ( v19 )
    goto LABEL_14;
  v35 = lookup_loc_converter(v17, v18);
  v20 = v40;
  v21 = v43;
  v23 = v35;
  if ( !v35 )
    return 0;
  v22 = 0;
LABEL_14:
  a5.m128i_i64[0] = 0;
  v44 = (__int64 (__fastcall *)(__int64, unsigned __int64, __int64))v23;
  v7 = (unsigned __int64)&v45;
  v46.m128i_i64[0] = 0;
  v46.m128i_i64[1] = -1;
  v47 = 0;
  v48 = nullptr;
  v41 = v22;
  v45 = 0;
  if ( v20 )
  {
    result = ((__int64 (__fastcall *)(__m128i *, __int64, __int64, _QWORD))v21)(&v45, v9, v6, (unsigned int)v8);
    v27 = v41;
    v28 = v44;
  }
  else
  {
    result = v21(&v45, v9, v6);
    v28 = v44;
    v27 = v41;
  }
  if ( (_DWORD)result == 1 )
    goto LABEL_44;
  if ( v48 )
  {
    v38 = result;
    qfree(v48, (const char *)v9, v24, v25, v26, v28);
    return v38;
  }
  return result;
}
