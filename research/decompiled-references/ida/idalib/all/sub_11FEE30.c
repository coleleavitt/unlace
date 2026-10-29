void __fastcall sub_11FEE30(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  _QWORD *v8; // r15
  __int64 v9; // rax
  const char **v10; // rax
  const char *v11; // rbx
  size_t v12; // rax
  size_t v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rcx
  void *v16; // r9
  __m128i si128; // xmm0
  __int64 v18; // rax
  __int64 (__fastcall *v19)(_QWORD *, void *, __int64); // rbp
  __int64 v20; // rbp
  __int64 v21; // rcx
  unsigned __int8 *v22; // r12
  _BYTE *v23; // rsi
  signed __int64 v24; // r13
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  void **v30; // r13
  _BYTE *v31; // rdi
  __int64 v32; // rax
  unsigned __int8 *v33; // r12
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rbx
  _BYTE *v40; // rdi
  __int64 v41; // rax
  void **v42; // rbp
  __int64 v43; // rax
  void **v44; // r12
  void **v45; // rbx
  void **v46; // rdi
  void **v47; // rdi
  void **v48; // rbx
  void **v49; // r12
  size_t v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r15
  __int64 v57; // rdx
  __int64 v58; // r15
  void *v59; // rdi
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // r13
  __int64 v64; // r15
  __int64 v65; // r13
  void *v66; // rdi
  void *src; // [rsp+0h] [rbp-1B8h]
  _BYTE *srcb; // [rsp+0h] [rbp-1B8h]
  void *srca; // [rsp+0h] [rbp-1B8h]
  __int64 v70; // [rsp+8h] [rbp-1B0h]
  void *v71; // [rsp+8h] [rbp-1B0h]
  _QWORD *v72; // [rsp+10h] [rbp-1A8h]
  _QWORD v73[2]; // [rsp+20h] [rbp-198h] BYREF
  void *v74; // [rsp+30h] [rbp-188h] BYREF
  size_t n; // [rsp+38h] [rbp-180h]
  _QWORD v76[2]; // [rsp+40h] [rbp-178h] BYREF
  __int16 v77; // [rsp+50h] [rbp-168h]
  void *ptr; // [rsp+60h] [rbp-158h] BYREF
  __m128i v79; // [rsp+68h] [rbp-150h]
  __int64 v80; // [rsp+78h] [rbp-140h] BYREF
  void *v81; // [rsp+80h] [rbp-138h]
  __int64 v82; // [rsp+90h] [rbp-128h] BYREF
  __int16 v83; // [rsp+A0h] [rbp-118h]

  LODWORD(ptr) = 2263;
  v4 = sub_21B6DA0(a2, &ptr, 1);
  v5 = a2[1];
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 != v7 )
  {
    while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 2263) )
    {
      if ( v7 == ++v6 )
        return;
    }
    if ( v7 != v6 )
    {
      do
      {
        v8 = (_QWORD *)*v6;
        v9 = *(_QWORD *)(*v6 + 16LL);
        if ( !v9 )
          v9 = *v6;
        ++v6;
        *(_BYTE *)(v9 + 44) |= 1u;
        if ( v6 == v7 )
          break;
        while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 2263) )
        {
          if ( v7 == ++v6 )
            goto LABEL_13;
        }
      }
      while ( v7 != v6 );
