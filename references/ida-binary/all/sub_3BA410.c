__int64 __fastcall sub_3BA410(__int64 *a1, unsigned __int64 *a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rdi
  char v7; // bp
  char v8; // bp
  unsigned __int64 v9; // r9
  __int64 *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  const void *v13; // r13
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v17; // r15
  const char *v18; // rsi
  __int64 (__fastcall *v19)(__int64 *); // rax
  __int64 *v20; // rax
  __int64 *v21; // r11
  __int64 *v22; // r14
  const char *v23; // r13
  unsigned __int64 v24; // r9
  unsigned __int64 *v25; // rdx
  __int64 (__fastcall *v26)(__int64 *, const char *); // rax
  __int64 (__fastcall *v28)(__int64 *, const char *); // rax
  double v30; // xmm0_8
  __int64 (__fastcall *v31)(__int64, double); // rax
  _QWORD *v32; // rax
  unsigned __int64 v33; // r9
  __int64 *v34; // r11
  _QWORD *v35; // r15
  unsigned __int64 v36; // rax
  unsigned __int64 *v37; // rdx
  __int64 *v38; // r12
  __int64 (__fastcall *v39)(_QWORD *, const char *); // rax
  __int64 (__fastcall *v41)(_QWORD *, const char *); // rax
  __int64 v43; // rax
  unsigned __int64 v46; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v48; // [rsp+20h] [rbp-98h]
  const char *v49; // [rsp+20h] [rbp-98h]
  unsigned __int64 v50; // [rsp+20h] [rbp-98h]
  unsigned __int64 v51; // [rsp+20h] [rbp-98h]
  __int64 *v52; // [rsp+28h] [rbp-90h]
  unsigned __int64 v53; // [rsp+28h] [rbp-90h]
  unsigned __int64 v54; // [rsp+28h] [rbp-90h]
  __int64 *v55; // [rsp+30h] [rbp-88h]
  __int64 *v56; // [rsp+30h] [rbp-88h]
  __int64 *v57; // [rsp+30h] [rbp-88h]
  unsigned __int64 v58; // [rsp+30h] [rbp-88h]
  __int64 v59; // [rsp+38h] [rbp-80h]
  unsigned __int64 v60; // [rsp+48h] [rbp-70h] BYREF
  __int64 *v61; // [rsp+50h] [rbp-68h] BYREF
  int v62; // [rsp+58h] [rbp-60h]
  __int64 v63; // [rsp+60h] [rbp-58h] BYREF
  int v64; // [rsp+68h] [rbp-50h]
  unsigned __int64 v65; // [rsp+78h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v4 = *a1;
  if ( !*a1 )
    return 0;
  v5 = a1[26];
  v6 = *a1;
  v61 = nullptr;
  v7 = *(_BYTE *)(v5 + 31);
  v62 = 0;
  v63 = 0;
  v8 = v7 & 0xEF;
  v64 = 0;
  v60 = -1;
  if ( !(unsigned __int8)sub_1F07A0(v6, (__int64)&v61, (__int64)&v63, nullptr) )
  {
    v9 = *(_QWORD *)(v5 + 16);
    if ( v9 > 0xFFFFFFFFFFFFFFFDLL )
      return 0;
    if ( v8 != 13 && *(_BYTE *)(v5 + 31) != 12 )
    {
      v60 = *(_QWORD *)(v5 + 16);
      goto LABEL_7;
    }
    v9 = *(_QWORD *)(v5 + 32);
    v60 = v9;
    goto LABEL_6;
  }
  v17 = v63;
  if ( *((_DWORD *)v61 + 3) != *(_DWORD *)(v63 + 12) )
    return 0;
  v18 = (const char *)v61;
  v52 = v61;
  if ( (int)sub_1F0900(v4, v61, v63) > 0 )
    return 0;
  v49 = *(const char **)(v4 + 1000);
  v19 = *(__int64 (__fastcall **)(__int64 *))(*v52 + 16);
  if ( (char *)v19 == (char *)j__tiplace_t__clone )
    v20 = (__int64 *)tiplace_t__clone(v52);
  else
    v20 = (__int64 *)v19(v52);
  v21 = v52;
  v22 = v20;
  v23 = *(const char **)(v4 + 728);
  if ( v8 == 13 )
  {
    v18 = v49;
    (*(void (__fastcall **)(__int64 *, const char *, unsigned __int64 *, _QWORD))(*v20 + 176))(v20, v49, &v60, 0);
    v24 = v60;
    v21 = v52;
  }
  else
  {
    v24 = v20[2];
    v60 = v24;
  }
  v25 = &v60;
  if ( v24 > 0xFFFFFFFFFFFFFFFDLL )
  {
    v55 = v21;
    while ( 1 )
    {
      v18 = (const char *)v22;
      if ( (int)sub_1F0900(v4, v22, v17) > 0 )
        break;
      v18 = v23;
      v26 = *(__int64 (__fastcall **)(__int64 *, const char *))(*v22 + 80);
      if ( (char *)v26 == (char *)j__tiplace_t__ending ? tiplace_t__ending(v22, v23) : (unsigned __int8)v26(v22, v23) )
        break;
      v18 = v23;
      v28 = *(__int64 (__fastcall **)(__int64 *, const char *))(*v22 + 64);
      if ( !((char *)v28 == (char *)j__tiplace_t__next ? tiplace_t__next(v22, v23) : (unsigned __int8)v28(v22, v23)) )
        break;
      if ( v8 == 13 )
      {
        v18 = v49;
        (*(void (__fastcall **)(__int64 *, const char *, unsigned __int64 *, _QWORD))(*v22 + 176))(v22, v49, &v60, 0);
        v24 = v60;
      }
      else
      {
        v24 = v22[2];
        v60 = v24;
      }
      if ( v24 <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v21 = v55;
        goto LABEL_51;
      }
    }
    v24 = v60;
    v21 = v55;
    if ( v60 >= 0xFFFFFFFFFFFFFFFELL )
      v24 = -1;
  }
LABEL_51:
  v56 = v21;
  v53 = v24;
  v30 = qfree(v22, v18, v25);
  v31 = *(__int64 (__fastcall **)(__int64, double))(*(_QWORD *)v17 + 16LL);
  if ( (char *)v31 == (char *)j__tiplace_t__clone )
  {
    v32 = (_QWORD *)tiplace_t__clone(v17);
    v33 = v53;
    v34 = v56;
  }
  else
  {
    v32 = (_QWORD *)v31(v17, v30);
    v34 = v56;
    v33 = v53;
  }
  v35 = v32;
  if ( v8 == 13 )
  {
    v57 = v34;
    v18 = v49;
    v60 = -1;
    v54 = v33;
    (*(void (__fastcall **)(_QWORD *, const char *, unsigned __int64 *, _QWORD, double))(*v32 + 176LL))(
      v32,
      v49,
      &v60,
      0,
      v30);
    v36 = v60;
    v34 = v57;
    v33 = v54;
  }
  else
  {
    v36 = v32[2];
    v60 = v35[2];
  }
  v37 = &v60;
  if ( v36 > 0xFFFFFFFFFFFFFFFDLL )
  {
    v59 = v5;
    v38 = v34;
    v58 = v33;
    while ( 1 )
    {
      v18 = (const char *)v38;
      if ( (int)sub_1F0900(v4, v38, (__int64)v35) > 0 )
        break;
      v18 = v23;
      v39 = *(__int64 (__fastcall **)(_QWORD *, const char *))(*v35 + 72LL);
      if ( (char *)v39 == (char *)j__tiplace_t__beginning
         ? tiplace_t__beginning(v35, v23)
         : (unsigned __int8)v39(v35, v23) )
      {
        break;
      }
      v18 = v23;
      v41 = *(__int64 (__fastcall **)(_QWORD *, const char *))(*v35 + 56LL);
      if ( !((char *)v41 == (char *)j__tiplace_t__prev ? tiplace_t__prev(v35, v23) : (unsigned __int8)v41(v35, v23)) )
        break;
      if ( v8 == 13 )
      {
        v18 = v49;
        (*(void (__fastcall **)(_QWORD *, const char *, unsigned __int64 *, _QWORD))(*v35 + 176LL))(v35, v49, &v60, 0);
        v36 = v60;
      }
      else
      {
        v36 = v35[2];
        v60 = v36;
      }
      if ( v36 <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v33 = v58;
        v5 = v59;
        goto LABEL_73;
      }
    }
    v36 = v60;
    v33 = v58;
    v5 = v59;
    if ( v60 <= 0xFFFFFFFFFFFFFFFDLL )
      goto LABEL_73;
    qfree(v35, v18);
    v9 = v58;
LABEL_6:
    if ( v9 != -1 )
      goto LABEL_7;
    return 0;
  }
LABEL_73:
  v50 = v33;
  if ( v36 == v33 )
  {
    qfree(v35, v18, v37);
    v9 = v50;
LABEL_7:
    if ( a4 && *(_QWORD *)(v5 + 32) != -1 )
    {
      v10 = (__int64 *)(v5 + 240);
      if ( *(_BYTE *)(v5 + 31) != 45 )
      {
        v11 = *(_QWORD *)(v5 + 296);
        v10 = (__int64 *)(v11 + 16);
        if ( !v11 )
          v10 = (__int64 *)(v5 + 64);
      }
      if ( v10 != a4 )
      {
        v12 = v10[1];
        if ( v12 < 2 )
        {
          a4[1] = 0;
        }
        else
        {
          v13 = (const void *)*v10;
          v14 = (void *)*a4;
          if ( a4[2] < v12 )
          {
            v51 = v9;
            v43 = qvector_reserve(a4, *a4, v12, 1);
            v9 = v51;
            *a4 = v43;
            v14 = (void *)v43;
          }
          v48 = v9;
          a4[1] = v12;
          memmove(v14, v13, v12 - 1);
          v9 = v48;
          *(_BYTE *)(*a4 + v12 - 1) = 0;
        }
      }
    }
    v15 = -1;
    goto LABEL_18;
  }
  v46 = v36;
  qfree(v35, v18, v37);
  v9 = v50;
  v15 = v46;
  if ( v50 == -1 )
    return 0;
LABEL_18:
  if ( a2 )
    *a2 = v9;
  if ( a3 )
    *a3 = v15;
  return 1;
}
