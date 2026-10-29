void __fastcall sub_2031760(__int64 a1, __int64 a2)
{
  void *v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rax
  void *v8; // r12
  void *v9; // rbx
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE *v15; // rax
  _BYTE *v16; // rdx
  void *v17; // rax
  void *v18; // rax
  void **v19; // rdi
  char v20; // bl
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  void *v25; // rax
  void **v26; // rax
  _BOOL4 v27; // ebx
  _BYTE *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  void *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rax
  __int64 v37; // rdx
  _BYTE *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  void *v43; // rax
  _BYTE *v44; // rax
  double v45; // [rsp+10h] [rbp-128h]
  double v46; // [rsp+18h] [rbp-120h]
  char v47; // [rsp+2Fh] [rbp-109h] BYREF
  void *v48; // [rsp+30h] [rbp-108h] BYREF
  unsigned int v49; // [rsp+38h] [rbp-100h]
  void *v50; // [rsp+40h] [rbp-F8h] BYREF
  void **v51; // [rsp+48h] [rbp-F0h]
  void *ptr; // [rsp+60h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-D0h]
  _BYTE v54[192]; // [rsp+78h] [rbp-C0h] BYREF

  v3 = *(void **)a2;
  v4 = sub_21F90A0();
  v5 = sub_21F90B0(a1, a2);
  v7 = sub_21F90D0(a1, a2, v6);
  v8 = (void *)v7;
  if ( (void *)v4 != v3 && v3 != (void *)v5 )
  {
    sub_995540(a1, "0x");
    if ( *(void **)a2 == v8 )
    {
      sub_22010F0(&v48, a2);
      v9 = *(void **)a2;
      if ( (void *)sub_21F90E0(&v48, a2, v37) != v9 )
      {
LABEL_5:
        if ( (void *)sub_21F90C0() == v9 )
        {
          v28 = *(_BYTE **)(a1 + 32);
          if ( (unsigned __int64)v28 >= *(_QWORD *)(a1 + 24) )
          {
            sub_227BA10(a1, 76);
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v28 + 1;
            *v28 = 76;
          }
        }
        else
        {
          if ( v9 != v8 )
          {
            v11 = sub_21F9080() == (_QWORD)v9;
            v15 = *(_BYTE **)(a1 + 32);
            if ( v11 )
            {
              if ( (unsigned __int64)v15 >= *(_QWORD *)(a1 + 24) )
              {
                sub_227BA10(a1, 72);
              }
              else
              {
                v16 = v15 + 1;
                *(_QWORD *)(a1 + 32) = v15 + 1;
                *v15 = 72;
              }
            }
            else if ( (unsigned __int64)v15 >= *(_QWORD *)(a1 + 24) )
            {
              sub_227BA10(a1, 82);
            }
            else
            {
              v16 = v15 + 1;
              *(_QWORD *)(a1 + 32) = v15 + 1;
              *v15 = 82;
            }
            v17 = v48;
            if ( v49 > 0x40 )
              v17 = *(void **)v48;
            ptr = v17;
            si128.m128i_i64[0] = 0;
            si128.m128i_i32[2] = 4;
            si128.m128i_i16[6] = 257;
            si128.m128i_i8[14] = 0;
            sub_227CEF0(a1, &ptr, v16, v12, v13, v14);
LABEL_13:
            if ( v49 > 0x40 )
            {
              if ( v48 )
                operator delete[](v48);
            }
            return;
          }
          v44 = *(_BYTE **)(a1 + 32);
          if ( (unsigned __int64)v44 >= *(_QWORD *)(a1 + 24) )
          {
            sub_227BA10(a1, 77);
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v44 + 1;
            *v44 = 77;
          }
        }
        sub_2206590(&v50, &v48, 64);
        v32 = v50;
        if ( (unsigned int)v51 > 0x40 )
          v32 = *(void **)v50;
        ptr = v32;
        si128.m128i_i32[2] = 16;
        si128.m128i_i64[0] = 0;
        si128.m128i_i16[6] = 257;
        si128.m128i_i8[14] = 0;
        sub_227CEF0(a1, &ptr, v29, 257, v30, v31);
        if ( (unsigned int)v51 > 0x40 && v50 )
          operator delete[](v50);
        sub_220AD70(&v50, &v48, 64);
        v36 = v50;
        if ( (unsigned int)v51 <= 0x40 )
        {
LABEL_65:
          ptr = v36;
          si128.m128i_i64[0] = 0;
          si128.m128i_i32[2] = 16;
          si128.m128i_i16[6] = 257;
          si128.m128i_i8[14] = 0;
          sub_227CEF0(a1, &ptr, 257, v33, v34, v35);
          if ( (unsigned int)v51 > 0x40 && v50 )
            operator delete[](v50);
          goto LABEL_13;
        }
LABEL_64:
        v36 = (_QWORD *)*v36;
        goto LABEL_65;
      }
    }
    else
    {
      sub_21FEE00(&v48, a2);
      v9 = *(void **)a2;
      if ( (void *)sub_21F90E0(&v48, a2, v10) != v9 )
        goto LABEL_5;
    }
    v38 = *(_BYTE **)(a1 + 32);
    if ( (unsigned __int64)v38 >= *(_QWORD *)(a1 + 24) )
    {
      sub_227BA10(a1, 75);
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v38 + 1;
      *v38 = 75;
    }
    sub_220AD70(&v50, &v48, 16);
    v43 = v50;
    if ( (unsigned int)v51 > 0x40 )
      v43 = *(void **)v50;
    ptr = v43;
    si128.m128i_i16[6] = 257;
    si128.m128i_i64[0] = 0;
    si128.m128i_i32[2] = 4;
    si128.m128i_i8[14] = 0;
    sub_227CEF0(a1, &ptr, v39, v40, v41, v42);
    if ( (unsigned int)v51 > 0x40 && v50 )
      operator delete[](v50);
    sub_2206590(&v50, &v48, 64);
    v36 = v50;
    if ( (unsigned int)v51 <= 0x40 )
      goto LABEL_65;
    goto LABEL_64;
  }
  if ( v3 == (void *)v7 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 20LL) & 7u) <= 1 )
      goto LABEL_40;
  }
  else if ( (*(_BYTE *)(a2 + 20) & 7u) <= 1 )
  {
LABEL_24:
    sub_21F97A0(&v50, a2);
    goto LABEL_25;
  }
  ptr = v54;
  v45 = sub_2202D40(a2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( *(void **)a2 == v8 )
    sub_2204E00(a2, &ptr, 6, 0, 0);
  else
    sub_2203EA0(a2, &ptr, 6, 0, 0);
  sub_22051B0(&v50, v5, ptr, si128.m128i_i64[0]);
  v46 = sub_2202D40(&v50);
  sub_9955A0(&v50);
  if ( v46 == v45 )
  {
    sub_227BF10(a1, ptr, si128.m128i_i64[0]);
    if ( ptr != v54 )
      free(ptr);
    return;
  }
  if ( ptr != v54 )
    free(ptr);
  if ( v8 != *(void **)a2 )
    goto LABEL_24;
LABEL_40:
  sub_21FFE60(&v50, a2);
LABEL_25:
  v18 = v50;
  if ( v3 != (void *)v5 )
  {
    v19 = &v50;
    if ( v50 == v8 )
      v19 = v51;
    v20 = sub_21FB4A0(v19);
    sub_22028C0(&v50, v5, 1, &v47);
    if ( !v20 )
    {
      v18 = v50;
      goto LABEL_30;
    }
    if ( v50 == v8 )
      sub_22010F0(&v48, &v50);
    else
      sub_21FEE00(&v48, &v50);
    v26 = &v50;
    if ( v50 == v8 )
      v26 = v51;
    v27 = (*((_BYTE *)v26 + 20) & 8) != 0;
    if ( (void *)v5 == v8 )
      sub_21FFC40(&ptr, v8, 0);
    else
      sub_21FD1F0(&ptr, v5, 0);
    if ( ptr == v8 )
      sub_2200650(&ptr, 1, v27, &v48);
    else
      sub_21F9270(&ptr, 1, v27, &v48);
    if ( v50 == v8 )
    {
      if ( v8 == ptr )
      {
        sub_A4F010((__int64)&v50);
        sub_21FFED0(&v50, &ptr);
LABEL_52:
        sub_9955A0(&ptr);
        if ( v49 > 0x40 && v48 )
          operator delete[](v48);
        v18 = v50;
        goto LABEL_30;
      }
    }
    else if ( v8 != ptr )
    {
      sub_21F9590(&v50, &ptr);
      goto LABEL_52;
    }
    sub_9955A0(&v50);
    if ( v8 == ptr )
      sub_21FFED0(&v50, &ptr);
    else
      sub_21F97D0(&v50, &ptr);
    goto LABEL_52;
  }
LABEL_30:
  if ( v8 == v18 )
    sub_22010F0(&v48, &v50);
  else
    sub_21FEE00(&v48, &v50);
  v25 = v48;
  if ( v49 > 0x40 )
    v25 = *(void **)v48;
  ptr = v25;
  si128.m128i_i16[6] = 257;
  si128.m128i_i64[0] = 0;
  si128.m128i_i32[2] = 0;
  si128.m128i_i8[14] = 1;
  sub_227CEF0(a1, &ptr, v21, v22, v23, v24);
  if ( v49 > 0x40 && v48 )
    operator delete[](v48);
  sub_9955A0(&v50);
}
