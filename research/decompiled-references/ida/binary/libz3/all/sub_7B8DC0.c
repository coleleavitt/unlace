size_t __fastcall sub_7B8DC0(
        __int64 a1,
        unsigned int a2,
        int **a3,
        unsigned int a4,
        unsigned __int8 a5,
        __int64 a6,
        __m128i a7)
{
  int *v7; // rax
  char v8; // r12
  int *i; // rcx
  bool v10; // dl
  int *v11; // rbx
  void *v12; // r15
  int v13; // eax
  void *v14; // r15
  void *v15; // r15
  char v16; // al
  unsigned int v17; // ebx
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, __int64, __int64, _QWORD *, __int64, __int64); // r8
  int v21; // eax
  size_t v22; // rbx
  void *v23; // rbp
  int *v25; // r13
  int *v26; // rbx
  __int64 *v27; // r14
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 *v31; // rax
  __int64 *v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rdi
  int v35; // eax
  void (__fastcall *v36)(__int64, __int64, __int64 *, __int64 *); // r8
  __int64 *j; // r12
  unsigned int v38; // eax
  int *v39; // [rsp+8h] [rbp-E0h]
  int v45; // [rsp+4Ch] [rbp-9Ch] BYREF
  _DWORD v46[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v47; // [rsp+58h] [rbp-90h]
  __int64 v48[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v49; // [rsp+70h] [rbp-78h] BYREF
  __int64 v50; // [rsp+78h] [rbp-70h]
  _QWORD v51[2]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v52; // [rsp+90h] [rbp-58h] BYREF
  __int64 v53; // [rsp+98h] [rbp-50h]
  __int64 v54; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-40h]

  v7 = *a3;
  if ( *a3 )
  {
    v8 = 1;
    for ( i = &v7[2 * *(v7 - 1)]; i != v7; v8 &= v10 )
    {
      v10 = *v7 == 1;
      v7 += 2;
    }
  }
  else
  {
    v8 = 1;
  }
  if ( a4 )
  {
    v49 = 0;
    v50 = 0;
    v51[0] = 1;
    v51[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v51);
    BYTE4(v51[0]) &= ~1u;
    LODWORD(v51[0]) = 1;
    v11 = *a3;
    if ( *a3 )
    {
      v39 = &v11[2 * *(v11 - 1)];
      while ( v39 != v11 )
      {
        v13 = *v11;
        v53 = 0;
        BYTE4(v52) &= 0xFCu;
        v54 = 1;
        v55 = 0;
        LODWORD(v52) = v13;
        sub_182CBA0(qword_1C7F2C0, &v54);
        v14 = qword_1C7F2C0;
        LODWORD(v54) = 1;
        BYTE4(v54) &= ~1u;
        if ( (_DWORD)v52 )
        {
          if ( (_DWORD)v49 )
          {
            if ( (v51[0] & 0x100000000LL) == 0 && LODWORD(v51[0]) == 1 )
            {
              sub_1831A80(qword_1C7F2C0, &v49, &v52, &v49);
              sub_182CBA0(v14, v51);
              BYTE4(v51[0]) &= ~1u;
              LODWORD(v51[0]) = 1;
            }
            else
            {
              sub_1851D20(qword_1C7F2C0, &v49, &v52, &v49);
            }
          }
          else
          {
            if ( (v52 & 0x100000000LL) != 0 )
            {
              sub_182C690(qword_1C7F2C0, &v49, &v52);
            }
            else
            {
              BYTE4(v49) &= ~1u;
              LODWORD(v49) = v52;
            }
            if ( (v54 & 0x100000000LL) != 0 )
            {
              sub_182C690(v14, v51, &v54);
            }
            else
            {
              BYTE4(v51[0]) &= ~1u;
              LODWORD(v51[0]) = v54;
            }
          }
        }
        else
        {
          if ( (v49 & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v49, &v49);
          else
            BYTE4(v49) &= ~1u;
          if ( (v51[0] & 0x100000000LL) != 0 )
            sub_182C690(v14, v51, v51);
          else
            BYTE4(v51[0]) &= ~1u;
        }
        v12 = qword_1C7F2C0;
        v11 += 2;
        sub_182CBA0(qword_1C7F2C0, &v52);
        sub_182CBA0(v12, &v54);
      }
    }
    v53 = 0;
    BYTE4(v52) &= 0xFCu;
    v54 = 1;
    v55 = 0;
    LODWORD(v52) = a4;
    sub_182CBA0(qword_1C7F2C0, &v54);
    v15 = qword_1C7F2C0;
    LODWORD(v54) = 1;
    BYTE4(v54) &= ~1u;
    if ( (v51[0] & 0x100000000LL) != 0 || LODWORD(v51[0]) != 1 )
    {
      v16 = sub_1848D40(qword_1C7F2C0, &v49, &v52);
      v15 = qword_1C7F2C0;
      LOBYTE(v17) = v16;
    }
    else if ( (v49 & 0x100000000LL) != 0 || (v52 & 0x100000000LL) != 0 )
    {
      v38 = sub_182C7B0(qword_1C7F2C0, &v49, &v52);
      v15 = qword_1C7F2C0;
      v17 = v38 >> 31;
    }
    else
    {
      LOBYTE(v17) = (int)v49 < (int)v52;
    }
    sub_182CBA0(v15, &v52);
    sub_182CBA0(v15, &v54);
    if ( (_BYTE)v17 )
    {
      v19 = *(_QWORD *)(a1 + 24);
      v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, __int64, __int64))(*(_QWORD *)v19 + 16LL);
      v21 = *(_DWORD *)(a1 + 12);
      if ( a2 == -2 )
      {
        LODWORD(v52) = 1;
        HIDWORD(v52) = v21;
        v53 = 0;
        if ( v20 == sub_788610 )
        {
          HIDWORD(v48[0]) = v21;
          LODWORD(v48[0]) = 1;
          v48[1] = 0;
          sub_11C4C20(v19, 0, 0, v48, v20, v18);
        }
        else
        {
          ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64 *))v20)(v19, 0, 0, &v52);
        }
      }
      else
      {
        v46[1] = *(_DWORD *)(a1 + 12);
        v46[0] = 1;
        v47 = 0;
        v45 = a2 ^ 1;
        if ( v20 == sub_788610 )
        {
          LODWORD(v52) = 1;
          HIDWORD(v52) = v21;
          v53 = 0;
          sub_11C4C20(v19, 1, &v45, &v52, v20, v18);
        }
        else
        {
          ((void (__fastcall *)(__int64, __int64, int *, _DWORD *))v20)(v19, 1, &v45, v46);
        }
      }
      v22 = 0;
      goto LABEL_29;
    }
    if ( a5 )
      goto LABEL_37;
    v25 = *a3;
    if ( *a3 )
    {
      v26 = &v25[2 * *(v25 - 1)];
      if ( v26 != v25 )
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(
            *(_QWORD *)(a1 + 24),
            (unsigned int)v25[1] >> 1);
          v25 += 2;
        }
        while ( v25 != v26 );
