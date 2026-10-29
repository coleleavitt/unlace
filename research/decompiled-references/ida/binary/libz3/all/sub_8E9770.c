__int64 __fastcall sub_8E9770(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rsi
  unsigned int v5; // r15d
  unsigned int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // r15d
  unsigned int v9; // ebp
  __int64 v10; // r12
  unsigned int v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned int *v16; // rcx
  __int64 v17; // rax
  int *v18; // rcx
  unsigned int *v19; // rbx
  char v20; // dl
  __int64 result; // rax
  int v22; // r9d
  __int64 v23; // rax
  unsigned int *v24; // r11
  unsigned int *v25; // rax
  std::ostream *v26; // rbx
  _BYTE *v27; // rbp
  __int64 v28; // rsi
  std::ostream *v29; // rdi
  __int64 v30; // rdi
  std::ostream *v31; // rdi
  std::ostream *v32; // rbx
  _BYTE *v33; // rbp
  char v34; // si
  std::ostream *v35; // rax
  __int64 v36; // rdi
  std::ostream *v37; // rax
  __int64 (__fastcall *v38)(__int64, unsigned int); // rax
  __int64 (__fastcall *v39)(__int64, unsigned int); // rax
  unsigned int v40; // [rsp+0h] [rbp-48h]
  unsigned int v41; // [rsp+4h] [rbp-44h]
  int v42; // [rsp+8h] [rbp-40h]
  unsigned int v43; // [rsp+Ch] [rbp-3Ch]

  if ( (unsigned int)sub_180B130(a1) > 1 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v30 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v31 = (std::ostream *)sub_180B150(v30, "(smt.delete-inactive-clauses ");
      std::ostream::flush(v31);
      sub_186A500(v31, "(smt.delete-inactive-clauses ");
      v4 = *(_QWORD *)(a1 + 8896);
      if ( v4 )
        goto LABEL_3;
      goto LABEL_40;
    }
    v36 = sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    v37 = (std::ostream *)sub_180B150(v36, "(smt.delete-inactive-clauses ");
    std::ostream::flush(v37);
  }
  v4 = *(_QWORD *)(a1 + 8896);
  if ( v4 )
  {
LABEL_3:
    v5 = *(_DWORD *)(v4 - 4);
    goto LABEL_4;
  }
LABEL_40:
  v5 = 0;
LABEL_4:
  v6 = *(_DWORD *)(a1 + 9468);
  v40 = v5;
  v41 = v6;
  if ( v6 )
  {
    v41 = *(_DWORD *)(*(_QWORD *)(a1 + 9488) + 12LL * (v6 - 1));
    v40 = v5 - v41;
  }
  v7 = v41;
  v43 = v41 + (*(_DWORD *)(*(_QWORD *)(a1 + 112) + 664LL) - 1) * (v40 / *(_DWORD *)(*(_QWORD *)(a1 + 112) + 664LL));
  if ( v41 < v5 )
  {
    v42 = 0;
    v8 = v5 - v41;
    v9 = 0;
    v10 = 8LL * v41;
    v11 = v41;
    while ( 1 )
    {
      v19 = *(unsigned int **)(v4 + v10);
      v20 = *((_BYTE *)v19 + 7);
      if ( (v20 & 4) != 0
        || (v12 = *(_QWORD *)(a1 + 8872), v13 = *(_QWORD *)(v12 + 16LL * (v19[2] >> 1)), (v13 & 7) == 0)
        && v19 == (unsigned int *)(v13 & 0xFFFFFFFFFFFFFFF8LL)
        || (v14 = *(_QWORD *)(v12 + 16LL * (v19[3] >> 1)), (v14 & 7) == 0)
        && v19 == (unsigned int *)(v14 & 0xFFFFFFFFFFFFFFF8LL) )
      {
        v15 = *(_QWORD *)(a1 + 112);
        v16 = v19 + 2;
        v7 = 4LL * (v19[1] & 0xFFFFFF);
      }
      else
      {
        if ( v20 < 0 )
          goto LABEL_30;
        v15 = *(_QWORD *)(a1 + 112);
        v16 = v19 + 2;
        v7 = 4LL * (v19[1] & 0xFFFFFF);
        if ( *(unsigned int *)((char *)v19 + v7 + 8) < *(_DWORD *)(v15 + 672)
                                                     - v9 / v40 * (*(_DWORD *)(v15 + 672) - *(_DWORD *)(v15 + 668)) )
        {
          v22 = *(_DWORD *)(v15 + 680);
          if ( v9 + v41 >= v43 )
            v22 = *(_DWORD *)(v15 + 676);
          v23 = *v19;
          v24 = &v16[v23];
          if ( v23 * 4 )
          {
            v25 = v19 + 2;
            while ( *(_BYTE *)(*(_QWORD *)(a1 + 8848) + *v25) || --v22 )
            {
              if ( v24 == ++v25 )
                goto LABEL_14;
            }
LABEL_30:
            sub_AED140(a1 + 7536, *(_QWORD *)(v4 + v10));
            if ( *((char *)v19 + 7) >= 0 )
              sub_8E8AA0((_QWORD *)a1, v19);
            v7 = (__int64)v19;
            sub_AA3E20(v19, *(_QWORD *)(a1 + 104));
            ++*(_DWORD *)(a1 + 60);
            v4 = *(_QWORD *)(a1 + 8896);
            ++v42;
            goto LABEL_15;
          }
        }
      }
LABEL_14:
      v17 = v11;
      v18 = (int *)((char *)v16 + v7);
      ++v11;
      *(_QWORD *)(v4 + 8 * v17) = v19;
      a3 = (double)*v18 / *(double *)(v15 + 688);
      *v18 = (int)a3;
LABEL_15:
      ++v9;
      v10 += 8;
      if ( v9 == v8 )
        goto LABEL_19;
    }
  }
  v11 = v41;
LABEL_19:
  if ( v4 )
    *(_DWORD *)(v4 - 4) = v11;
  result = sub_180B130(v7);
  if ( (unsigned int)result > 1 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      sub_180B150(v7, v4);
      std::__ostream_insert<char,std::char_traits<char>>();
      v26 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v27 = *(_BYTE **)((char *)v26 + *(_QWORD *)(*(_QWORD *)v26 - 24LL) + 240);
      if ( v27 )
      {
        if ( v27[56] )
        {
          v28 = (unsigned int)(char)v27[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v28 = 10;
          v38 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v27 + 48LL);
          if ( v38 != sub_26BE90 )
            v28 = (unsigned int)(char)v38((__int64)v27, 10u);
        }
        v29 = (std::ostream *)std::ostream::put(v26, v28);
        std::ostream::flush(v29);
        return sub_186A500(v29, v28);
      }
    }
    else
    {
      sub_180B150(v7, v4);
      std::__ostream_insert<char,std::char_traits<char>>();
      v32 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v33 = *(_BYTE **)((char *)v32 + *(_QWORD *)(*(_QWORD *)v32 - 24LL) + 240);
      if ( v33 )
      {
        if ( v33[56] )
        {
          v34 = v33[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v34 = 10;
          v39 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v33 + 48LL);
          if ( v39 != sub_26BE90 )
            v34 = v39((__int64)v33, 10u);
        }
        v35 = (std::ostream *)std::ostream::put(v32, v34);
        return std::ostream::flush(v35);
      }
    }
    std::__throw_bad_cast();
  }
  return result;
}

