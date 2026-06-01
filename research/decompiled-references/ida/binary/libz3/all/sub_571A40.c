char *__fastcall sub_571A40(__int64 a1, const void *a2)
{
  __int64 v2; // r13
  _QWORD *v3; // rax
  char *v4; // rax
  char *v5; // r12
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, __int64, __int64, _QWORD *, char *); // rax
  __int64 v10; // r11
  unsigned int v11; // edx
  __int64 v12; // rdi
  unsigned int v13; // r10d
  unsigned int v14; // ebx
  __int64 v15; // r9
  __int64 v16; // r8
  unsigned int *v17; // r8
  int v18; // ebx
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rbp
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // rbx
  __int64 v27; // r14
  int v28; // ebp
  char *v29; // r13
  __int64 v30; // r12
  int v31; // eax
  __int64 v32; // r15
  __int64 v33; // r11
  __int64 v34; // r15
  __int64 v36; // rbx
  char *v37; // r13
  int v38; // r12d
  int v39; // eax
  __int64 v40; // r15
  __int64 v41; // rbx
  int v42; // r8d
  __int64 v43; // rax
  int v44; // ecx
  _QWORD *v45; // rdx
  const __m128i *v46; // rbx
  __m128i *v47; // rbp
  __int64 v48; // rdx
  __int64 v49; // rsi
  __m128i *v50; // rdx
  __m128i v51; // xmm0
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // [rsp+8h] [rbp-A0h]
  __int64 v55; // [rsp+10h] [rbp-98h]
  __int64 v56; // [rsp+10h] [rbp-98h]
  size_t v57; // [rsp+10h] [rbp-98h]
  __int64 v58; // [rsp+10h] [rbp-98h]
  __int64 v59; // [rsp+18h] [rbp-90h]
  __int64 v60; // [rsp+18h] [rbp-90h]
  int v61; // [rsp+18h] [rbp-90h]
  __int64 v62; // [rsp+20h] [rbp-88h]
  __int64 v63; // [rsp+28h] [rbp-80h]
  unsigned int v64; // [rsp+34h] [rbp-74h]
  __int64 v65; // [rsp+38h] [rbp-70h]
  _QWORD *v66; // [rsp+40h] [rbp-68h]
  char *v67; // [rsp+50h] [rbp-58h]
  _BYTE v68[72]; // [rsp+60h] [rbp-48h] BYREF

  v2 = a1;
  sub_644D80(v68, "project", 11);
  v3 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
         0);
  v66 = v3;
  if ( !v3 )
    __cxa_bad_cast();
  v64 = *((_DWORD *)v3 + 16);
  v4 = (char *)(*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v3[1] + 40LL))(v3[1], a1 + 8);
  v5 = v4;
  if ( v4 )
    v5 = (char *)__dynamic_cast(
                   v4,
                   (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                   (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
                   0);
  v6 = v66[11];
  v7 = v66[19];
  v67 = v5 + 40;
  if ( v7 == 0xFFFFFFFFLL )
    v7 = v66[10];
  v65 = v6 + v7;
  if ( v6 + v7 != v6 )
  {
    v8 = *((_QWORD *)v5 + 19);
LABEL_8:
    if ( v8 == 0xFFFFFFFFLL )
      goto LABEL_60;
    while ( 1 )
    {
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, char *))(*(_QWORD *)v2 + 24LL);
      v10 = v8 + *((_QWORD *)v5 + 11);
      if ( (char *)v9 == (char *)sub_56FEE0 )
      {
        v11 = *(_DWORD *)(v2 + 32);
        if ( !v11 )
        {
          v54 = v8;
          goto LABEL_17;
        }
        v12 = 0;
        v13 = 0;
        v14 = 0;
        do
        {
          while ( *(_DWORD *)(v2 + 36) == v14 || *(_DWORD *)(*(_QWORD *)(v2 + 24) + 4LL * v14) != (_DWORD)v12 )
          {
            v15 = v12;
            v16 = v13;
            ++v12;
            ++v13;
            v17 = (unsigned int *)(*((_QWORD *)v5 + 5) + 32 * v16);
            *(_QWORD *)(v10 + *v17) = *((_QWORD *)v17 + 2) & *(_QWORD *)(v10 + *v17)
                                    | ((*(_QWORD *)(v66[5] + 32 * v15 + 8)
                                      & (*(_QWORD *)(v6 + *(unsigned int *)(v66[5] + 32 * v15)) >> *(_DWORD *)(v66[5] + 32 * v15 + 4))) << v17[1]);
            v11 = *(_DWORD *)(v2 + 32);
            if ( (unsigned int)v12 >= v11 )
              goto LABEL_16;
          }
          ++v12;
          ++v14;
        }
        while ( (unsigned int)v12 < v11 );
      }
      else
      {
        v9(v2, v6, v10, v66 + 5, v67);
      }
LABEL_16:
      v54 = *((_QWORD *)v5 + 19);
LABEL_17:
      v18 = *((_DWORD *)v5 + 34);
      if ( 3 * v18 < (unsigned int)(4 * (*((_DWORD *)v5 + 35) + *((_DWORD *)v5 + 36))) )
      {
        v57 = 16LL * (unsigned int)(2 * v18);
        v43 = sub_186B270(v57);
        v44 = 2 * v18;
        if ( 2 * v18 )
        {
          v45 = (_QWORD *)v43;
          do
          {
            *v45 = 0;
            v45 += 4;
            *(v45 - 2) = 0;
          }
          while ( (_QWORD *)(32LL * (v18 & 0x7FFFFFFF) + v43) != v45 );
        }
        v46 = *((const __m128i **)v5 + 16);
        v47 = (__m128i *)&v46[*((unsigned int *)v5 + 34)];
        if ( v46 != v47 )
        {
          do
          {
            while ( v46->m128i_i32[1] != 2 )
            {
              if ( v47 == ++v46 )
                goto LABEL_55;
            }
            v48 = 16LL * (v46->m128i_i32[0] & (unsigned int)(v44 - 1));
            v49 = v43 + v48;
            if ( v57 == v48 )
            {
LABEL_62:
              if ( v43 == v49 )
              {
LABEL_70:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v50 = (__m128i *)v43;
              while ( v50->m128i_i32[1] )
              {
                if ( (__m128i *)v49 == ++v50 )
                  goto LABEL_70;
              }
            }
            else
            {
              v50 = (__m128i *)(v43 + v48);
              while ( v50->m128i_i32[1] )
              {
                if ( (__m128i *)(v43 + v57) == ++v50 )
                  goto LABEL_62;
              }
            }
            v51 = _mm_loadu_si128(v46++);
            *v50 = v51;
          }
          while ( v47 != v46 );
LABEL_55:
          v47 = *((__m128i **)v5 + 16);
        }
        if ( v47 )
        {
          v61 = v44;
          v58 = v43;
          sub_186B220(v47);
          v44 = v61;
          v43 = v58;
        }
        *((_QWORD *)v5 + 16) = v43;
        *((_DWORD *)v5 + 34) = v44;
        *((_DWORD *)v5 + 36) = 0;
      }
      v19 = sub_17E8B20(**((_QWORD **)v5 + 12) + v54, *((unsigned int *)v5 + 26), 0);
      v20 = *((unsigned int *)v5 + 34);
      v21 = *((_QWORD *)v5 + 16);
      v22 = v20 - 1;
      v20 *= 16;
      v23 = v21 + v20;
      v24 = 16LL * (v19 & v22);
      v25 = v21 + v24;
      if ( v24 == v20 )
      {
        v27 = 0;
        goto LABEL_31;
      }
      v63 = *((_QWORD *)v5 + 16);
      v26 = v21 + v24;
      v27 = 0;
      v28 = v19;
      v59 = v2;
      v29 = v5;
      v30 = v23;
      v55 = v6;
      v62 = v25;
      while ( 1 )
      {
        v31 = *(_DWORD *)(v26 + 4);
        if ( v31 == 2 )
        {
          if ( v28 == *(_DWORD *)v26 )
          {
            v32 = *(_QWORD *)(v26 + 8);
            if ( !memcmp(
                    (const void *)(v32 + **((_QWORD **)v29 + 14)),
                    (const void *)(**((_QWORD **)v29 + 14) + v54),
                    *((unsigned int *)v29 + 30)) )
            {
              v33 = v32;
              v5 = v29;
              v34 = v55;
              v2 = v59;
              v54 = v33;
              goto LABEL_27;
            }
          }
          goto LABEL_22;
        }
        if ( !v31 )
          break;
        v27 = v26;
LABEL_22:
        v26 += 16;
        if ( v30 == v26 )
        {
          v19 = v28;
          v5 = v29;
          v6 = v55;
          v25 = v62;
          v21 = v63;
          v2 = v59;
LABEL_31:
          if ( v21 == v25 )
          {
LABEL_61:
            sub_1872CE0("");
            sub_1873130(114, 461);
          }
          v60 = v2;
          v36 = v25;
          v37 = v5;
          v38 = v19;
          v56 = v6;
          while ( 1 )
          {
            v39 = *(_DWORD *)(v21 + 4);
            if ( v39 == 2 )
            {
              if ( v38 == *(_DWORD *)v21 )
              {
                v40 = *(_QWORD *)(v21 + 8);
                if ( !memcmp(
                        (const void *)(v40 + **((_QWORD **)v37 + 14)),
                        (const void *)(**((_QWORD **)v37 + 14) + v54),
                        *((unsigned int *)v37 + 30)) )
                {
                  v41 = v40;
                  v5 = v37;
                  v34 = v56;
                  v2 = v60;
                  v54 = v41;
                  goto LABEL_27;
                }
              }
            }
            else
            {
              if ( !v39 )
              {
                v42 = v38;
                v34 = v56;
                v5 = v37;
                v2 = v60;
                if ( !v27 )
                {
                  v27 = v21;
                  goto LABEL_42;
                }
LABEL_41:
                --*((_DWORD *)v5 + 36);
                goto LABEL_42;
              }
              v27 = v21;
            }
            v21 += 16;
            if ( v36 == v21 )
              goto LABEL_61;
          }
        }
      }
      v5 = v29;
      v34 = v55;
      v2 = v59;
      v42 = v28;
      if ( v27 )
        goto LABEL_41;
      v27 = v26;
LABEL_42:
      *(_DWORD *)v27 = v42;
      *(_DWORD *)(v27 + 4) = 2;
      *(_QWORD *)(v27 + 8) = v54;
      ++*((_DWORD *)v5 + 35);
LABEL_27:
      v8 = *((_QWORD *)v5 + 19);
      if ( v8 != v54 )
      {
        v6 = v64 + v34;
        if ( v6 == v65 )
          break;
        goto LABEL_8;
      }
      *((_QWORD *)v5 + 19) = 0xFFFFFFFFLL;
      v6 = v64 + v34;
      if ( v65 == v6 )
        break;
LABEL_60:
      v52 = *((_QWORD *)v5 + 10);
      v53 = *((unsigned int *)v5 + 18);
      *((_QWORD *)v5 + 19) = v52;
      sub_5716E0((__int64)(v5 + 72), v52 + v53);
      v8 = *((_QWORD *)v5 + 19);
    }
  }
  sub_644EE0(v68);
  return v5;
}