LABEL_37:
        v27 = (__int64 *)*a3;
        if ( a4 != 1 && !v8 )
        {
          v28 = a1 + 224;
          if ( !v27 )
          {
            v30 = 88;
            goto LABEL_42;
          }
          v29 = 8LL * *((unsigned int *)v27 - 1);
LABEL_41:
          v30 = v29 + 88;
LABEL_42:
          v31 = (__int64 *)sub_17E9C90(v28, v30);
          v22 = (size_t)(v31 + 1);
          v32 = v31;
          v33 = *(unsigned int *)(a1 + 780);
          *v31 = a1;
          *(_DWORD *)(a1 + 780) = v33 + 1;
          *(double *)a7.m128i_i64 = sub_81B000(v31 + 1, v33, a2, a3, a4);
          *((_BYTE *)v32 + 56) = a5;
          sub_7B86A0((unsigned int *)a1, v22, a7);
LABEL_29:
          v23 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v49);
          sub_182CBA0(v23, v51);
          return v22;
        }
        v48[0] = 0;
        if ( v27 )
        {
          for ( j = &v27[*((unsigned int *)v27 - 1)]; j != v27; ++v27 )
          {
            v52 = *v27;
            sub_7B4F60(v48, (unsigned int *)&v52 + 1);
          }
        }
LABEL_56:
        v22 = sub_7B8AC0(a1, a2, v48, a4, a5, a7);
        if ( v48[0] )
          sub_186B220((void *)(v48[0] - 8));
        goto LABEL_29;
      }
      if ( a4 != 1 )
      {
        v29 = 0;
        v28 = a1 + 224;
        if ( !v8 )
          goto LABEL_41;
      }
    }
    else if ( a4 != 1 )
    {
      v30 = 88;
      v28 = a1 + 224;
      if ( !v8 )
        goto LABEL_42;
    }
    v48[0] = 0;
    goto LABEL_56;
  }
  if ( a2 != -2 )
  {
    LODWORD(v48[0]) = a2;
    v34 = *(_QWORD *)(a1 + 24);
    v35 = *(_DWORD *)(a1 + 12);
    v36 = *(void (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(*(_QWORD *)v34 + 16LL);
    LODWORD(v49) = 1;
    HIDWORD(v49) = v35;
    v50 = 0;
    if ( (char *)v36 != (char *)sub_788610 )
    {
      v22 = 0;
      v36(v34, 1, v48, &v49);
      return v22;
    }
    LODWORD(v52) = 1;
    HIDWORD(v52) = v35;
    v53 = 0;
    sub_11C4C20(v34, 1, v48, &v52, v36, a6);
  }
  return 0;
}

