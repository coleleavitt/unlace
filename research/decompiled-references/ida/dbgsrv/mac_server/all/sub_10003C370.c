/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003C370
// Address: 0x000000010003C370

//----- (000000010003C370) ----------------------------------------------------
__int64 __fastcall sub_10003C370(
        __int64 a1,
        const char *a2,
        unsigned int a3,
        int a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        void **a7)
{
  __int64 v9; // r14
  void *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // r14d
  __int64 v17; // r13
  char *v18; // rax
  const char *v19; // rax
  unsigned __int8 v20; // al
  const char *v21; // rdx
  const char *v22; // rdx
  char *v23; // rax
  char *v24; // rbx
  bool v25; // cf
  char *v26; // rax
  void *v27; // rax
  const char *v28; // rbx
  char *v29; // rax
  char *v30; // rbx
  char *v31; // rax
  void *v32; // rax
  char *v33; // rax
  size_t v34; // r14
  char *v35; // rax
  char *v36; // r15
  char *v37; // rax
  void *v38; // rax
  unsigned __int64 v39; // r13
  unsigned __int8 *v41; // [rsp+8h] [rbp-C8h]
  unsigned __int8 v42[8]; // [rsp+20h] [rbp-B0h] BYREF
  void *__p[2]; // [rsp+28h] [rbp-A8h]
  __int64 v44; // [rsp+38h] [rbp-98h]
  unsigned __int8 v45[8]; // [rsp+40h] [rbp-90h] BYREF
  char *__s[2]; // [rsp+48h] [rbp-88h]
  __int64 v47; // [rsp+58h] [rbp-78h]
  unsigned __int8 v48[8]; // [rsp+60h] [rbp-70h] BYREF
  void *v49[2]; // [rsp+68h] [rbp-68h]
  __int64 v50; // [rsp+78h] [rbp-58h]
  unsigned __int8 v51[8]; // [rsp+80h] [rbp-50h] BYREF
  void *v52[2]; // [rsp+88h] [rbp-48h]
  __int64 v53; // [rsp+98h] [rbp-38h]

  LODWORD(v9) = a4;
  v11 = *(void **)(a1 + 72);
  v12 = *(_QWORD *)(a1 + 80);
  if ( *(_QWORD *)(a1 + 88) < (unsigned __int64)(v12 + 1) )
  {
    v11 = qvector_reserve(a1 + 72, v11, v12 + 1, 4u);
    *(_QWORD *)(a1 + 72) = v11;
    v12 = *(_QWORD *)(a1 + 80);
  }
  v41 = a6;
  *((_DWORD *)v11 + v12) = 0;
  ++*(_QWORD *)(a1 + 80);
  if ( (int)v9 > 0 )
  {
    v9 = (unsigned int)v9;
    do
    {
      sub_10002E260((char **)(a1 + 24), a5);
      a5 += 32;
      --v9;
    }
    while ( v9 );
  }
  v13 = a1;
  v16 = sub_10003D3F0((_QWORD *)a1, v41, a2, a3);
  if ( !(_BYTE)v16 )
  {
    if ( !a7 )
    {
LABEL_70:
      v16 = 0;
      if ( v41 )
      {
        sub_1000403B0((_QWORD *)(v13 + 24), v41);
        v13 = a1;
      }
      goto LABEL_72;
    }
    v17 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32;
    v18 = (char *)*a7;
    if ( (unsigned __int64)a7[2] <= 0xD )
    {
      v18 = (char *)qvector_reserve((__int64)a7, *a7, 0xEu, 1u);
      *a7 = v18;
    }
    a7[1] = (void *)14;
    qmemcpy(v18, "Runtime error", 13);
    *((_BYTE *)*a7 + 13) = 0;
    v51[0] = 2;
    *(_OWORD *)v52 = 0;
    v53 = 0;
    v48[0] = 2;
    *(_OWORD *)v49 = 0;
    v50 = 0;
    get_idcv_attr(v48, v17, "line", 0);
    get_idcv_attr(v51, v17, "file", 0);
    if ( v48[0] == 2 && (__int64)v49[0] > 0 && v51[0] == 7 )
    {
      if ( v52[1] )
        v19 = (const char *)v52[0];
      else
        v19 = _s1;
      v22 = "<unknown>";
      if ( *v19 )
        v22 = v19;
      sub_10002DCA0((__int64)a7, " on %s:%d", v22, LODWORD(v49[0]));
      goto LABEL_35;
    }
    v45[0] = 2;
    *(_OWORD *)__s = 0;
    v47 = 0;
    get_idcv_attr(v45, v17, "func", 0);
    v20 = v45[0];
    if ( v45[0] == 7 )
    {
      if ( __s[1] < (char *)2 )
      {
LABEL_32:
        if ( __s[0] )
        {
          __s[1] = nullptr;
          qfree(__s[0]);
        }
LABEL_35:
        v23 = (char *)a7[1];
        v24 = nullptr;
        v25 = v23 == nullptr;
        v26 = v23 - 1;
        if ( !v25 )
          v24 = v26;
        v27 = *a7;
        if ( a7[2] < v24 + 3 )
        {
          v27 = qvector_reserve((__int64)a7, *a7, (unsigned __int64)(v24 + 3), 1u);
          *a7 = v27;
        }
        a7[1] = v24 + 3;
        v24[(_QWORD)v27 + 2] = 0;
        *(_WORD *)&v24[(_QWORD)*a7] = 8250;
        v45[0] = 2;
        *(_OWORD *)__s = 0;
        v47 = 0;
        get_idcv_attr(v45, v17, "description", 0);
        if ( v45[0] != 7 )
        {
          v29 = (char *)a7[1];
          v30 = nullptr;
          v25 = v29 == nullptr;
          v31 = v29 - 1;
          if ( !v25 )
            v30 = v31;
          v32 = *a7;
          if ( a7[2] < v30 + 20 )
          {
            v32 = qvector_reserve((__int64)a7, *a7, (unsigned __int64)(v30 + 20), 1u);
            *a7 = v32;
          }
          a7[1] = v30 + 20;
          v30[(_QWORD)v32 + 19] = 0;
          v33 = (char *)*a7;
          *(_OWORD *)&v30[(_QWORD)v33] = *(_OWORD *)"Unhandled exception";
          *(_DWORD *)&v30[(_QWORD)v33 + 15] = 1852795252;
          goto LABEL_54;
        }
        if ( __s[1] )
        {
          v28 = __s[0];
          if ( !__s[0] )
          {
LABEL_54:
            if ( v45[0] == 5 )
            {
              sub_1000380B0((unsigned __int8 **)__s[0], v45);
            }
            else if ( v45[0] == 7 && __s[0] )
            {
              __s[1] = nullptr;
              qfree(__s[0]);
            }
            if ( v48[0] == 5 )
            {
              sub_1000380B0((unsigned __int8 **)v49[0], v48);
            }
            else if ( v48[0] == 7 && v49[0] )
            {
              v49[1] = nullptr;
              qfree(v49[0]);
            }
            if ( v51[0] == 5 )
            {
              sub_1000380B0((unsigned __int8 **)v52[0], v51);
            }
            else if ( v51[0] == 7 && v52[0] )
            {
              v52[1] = nullptr;
              qfree(v52[0]);
            }
            v13 = a1;
            goto LABEL_70;
          }
        }
        else
        {
          v28 = _s1;
        }
        v34 = strlen(v28);
        v35 = (char *)a7[1];
        v36 = nullptr;
        v25 = v35 == nullptr;
        v37 = v35 - 1;
        if ( !v25 )
          v36 = v37;
        v38 = *a7;
        v39 = (unsigned __int64)&v36[v34 + 1];
        if ( (unsigned __int64)a7[2] < v39 )
        {
          v38 = qvector_reserve((__int64)a7, *a7, (unsigned __int64)&v36[v34 + 1], 1u);
          *a7 = v38;
        }
        a7[1] = (void *)v39;
        v36[v34 + (_QWORD)v38] = 0;
        memmove(&v36[(_QWORD)*a7], v28, v34);
        goto LABEL_54;
      }
      v42[0] = 2;
      *(_OWORD *)__p = 0;
      v44 = 0;
      get_idcv_attr(v42, v17, "pc", 0);
      if ( __s[1] )
        v21 = __s[0];
      else
        v21 = _s1;
      sub_10002DCA0((__int64)a7, " at %s+0x%a", v21, 0.0);
      if ( v42[0] == 5 )
      {
        sub_1000380B0((unsigned __int8 **)__p[0], v42);
      }
      else if ( v42[0] == 7 && __p[0] )
      {
        __p[1] = nullptr;
        qfree(__p[0]);
      }
      v20 = v45[0];
    }
    if ( v20 == 5 )
    {
      sub_1000380B0((unsigned __int8 **)__s[0], v45);
      goto LABEL_35;
    }
    if ( v20 != 7 )
      goto LABEL_35;
    goto LABEL_32;
  }
LABEL_72:
  if ( *(_BYTE *)(*(_QWORD *)(v13 + 8) + 124LL) == 1 )
  {
    ((void (__fastcall *)(int, int, _DWORD, unsigned int, int, int))callui)(24, 10, 0, (unsigned int)&callui, v14, v15);
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 124LL) = 0;
  }
  return v16;
}
// 10003C8E4: variable 'v14' is possibly undefined
// 10003C8E4: variable 'v15' is possibly undefined
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
