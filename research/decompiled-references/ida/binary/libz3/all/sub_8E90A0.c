__int64 __fastcall sub_8E90A0(__int64 a1, __int64 a2, double a3)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  __int64 *v6; // rsi
  unsigned int v7; // r13d
  __int64 v8; // rdx
  __int64 v9; // rax
  char *v10; // r12
  __int64 v11; // rax
  char *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rbp
  __int64 v15; // rcx
  signed __int64 v16; // r15
  char *v17; // rax
  char *v18; // r14
  char *v19; // rbp
  unsigned int v20; // ecx
  unsigned int v21; // r14d
  __int64 v22; // r15
  unsigned __int64 v23; // rbp
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rdx
  __int64 v29; // r15
  unsigned __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // rbp
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 *v38; // rdi
  _DWORD *v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  _DWORD *v42; // rcx
  std::ostream *v43; // rbx
  _BYTE *v44; // rbp
  __int64 v45; // rsi
  std::ostream *v46; // rdi
  __int64 v47; // rdi
  std::ostream *v48; // rdi
  __int64 v49; // rdi
  std::ostream *v50; // rax
  std::ostream *v51; // rbx
  _BYTE *v52; // rbp
  char v53; // si
  std::ostream *v54; // rax
  __int64 (__fastcall *v55)(__int64, unsigned int); // rax
  __int64 (__fastcall *v56)(__int64, unsigned int); // rax
  char *dest; // [rsp+8h] [rbp-60h]
  unsigned int v58; // [rsp+10h] [rbp-58h]
  unsigned int v59; // [rsp+14h] [rbp-54h]
  __int64 v60; // [rsp+18h] [rbp-50h]
  __int64 v61; // [rsp+18h] [rbp-50h]
  int v62; // [rsp+18h] [rbp-50h]
  __int64 v63; // [rsp+28h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 9468);
  result = *(_QWORD *)(a1 + 8896);
  v58 = v4;
  if ( result )
  {
    a2 = v4;
    v59 = *(_DWORD *)(result - 4);
    if ( !v4 )
      goto LABEL_4;
  }
  else
  {
    if ( !v4 )
      return result;
    v59 = 0;
  }
  v58 = *(_DWORD *)(*(_QWORD *)(a1 + 9488) + 12LL * (v4 - 1));
LABEL_4:
  result = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 648LL) + v58;
  if ( (unsigned int)result >= v59 )
    return result;
  if ( (unsigned int)sub_180B130(a1) > 1 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v47 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v48 = (std::ostream *)sub_180B150(v47, "(smt.delete-inactive-lemmas");
      std::ostream::flush(v48);
      sub_186A500(v48, "(smt.delete-inactive-lemmas");
    }
    else
    {
      v49 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v50 = (std::ostream *)sub_180B150(v49, "(smt.delete-inactive-lemmas");
      std::ostream::flush(v50);
    }
  }
  v6 = *(__int64 **)(a1 + 8896);
  v7 = v59 - *(_DWORD *)(*(_QWORD *)(a1 + 112) + 648LL);
  v8 = 8LL * v58;
  v9 = 8LL * v7;
  if ( v9 != v8 )
  {
    v10 = (char *)&v6[(unsigned __int64)v9 / 8];
    v11 = v9 - v8;
    v12 = (char *)&v6[(unsigned __int64)v8 / 8];
    dest = (char *)&v6[(unsigned __int64)v8 / 8];
    v13 = v11 >> 3;
    v14 = ((v11 >> 3) + 1) / 2;
    v15 = v14;
    if ( v11 <= 0 )
    {
      if ( ((v11 >> 3) + 1) / 2 )
      {
LABEL_67:
        v16 = 0;
        v18 = nullptr;
        sub_8E6E40(dest, (__int64)v10);
        goto LABEL_12;
      }
      v19 = (char *)&v6[(unsigned __int64)v8 / 8];
      v16 = 0;
      v18 = nullptr;
    }
    else
    {
      while ( 1 )
      {
        v16 = 8 * v15;
        v60 = v15;
        v17 = (char *)operator new(8 * v15, (const std::nothrow_t *)&std::nothrow);
        v18 = v17;
        if ( v17 )
          break;
        if ( v60 == 1 )
          goto LABEL_67;
        v15 = (v60 + 1) >> 1;
      }
      if ( v14 != v60 )
      {
        sub_8E6470(dest, v10, v17, v60);
        goto LABEL_12;
      }
      v15 = v16 >> 3;
      v19 = &dest[v16];
      v12 = dest;
      v13 = (v10 - &dest[v16]) >> 3;
    }
    v63 = v15;
    v61 = v13;
    sub_8E53C0(v12, v19, v18);
    sub_8E53C0(v19, v10, v18);
    sub_8E5180(dest, v19, v10, v63, v61, v18);
LABEL_12:
    operator delete(v18, v16);
    v6 = *(__int64 **)(a1 + 8896);
  }
  v20 = (v58 + v7) >> 1;
  v21 = v20;
  if ( v20 >= v7 )
  {
    v62 = 0;
    v7 = (v58 + v7) >> 1;
  }
  else
  {
    v62 = 0;
    v22 = 8LL * v20;
    v23 = 8 * (v20 + (unsigned __int64)(v7 - 1 - v20) + 1);
    do
    {
      while ( 1 )
      {
        v27 = v6[(unsigned __int64)v22 / 8];
        if ( (*(_BYTE *)(v27 + 7) & 4) == 0 )
        {
          v24 = *(_QWORD *)(a1 + 8872);
          v25 = *(_QWORD *)(v24 + 16LL * (*(_DWORD *)(v27 + 8) >> 1));
          if ( (v25 & 7) != 0 || v27 != (v25 & 0xFFFFFFFFFFFFFFF8LL) )
          {
            v26 = *(_QWORD *)(v24 + 16LL * (*(_DWORD *)(v27 + 12) >> 1));
            if ( (v26 & 7) != 0 || v27 != (v26 & 0xFFFFFFFFFFFFFFF8LL) )
              break;
          }
        }
        v28 = v21;
        v22 += 8;
        ++v21;
        v6[v28] = v27;
        if ( v22 == v23 )
          goto LABEL_24;
      }
      sub_AED140(a1 + 7536, v6[(unsigned __int64)v22 / 8]);
      if ( *(char *)(v27 + 7) >= 0 )
        sub_8E8AA0((_QWORD *)a1, (unsigned int *)v27);
      v22 += 8;
      sub_AA3E20(v27, *(_QWORD *)(a1 + 104));
      ++*(_DWORD *)(a1 + 60);
      v6 = *(__int64 **)(a1 + 8896);
      ++v62;
    }
    while ( v22 != v23 );
  }
