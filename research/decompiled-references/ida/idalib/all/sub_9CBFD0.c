__int64 *__fastcall sub_9CBFD0(__int64 *a1, size_t a2)
{
  char *v3; // r13
  char *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 *v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  std::ostream *v14; // rcx
  void *v15; // rax
  void *v16; // rdi
  size_t v17; // rdx
  void *v18; // rsi
  char *v19; // [rsp+8h] [rbp-210h]
  __int64 v20; // [rsp+10h] [rbp-208h]
  __int64 v21; // [rsp+18h] [rbp-200h]
  char *v22; // [rsp+20h] [rbp-1F8h]
  size_t n; // [rsp+28h] [rbp-1F0h] BYREF
  std::ostream *v24; // [rsp+30h] [rbp-1E8h]
  __int64 *v25; // [rsp+38h] [rbp-1E0h]
  size_t v26; // [rsp+48h] [rbp-1D0h] BYREF
  char *v27; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-1C0h]
  _OWORD v29[2]; // [rsp+60h] [rbp-1B8h] BYREF
  __int128 v30; // [rsp+80h] [rbp-198h]
  __int128 v31; // [rsp+90h] [rbp-188h]
  _DWORD v32[4]; // [rsp+A0h] [rbp-178h] BYREF
  void *src; // [rsp+B0h] [rbp-168h]
  size_t v34; // [rsp+B8h] [rbp-160h]
  _BYTE v35[16]; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v36[28]; // [rsp+D0h] [rbp-148h] BYREF
  __int16 v37; // [rsp+1B0h] [rbp-68h]
  __int128 v38; // [rsp+1B8h] [rbp-60h]
  __int128 v39; // [rsp+1C8h] [rbp-50h]

  n = a2;
  std::ios_base::ios_base((std::ios_base *)v36);
  v36[27] = 0;
  v3 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v38 = 0;
  v39 = 0;
  v37 = 0;
  v4 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v36[0] = (char *)&`vtable for'std::ios + 16;
  v5 = *((_QWORD *)v3 - 3);
  v27 = v3;
  *(char **)((char *)&v27 + v5) = v4;
  v28 = 0;
  v19 = v4;
  std::ios::init((char *)&v27 + *((_QWORD *)v3 - 3), 0);
  v6 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v7 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v8 = (_QWORD *)((char *)v29 + *(_QWORD *)(v6 - 24));
  *(_QWORD *)&v29[0] = v6;
  *v8 = v7;
  v24 = (std::ostream *)v29;
  v20 = v7;
  std::ios::init(v8, 0);
  v21 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v22 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  *(char **)((char *)&v27 + *(_QWORD *)(v21 - 24)) = v22;
  v27 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v36[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  *(_QWORD *)&v29[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                     + 64;
  v29[1] = 0;
  v30 = 0;
  v31 = 0;
  *((_QWORD *)&v29[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::locale((std::locale *)v32);
  v32[2] = 24;
  v9 = a1 + 2;
  v35[0] = 0;
  *((_QWORD *)&v29[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  src = v35;
  v34 = 0;
  std::ios::init(v36, (char *)v29 + 8);
  LOWORD(v26) = 256;
  BYTE2(v26) = 1;
  v25 = (__int64 *)&v26;
  sub_9CB080((__int64)&v26, n, v24, 6u, 1);
  v10 = v31;
  *a1 = (__int64)(a1 + 2);
  a1[1] = 0;
  *((_BYTE *)a1 + 16) = 0;
  if ( !v10 )
  {
    v14 = (std::ostream *)v34;
    if ( v34 > 0xF )
    {
      v26 = v34;
      n = v34;
      v15 = (void *)sub_9C8230(v25, 0xFu);
      v16 = (void *)*a1;
      v14 = (std::ostream *)n;
      if ( v9 != (__int64 *)*a1 )
      {
        v24 = (std::ostream *)n;
        n = (size_t)v15;
        operator delete(v16);
        v14 = v24;
        v15 = (void *)n;
      }
      v17 = v26;
      *a1 = (__int64)v15;
      v18 = src;
      a1[2] = v17;
    }
    else
    {
      if ( !v34 )
      {
LABEL_10:
        a1[1] = (__int64)v14;
        *((_BYTE *)v14 + (_QWORD)v9) = 0;
        goto LABEL_4;
      }
      v18 = src;
      if ( v34 == 1 )
      {
        *((_BYTE *)a1 + 16) = *(_BYTE *)src;
        goto LABEL_10;
      }
      v15 = a1 + 2;
    }
    n = (size_t)v14;
    memcpy(v15, v18, (size_t)v14);
    v9 = (__int64 *)*a1;
    v14 = (std::ostream *)n;
    goto LABEL_10;
  }
  if ( v10 > (unsigned __int64)v30 )
    sub_99BDC0(a1, 0, 0, *((_BYTE **)&v30 + 1), v10 - *((_QWORD *)&v30 + 1));
  else
    sub_99BDC0(a1, 0, 0, *((_BYTE **)&v30 + 1), v30 - *((_QWORD *)&v30 + 1));
LABEL_4:
  v27 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v36[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  n = (size_t)&`vtable for'std::stringbuf + 16;
  v29[0] = _mm_loadh_ps((const double *)&n);
  if ( src != v35 )
    operator delete(src);
  *((_QWORD *)&v29[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v32);
  *(char **)((char *)&v27 + *(_QWORD *)(v21 - 24)) = v22;
  v11 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)&v29[0] = v6;
  *(_QWORD *)((char *)v29 + v11) = v20;
  v12 = *((_QWORD *)v3 - 3);
  v27 = v3;
  *(char **)((char *)&v27 + v12) = v19;
  v28 = 0;
  v36[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v36);
  return a1;
}
