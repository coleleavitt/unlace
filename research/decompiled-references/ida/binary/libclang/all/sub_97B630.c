void __fastcall sub_97B630(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r12
  const __m128i *v4; // rax
  __int64 v5; // r12
  const __m128i *v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdi
  unsigned __int8 **v9; // rbp
  __int64 (*v10)(void); // rax
  _QWORD **v11; // rdi
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdi
  __int64 (__fastcall *v17)(__int64); // rax
  _QWORD **v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  char *v23; // rdx
  size_t v24; // rax
  __int64 v25; // [rsp+8h] [rbp-F0h] BYREF
  __m128i v26; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+20h] [rbp-D8h]
  __m128i v28; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-B8h]
  void *v30; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A0h]
  char v32[16]; // [rsp+60h] [rbp-98h] BYREF
  void *v33; // [rsp+70h] [rbp-88h] BYREF
  size_t v34; // [rsp+78h] [rbp-80h]
  char v35[16]; // [rsp+80h] [rbp-78h] BYREF
  _DWORD v36[26]; // [rsp+90h] [rbp-68h] BYREF

  v3 = a1[23];
  v4 = (const __m128i *)sub_A1A5A0(v3, 24);
  v28 = _mm_loadu_si128(v4);
  v29 = v4[1].m128i_i64[0];
  sub_A1A5E0(v3, 24);
  v5 = a1[23];
  v6 = (const __m128i *)sub_A1A5A0(v5, 24);
  v26 = _mm_loadu_si128(v6);
  v27 = v6[1].m128i_i64[0];
  sub_A1A5E0(v5, 24);
  v25 = sub_A16CE0(a1[25], a2);
  v7 = sub_A2E0C0(a1, &v25, 2271, 0);
  v8 = (_QWORD *)a1[3];
  v9 = (unsigned __int8 **)v7;
  v10 = *(__int64 (**)(void))(*v8 + 104LL);
  if ( (char *)v10 != (char *)sub_8D7E60
    || (v11 = (_QWORD **)v8[3], v10 = (__int64 (*)(void))(*v11)[13], (char *)v10 != (char *)sub_8D7E60) )
  {
    v12 = v10();
    if ( v26.m128i_i64[0] )
      goto LABEL_4;
LABEL_30:
    strcpy(v35, "nullptr");
    v33 = v35;
    v34 = 7;
    goto LABEL_8;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v11[3] + 104LL))(v11[3]);
  if ( !v26.m128i_i64[0] )
    goto LABEL_30;
LABEL_4:
  sub_97DB00(v36, &v26, v12);
  v15 = *(_QWORD *)(v26.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v26.m128i_i64[0] + 8) & 4) != 0 )
    v15 = 0;
  sub_6A3290((__int64)&v33, (__int64)v36, v12, *(_QWORD *)(v15 + 48), v13, v14);
  if ( v36[0] > 1u )
    sub_69F740((__int64)v36);
LABEL_8:
  if ( v9 )
    sub_838D50(v9, v33, v34);
  v16 = (_QWORD *)a1[3];
  v17 = *(__int64 (__fastcall **)(__int64))(*v16 + 104LL);
  if ( v17 == sub_8D7E60 )
  {
    v18 = (_QWORD **)v16[3];
    v17 = (__int64 (__fastcall *)(__int64))(*v18)[13];
    if ( v17 == sub_8D7E60 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD *))(*v18[3] + 104LL))(v18[3]);
      if ( v28.m128i_i64[0] )
        goto LABEL_13;
LABEL_27:
      strcpy(v32, "nullptr");
      v30 = v32;
      v31 = 7;
      if ( !v9 )
        goto LABEL_21;
      v24 = 7;
      v23 = v32;
      goto LABEL_18;
    }
  }
  v19 = ((__int64 (*)(void))v17)();
  if ( !v28.m128i_i64[0] )
    goto LABEL_27;
LABEL_13:
  sub_97DB00(v36, &v28, v19);
  v22 = *(_QWORD *)(v28.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v28.m128i_i64[0] + 8) & 4) != 0 )
    v22 = 0;
  sub_6A3290((__int64)&v30, (__int64)v36, v19, *(_QWORD *)(v22 + 48), v20, v21);
  if ( v36[0] <= 1u )
  {
    if ( !v9 )
      goto LABEL_19;
    goto LABEL_17;
  }
  sub_69F740((__int64)v36);
  if ( v9 )
  {
LABEL_17:
    v23 = (char *)v30;
    v24 = v31;
LABEL_18:
    sub_838D50(v9, v23, v24);
  }
LABEL_19:
  if ( v30 != v32 )
    operator delete(v30, *(_QWORD *)v32 + 1LL);
LABEL_21:
  if ( v33 != v35 )
    operator delete(v33, *(_QWORD *)v35 + 1LL);
}

