char __fastcall sub_839F40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rsi
  char v14; // al
  int v15; // edx
  void *v16; // rcx
  char result; // al
  int v18; // ebp
  void *v19; // r12
  void *v20; // r12
  __int64 v21; // r12
  unsigned int v22; // eax
  unsigned __int8 v23; // cl
  void *v24; // r8
  size_t v25; // rcx
  _QWORD *v26; // rax
  void *v27; // rax
  _QWORD *v28; // r12
  unsigned __int64 v29; // rax
  _QWORD *v30; // r13
  _QWORD *v31; // rbx
  _QWORD *v32; // rdi
  _QWORD *v33; // rdi
  _QWORD *v34; // rbx
  _QWORD *v35; // rdi
  void *v36; // rax
  _QWORD *v37; // rdi
  __int64 v38; // rdx
  char n; // [rsp+8h] [rbp-130h]
  char nb; // [rsp+8h] [rbp-130h]
  char nc; // [rsp+8h] [rbp-130h]
  char na; // [rsp+8h] [rbp-130h]
  size_t nd; // [rsp+8h] [rbp-130h]
  int src; // [rsp+20h] [rbp-118h]
  void *srca; // [rsp+20h] [rbp-118h]
  void *v46; // [rsp+28h] [rbp-110h]
  size_t v47; // [rsp+38h] [rbp-100h]
  void *v48; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v49; // [rsp+48h] [rbp-F0h]
  char v50; // [rsp+4Ch] [rbp-ECh]
  void *v51; // [rsp+50h] [rbp-E8h] BYREF
  size_t v52; // [rsp+58h] [rbp-E0h]
  _QWORD v53[2]; // [rsp+60h] [rbp-D8h] BYREF
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+78h] [rbp-C0h]
  _BYTE v56[40]; // [rsp+88h] [rbp-B0h] BYREF
  void *v57; // [rsp+B0h] [rbp-88h] BYREF
  unsigned __int64 v58; // [rsp+B8h] [rbp-80h]
  __int64 v59; // [rsp+C0h] [rbp-78h]
  void *v60; // [rsp+D0h] [rbp-68h]
  __int64 v61; // [rsp+E0h] [rbp-58h] BYREF
  __int16 v62; // [rsp+F0h] [rbp-48h]

  if ( !*(_BYTE *)(a3 + 12) )
  {
    if ( *(_BYTE *)(a4 + 12) )
    {
      sub_2587D60(&v57, a4);
      v11 = *(_BYTE *)(a3 + 12) == 0;
      v12 = a5;
      v13 = a3;
      BYTE4(v52) = 1;
      LODWORD(v52) = v58;
      v51 = v57;
      if ( !v11 )
        goto LABEL_4;
    }
    else
    {
      sub_2587BE0(&v57, a4, a5);
      v11 = *(_BYTE *)(a3 + 12) == 0;
      v12 = a5;
      v13 = a3;
      BYTE4(v52) = 0;
      LODWORD(v52) = v58;
      v51 = v57;
      if ( !v11 )
      {
LABEL_4:
        sub_2587D60(&v57, v13);
        si128.m128i_i8[4] = 1;
        si128.m128i_i32[0] = v58;
        ptr = v57;
LABEL_5:
        sub_258C0C0(&v57, &ptr, &v51);
        v50 = 0;
        v49 = v58;
        v48 = v57;
        if ( si128.m128i_i32[0] > 0x40u && ptr )
          operator delete[](ptr);
        if ( (unsigned int)v52 > 0x40 && v51 )
          operator delete[](v51);
        n = v50;
        sub_25877E0(&v57, &v48, *(unsigned int *)(a3 + 8));
        v14 = n;
        v15 = v58;
        v16 = v57;
        if ( *(_DWORD *)(a6 + 8) > 0x40u && *(_QWORD *)a6 )
        {
          v46 = v57;
          src = v58;
          operator delete[](*(void **)a6);
          v16 = v46;
          v15 = src;
          v14 = n;
        }
        *(_DWORD *)(a6 + 8) = v15;
        *(_QWORD *)a6 = v16;
        *(_BYTE *)(a6 + 12) = v14;
        sub_2587BE0(&v57, a6, a5);
        si128.m128i_i8[4] = 0;
        si128.m128i_i32[0] = v58;
        ptr = v57;
        v20 = v57;
        if ( (unsigned int)v58 > 0x40 )
        {
          result = sub_2586760(&ptr, &v48);
          if ( v20 )
          {
            nb = result;
            operator delete[](v20);
            result = nb;
          }
        }
        else
        {
          result = v57 == v48;
        }
        if ( result )
          goto LABEL_20;
        if ( !*(_BYTE *)(a1 + 963) )
        {
LABEL_19:
          result = sub_82CA30(a1, a2, (__int64)&v48, *(_QWORD *)(a2 + 8));
LABEL_20:
          if ( v49 > 0x40 )
          {
            if ( v48 )
            {
              nc = result;
              operator delete[](v48);
              return nc;
            }
          }
          return result;
        }
        v21 = sub_6BB140(*(_QWORD *)(a1 + 16));
        v22 = sub_8124E0(a2);
        sub_C6CF40(&v57, v21, v22, 2353);
        ptr = v56;
        v23 = *(_BYTE *)(a6 + 12);
        si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
        sub_2593F40(a6, (unsigned int)&ptr, 10, v23 ^ 1, 0, 1, 1);
        v24 = ptr;
        v25 = si128.m128i_i64[0];
        v51 = v53;
        if ( !ptr && si128.m128i_i64[0] )
          std::__throw_logic_error("basic_string: construction from null is not valid");
        v47 = si128.m128i_i64[0];
        if ( si128.m128i_i64[0] > 0xFuLL )
        {
          srca = ptr;
          nd = si128.m128i_i64[0];
          v36 = (void *)std::string::_M_create();
          v25 = nd;
          v24 = srca;
          v51 = v36;
          v37 = v36;
          v53[0] = v47;
        }
        else
        {
          if ( si128.m128i_i64[0] == 1 )
          {
            LOBYTE(v53[0]) = *(_BYTE *)ptr;
            goto LABEL_37;
          }
          if ( !si128.m128i_i64[0] )
          {
LABEL_37:
            v26 = v53;
LABEL_38:
            v52 = v25;
            *((_BYTE *)v26 + v25) = 0;
            if ( ptr != v56 )
              free(ptr);
            sub_838D50((unsigned __int8 **)&v57, v51, v52);
            sub_8356A0((unsigned __int8 **)&v57, *(_QWORD *)(a2 + 8), 8u);
            v27 = (void *)sub_AC7B80(a2);
            si128.m128i_i8[0] = 1;
            ptr = v27;
            sub_839C90((__int64 *)&v57, (__int64 *)&ptr);
            if ( v51 != v53 )
              operator delete(v51, v53[0] + 1LL);
            if ( (_BYTE)v62 )
            {
              sub_C69E80(v59, &v57, HIBYTE(v62));
              v59 = 0;
              v62 = 0;
            }
            if ( v60 != &v61 )
              operator delete(v60, v61 + 1);
            v28 = v57;
            if ( v57 )
            {
              v29 = v58;
              if ( v58 )
              {
                if ( (unsigned __int64)v57 >= v58 && v58 + 14848 >= (unsigned __int64)v57 )
                {
                  v38 = *(unsigned int *)(v58 + 14976);
                  *(_DWORD *)(v58 + 14976) = v38 + 1;
                  *(_QWORD *)(v29 + 8 * v38 + 14848) = v28;
                }
                else
                {
                  v30 = *((_QWORD **)v57 + 66);
                  v31 = &v30[8 * (unsigned __int64)*((unsigned int *)v57 + 134)];
                  if ( v30 != v31 )
                  {
                    do
                    {
                      v31 -= 8;
                      v32 = (_QWORD *)v31[3];
                      if ( v32 != v31 + 5 )
                        operator delete(v32, v31[5] + 1LL);
                    }
                    while ( v30 != v31 );
                    v31 = (_QWORD *)v28[66];
                  }
                  if ( v31 != v28 + 68 )
                    free(v31);
                  v33 = (_QWORD *)v28[52];
                  if ( v33 != v28 + 54 )
                    free(v33);
                  v34 = v28 + 50;
                  do
                  {
                    v35 = (_QWORD *)*(v34 - 2);
                    if ( v35 != v34 )
                      operator delete(v35, *v34 + 1LL);
                    v34 -= 4;
                  }
                  while ( v28 + 10 != v34 );
                  operator delete(v28, 0x3A0u);
                }
              }
            }
            goto LABEL_19;
          }
          v37 = v53;
        }
        memcpy(v37, v24, v25);
        v25 = v47;
        v26 = v51;
        goto LABEL_38;
      }
    }
    sub_2587BE0(&v57, v13, v12);
    si128.m128i_i8[4] = 0;
    si128.m128i_i32[0] = v58;
    ptr = v57;
    goto LABEL_5;
  }
  na = *(_BYTE *)(a3 + 12);
  sub_258C0C0(&v57, a3, a4);
  result = na;
  v18 = v58;
  v19 = v57;
  if ( *(_DWORD *)(a6 + 8) > 0x40u && *(_QWORD *)a6 )
  {
    operator delete[](*(void **)a6);
    result = na;
  }
  *(_QWORD *)a6 = v19;
  *(_DWORD *)(a6 + 8) = v18;
  *(_BYTE *)(a6 + 12) = 1;
  return result;
}

