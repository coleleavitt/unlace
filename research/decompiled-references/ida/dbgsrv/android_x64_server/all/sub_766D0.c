/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_766D0
// Address: 0x00000000000766D0

//----- (00000000000766D0) ----------------------------------------------------
__int64 __fastcall sub_766D0(
        _QWORD *a1,
        const char *a2,
        int a3,
        int a4,
        char *a5,
        char *a6,
        double a7,
        __m128 a8,
        __int64 a9)
{
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  _DWORD *v15; // rax
  _QWORD *v16; // r15
  __int64 v17; // rbx
  _QWORD *v18; // r13
  _QWORD *v19; // rdi
  char *v20; // r15
  size_t v21; // rbx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  size_t v25; // rbx
  __int64 v26; // rbp
  char *v27; // rdi
  const char *v28; // rax
  char v29; // al
  const char *v30; // rdx
  const char *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r14
  unsigned __int64 v34; // rbp
  _BYTE *v35; // rax
  const char *v36; // r14
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rbp
  _BYTE *v40; // rax
  const char *v41; // rsi
  void *v42; // rdi
  size_t v43; // rdx
  size_t v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rbp
  unsigned __int64 v47; // r15
  _BYTE *v48; // rax
  __int64 v51; // [rsp+8h] [rbp-D0h]
  char v52[8]; // [rsp+20h] [rbp-B8h] BYREF
  void *ptr[2]; // [rsp+28h] [rbp-B0h]
  __int64 v54; // [rsp+38h] [rbp-A0h]
  char v55[8]; // [rsp+40h] [rbp-98h] BYREF
  char *s[2]; // [rsp+48h] [rbp-90h]
  __int64 v57; // [rsp+58h] [rbp-80h]
  char v58[8]; // [rsp+60h] [rbp-78h] BYREF
  void *v59[2]; // [rsp+68h] [rbp-70h]
  __int64 v60; // [rsp+78h] [rbp-60h]
  char v61[8]; // [rsp+80h] [rbp-58h] BYREF
  void *v62[2]; // [rsp+88h] [rbp-50h]
  __int64 v63; // [rsp+98h] [rbp-40h]
  unsigned __int64 v64; // [rsp+A0h] [rbp-38h]

  v64 = __readfsqword(0x28u);
  v13 = a1 + 9;
  v14 = a1[10];
  if ( a1[11] >= (unsigned __int64)(v14 + 1) )
  {
    v15 = (_DWORD *)*v13;
  }
  else
  {
    v15 = qvector_reserve((__int64)v13, (char *)a1[9], v14 + 1, 4u);
    a1[9] = v15;
    v14 = a1[10];
  }
  v15[v14] = 0;
  v16 = a1;
  ++a1[10];
  if ( a4 > 0 )
  {
    v17 = (unsigned int)a4;
    do
    {
      sub_688B0((__int64)(v16 + 3), a5, a7, a8);
      a5 += 32;
      --v17;
    }
    while ( v17 );
  }
  v18 = v16;
  v19 = v16;
  v20 = a6;
  LODWORD(v21) = sub_77C10(v19, a6, a2, a3, a7, a8);
  if ( !(_BYTE)v21 )
  {
    if ( !a9 )
      goto LABEL_79;
    v51 = 32LL * v18[4] + v18[3] - 32;
    v24 = __strlen_chk("Runtime error", 14);
    if ( v24 )
    {
      v25 = v24;
      v26 = v24 + 1;
      if ( *(_QWORD *)(a9 + 16) >= (unsigned __int64)(v24 + 1) )
      {
        v27 = *(char **)a9;
      }
      else
      {
        v27 = (char *)qvector_reserve(a9, *(char **)a9, v24 + 1, 1u);
        *(_QWORD *)a9 = v27;
      }
      *(_QWORD *)(a9 + 8) = v26;
      memmove(v27, "Runtime error", v25);
      *(_BYTE *)(*(_QWORD *)a9 + v25) = 0;
    }
    else
    {
      *(_QWORD *)(a9 + 8) = 0;
    }
    v61[0] = 2;
    *(_OWORD *)v62 = 0;
    v63 = 0;
    v58[0] = 2;
    *(_OWORD *)v59 = 0;
    v60 = 0;
    get_idcv_attr(v58, v51, "line", 0, 0.0, a8);
    get_idcv_attr(v61, v51, "file", 0, 0.0, a8);
    if ( v58[0] == 2 && (__int64)v59[0] > 0 && v61[0] == 7 )
    {
      if ( v62[1] )
        v28 = (const char *)v62[0];
      else
        v28 = s1;
      v31 = "<unknown>";
      if ( *v28 )
        v31 = v28;
      sub_4E030(a9, " on %s:%d", v31, LODWORD(v59[0]));
      goto LABEL_40;
    }
    v55[0] = 2;
    *(_OWORD *)s = 0;
    v57 = 0;
    get_idcv_attr(v55, v51, "func", 0, 0.0, a8);
    v29 = v55[0];
    if ( v55[0] == 7 )
    {
      if ( s[1] < (_BYTE *)&dword_0 + 2 )
      {
LABEL_37:
        if ( s[0] )
        {
          s[1] = nullptr;
          qfree(s[0]);
          s[0] = nullptr;
          v57 = 0;
        }
LABEL_40:
        v21 = __strlen_chk(": ", 3);
        v32 = *(_QWORD *)(a9 + 8);
        v33 = v32 - 1;
        if ( !v32 )
          v33 = 0;
        v34 = v33 + v21 + 1;
        if ( *(_QWORD *)(a9 + 16) >= v34 )
        {
          v35 = *(_BYTE **)a9;
        }
        else
        {
          v35 = qvector_reserve(a9, *(char **)a9, v33 + v21 + 1, 1u);
          *(_QWORD *)a9 = v35;
        }
        *(_QWORD *)(a9 + 8) = v34;
        v35[v33 + v21] = 0;
        memmove((void *)(*(_QWORD *)a9 + v33), ": ", v21);
        v55[0] = 2;
        a7 = 0.0;
        *(_OWORD *)s = 0;
        v57 = 0;
        get_idcv_attr(v55, v51, "description", 0, 0.0, a8);
        if ( v55[0] == 7 )
        {
          if ( s[1] )
          {
            v36 = s[0];
            if ( !s[0] )
            {
LABEL_63:
              if ( v55[0] == 5 )
              {
                sub_72DD0((char **)s[0], v55, 0.0, a8);
                v20 = a6;
                LOBYTE(v21) = 0;
              }
              else
              {
                v20 = a6;
                LOBYTE(v21) = 0;
                if ( v55[0] == 7 && s[0] )
                {
                  s[1] = nullptr;
                  qfree(s[0]);
                  s[0] = nullptr;
                  v57 = 0;
                }
              }
              if ( v58[0] == 5 )
              {
                sub_72DD0((char **)v59[0], v58, 0.0, a8);
              }
              else if ( v58[0] == 7 && v59[0] )
              {
                v59[1] = nullptr;
                qfree(v59[0]);
                v59[0] = nullptr;
                v60 = 0;
              }
              if ( v61[0] == 5 )
              {
                sub_72DD0((char **)v62[0], v61, 0.0, a8);
              }
              else if ( v61[0] == 7 && v62[0] )
              {
                v62[1] = nullptr;
                qfree(v62[0]);
                v62[0] = nullptr;
                v63 = 0;
                if ( !v20 )
                  goto LABEL_81;
LABEL_80:
                sub_7C770(v18 + 3, v20, a7, a8);
                goto LABEL_81;
              }
LABEL_79:
              if ( !v20 )
                goto LABEL_81;
              goto LABEL_80;
            }
          }
          else
          {
            v36 = s1;
          }
          v44 = strlen(v36);
          v45 = *(_QWORD *)(a9 + 8);
          v46 = v45 - 1;
          if ( !v45 )
            v46 = 0;
          v21 = v44;
          v47 = v44 + v46 + 1;
          if ( *(_QWORD *)(a9 + 16) >= v47 )
          {
            v48 = *(_BYTE **)a9;
          }
          else
          {
            v48 = qvector_reserve(a9, *(char **)a9, v44 + v46 + 1, 1u);
            *(_QWORD *)a9 = v48;
          }
          *(_QWORD *)(a9 + 8) = v47;
          v48[v46 + v21] = 0;
          v42 = (void *)(*(_QWORD *)a9 + v46);
          v41 = v36;
          v43 = v21;
        }
        else
        {
          v37 = __strlen_chk("Unhandled exception", 20);
          v38 = *(_QWORD *)(a9 + 8);
          v39 = v38 - 1;
          if ( !v38 )
            v39 = 0;
          v21 = v37 + v39 + 1;
          if ( *(_QWORD *)(a9 + 16) >= v21 )
          {
            v40 = *(_BYTE **)a9;
          }
          else
          {
            v40 = qvector_reserve(a9, *(char **)a9, v37 + v39 + 1, 1u);
            *(_QWORD *)a9 = v40;
          }
          *(_QWORD *)(a9 + 8) = v21;
          v40[v39 + v37] = 0;
          v41 = "Unhandled exception";
          v42 = (void *)(*(_QWORD *)a9 + v39);
          v43 = v37;
        }
        memmove(v42, v41, v43);
        goto LABEL_63;
      }
      v52[0] = 2;
      *(_OWORD *)ptr = 0;
      v54 = 0;
      get_idcv_attr(v52, v51, "pc", 0, 0.0, a8);
      if ( s[1] )
        v30 = s[0];
      else
        v30 = s1;
      sub_4E030(a9, " at %s+0x%a", v30, 0.0);
      if ( v52[0] == 5 )
      {
        sub_72DD0((char **)ptr[0], v52, 0.0, a8);
      }
      else if ( v52[0] == 7 && ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        v54 = 0;
      }
      v29 = v55[0];
    }
    if ( v29 == 5 )
    {
      sub_72DD0((char **)s[0], v55, 0.0, a8);
      goto LABEL_40;
    }
    if ( v29 != 7 )
      goto LABEL_40;
    goto LABEL_37;
  }
LABEL_81:
  if ( *(_BYTE *)(v18[1] + 124LL) )
  {
    ((void (__fastcall *)(int, int, _DWORD, unsigned int, int, int))callui)(24, 10, 0, (unsigned int)&callui, v22, v23);
    *(_BYTE *)(v18[1] + 124LL) = 0;
  }
  return (unsigned int)v21;
}
// 76D0B: variable 'v22' is possibly undefined
// 76D0B: variable 'v23' is possibly undefined
// 0: using guessed type int dword_0;
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
