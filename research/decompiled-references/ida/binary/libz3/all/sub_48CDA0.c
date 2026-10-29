__int64 __fastcall sub_48CDA0(const __m128i *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  char **exception; // r12
  __int64 *v7; // rbp
  std::chrono::_V2::steady_clock *v9; // rdi
  __int64 result; // rax
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 *v15; // r12
  __int64 *v16; // r13
  __int64 v17; // rdi
  bool v18; // zf
  std::chrono::_V2::steady_clock *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // r14
  unsigned int v24; // r13d
  __int64 v25; // r12
  unsigned int v26; // eax
  __int64 v27; // rsi
  int v28; // eax
  _QWORD *v29; // rsi
  __int64 v30; // rax
  unsigned int v31; // r13d
  __int64 v32; // rsi
  __int64 v33; // rax
  std::chrono::_V2::steady_clock *v34; // r12
  __int64 v35; // rax
  std::chrono::_V2::steady_clock *v36; // r15
  std::chrono::_V2::steady_clock *v37; // r14
  std::chrono::_V2::steady_clock *v38; // r14
  unsigned __int64 v39; // rdx
  __int64 v40; // rsi
  unsigned int v41; // r15d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  std::chrono::_V2::steady_clock *v46; // rbp
  unsigned __int64 v47; // r13
  __int64 v48; // rsi
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rsi
  _QWORD *v57; // r12
  _QWORD *v58; // r14
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // [rsp+10h] [rbp-78h]
  unsigned __int64 v64; // [rsp+18h] [rbp-70h]
  std::chrono::_V2::steady_clock *v65; // [rsp+30h] [rbp-58h] BYREF
  std::chrono::_V2::steady_clock *v66; // [rsp+38h] [rbp-50h]

  v7 = (__int64 *)a2;
  v9 = *(std::chrono::_V2::steady_clock **)a2;
  result = *(_QWORD *)(sub_4095A0(*(_QWORD *)a2, a2, a3, a4, a5, a6) + 8);
  if ( result )
  {
    result = *(unsigned int *)(result - 4);
    if ( (_DWORD)result )
    {
      result = *(_QWORD *)a2;
      if ( *(_QWORD *)(*(_QWORD *)a2 + 80LL) )
      {
        ++a1[2].m128i_i32[2];
        if ( !a1[4].m128i_i8[0] )
        {
          v45 = std::chrono::_V2::steady_clock::now(v9);
          a1[4].m128i_i8[0] = 1;
          a1[3].m128i_i64[0] = v45;
        }
        v15 = (__int64 *)a1[5].m128i_i64[0];
        if ( v15 )
        {
          v16 = &v15[*((unsigned int *)v15 - 1)];
          if ( v15 >= v16 )
            goto LABEL_14;
          do
          {
            while ( 1 )
            {
              a2 = *v15;
              if ( *v15 )
              {
                v17 = a1[4].m128i_i64[1];
                v18 = (*(_DWORD *)(a2 + 8))-- == 1;
                if ( v18 )
                  break;
              }
              if ( ++v15 >= v16 )
                goto LABEL_13;
            }
            sub_15D7BC0(v17, a2);
            ++v15;
          }
          while ( v15 < v16 );
LABEL_13:
          v15 = (__int64 *)a1[5].m128i_i64[0];
          if ( v15 )
LABEL_14:
            *((_DWORD *)v15 - 1) = 0;
        }
        v19 = (std::chrono::_V2::steady_clock *)*v7;
        v20 = sub_4095A0(*v7, a2, v11, v12, v13, v14);
        v21 = *(_QWORD *)(v20 + 8);
        v22 = (_QWORD *)a1[5].m128i_i64[0];
        v23 = v20;
        if ( v21 )
        {
          v24 = 0;
          while ( v24 < *(_DWORD *)(v21 - 4) )
          {
            v25 = *(_QWORD *)(v21 + 8LL * v24);
            if ( v25 )
              ++*(_DWORD *)(v25 + 8);
            if ( v22 )
            {
              v26 = *((_DWORD *)v22 - 1);
              if ( v26 == *((_DWORD *)v22 - 2) )
              {
                v41 = (3 * v26 + 1) >> 1;
                v42 = 8 * v41 + 8;
                if ( 8 * v26 + 8 >= (unsigned int)v42 || v26 >= v41 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)&v65, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, &v65);
                  sub_233E40((__int64)&v65);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v19 = (std::chrono::_V2::steady_clock *)(v22 - 1);
                v43 = (unsigned int *)sub_186B300(v22 - 1, v42);
                v44 = v43[1];
                v22 = v43 + 2;
                *v43 = v41;
                a1[5].m128i_i64[0] = (__int64)(v43 + 2);
                LODWORD(v43) = v44;
                v29 = &v22[v44];
                v21 = *(_QWORD *)(v23 + 8);
                v28 = (_DWORD)v43 + 1;
              }
              else
              {
                v27 = v26;
                v28 = v26 + 1;
                v29 = &v22[v27];
              }
            }
            else
            {
              v19 = (std::chrono::_V2::steady_clock *)&qword_18;
              v50 = (_QWORD *)sub_186B270(0x18u);
              v22 = v50 + 1;
              *v50 = 2;
              v28 = 1;
              a1[5].m128i_i64[0] = (__int64)v22;
              v29 = v22;
              v21 = *(_QWORD *)(v23 + 8);
            }
            *v29 = v25;
            ++v24;
            *((_DWORD *)v22 - 1) = v28;
            if ( !v21 )
            {
              if ( a1[5].m128i_i8[8] )
              {
                v51 = a1[1].m128i_i64[0];
                v52 = a1[4].m128i_i64[1];
                v65 = nullptr;
                v66 = (std::chrono::_V2::steady_clock *)v51;
                goto LABEL_63;
              }
              v30 = *(_QWORD *)(*(_QWORD *)(*v7 + 80) + 48LL);
              if ( v30 )
                a1[5].m128i_i32[3] = *(_DWORD *)(v30 - 4);
              else
                a1[5].m128i_i32[3] = 0;
              goto LABEL_27;
            }
          }
        }
        if ( a1[5].m128i_i8[8] )
        {
          v62 = a1[1].m128i_i64[0];
          v52 = a1[4].m128i_i64[1];
          v53 = 0;
          v65 = nullptr;
          v66 = (std::chrono::_V2::steady_clock *)v62;
          if ( v22 )
LABEL_63:
            v53 = *((unsigned int *)v22 - 1);
          v54 = sub_15EC1C0(v52, v53);
          v55 = v54;
          if ( v54 )
            ++*(_DWORD *)(v54 + 8);
          v56 = (__int64)v65;
          v65 = (std::chrono::_V2::steady_clock *)v54;
          if ( v56 )
          {
            v18 = (*(_DWORD *)(v56 + 8))-- == 1;
            if ( v18 )
            {
              sub_15D7BC0(v52, v56);
              v55 = (__int64)v65;
            }
          }
          sub_3D8450(v55, (__int64 *)&v65, 0, 1);
          v57 = (_QWORD *)a1[5].m128i_i64[0];
          if ( v57 )
          {
            v58 = &v57[*((unsigned int *)v57 - 1)];
            if ( v57 >= v58 )
              goto LABEL_77;
            do
            {
              v59 = *v57;
              if ( *v57 )
              {
                v60 = a1[4].m128i_i64[1];
                v18 = (*(_DWORD *)(v59 + 8))-- == 1;
                if ( v18 )
                  sub_15D7BC0(v60, v59);
              }
              ++v57;
            }
            while ( v57 < v58 );
            v57 = (_QWORD *)a1[5].m128i_i64[0];
            if ( v57 )
LABEL_77:
              *((_DWORD *)v57 - 1) = 0;
          }
          v19 = v65;
          sub_15EEF60(v65);
          v61 = (__int64)v65;
          if ( v65 )
          {
            v19 = v66;
            v18 = (*((_DWORD *)v65 + 2))-- == 1;
            if ( v18 )
              sub_15D7BC0(v19, v61);
          }
          v22 = (_QWORD *)a1[5].m128i_i64[0];
        }
        v49 = *(_QWORD *)(*(_QWORD *)(*v7 + 80) + 48LL);
        if ( v49 )
          result = *(unsigned int *)(v49 - 4);
        else
          result = 0;
        a1[5].m128i_i32[3] = result;
        if ( v22 )
        {
LABEL_27:
          result = (__int64)&v65;
          v31 = 0;
          do
          {
            if ( v31 >= *((_DWORD *)v22 - 1) )
              break;
            v19 = (std::chrono::_V2::steady_clock *)a1;
            v32 = v22[v31];
            v33 = a1[1].m128i_i64[0];
            v66 = nullptr;
            v65 = (std::chrono::_V2::steady_clock *)v33;
            result = sub_4878F0((__int64)a1, v32, (__int64)&v65);
            v34 = v66;
            if ( v66 )
            {
              v35 = *((unsigned int *)v66 - 1);
              if ( (_DWORD)v35 )
              {
                v36 = v66;
                v37 = (std::chrono::_V2::steady_clock *)((char *)v66 + 8 * v35);
                v63 = (__int64)v65;
                do
                {
                  if ( (unsigned __int8)sub_48B760(a1, v7, *(_DWORD **)v36) )
                  {
                    v46 = v34;
                    v47 = (unsigned __int64)v34 + 8 * *((unsigned int *)v34 - 1);
                    if ( (unsigned __int64)v34 < v47 )
                    {
                      do
                      {
                        v48 = *(_QWORD *)v46;
                        if ( *(_QWORD *)v46 )
                        {
                          v18 = (*(_DWORD *)(v48 + 8))-- == 1;
                          if ( v18 )
                            sub_15D7BC0(v63, v48);
                        }
                        v46 = (std::chrono::_V2::steady_clock *)((char *)v46 + 8);
                      }
                      while ( (unsigned __int64)v46 < v47 );
                    }
                    v19 = (std::chrono::_V2::steady_clock *)((char *)v34 - 8);
                    result = sub_186B220((char *)v34 - 8);
                    goto LABEL_42;
                  }
                  v36 = (std::chrono::_V2::steady_clock *)((char *)v36 + 8);
                  ++a1[2].m128i_i32[3];
                }
                while ( v36 != v37 );
                v38 = v34;
                v39 = (unsigned __int64)v34 + 8 * *((unsigned int *)v34 - 1);
                if ( (unsigned __int64)v34 < v39 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v40 = *(_QWORD *)v38;
                      if ( *(_QWORD *)v38 )
                      {
                        v18 = (*(_DWORD *)(v40 + 8))-- == 1;
                        if ( v18 )
                          break;
                      }
                      v38 = (std::chrono::_V2::steady_clock *)((char *)v38 + 8);
                      if ( (unsigned __int64)v38 >= v39 )
                        goto LABEL_40;
                    }
                    v64 = v39;
                    v38 = (std::chrono::_V2::steady_clock *)((char *)v38 + 8);
                    sub_15D7BC0(v63, v40);
                    v39 = v64;
                  }
                  while ( (unsigned __int64)v38 < v64 );
                }
LABEL_40:
                v19 = (std::chrono::_V2::steady_clock *)((char *)v34 - 8);
                result = sub_186B220((char *)v34 - 8);
              }
              else
              {
                v19 = (std::chrono::_V2::steady_clock *)((char *)v66 - 8);
                result = sub_186B220((char *)v66 - 8);
              }
            }
            v22 = (_QWORD *)a1[5].m128i_i64[0];
            ++v31;
          }
          while ( v22 );
        }
LABEL_42:
        if ( a1[4].m128i_i8[0] )
        {
          result = std::chrono::_V2::steady_clock::now(v19) - a1[3].m128i_i64[0];
          a1[3].m128i_i64[1] += result;
          a1[4].m128i_i8[0] = 0;
        }
      }
    }
  }
  return result;
}