LABEL_24:
  if ( v7 < v59 )
  {
    v29 = 8LL * v7;
    v30 = 8 * (v7 + (unsigned __int64)(v59 - 1 - v7) + 1);
    do
    {
      while ( 1 )
      {
        v32 = v6[(unsigned __int64)v29 / 8];
        v33 = *(_BYTE *)(v32 + 7);
        if ( v33 < 0 && (v33 & 4) == 0 )
        {
          v34 = *(_QWORD *)(a1 + 8872);
          v35 = *(_QWORD *)(v34 + 16LL * (*(_DWORD *)(v32 + 8) >> 1));
          if ( (v35 & 7) != 0 || v32 != (v35 & 0xFFFFFFFFFFFFFFF8LL) )
          {
            v36 = *(_QWORD *)(v34 + 16LL * (*(_DWORD *)(v32 + 12) >> 1));
            if ( (v36 & 7) != 0 || v32 != (v36 & 0xFFFFFFFFFFFFFFF8LL) )
              break;
          }
        }
        v31 = v21;
        v29 += 8;
        ++v21;
        v6[v31] = v32;
        if ( v30 == v29 )
          goto LABEL_36;
      }
      sub_AED140(a1 + 7536, v6[(unsigned __int64)v29 / 8]);
      if ( *(char *)(v32 + 7) >= 0 )
        sub_8E8AA0((_QWORD *)a1, (unsigned int *)v32);
      v29 += 8;
      sub_AA3E20(v32, *(_QWORD *)(a1 + 104));
      ++*(_DWORD *)(a1 + 60);
      v6 = *(__int64 **)(a1 + 8896);
      ++v62;
    }
    while ( v30 != v29 );
  }
LABEL_36:
  if ( v6 )
    *((_DWORD *)v6 - 1) = v21;
  v37 = *(_QWORD *)(a1 + 112);
  v38 = (__int64 *)*(unsigned int *)(v37 + 504);
  if ( (unsigned int)v38 > 1 && v58 < v21 )
  {
    v39 = (_DWORD *)(v6[v58] + 4LL * (*(_DWORD *)(v6[v58] + 4) & 0xFFFFFF) + 8);
    *v39 /= (unsigned int)v38;
    v40 = v58 + 1;
    if ( (unsigned int)v40 < v21 )
    {
      v38 = &v6[v40];
      v6 += v21 - v58 + v40 - 1;
      do
      {
        v41 = *v38++;
        v42 = (_DWORD *)(v41 + 4LL * (*(_DWORD *)(v41 + 4) & 0xFFFFFF) + 8);
        *v42 /= *(_DWORD *)(v37 + 504);
      }
      while ( v38 != v6 );
    }
  }
  result = sub_180B130(v38);
  if ( (unsigned int)result > 1 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      sub_180B150(v38, v6);
      std::__ostream_insert<char,std::char_traits<char>>();
      v43 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v44 = *(_BYTE **)((char *)v43 + *(_QWORD *)(*(_QWORD *)v43 - 24LL) + 240);
      if ( v44 )
      {
        if ( v44[56] )
        {
          v45 = (unsigned int)(char)v44[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v45 = 10;
          v56 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v44 + 48LL);
          if ( v56 != sub_26BE90 )
            v45 = (unsigned int)(char)v56((__int64)v44, 10u);
        }
        v46 = (std::ostream *)std::ostream::put(v43, v45);
        std::ostream::flush(v46);
        return sub_186A500(v46, v45);
      }
LABEL_70:
      std::__throw_bad_cast();
    }
    sub_180B150(v38, v6);
    std::__ostream_insert<char,std::char_traits<char>>();
    v51 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v52 = *(_BYTE **)((char *)v51 + *(_QWORD *)(*(_QWORD *)v51 - 24LL) + 240);
    if ( !v52 )
      goto LABEL_70;
    if ( v52[56] )
    {
      v53 = v52[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v53 = 10;
      v55 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v52 + 48LL);
      if ( v55 != sub_26BE90 )
        v53 = v55((__int64)v52, 10u);
    }
    v54 = (std::ostream *)std::ostream::put(v51, v53);
    return std::ostream::flush(v54);
  }
  return result;
}

