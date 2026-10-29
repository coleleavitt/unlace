__int64 __fastcall sub_3E7380(__m128i *a1, char *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  _DWORD *v5; // rax
  _QWORD *exception; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  __m128i *v10; // rdi
  __int64 v11; // r13
  unsigned __int64 v12; // rdx
  __int64 i; // rax
  int v14; // r8d
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbx
  __int64 v17; // r12
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r12
  __m128i *v20; // rax
  __int16 v21; // bx
  __int64 v22; // r12
  __int16 v23; // ax
  int v24; // ebx
  __int16 v25; // ax
  __int16 v26; // ax
  __int64 *v27; // r12
  __int64 v28; // rbx
  int *v29; // r15
  int v30; // ecx
  int *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 v34; // rbp
  __int64 j; // rbx
  __int64 *v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  unsigned __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // r12
  __int64 v53; // rbp
  __int64 m; // rbx
  __int64 *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // r12
  __int64 v59; // rbp
  __int64 jj; // rbx
  __int64 *v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // r12
  __int64 v65; // rbp
  __int64 ii; // rbx
  __int64 *v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rdi
  __int64 v70; // rbp
  __int64 k; // rbx
  __int64 *v72; // rax
  __int64 v73; // rdi
  __int64 v75; // [rsp+8h] [rbp-B0h]
  char v76; // [rsp+17h] [rbp-A1h]
  __int64 n; // [rsp+18h] [rbp-A0h]
  void *src; // [rsp+20h] [rbp-98h] BYREF
  __int128 v79; // [rsp+28h] [rbp-90h]
  int v80; // [rsp+48h] [rbp-70h] BYREF
  int *v81; // [rsp+50h] [rbp-68h]
  int *v82; // [rsp+58h] [rbp-60h]
  int *v83; // [rsp+60h] [rbp-58h]
  __int64 v84; // [rsp+68h] [rbp-50h]
  unsigned __int64 v85; // [rsp+78h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  v10 = (__m128i *)&dword_30;
  v80 = 0;
  v81 = nullptr;
  v82 = &v80;
  v83 = &v80;
  v84 = 0;
  v76 = 0;
  v11 = j__qalloc_or_throw(48, (__int64)a2, a3, a4);
  v12 = 0;
  *(_QWORD *)v11 = 0;
  *(_QWORD *)(v11 + 24) = 0;
  *(_OWORD *)(v11 + 8) = 0;
  *(_OWORD *)(v11 + 32) = 0;
  for ( i = 0; ; i = *(_QWORD *)(v11 + 8) )
  {
    v14 = v12 + 1;
    v15 = (int)v12 + 1;
    if ( v15 == i )
      goto LABEL_13;
    src = nullptr;
    v79 = 0;
    v16 = *(_QWORD *)(v11 + 8);
    if ( v14 < v16 )
    {
      v44 = v14;
      do
      {
        v45 = *(_QWORD *)v11 + 24 * v44;
        v10 = *(__m128i **)v45;
        if ( *(_QWORD *)v45 )
        {
          *(_QWORD *)(v45 + 8) = 0;
          qfree((__int64)v10);
        }
        ++v44;
      }
      while ( v44 < v16 );
      *(_QWORD *)(v11 + 8) = v15;
      v12 = *(_QWORD *)(v11 + 32);
    }
    else
    {
      if ( v16 >= v14 )
        goto LABEL_13;
      v17 = *(_QWORD *)v11;
      v18 = *(_QWORD *)(v11 + 16);
      if ( (unsigned __int64)&src < *(_QWORD *)v11 || (unsigned __int64)&src >= v17 + 24 * v18 )
      {
        if ( v18 >= v14
          || (a2 = *(char **)v11,
              v10 = (__m128i *)v11,
              v49 = qvector_reserve(v11, *(_QWORD *)v11, v14, 24),
              v16 = *(_QWORD *)(v11 + 8),
              *(_QWORD *)v11 = v49,
              v17 = v49,
              v16 < v15) )
        {
          while ( 1 )
          {
            v19 = v17 + 24 * v16;
            *(_QWORD *)v19 = 0;
            *(_OWORD *)(v19 + 8) = 0;
            if ( (_QWORD)v79 )
            {
              v75 = v79;
              n = 8 * v79;
              v20 = (__m128i *)qalloc_or_throw(8 * v79, (__int64)a2, 8 * v79, v79);
              *(_QWORD *)v19 = v20;
              v10 = v20;
              ++v16;
              *(_QWORD *)(v19 + 16) = v75;
              a2 = (char *)src;
              memcpy(v20, src, n);
              *(_QWORD *)(v19 + 8) = v75;
              if ( v16 >= v15 )
                break;
            }
            else if ( ++v16 >= v15 )
            {
              break;
            }
            v17 = *(_QWORD *)v11;
          }
        }
LABEL_12:
        *(_QWORD *)(v11 + 8) = v15;
        v12 = *(_QWORD *)(v11 + 32);
        goto LABEL_13;
      }
      if ( v18 < v14 )
      {
        a2 = *(char **)v11;
        v10 = (__m128i *)v11;
        v50 = qvector_reserve(v11, *(_QWORD *)v11, v14, 24);
        v16 = *(_QWORD *)(v11 + 8);
        *(_QWORD *)v11 = v50;
        v17 = v50;
        if ( v16 >= v15 )
          goto LABEL_12;
      }
      v46 = 24 * v16;
      while ( 1 )
      {
        v47 = v46 + v17;
        ++v16;
        v46 += 24;
        *(_QWORD *)v47 = 0;
        *(_OWORD *)(v47 + 8) = 0;
        if ( v15 == v16 )
          break;
        v17 = *(_QWORD *)v11;
      }
      *(_QWORD *)(v11 + 8) = v15;
      v12 = *(_QWORD *)(v11 + 32);
    }
LABEL_13:
    if ( v12 < v15 )
    {
      v43 = *(_QWORD *)(v11 + 24);
      if ( *(_QWORD *)(v11 + 40) < v15 )
      {
        v48 = qvector_reserve(v11 + 24, v43, v15, 4);
        *(_QWORD *)(v11 + 24) = v48;
        v12 = *(_QWORD *)(v11 + 32);
        v43 = v48;
      }
      v10 = (__m128i *)(v43 + 4 * v12);
      a2 = nullptr;
      memset(v10, 0, 4 * (v15 - v12));
      *(_QWORD *)(v11 + 32) = v15;
    }
    else if ( v15 != v12 )
    {
      *(_QWORD *)(v11 + 32) = v15;
    }
    v21 = a1[67].m128i_i16[2];
    v22 = *(_QWORD *)v11;
    if ( v21 != 2 || (v10 = a1 + 2, a2 = "def", strcmp(a1[2].m128i_i8, "def")) )
    {
      v27 = (__int64 *)(v22 + 24LL * *(_QWORD *)(v11 + 8) - 24);
      if ( v21 != 45 )
      {
LABEL_28:
        if ( v21 == 3 )
        {
          v28 = a1[66].m128i_i64[0];
          goto LABEL_30;
        }
LABEL_137:
        sub_5C092(v10, a2, 0.0);
      }
      while ( 1 )
      {
        v10 = a1;
        sub_3E65E0(a1);
        if ( a1[67].m128i_i16[2] != 3 )
          goto LABEL_137;
        v28 = -a1[66].m128i_i64[0];
LABEL_30:
        sub_3E65E0(a1);
        v29 = v81;
        if ( v81 )
        {
          while ( 1 )
          {
            v30 = v29[8];
            v31 = *((int **)v29 + 3);
            if ( (int)v28 < v30 )
              v31 = *((int **)v29 + 2);
            if ( !v31 )
              break;
            v29 = v31;
          }
          if ( (int)v28 >= v30 )
            goto LABEL_37;
          if ( v82 == v29 )
            goto LABEL_49;
        }
        else if ( v82 == &v80 )
        {
          goto LABEL_49;
        }
        v30 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
LABEL_37:
        if ( (int)v28 <= v30 )
        {
          if ( v11 )
          {
            v32 = *(_QWORD *)(v11 + 24);
            if ( v32 )
            {
              *(_QWORD *)(v11 + 32) = 0;
              qfree(v32);
            }
            v33 = *(_QWORD *)v11;
            if ( *(_QWORD *)v11 )
            {
              v34 = *(_QWORD *)(v11 + 8);
              if ( v34 )
              {
                for ( j = 0; j != v34; ++j )
                {
                  v36 = (__int64 *)(v33 + 24 * j);
                  v37 = *v36;
                  if ( *v36 )
                  {
                    v36[1] = 0;
                    qfree(v37);
                    v33 = *(_QWORD *)v11;
                  }
                }
              }
              *(_QWORD *)(v11 + 8) = 0;
              qfree(v33);
            }
            j__qfree(v11);
          }
          exception = __cxa_allocate_exception(8u);
          *exception = "Duplicate case number";
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
        }
LABEL_49:
        *(_DWORD *)(operator new(0x28u) + 32) = v28;
        v28 = (int)v28;
        std::_Rb_tree_insert_and_rebalance();
        ++v84;
        src = (void *)(int)v28;
        v38 = v27[1];
        a2 = (char *)*v27;
        v39 = v27[2];
        v40 = v38 + 1;
        if ( (unsigned __int64)&src < *v27 || &src >= (void **)&a2[8 * v39] )
        {
          if ( v39 < v40 )
          {
            v41 = qvector_reserve((__int64)v27, (__int64)a2, v38 + 1, 8);
            *v27 = v41;
            a2 = (char *)v41;
            v28 = (__int64)src;
            v38 = v27[1];
          }
        }
        else if ( v39 < v40 )
        {
          v42 = qvector_reserve((__int64)v27, (__int64)a2, v38 + 1, 8);
          *v27 = v42;
          a2 = (char *)v42;
          v38 = v27[1];
        }
        *(_QWORD *)&a2[8 * v38] = v28;
        ++v27[1];
        v23 = a1[67].m128i_i16[2];
        if ( v23 != 44 )
          goto LABEL_20;
        v10 = a1;
        sub_3E65E0(a1);
        v21 = a1[67].m128i_i16[2];
        if ( v21 != 45 )
          goto LABEL_28;
      }
    }
    if ( v76 )
    {
      if ( v11 )
      {
        v69 = *(_QWORD *)(v11 + 24);
        if ( v69 )
        {
          *(_QWORD *)(v11 + 32) = 0;
          qfree(v69);
          v22 = *(_QWORD *)v11;
        }
        if ( v22 )
        {
          v70 = *(_QWORD *)(v11 + 8);
          if ( v70 )
          {
            for ( k = 0; k != v70; ++k )
            {
              v72 = (__int64 *)(v22 + 24 * k);
              v73 = *v72;
              if ( *v72 )
              {
                v72[1] = 0;
                qfree(v73);
                v22 = *(_QWORD *)v11;
              }
            }
          }
          *(_QWORD *)(v11 + 8) = 0;
          qfree(v22);
        }
        j__qfree(v11);
      }
      JUMPOUT(0x5C68C);
    }
    sub_3E65E0(a1);
    v76 = 1;
    v23 = a1[67].m128i_i16[2];
LABEL_20:
    if ( v23 != 15933 )
    {
      if ( v11 )
      {
        v51 = *(_QWORD *)(v11 + 24);
        if ( v51 )
        {
          *(_QWORD *)(v11 + 32) = 0;
          qfree(v51);
        }
        v52 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 )
        {
          v53 = *(_QWORD *)(v11 + 8);
          if ( v53 )
          {
            for ( m = 0; m != v53; ++m )
            {
              v55 = (__int64 *)(v52 + 24 * m);
              v56 = *v55;
              if ( *v55 )
              {
                v55[1] = 0;
                qfree(v56);
                v52 = *(_QWORD *)v11;
              }
            }
          }
          *(_QWORD *)(v11 + 8) = 0;
          qfree(v52);
        }
        j__qfree(v11);
      }
      v7 = __cxa_allocate_exception(4u);
      *v7 = 47;
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v24 = sub_3E6140(a1);
    if ( v24 )
    {
      v8 = __cxa_allocate_exception(4u);
      *v8 = v24;
      __cxa_throw(v8, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v25 = a1[67].m128i_i16[2];
    if ( v25 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
LABEL_135:
      sub_5C092(a1, a2, 0.0);
    }
    if ( v25 != 3 )
      goto LABEL_135;
    *(_DWORD *)(*(_QWORD *)(v11 + 24) + 4LL * *(_QWORD *)(v11 + 32) - 4) = a1[66].m128i_i64[0];
    sub_3E65E0(a1);
    v26 = a1[67].m128i_i16[2];
    if ( v26 == 125 )
      break;
    if ( v26 != 44 )
    {
      if ( v11 )
      {
        v63 = *(_QWORD *)(v11 + 24);
        if ( v63 )
        {
          *(_QWORD *)(v11 + 32) = 0;
          qfree(v63);
        }
        v64 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 )
        {
          v65 = *(_QWORD *)(v11 + 8);
          if ( v65 )
          {
            for ( ii = 0; ii != v65; ++ii )
            {
              v67 = (__int64 *)(v64 + 24 * ii);
              v68 = *v67;
              if ( *v67 )
              {
                v67[1] = 0;
                qfree(v68);
                v64 = *(_QWORD *)v11;
              }
            }
          }
          *(_QWORD *)(v11 + 8) = 0;
          qfree(v64);
        }
        j__qfree(v11);
      }
      v5 = __cxa_allocate_exception(4u);
      *v5 = 47;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v10 = a1;
    sub_3E65E0(a1);
    v12 = *(_QWORD *)(v11 + 32);
  }
  if ( *(_QWORD *)(v11 + 32) <= 2u )
  {
    if ( v11 )
    {
      v57 = *(_QWORD *)(v11 + 24);
      if ( v57 )
      {
        *(_QWORD *)(v11 + 32) = 0;
        qfree(v57);
      }
      v58 = *(_QWORD *)v11;
      if ( *(_QWORD *)v11 )
      {
        v59 = *(_QWORD *)(v11 + 8);
        if ( v59 )
        {
          for ( jj = 0; jj != v59; ++jj )
          {
            v61 = (__int64 *)(v58 + 24 * jj);
            v62 = *v61;
            if ( *v61 )
            {
              v61[1] = 0;
              qfree(v62);
              v58 = *(_QWORD *)v11;
            }
          }
        }
        *(_QWORD *)(v11 + 8) = 0;
        qfree(v58);
      }
      j__qfree(v11);
    }
    v4 = __cxa_allocate_exception(8u);
    *v4 = "Too few jump cases (must be > 2)";
    __cxa_throw(v4, (struct type_info *)&`typeinfo for'char const*, nullptr);
  }
  sub_3E65E0(a1);
  sub_3E5EC0(v81);
  return v11;
}
