__int64 **__fastcall sub_227D8B0(__int64 **a1, __int64 a2, size_t a3, __int64 a4)
{
  void *v7; // rax
  __int64 *v9; // rax
  _QWORD *v10; // r15
  __int64 v11; // rbx
  void *v12; // rsi
  _BYTE *v13; // rdi
  _BYTE *v14; // rdx
  void *v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rdi
  __int64 *v18; // rbp
  _QWORD *v19; // rbx
  bool v20; // zf
  __int64 v21; // rax
  _QWORD *v22; // r15
  _QWORD *i; // rax
  __int64 v24; // rdx
  char *v25; // rsi
  char *v26; // rsi
  unsigned __int64 v27; // rdx
  char v28; // al
  __int64 *v29; // rdi
  __int64 *v30; // rbx
  char *v31; // rsi
  __int64 *v32; // rax
  char *v33; // rsi
  __int64 *v34; // rdi
  char *v35; // rsi
  char *v36; // rsi
  _QWORD *v37; // [rsp+0h] [rbp-138h] BYREF
  _QWORD *v38; // [rsp+8h] [rbp-130h]
  _QWORD *v39; // [rsp+18h] [rbp-120h] BYREF
  __int64 *v40; // [rsp+20h] [rbp-118h] BYREF
  __int64 *v41; // [rsp+28h] [rbp-110h] BYREF
  void *src; // [rsp+30h] [rbp-108h] BYREF
  size_t n; // [rsp+38h] [rbp-100h]
  void *v44[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-E8h]
  char v46; // [rsp+58h] [rbp-E0h]
  int v47; // [rsp+5Ch] [rbp-DCh]
  __int64 v48[5]; // [rsp+60h] [rbp-D8h] BYREF
  int v49; // [rsp+88h] [rbp-B0h]
  char v50; // [rsp+90h] [rbp-A8h]
  _QWORD *v51; // [rsp+A0h] [rbp-98h] BYREF
  size_t v52; // [rsp+A8h] [rbp-90h]
  char *v53; // [rsp+B0h] [rbp-88h]
  char *v54; // [rsp+C0h] [rbp-78h]

  if ( a3 == 1 )
  {
    if ( *(_BYTE *)a2 == 45 )
    {
      v7 = sub_227D600();
      if ( *(_QWORD *)(a4 + 16) )
      {
        (*(void (__fastcall **)(__int64 **, __int64, void *))(a4 + 24))(a1, a4, v7);
        return a1;
      }
LABEL_76:
      std::__throw_bad_function_call();
    }
LABEL_8:
    LOWORD(v54) = 773;
    v51 = (_QWORD *)a2;
    v52 = a3;
    v53 = ".temp-stream-%%%%%%";
    sub_2290390(v48, &v51, 438, 0);
    if ( (v50 & 1) == 0 )
    {
      sub_227D340((__int64)&v51, v49, 0, 0, 0);
      if ( !*(_QWORD *)(a4 + 16) )
        goto LABEL_76;
      (*(void (__fastcall **)(_QWORD **, __int64, _QWORD **))(a4 + 24))(&v39, a4, &v51);
      if ( v39 )
      {
        sub_2290280(&v40, v48);
        v18 = v40;
        if ( v40 )
        {
          v40 = nullptr;
          v19 = v39;
          v39 = nullptr;
          if ( v19 )
          {
            v20 = (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v19 + 48LL))(v19, &unk_2D0AA9B) == 0;
            v21 = *v18;
            if ( v20 )
            {
              v28 = (*(__int64 (__fastcall **)(__int64 *, void *))(v21 + 48))(v18, &unk_2D0AA9B);
              src = v19;
              if ( v28 )
              {
                sub_AEA3D0(v18 + 1, (char *)v18[1], (__int64 *)&src);
                if ( src )
                  (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
                *a1 = v18;
                v29 = v40;
              }
              else
              {
                v41 = v18;
                v30 = (__int64 *)operator new(0x20u);
                v30[1] = 0;
                v30[2] = 0;
                *v30 = (__int64)&off_2BEADB8;
                v30[3] = 0;
                sub_A054C0((__int64)(v30 + 1), nullptr, &src);
                v31 = (char *)v30[2];
                if ( (char *)v30[3] == v31 )
                {
                  sub_A054C0((__int64)(v30 + 1), v31, &v41);
                }
                else
                {
                  v32 = v41;
                  v33 = v31 + 8;
                  v41 = nullptr;
                  *((_QWORD *)v33 - 1) = v32;
                  v30[2] = (__int64)v33;
                }
                v34 = v41;
                *a1 = v30;
                if ( v34 )
                  (*(void (__fastcall **)(__int64 *))(*v34 + 8))(v34);
                if ( src )
                  (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
                v29 = v40;
              }
            }
            else
            {
              if ( (*(unsigned __int8 (__fastcall **)(__int64 *, void *))(v21 + 48))(v18, &unk_2D0AA9B) )
              {
                v22 = (_QWORD *)v18[2];
                v38 = v19 + 1;
                for ( i = (_QWORD *)v18[1]; v22 != i; ++i )
                {
                  v26 = (char *)v19[2];
                  if ( v26 == (char *)v19[3] )
                  {
                    v37 = i;
                    sub_A054C0((__int64)v38, v26, i);
                    i = v37;
                  }
                  else
                  {
                    v24 = *i;
                    v25 = v26 + 8;
                    *i = 0;
                    *((_QWORD *)v25 - 1) = v24;
                    v19[2] = v25;
                  }
                }
                (*(void (__fastcall **)(__int64 *))(*v18 + 8))(v18);
              }
              else
              {
                src = v18;
                v35 = (char *)v19[2];
                if ( v35 == (char *)v19[3] )
                {
                  sub_A054C0((__int64)(v19 + 1), v35, &src);
                }
                else
                {
                  src = nullptr;
                  v36 = v35 + 8;
                  *((_QWORD *)v36 - 1) = v18;
                  v19[2] = v36;
                }
                if ( src )
                  (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
              }
              *a1 = v19;
              v29 = v40;
            }
            if ( v29 )
              (*(void (__fastcall **)(__int64 *))(*v29 + 8))(v29);
          }
          else
          {
            *a1 = v18;
          }
          if ( v39 )
            (*(void (__fastcall **)(_QWORD *))(*v39 + 8LL))(v39);
        }
        else
        {
          *a1 = v39;
        }
      }
      else
      {
        if ( v54 != v53 )
        {
          v27 = v54 - v53;
          v54 = v53;
          sub_227B200((__int64)&v51, v53, v27);
        }
        LOWORD(v45) = 261;
        src = (void *)a2;
        n = a3;
        sub_22905D0(a1, v48, &src);
      }
      sub_227B600((int *)&v51);
LABEL_21:
      sub_12EB810(v48);
      return a1;
    }
    v9 = (__int64 *)v48[0];
    LOWORD(v54) = 261;
    v40 = (__int64 *)&v39;
    v48[0] = 0;
    v51 = (_QWORD *)a2;
    v52 = a3;
    v39 = nullptr;
    v41 = v9;
    sub_111E1E0((__int64 *)&src, &v41, &v40);
    if ( v41 )
      (*(void (__fastcall **)(__int64 *))(*v41 + 8))(v41);
    v10 = v39;
    v39 = nullptr;
    v11 = operator new(0x40u);
    *(_QWORD *)(v11 + 16) = 0;
    *(_BYTE *)(v11 + 24) = 0;
    *(_QWORD *)v11 = &off_2BEAE08;
    *(_QWORD *)(v11 + 8) = v11 + 24;
    *(_BYTE *)(v11 + 48) = 0;
    *(_QWORD *)(v11 + 56) = 0;
    v37 = (_QWORD *)(v11 + 24);
    sub_2253560(&src, &v51);
    v12 = src;
    v13 = *(_BYTE **)(v11 + 8);
    if ( src == v44 )
    {
      v14 = (_BYTE *)n;
      if ( n )
      {
        if ( n == 1 )
          *v13 = v44[0];
        else
          memcpy(v13, src, n);
        v14 = (_BYTE *)n;
        v13 = *(_BYTE **)(v11 + 8);
      }
      *(_QWORD *)(v11 + 16) = v14;
      v14[(_QWORD)v13] = 0;
      v13 = src;
      goto LABEL_15;
    }
    v14 = v44[0];
    if ( v37 == (_QWORD *)v13 )
    {
      v37 = v44[0];
      *(_QWORD *)(v11 + 8) = src;
      *(__m128 *)(v11 + 16) = _mm_loadh_ps((const double *)&v37);
    }
    else
    {
      v37 = v44[0];
      v15 = *(void **)(v11 + 24);
      *(_QWORD *)(v11 + 8) = src;
      *(__m128 *)(v11 + 16) = _mm_loadh_ps((const double *)&v37);
      if ( v13 )
      {
        src = v13;
        v44[0] = v15;
LABEL_15:
        n = 0;
        *v13 = 0;
        if ( src != v44 )
          operator delete(src);
        v16 = *(_QWORD *)(v11 + 56);
        *(_QWORD *)(v11 + 56) = v10;
        if ( v16 )
          (*(void (__fastcall **)(__int64, void *, _BYTE *))(*(_QWORD *)v16 + 8LL))(v16, v12, v14);
        v17 = v39;
        *(_QWORD *)(v11 + 40) = 0;
        *(_QWORD *)(v11 + 48) = 0;
        *a1 = (__int64 *)v11;
        if ( v17 )
          (*(void (__fastcall **)(_QWORD *, void *, _BYTE *))(*v17 + 8LL))(v17, v12, v14);
        goto LABEL_21;
      }
    }
    v13 = v44;
    src = v44;
    goto LABEL_15;
  }
  if ( a3 != 9 || *(_QWORD *)a2 != 0x6C756E2F7665642FLL || *(_BYTE *)(a2 + 8) != 108 )
    goto LABEL_8;
  LODWORD(n) = 0;
  v46 = 0;
  v20 = *(_QWORD *)(a4 + 16) == 0;
  *(_OWORD *)v44 = 0;
  v47 = 1;
  v45 = 0;
  src = &off_2BEBF60;
  if ( v20 )
    goto LABEL_76;
  (*(void (__fastcall **)(__int64 **, __int64, void **))(a4 + 24))(a1, a4, &src);
  src = &unk_2C76210;
  if ( v47 == 1 && v44[0] )
    operator delete[](v44[0]);
  return a1;
}
