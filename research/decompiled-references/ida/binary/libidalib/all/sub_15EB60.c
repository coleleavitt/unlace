__int64 __fastcall sub_15EB60(__int64 *a1, __m128i *a2, __int64 a3, unsigned int a4)
{
  __m128i *v4; // rbx
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 *v7; // r13
  __int64 v9; // r15
  __int64 (__fastcall *v10)(__m128i *, __int64, __int64, _QWORD); // rax
  __int64 result; // rax
  __int64 (__fastcall *v12)(__m128i *, __int64, __int64); // rax
  unsigned int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rax
  char v16; // dl
  __int64 v17; // r11
  __int64 v18; // rax
  char v19; // dl
  __int64 (__fastcall *v20)(__m128i *, __int64, __int64); // r11
  char v21; // r10
  __int64 v22; // r9
  char v23; // r10
  __int64 (__fastcall *v24)(__m128i *, __int64, __int64); // r9
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __int64 v27; // rax
  __int64 v28; // rax
  __int32 v29; // eax
  __m128i v30; // xmm0
  unsigned __int8 *v31; // rdi
  __int64 v32; // rax
  __int32 v33; // eax
  char v34; // [rsp+Ch] [rbp-8Ch]
  unsigned int v35; // [rsp+Ch] [rbp-8Ch]
  char v36; // [rsp+10h] [rbp-88h]
  char v37; // [rsp+10h] [rbp-88h]
  unsigned int v38; // [rsp+10h] [rbp-88h]
  __int64 (__fastcall *v39)(__m128i *, __int64, __int64); // [rsp+18h] [rbp-80h]
  __int64 (__fastcall *v40)(__m128i *, __int64, __int64); // [rsp+18h] [rbp-80h]
  __m128i v41; // [rsp+20h] [rbp-78h] BYREF
  __m128i v42; // [rsp+30h] [rbp-68h] BYREF
  __int64 v43; // [rsp+40h] [rbp-58h]
  __int64 *v44; // [rsp+48h] [rbp-50h]
  unsigned __int64 v45; // [rsp+58h] [rbp-40h]

  v34 = a4;
  v45 = __readfsqword(0x28u);
  LODWORD(v7) = (a4 >> 2) & 1;
  if ( !a1[60] )
    goto LABEL_41;
  v5 = (__int64)a1;
  v4 = a2;
  *a2 = _mm_loadu_si128((const __m128i *)(a1 + 55));
  a2[1] = _mm_loadu_si128((const __m128i *)(a1 + 57));
  a2[2].m128i_i32[0] = *((_DWORD *)a1 + 118);
  if ( (*(_BYTE *)(a1[71] + 8) & 1) == 0 )
  {
    a1 = (__int64 *)a1[60];
    if ( !a1 )
      goto LABEL_41;
    v6 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 120))(a1);
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 40) + 120LL))(*(_QWORD *)(a3 + 40));
    v10 = (__int64 (__fastcall *)(__m128i *, __int64, __int64, _QWORD))lookup_loc_converter2();
    if ( v10 )
    {
      a1 = (__int64 *)a2;
      result = v10(a2, a3, v5, (unsigned int)v7);
      goto LABEL_6;
    }
    v12 = (__int64 (__fastcall *)(__m128i *, __int64, __int64))lookup_loc_converter();
    if ( v12 )
    {
      a1 = (__int64 *)a2;
      result = v12(a2, a3, v5);
      while ( 1 )
      {
LABEL_6:
        if ( (_DWORD)result != 1 )
          return result;
LABEL_24:
        if ( (v34 & 1) == 0 )
          return 1;
        if ( (v34 & 2) == 0 )
          goto LABEL_26;
        if ( !*(_BYTE *)(v5 + 992) )
          break;
        if ( *(_QWORD *)(v5 + 480) )
        {
          v31 = nullptr;
          if ( *(_DWORD *)(v5 + 472) == 1 )
            v31 = *(unsigned __int8 **)(v5 + 856);
          goto LABEL_33;
        }
LABEL_41:
        sub_158B30(a1);
LABEL_42:
        if ( v23 )
          result = ((__int64 (__fastcall *)(__m128i *, __int64, __int64, _QWORD))v24)(v4, v6, v5, (unsigned int)v7);
        else
          result = v24(v4, v6, v5);
        a1 = v44;
        if ( v44 )
        {
          v38 = result;
          qfree();
          result = v38;
        }
      }
      v31 = nullptr;
LABEL_33:
      sub_91A70(v31);
LABEL_26:
      sub_15EA20(v5, v4);
      return 1;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a3 + 40) + 112LL))(*(_QWORD *)(a3 + 40), v9);
    a1 = *(__int64 **)(v5 + 480);
    v6 = v13;
    if ( !a1 )
      goto LABEL_41;
    if ( v13 == (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 112))(a1) )
    {
      v25 = _mm_loadu_si128((const __m128i *)a3);
      v26 = _mm_loadu_si128((const __m128i *)(a3 + 16));
      v27 = *(_QWORD *)(a3 + 32);
      v7 = *(__int64 **)(a3 + 40);
      v41 = v25;
      v43 = v27;
      v42 = v26;
      if ( v7 )
      {
        v28 = (*(__int64 (__fastcall **)(__int64 *))(*v7 + 16))(v7);
        a1 = (__int64 *)a2[2].m128i_i64[1];
        v7 = (__int64 *)v28;
        if ( !a1 )
          goto LABEL_22;
      }
      else
      {
        a1 = (__int64 *)a2[2].m128i_i64[1];
        if ( !a1 )
        {
          v33 = v43;
          *a2 = v25;
          a2[1] = v26;
          a2[2].m128i_i32[0] = v33;
          goto LABEL_24;
        }
      }
      qfree();
      a2[2].m128i_i64[1] = 0;
LABEL_22:
      v29 = v43;
      *a2 = _mm_load_si128(&v41);
      v30 = _mm_load_si128(&v42);
      a2[2].m128i_i32[0] = v29;
      a2[1] = v30;
      if ( v7 )
      {
        a2[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64 *))(*v7 + 16))(v7);
        a1 = v7;
        qfree();
      }
      goto LABEL_24;
    }
  }
  idaplace_t__name();
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 40) + 120LL))(*(_QWORD *)(a3 + 40));
  v6 = v14;
  v15 = lookup_loc_converter2();
  v16 = 1;
  v17 = v15;
  if ( !v15 )
  {
    v17 = lookup_loc_converter();
    if ( !v17 )
      return 0;
    v16 = 0;
  }
  a1 = *(__int64 **)(v5 + 480);
  v39 = (__int64 (__fastcall *)(__m128i *, __int64, __int64))v17;
  v36 = v16;
  if ( !a1 )
    goto LABEL_41;
  (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 120))(a1, v14);
  idaplace_t__name();
  v18 = lookup_loc_converter2();
  v19 = v36;
  v20 = v39;
  v21 = 1;
  v22 = v18;
  if ( v18 )
    goto LABEL_14;
  v32 = lookup_loc_converter();
  v19 = v36;
  v20 = v39;
  v22 = v32;
  if ( !v32 )
    return 0;
  v21 = 0;
LABEL_14:
  v40 = (__int64 (__fastcall *)(__m128i *, __int64, __int64))v22;
  v6 = (__int64)&v41;
  v42.m128i_i64[0] = 0;
  v42.m128i_i64[1] = -1;
  v43 = 0;
  v44 = nullptr;
  v37 = v21;
  v41 = 0;
  if ( v19 )
  {
    result = ((__int64 (__fastcall *)(__m128i *, __int64, __int64, _QWORD))v20)(&v41, a3, v5, (unsigned int)v7);
    v23 = v37;
    v24 = v40;
  }
  else
  {
    result = v20(&v41, a3, v5);
    v24 = v40;
    v23 = v37;
  }
  if ( (_DWORD)result == 1 )
    goto LABEL_42;
  if ( v44 )
  {
    v35 = result;
    qfree();
    return v35;
  }
  return result;
}

