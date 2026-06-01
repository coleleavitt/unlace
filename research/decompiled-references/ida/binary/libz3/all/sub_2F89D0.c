__int64 __fastcall sub_2F89D0(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // r13d
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // r14
  int *v9; // r14
  int *v10; // rbx
  size_t v11; // rbp
  size_t v12; // rdx
  char *v13; // rax
  _BYTE *v14; // rax
  size_t v15; // r15
  __int64 v16; // rbx
  _QWORD *v17; // rdi
  size_t v18; // rbx
  unsigned __int64 v19; // rax
  size_t v20; // rbx
  size_t v21; // r9
  unsigned __int64 v22; // rdx
  size_t v23; // rax
  _QWORD *v24; // rdi
  size_t v25; // r9
  unsigned __int64 v26; // rax
  size_t v27; // rax
  size_t v28; // r9
  unsigned __int64 v29; // rcx
  size_t v30; // rbp
  unsigned __int64 v31; // rdi
  _BYTE *v32; // rdi
  _BYTE *v33; // rdi
  size_t v35; // [rsp+10h] [rbp-178h]
  size_t v36; // [rsp+10h] [rbp-178h]
  size_t v37; // [rsp+10h] [rbp-178h]
  _BYTE *v39; // [rsp+28h] [rbp-160h]
  size_t v40; // [rsp+28h] [rbp-160h]
  void *dest; // [rsp+30h] [rbp-158h] BYREF
  size_t v42; // [rsp+38h] [rbp-150h]
  _QWORD v43[2]; // [rsp+40h] [rbp-148h] BYREF
  _QWORD *v44; // [rsp+50h] [rbp-138h] BYREF
  size_t v45; // [rsp+58h] [rbp-130h]
  _QWORD v46[2]; // [rsp+60h] [rbp-128h] BYREF
  void *src; // [rsp+70h] [rbp-118h] BYREF
  size_t n; // [rsp+78h] [rbp-110h]
  size_t v49; // [rsp+80h] [rbp-108h] BYREF
  _QWORD v50[4]; // [rsp+90h] [rbp-F8h] BYREF
  _QWORD v51[4]; // [rsp+B0h] [rbp-D8h] BYREF
  _QWORD v52[4]; // [rsp+D0h] [rbp-B8h] BYREF
  _QWORD v53[2]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v54; // [rsp+100h] [rbp-88h]
  __int64 v55; // [rsp+108h] [rbp-80h]
  _QWORD v56[4]; // [rsp+110h] [rbp-78h] BYREF
  _QWORD v57[11]; // [rsp+130h] [rbp-58h] BYREF

  v3 = 0;
  for ( result = *(_QWORD *)(a1 + 608); result; result = *(_QWORD *)(a1 + 608) )
  {
    if ( v3 >= *(_DWORD *)(result - 4) )
      return result;
    v5 = result + 104LL * v3;
    if ( *(_DWORD *)v5 == 2 )
    {
      v6 = *(_QWORD *)(v5 + 88);
      if ( !v6 )
        goto LABEL_7;
      if ( (v6 & 7) == 0 )
      {
        sub_2EB4A0(a2, *(const char **)(v5 + 88));
        if ( !*(_DWORD *)v5 )
          goto LABEL_26;
        goto LABEL_7;
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      sub_160EC40(a2, v5 + 8);
    }
    if ( !*(_DWORD *)v5 )
    {
LABEL_26:
      std::__ostream_insert<char,std::char_traits<char>>();
      v16 = 192LL * v3;
      sub_2FE070(v53, v16 + *a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_233E40((__int64)v53);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_2FE070(v53, *a3 + v16 + 96);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_233E40((__int64)v53);
      std::__ostream_insert<char,std::char_traits<char>>();
      goto LABEL_27;
    }
LABEL_7:
    std::__ostream_insert<char,std::char_traits<char>>();
    v7 = 192LL * v3;
    v50[0] = 0;
    v8 = *a3;
    v50[1] = 0;
    v50[2] = 1;
    v9 = (int *)(v7 + v8);
    v50[3] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v50, v9 + 24);
    v51[0] = 0;
    v51[1] = 0;
    v51[2] = 1;
    v51[3] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v51, v9 + 32);
    v52[0] = 0;
    v52[1] = 0;
    v52[2] = 1;
    v52[3] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v52, v9 + 40);
    sub_1831620(qword_1C7F2C0, v50);
    sub_1831620(qword_1C7F2C0, v51);
    sub_1831620(qword_1C7F2C0, v52);
    sub_2FE070(v53, v50);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_233E40((__int64)v53);
    std::__ostream_insert<char,std::char_traits<char>>();
    v53[0] = 0;
    v53[1] = 0;
    v54 = 1;
    v10 = (int *)(*a3 + v7);
    v55 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v53, v10);
    v56[0] = 0;
    v56[1] = 0;
    v56[2] = 1;
    v56[3] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v56, v10 + 8);
    v57[0] = 0;
    v57[1] = 0;
    v57[2] = 1;
    v57[3] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v57, v10 + 16);
    sub_1831620(qword_1C7F2C0, v53);
    sub_1831620(qword_1C7F2C0, v56);
    sub_1831620(qword_1C7F2C0, v57);
    if ( LODWORD(v53[0]) )
    {
      LOBYTE(v43[0]) = 0;
      dest = v43;
      v42 = 0;
      if ( (v53[0] & 0x100000000LL) != 0 )
        goto LABEL_11;
      if ( LODWORD(v53[0]) == 1 )
      {
        if ( (v54 & 0x100000000LL) != 0 || (_DWORD)v54 != 1 )
          goto LABEL_11;
        sub_2F7440((char **)&dest, 0, 0, "oo", 2u);
      }
      else
      {
        if ( LODWORD(v53[0]) == -1 && (v54 & 0x100000000LL) == 0 && (_DWORD)v54 == 1 )
        {
          sub_2F7440((char **)&dest, 0, 0, "-oo", 3u);
          goto LABEL_20;
        }
LABEL_11:
        sub_1850940(&src, qword_1C7F2C0, v53);
        v11 = n;
        if ( 0x7FFFFFFFFFFFFFFFLL - n <= 2 )
          std::__throw_length_error("basic_string::append");
        if ( src == &v49 )
          v12 = 15;
        else
          v12 = v49;
        if ( v12 < n + 3 )
        {
          sub_23A830(&src, n, 0, "*oo", 3u);
        }
        else
        {
          v13 = (char *)src + n;
          *(_WORD *)v13 = 28458;
          v13[2] = 111;
        }
        n = v11 + 3;
        *((_BYTE *)src + v11 + 3) = 0;
        v14 = dest;
        v15 = n;
        if ( dest != v43 )
        {
          if ( v43[0] >= n )
            goto LABEL_18;
          if ( (n & 0x8000000000000000LL) != 0LL )
            goto LABEL_92;
          v30 = 2LL * v43[0];
          if ( n < 2LL * v43[0] )
          {
            if ( (v43[0] & 0x4000000000000000LL) != 0 )
LABEL_80:
              std::__throw_bad_alloc();
            v31 = v30 + 1;
          }
          else
          {
LABEL_53:
            v31 = n + 1;
            if ( (__int64)(n + 1) < 0 )
              goto LABEL_80;
            v30 = n;
          }
          goto LABEL_55;
        }
        if ( n <= 0xF )
        {
LABEL_18:
          if ( n )
            goto LABEL_56;
        }
        else
        {
          if ( (n & 0x8000000000000000LL) != 0LL )
LABEL_92:
            std::__throw_length_error("basic_string::_M_create");
          if ( n > 0x1D )
            goto LABEL_53;
          v31 = 31;
          v30 = 30;
LABEL_55:
          v39 = (_BYTE *)operator new(v31);
          sub_233E40((__int64)&dest);
          v14 = v39;
          v43[0] = v30;
          dest = v39;
LABEL_56:
          if ( v15 == 1 )
            *v14 = *(_BYTE *)src;
          else
            memcpy(v14, src, v15);
          v14 = dest;
        }
        v42 = v15;
        v14[v15] = 0;
        sub_233E40((__int64)&src);
      }
LABEL_20:
      if ( LODWORD(v57[0]) | LODWORD(v56[0]) )
      {
        sub_2EB560((__int64 *)&v44, "(");
        if ( 0x7FFFFFFFFFFFFFFFLL - v45 < v42 )
          std::__throw_length_error("basic_string::append");
        v17 = v44;
        v18 = v42 + v45;
        if ( v44 == v46 )
          v19 = 15;
        else
          v19 = v46[0];
        if ( v19 < v18 )
        {
          sub_23A830(&v44, v45, 0, (char *)dest, v42);
          v17 = v44;
        }
        else if ( v42 )
        {
          v33 = (char *)v44 + v45;
          if ( v42 == 1 )
            *v33 = *(_BYTE *)dest;
          else
            memcpy(v33, dest, v42);
          v17 = v44;
        }
        v45 = v18;
        *((_BYTE *)v17 + v18) = 0;
        v20 = v45;
        if ( 0x7FFFFFFFFFFFFFFFLL - v45 <= 2 )
          std::__throw_length_error("basic_string::append");
        v21 = v45 + 3;
        if ( v44 == v46 )
          v22 = 15;
        else
          v22 = v46[0];
        if ( v22 < v21 )
        {
          sub_23A830(&v44, v45, 0, " + ", 3u);
          v21 = v20 + 3;
        }
        else
        {
          v23 = (size_t)v44 + v45;
          *(_WORD *)v23 = 11040;
          *(_BYTE *)(v23 + 2) = 32;
        }
        v45 = v21;
        *((_BYTE *)v44 + v20 + 3) = 0;
        sub_2FD7A0(&src, v56);
        if ( 0x7FFFFFFFFFFFFFFFLL - v45 < n )
          std::__throw_length_error("basic_string::append");
        v24 = v44;
        v25 = n + v45;
        if ( v44 == v46 )
          v26 = 15;
        else
          v26 = v46[0];
        if ( v26 < v25 )
        {
          v37 = n + v45;
          sub_23A830(&v44, v45, 0, (char *)src, n);
          v24 = v44;
          v25 = v37;
        }
        else if ( n )
        {
          v32 = (char *)v44 + v45;
          if ( n == 1 )
          {
            *v32 = *(_BYTE *)src;
            v24 = v44;
          }
          else
          {
            v35 = n + v45;
            memcpy(v32, src, n);
            v24 = v44;
            v25 = v35;
          }
        }
        v45 = v25;
        *((_BYTE *)v24 + v25) = 0;
        sub_233E40((__int64)&src);
        v27 = v45;
        if ( v45 == 0x7FFFFFFFFFFFFFFFLL )
          std::__throw_length_error("basic_string::append");
        v28 = v45 + 1;
        if ( v44 == v46 )
          v29 = 15;
        else
          v29 = v46[0];
        if ( v29 < v28 )
        {
          v40 = v45 + 1;
          v36 = v45;
          sub_23A830(&v44, v45, 0, ")", 1u);
          v28 = v40;
          v27 = v36;
        }
        else
        {
          *((_BYTE *)v44 + v45) = 41;
        }
        v45 = v28;
        *((_BYTE *)v44 + v27 + 1) = 0;
        sub_2333C0((char **)&src, &v44);
        sub_233E40((__int64)&v44);
      }
      else
      {
        sub_2333C0((char **)&src, &dest);
      }
      sub_233E40((__int64)&dest);
      goto LABEL_23;
    }
    sub_2FD7A0(&src, v56);
LABEL_23:
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_233E40((__int64)&src);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_2A6060((__int64)v53);
    sub_2A6060((__int64)v50);
LABEL_27:
    ++v3;
  }
  return result;
}