LABEL_13:
      v10 = (const char **)v8[6];
      v11 = *v10;
      if ( *v10 )
      {
        v12 = strlen(*v10);
        v13 = v12;
        if ( v12 == 5 )
        {
          if ( *(_DWORD *)v11 == 1702129257 && v11[4] == 108 )
          {
LABEL_17:
            src = (void *)v12;
            v14 = (*(__int64 (__fastcall **)(_QWORD *, char *, __int64))(*a2 + 16LL))(a2, "-mllvm", 6);
            v15 = *(unsigned int *)(a3 + 8);
            v16 = src;
            if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
            {
              srca = (void *)v14;
              v71 = v16;
              sub_2237220(a3, a3 + 16, v15 + 1, 8);
              v15 = *(unsigned int *)(a3 + 8);
              v16 = v71;
              v14 = (__int64)srca;
            }
            si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
            *(_QWORD *)(*(_QWORD *)a3 + 8 * v15) = v14;
            ++*(_DWORD *)(a3 + 8);
            v77 = 1283;
            v74 = "-x86-asm-syntax=";
            v18 = *a2;
            v76[0] = v11;
            v76[1] = v16;
            ptr = &v80;
            v19 = *(__int64 (__fastcall **)(_QWORD *, void *, __int64))(v18 + 16);
            v79 = si128;
            sub_22538C0(&v74, &ptr);
            v20 = v19(a2, ptr, v79.m128i_i64[0]);
            if ( ptr != &v80 )
              free(ptr);
            v21 = *(unsigned int *)(a3 + 8);
            if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
            {
              sub_2237220(a3, a3 + 16, v21 + 1, 8);
              v21 = *(unsigned int *)(a3 + 8);
            }
            *(_QWORD *)(*(_QWORD *)a3 + 8 * v21) = v20;
            ++*(_DWORD *)(a3 + 8);
            return;
          }
        }
        else if ( v12 == 3 && *(_WORD *)v11 == 29793 && v11[2] == 116 )
        {
          goto LABEL_17;
        }
      }
      else
      {
        v13 = 0;
      }
      sub_FC70B0((__int64)&ptr, **(_QWORD **)(*(_QWORD *)(a1 + 24) + 8LL), 0, 497);
      v22 = (unsigned __int8 *)ptr;
      v23 = (_BYTE *)v8[3];
      v24 = v8[4];
      if ( !ptr )
      {
        v53 = v79.m128i_i64[0];
        v54 = *(_DWORD *)(v79.m128i_i64[0] + 14976);
        if ( v54 )
        {
          v55 = (unsigned int)(v54 - 1);
          *(_DWORD *)(v79.m128i_i64[0] + 14976) = v55;
          v22 = *(unsigned __int8 **)(v53 + 8 * v55 + 14848);
          v56 = *((unsigned int *)v22 + 134);
          v57 = *((_QWORD *)v22 + 66);
          *v22 = 0;
          *((_DWORD *)v22 + 106) = 0;
          v58 = v57 + (v56 << 6);
          while ( v57 != v58 )
          {
            while ( 1 )
            {
              v58 -= 64;
              v59 = *(void **)(v58 + 24);
              if ( v59 == (void *)(v58 + 40) )
                break;
              v70 = v57;
              operator delete(v59);
              v57 = v70;
              if ( v70 == v58 )
                goto LABEL_108;
            }
          }
LABEL_108:
          *((_DWORD *)v22 + 134) = 0;
        }
        else
        {
          srcb = (_BYTE *)v8[3];
          v22 = (unsigned __int8 *)operator new(0x3A0u);
          *v22 = 0;
          *((_QWORD *)v22 + 12) = v22 + 112;
          *((_QWORD *)v22 + 16) = v22 + 144;
          *((_QWORD *)v22 + 20) = v22 + 176;
          *((_QWORD *)v22 + 24) = v22 + 208;
          *((_QWORD *)v22 + 28) = v22 + 240;
          *((_QWORD *)v22 + 32) = v22 + 272;
          *((_QWORD *)v22 + 36) = v22 + 304;
          *((_QWORD *)v22 + 40) = v22 + 336;
          *((_QWORD *)v22 + 44) = v22 + 368;
          *((_QWORD *)v22 + 48) = v22 + 400;
          *((_QWORD *)v22 + 52) = v22 + 432;
          *((_QWORD *)v22 + 13) = 0;
          v22[112] = 0;
          *((_QWORD *)v22 + 17) = 0;
          v22[144] = 0;
          *((_QWORD *)v22 + 21) = 0;
          v22[176] = 0;
          *((_QWORD *)v22 + 25) = 0;
          v22[208] = 0;
          *((_QWORD *)v22 + 29) = 0;
          v22[240] = 0;
          *((_QWORD *)v22 + 33) = 0;
          v22[272] = 0;
          *((_QWORD *)v22 + 37) = 0;
          v22[304] = 0;
          *((_QWORD *)v22 + 41) = 0;
          v22[336] = 0;
          *((_QWORD *)v22 + 45) = 0;
          v22[368] = 0;
          *((_QWORD *)v22 + 49) = 0;
          v22[400] = 0;
          *((_QWORD *)v22 + 53) = 0x800000000LL;
          v23 = srcb;
          *((_QWORD *)v22 + 66) = v22 + 544;
          *((_QWORD *)v22 + 67) = 0x600000000LL;
        }
        ptr = v22;
      }
      v22[*v22 + 1] = 0;
      v74 = v76;
      if ( &v23[v24] && !v23 )
        goto LABEL_121;
      if ( (unsigned __int64)v24 > 0xF )
      {
        if ( v24 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v25 = (_QWORD *)operator new(v24 + 1);
        v76[0] = v24;
        v74 = v25;
      }
      else
      {
        if ( v24 == 1 )
        {
          LOBYTE(v76[0]) = *v23;
          v25 = v76;
          goto LABEL_33;
        }
        v25 = v76;
        if ( !v24 )
        {
LABEL_33:
          n = v24;
          *((_BYTE *)v25 + v24) = 0;
          v26 = ptr;
          v27 = *(unsigned __int8 *)ptr;
          *(_BYTE *)ptr = v27 + 1;
          v28 = (unsigned __int8)v27;
          v29 = 4 * (v27 + 3);
          v30 = (void **)&v26[v29];
          v31 = (_BYTE *)v26[v29];
          if ( v74 == v76 )
          {
            v50 = n;
            if ( n )
            {
              if ( n == 1 )
                *v31 = v76[0];
              else
                memcpy(v31, v74, n);
              v50 = n;
              v31 = *v30;
            }
            v30[1] = (void *)v50;
            v31[v50] = 0;
            v31 = v74;
          }
          else
          {
            if ( v31 == (_BYTE *)&v26[v29 + 2] )
            {
              *v30 = v74;
              v30[1] = (void *)n;
              v30[2] = (void *)v76[0];
            }
            else
            {
              v32 = v26[4 * v28 + 14];
              *v30 = v74;
              v30[1] = (void *)n;
              v30[2] = (void *)v76[0];
              if ( v31 )
              {
                v74 = v31;
                v76[0] = v32;
                goto LABEL_37;
              }
            }
            v31 = v76;
            v74 = v76;
          }
LABEL_37:
          n = 0;
          *v31 = 0;
          if ( v74 != v76 )
            operator delete(v74);
          v33 = (unsigned __int8 *)ptr;
          if ( !ptr )
          {
            v60 = v79.m128i_i64[0];
            v61 = *(_DWORD *)(v79.m128i_i64[0] + 14976);
            if ( v61 )
            {
              v62 = (unsigned int)(v61 - 1);
              *(_DWORD *)(v79.m128i_i64[0] + 14976) = v62;
              v33 = *(unsigned __int8 **)(v60 + 8 * v62 + 14848);
              v63 = *((unsigned int *)v33 + 134);
              v64 = *((_QWORD *)v33 + 66);
              *v33 = 0;
              *((_DWORD *)v33 + 106) = 0;
              v65 = v64 + (v63 << 6);
              while ( v64 != v65 )
              {
                while ( 1 )
                {
                  v65 -= 64;
                  v66 = *(void **)(v65 + 24);
                  if ( v66 == (void *)(v65 + 40) )
                    break;
                  operator delete(v66);
                  if ( v64 == v65 )
                    goto LABEL_114;
                }
              }
LABEL_114:
              *((_DWORD *)v33 + 134) = 0;
            }
            else
            {
              v33 = (unsigned __int8 *)operator new(0x3A0u);
              *v33 = 0;
              *((_QWORD *)v33 + 12) = v33 + 112;
              *((_QWORD *)v33 + 16) = v33 + 144;
              *((_QWORD *)v33 + 20) = v33 + 176;
              *((_QWORD *)v33 + 24) = v33 + 208;
              *((_QWORD *)v33 + 28) = v33 + 240;
              *((_QWORD *)v33 + 32) = v33 + 272;
              *((_QWORD *)v33 + 36) = v33 + 304;
              *((_QWORD *)v33 + 40) = v33 + 336;
              *((_QWORD *)v33 + 44) = v33 + 368;
              *((_QWORD *)v33 + 48) = v33 + 400;
              *((_QWORD *)v33 + 52) = v33 + 432;
              *((_QWORD *)v33 + 13) = 0;
              v33[112] = 0;
              *((_QWORD *)v33 + 17) = 0;
              v33[144] = 0;
              *((_QWORD *)v33 + 21) = 0;
              v33[176] = 0;
              *((_QWORD *)v33 + 25) = 0;
              v33[208] = 0;
              *((_QWORD *)v33 + 29) = 0;
              v33[240] = 0;
              *((_QWORD *)v33 + 33) = 0;
              v33[272] = 0;
              *((_QWORD *)v33 + 37) = 0;
              v33[304] = 0;
              *((_QWORD *)v33 + 41) = 0;
              v33[336] = 0;
              *((_QWORD *)v33 + 45) = 0;
              v33[368] = 0;
              *((_QWORD *)v33 + 49) = 0;
              v33[400] = 0;
              *((_QWORD *)v33 + 53) = 0x800000000LL;
              *((_QWORD *)v33 + 66) = v33 + 544;
              *((_QWORD *)v33 + 67) = 0x600000000LL;
            }
            ptr = v33;
          }
          v33[*v33 + 1] = 0;
          v72 = v73;
          if ( !&v11[v13] || v11 )
          {
            if ( v13 > 0xF )
            {
              v34 = (_QWORD *)operator new(v13 + 1);
              v73[0] = v13;
              v72 = v34;
            }
            else
            {
              if ( v13 == 1 )
              {
                LOBYTE(v73[0]) = *v11;
                v34 = v73;
                goto LABEL_45;
              }
              v34 = v73;
              if ( !v13 )
              {
LABEL_45:
                *((_BYTE *)v34 + v13) = 0;
                v35 = ptr;
                v36 = *(unsigned __int8 *)ptr;
                *(_BYTE *)ptr = v36 + 1;
                v37 = (unsigned __int8)v36;
                v38 = 4 * (v36 + 3);
                v39 = &v35[v38];
                v40 = (_BYTE *)v35[v38];
                if ( v72 == v73 )
                {
                  v51 = v13;
                  if ( v13 )
                  {
                    if ( v13 == 1 )
                    {
                      *v40 = v73[0];
                      v51 = 1;
                    }
                    else
                    {
                      memcpy(v40, v72, v13);
                      v51 = v13;
                    }
                    v40 = (_BYTE *)*v39;
                  }
                  v39[1] = v51;
                  v40[v51] = 0;
                  v40 = v72;
                }
                else
                {
                  if ( v40 == (_BYTE *)&v35[v38 + 2] )
                  {
                    *v39 = v72;
                    v39[1] = v13;
                    v39[2] = v73[0];
                  }
                  else
                  {
                    v41 = v35[4 * v37 + 14];
                    *v39 = v72;
                    v39[1] = v13;
                    v39[2] = v73[0];
                    if ( v40 )
                    {
                      v72 = v40;
                      v73[0] = v41;
                      goto LABEL_49;
                    }
                  }
                  v40 = v73;
                  v72 = v73;
                }
LABEL_49:
                *v40 = 0;
                if ( v72 != v73 )
                  operator delete(v72);
                if ( (_BYTE)v83 )
                {
                  sub_FC7790(v79.m128i_i64[1], (__int64 *)&ptr, SHIBYTE(v83));
                  v79.m128i_i64[1] = 0;
                  v83 = 0;
                }
                if ( v81 != &v82 )
                  operator delete(v81);
                v42 = (void **)ptr;
                if ( ptr )
                {
                  v43 = v79.m128i_i64[0];
                  if ( v79.m128i_i64[0] )
                  {
                    if ( (unsigned __int64)ptr < v79.m128i_i64[0] || (unsigned __int64)ptr > v79.m128i_i64[0] + 14848 )
                    {
                      v44 = *((void ***)ptr + 66);
                      v45 = &v44[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
                      if ( v44 != v45 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v45 -= 8;
                            v46 = (void **)v45[3];
                            if ( v46 == v45 + 5 )
                              break;
                            operator delete(v46);
                            if ( v44 == v45 )
                              goto LABEL_61;
                          }
                        }
                        while ( v44 != v45 );
LABEL_61:
                        v45 = (void **)v42[66];
                      }
                      if ( v45 != v42 + 68 )
                        free(v45);
                      v47 = (void **)v42[52];
                      v48 = v42 + 52;
                      if ( v47 != v42 + 54 )
                        free(v47);
                      v49 = v42 + 12;
                      do
                      {
                        while ( 1 )
                        {
                          v48 -= 4;
                          if ( *v48 == v48 + 2 )
                            break;
                          operator delete(*v48);
                          if ( v48 == v49 )
                            goto LABEL_69;
                        }
                      }
                      while ( v48 != v49 );
LABEL_69:
                      operator delete(v42, 0x3A0u);
                    }
                    else
                    {
                      v52 = *(unsigned int *)(v79.m128i_i64[0] + 14976);
                      *(_DWORD *)(v79.m128i_i64[0] + 14976) = v52 + 1;
                      *(_QWORD *)(v43 + 8 * v52 + 14848) = v42;
                    }
                  }
                }
                return;
              }
            }
            memcpy(v34, v11, v13);
            v34 = v72;
            goto LABEL_45;
          }
LABEL_121:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        }
      }
      memcpy(v25, v23, v24);
      v25 = v74;
      goto LABEL_33;
    }
  }
}
