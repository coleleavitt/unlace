void __fastcall sub_19A93E0(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        unsigned int a7)
{
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 *v38; // r9
  _QWORD *v39; // rsi
  _QWORD *v40; // rdi
  __m128i v41; // rax
  void *v42; // r14
  __int64 v43; // rbp
  _QWORD *v44; // rax
  unsigned __int64 v45; // rax
  size_t v46; // r14
  _BYTE *v47; // rbp
  unsigned __int64 v48; // rcx
  __int64 v49; // r15
  _BYTE *v50; // rdi
  int v51; // eax
  unsigned __int64 *v52; // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rsi
  unsigned __int64 v55; // rax
  __int64 *v56; // rsi
  unsigned int v57; // ecx
  __int64 v58; // rax
  __int64 v59; // r15
  _BYTE *v60; // rax
  size_t v61; // r8
  _QWORD *v62; // r9
  size_t v63; // rdx
  _BYTE *v64; // rdi
  size_t v65; // [rsp+8h] [rbp-170h]
  size_t v66; // [rsp+8h] [rbp-170h]
  _QWORD *v67; // [rsp+8h] [rbp-170h]
  size_t v68; // [rsp+8h] [rbp-170h]
  size_t v69; // [rsp+8h] [rbp-170h]
  unsigned __int64 v70; // [rsp+10h] [rbp-168h]
  size_t v71; // [rsp+10h] [rbp-168h]
  unsigned __int64 v72; // [rsp+10h] [rbp-168h]
  unsigned __int64 v73; // [rsp+18h] [rbp-160h]
  __int64 v74; // [rsp+28h] [rbp-150h] BYREF
  void *src; // [rsp+30h] [rbp-148h] BYREF
  size_t n; // [rsp+38h] [rbp-140h]
  _BYTE v77[16]; // [rsp+40h] [rbp-138h] BYREF
  void *v78; // [rsp+50h] [rbp-128h]
  size_t v79; // [rsp+58h] [rbp-120h]
  _QWORD v80[2]; // [rsp+60h] [rbp-118h] BYREF
  int v81[6]; // [rsp+70h] [rbp-108h] BYREF
  void *v82; // [rsp+88h] [rbp-F0h]
  __int64 v83; // [rsp+98h] [rbp-E0h] BYREF
  __m128i v84[12]; // [rsp+B0h] [rbp-C8h] BYREF

  if ( a2 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 32LL))(a2);
    if ( (*(_QWORD *)(v13 + 80) & 0x40000LL) == 0
      && ((*(_QWORD *)(v13 + 80) >> 16) & 8) == 0
      && !(unsigned int)sub_B984E0(v13) )
    {
      if ( a5 )
      {
        v14 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
        if ( v14 != 3 && v14 > 1 )
        {
          v15 = sub_B72690((__int64)(a2 + 9));
          v20 = v15;
          if ( !v15 )
            BUG();
          v21 = *(_QWORD *)(v15 + 40);
          sub_7052B0((__int64 *)(v21 + 96), v21, v16, v17, v18, v19);
          if ( (*(_BYTE *)(*(_QWORD *)(v20 + 64) + 1LL) & 4) != 0 )
          {
            if ( (*(_BYTE *)(v20 - 35) & 1) == 0 )
              goto LABEL_11;
            v52 = sub_B8C3D0(v20 - 64, v21, v22, v23, v24, v25);
            v53 = *v52;
            v54 = *v52 + 8LL * *((unsigned int *)v52 + 2);
            if ( *v52 >= v54 )
            {
              if ( v53 == v54 )
                goto LABEL_11;
              while ( *(_WORD *)(*(_QWORD *)v54 + 36LL) != 214 )
              {
                v54 += 8LL;
                if ( v53 == v54 )
                  goto LABEL_11;
              }
            }
            else
            {
              v55 = *v52;
              while ( *(_WORD *)(*(_QWORD *)v55 + 36LL) != 214 )
              {
                v55 += 8LL;
                if ( v54 == v55 )
                  goto LABEL_11;
              }
              if ( v54 == v55 )
              {
LABEL_11:
                v26 = *(unsigned int *)(v20 - 40);
                if ( (_DWORD)v26 )
                {
                  v51 = sub_1021680(*(_QWORD *)(a1 + 272), v26);
                  if ( v51 )
                  {
                    if ( v51 != 3 )
                      return;
                  }
                }
                v84[0].m128i_i64[0] = sub_B987D0(a2, v26);
                v29 = sub_C1BEF0((__int64)v84, v26, v27, v28);
                v30 = *(_QWORD *)(v20 + 40);
                v74 = v29;
                sub_7052B0((__int64 *)(v30 + 96), v30, v31, v32, v33, v34);
                if ( (*(_BYTE *)(*(_QWORD *)(v20 + 64) + 1LL) & 8) != 0 )
                {
                  v56 = (__int64 *)(a1 + 8);
                  v57 = 6816;
                }
                else
                {
                  if ( !a6 )
                    goto LABEL_14;
                  v56 = (__int64 *)(a1 + 8);
                  v57 = 6819;
                }
                sub_168B9F0((__int64)v84, v56, a3, v57, 0);
                v81[0] = a4 ^ 1;
                v58 = sub_1587D10((__int64)v84, v81);
                sub_1605D30(v58, &v74);
                sub_15F7200(v84);
LABEL_14:
                if ( a4 )
                  return;
                v39 = *(_QWORD **)(a1 + 240);
                v40 = *(_QWORD **)(a1 + 248);
                n = 0;
                v77[0] = 0;
                src = v77;
                v41.m128i_i64[0] = sub_16043A0(v40, v39, v35, v36, v37, v38);
                v84[0] = v41;
                sub_F78380((unsigned __int64 *)&v74, (__int64)&src, v84);
                sub_168B9F0((__int64)v84, (__int64 *)(a1 + 8), a7, 0x170Du, 0);
                v42 = src;
                v43 = n;
                v78 = v80;
                if ( (char *)src + n && !src )
                  std::__throw_logic_error("basic_string::_M_construct null not valid");
                if ( n > 0xF )
                {
                  if ( (n & 0x8000000000000000LL) != 0LL )
                    goto LABEL_74;
                  v44 = (_QWORD *)operator new(n + 1);
                  v80[0] = v43;
                  v78 = v44;
                }
                else
                {
                  if ( n == 1 )
                  {
                    LOBYTE(v80[0]) = *(_BYTE *)src;
                    v44 = v80;
LABEL_20:
                    v79 = v43;
                    *((_BYTE *)v44 + v43) = 0;
                    v45 = j__strlen("::");
                    v46 = v45;
                    if ( v45 > 0x7FFFFFFFFFFFFFFFLL - v79 )
                      std::__throw_length_error("basic_string::append");
                    v47 = v78;
                    v48 = v45 + v79;
                    if ( v78 == v80 )
                    {
                      v49 = 15;
                      if ( v48 <= 0xF )
                      {
LABEL_23:
                        if ( v45 )
                        {
                          v50 = (char *)v78 + v79;
                          if ( v45 == 1 )
                          {
                            *v50 = 58;
                            v47 = v78;
                          }
                          else
                          {
                            v65 = v45 + v79;
                            memcpy(v50, "::", v45);
                            v47 = v78;
                            v48 = v65;
                          }
                        }
LABEL_26:
                        v79 = v48;
                        v47[v48] = 0;
                        sub_9EC740((__int64)v81, a7, v78, v79, 0);
                        sub_1589170((__int64)v84, v81);
                        if ( v82 != &v83 )
                          operator delete(v82);
                        if ( v78 != v80 )
                          operator delete(v78);
                        sub_15F7200(v84);
                        if ( src != v77 )
                          operator delete(src);
                        return;
                      }
                    }
                    else
                    {
                      v49 = v80[0];
                      if ( v48 <= v80[0] )
                        goto LABEL_23;
                    }
                    if ( (v48 & 0x8000000000000000LL) == 0LL )
                    {
                      v59 = 2 * v49;
                      if ( v48 >= v59 )
                      {
                        v59 = v45 + v79;
                      }
                      else if ( v59 < 0 )
                      {
                        v59 = 0x7FFFFFFFFFFFFFFFLL;
                      }
                      v70 = v45 + v79;
                      v66 = v79;
                      v60 = (_BYTE *)operator new(v59 + 1);
                      v61 = v66;
                      v62 = v78;
                      v47 = v60;
                      v48 = v70;
                      if ( v66 )
                      {
                        if ( v66 == 1 )
                        {
                          *v60 = *(_BYTE *)v78;
                        }
                        else
                        {
                          v63 = v66;
                          v73 = v70;
                          v71 = v66;
                          v67 = v78;
                          memcpy(v60, v78, v63);
                          v48 = v73;
                          v61 = v71;
                          v62 = v67;
                        }
                      }
                      if ( v46 )
                      {
                        v64 = &v47[v61];
                        if ( v46 == 1 )
                        {
                          *v64 = 58;
                        }
                        else
                        {
                          v72 = v48;
                          v68 = (size_t)v62;
                          memcpy(v64, "::", v46);
                          v48 = v72;
                          v62 = (_QWORD *)v68;
                        }
                      }
                      if ( v62 != v80 )
                      {
                        v69 = v48;
                        operator delete(v62);
                        v48 = v69;
                      }
                      v78 = v47;
                      v80[0] = v59;
                      goto LABEL_26;
                    }
LABEL_74:
                    std::__throw_length_error("basic_string::_M_create");
                  }
                  v44 = v80;
                  if ( !n )
                    goto LABEL_20;
                }
                memcpy(v44, v42, v43);
                v44 = v78;
                goto LABEL_20;
              }
            }
          }
        }
      }
    }
  }
}
