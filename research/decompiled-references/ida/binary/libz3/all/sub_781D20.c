unsigned __int64 __fastcall sub_781D20(__int64 a1)
{
  char **v1; // r14
  char **exception; // r12
  unsigned __int64 result; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  unsigned int *v7; // rbp
  unsigned int v8; // r12d
  unsigned int v9; // edx
  unsigned int v10; // r14d
  __int64 *v11; // r12
  unsigned __int64 v12; // r13
  __int64 v13; // rsi
  bool v14; // zf
  unsigned int v15; // r15d
  unsigned int v16; // r9d
  unsigned int v17; // r15d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // r15
  __int64 v21; // rdx
  int v22; // eax
  _QWORD *v23; // rdx
  __int64 v24; // r14
  unsigned int v25; // eax
  unsigned int v26; // edx
  size_t v27; // rsi
  unsigned int *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // r14
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rax
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // r14
  __int64 v41; // rsi
  int v42; // edx
  unsigned __int64 v43; // r15
  __int64 v44; // rsi
  _QWORD *v45; // rax
  __int64 v46; // r14
  unsigned int v47; // r9d
  unsigned __int64 v48; // rdi
  int v49; // ecx
  _DWORD *v50; // rdx
  __m128i *v51; // rbx
  unsigned __int64 v52; // rdi
  void (__fastcall ***v53)(void *); // rbp
  __int64 v54; // r12
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rdx
  _DWORD *v58; // rdx
  int v59; // [rsp+8h] [rbp-C0h]
  __int64 v60; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v61; // [rsp+8h] [rbp-C0h]
  unsigned int v62; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v63; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v64; // [rsp+10h] [rbp-B8h]
  __int64 v65; // [rsp+18h] [rbp-B0h]
  int v66; // [rsp+18h] [rbp-B0h]
  unsigned int v67; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v68; // [rsp+20h] [rbp-A8h]
  unsigned int v69; // [rsp+28h] [rbp-A0h]
  __int64 v70; // [rsp+28h] [rbp-A0h]
  int v71; // [rsp+34h] [rbp-94h]
  unsigned __int64 v72; // [rsp+38h] [rbp-90h]
  _QWORD v73[3]; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v74[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v75; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v76; // [rsp+78h] [rbp-50h]

  v73[0] = 0;
  sub_120D030(a1 + 40, v73);
  if ( *(_QWORD *)(a1 + 80) )
  {
    result = *(_QWORD *)(a1 + 32);
    v64 = result;
  }
  else
  {
    v51 = (__m128i *)sub_186B270(0x50u);
    v52 = *(_QWORD *)(a1 + 32);
    v53 = *(void (__fastcall ****)(void *))(a1 + 80);
    v51[1].m128i_i8[8] = 1;
    v51[1].m128i_i64[0] = 0;
    v64 = v52;
    v51[3].m128i_i64[0] = 8;
    v51->m128i_i64[0] = (__int64)&off_1C60CE8;
    strcpy(&v51[3].m128i_i8[8], "sat2goal");
    v51[4].m128i_i64[1] = 0;
    v51->m128i_i32[2] = 1;
    v51[2] = _mm_unpacklo_epi64((__m128i)v52, (__m128i)(unsigned __int64)&v51[3].m128i_u64[1]);
    if ( v53 )
    {
      v14 = (*((_DWORD *)v53 + 2))-- == 1;
      if ( v14 )
      {
        (**v53)(v53);
        sub_186B220(v53);
        v64 = *(_QWORD *)(a1 + 32);
      }
    }
    *(_QWORD *)(a1 + 80) = v51;
    result = v64;
  }
  v5 = v73[0];
  v73[1] = result;
  if ( !v73[0] )
    return result;
  v65 = 0;
  v6 = nullptr;
  v7 = nullptr;
  v8 = 0;
LABEL_5:
  v9 = *(_DWORD *)(v5 - 4);
  if ( v8 < v9 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v5 + 4LL * v8);
      if ( v10 == -2 )
      {
        v69 = *v7;
        if ( *(v7 - 1) <= 1 )
        {
          v30 = *(_QWORD *)(a1 + 32);
          if ( v6 )
            goto LABEL_59;
          v31 = 0;
        }
        else
        {
          v20 = 0;
          sub_781820(v74, a1, v7[1] ^ 1);
          while ( 1 )
          {
            v24 = v74[0];
            if ( v6 )
            {
              v25 = *((_DWORD *)v6 - 1);
              if ( v25 == *((_DWORD *)v6 - 2) )
              {
                v26 = (3 * v25 + 1) >> 1;
                v27 = 8 * v26 + 8;
                if ( 8 * v25 + 8 >= (unsigned int)v27 || v25 >= v26 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(&v75, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, &v75);
                  sub_233E40((__int64)&v75);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v67 = (3 * v25 + 1) >> 1;
                v28 = (unsigned int *)sub_186B300(v6 - 1, v27);
                v6 = v28 + 2;
                *v28 = v67;
                LODWORD(v28) = v28[1];
                v23 = &v6[(unsigned int)v28];
                v22 = (_DWORD)v28 + 1;
              }
              else
              {
                v21 = v25;
                v22 = v25 + 1;
                v23 = &v6[v21];
              }
            }
            else
            {
              v45 = (_QWORD *)sub_186B270(0x18u);
              v6 = v45 + 1;
              *v45 = 2;
              v22 = 1;
              v23 = v6;
            }
            ++v20;
            *v23 = v24;
            *((_DWORD *)v6 - 1) = v22;
            if ( (int)v20 + 1 >= *(v7 - 1) )
              break;
            sub_781820(v74, a1, v7[v20 + 1] ^ 1);
          }
          v30 = *(_QWORD *)(a1 + 32);
LABEL_59:
          v31 = *((unsigned int *)v6 - 1);
        }
        v32 = sub_15EC1C0(v64, v31);
        v33 = v32;
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        sub_781820(&v75, a1, v69);
        v72 = v76;
        v60 = v75;
        v34 = sub_15E1B70(v30);
        v35 = v34;
        if ( v34 )
          ++*(_DWORD *)(v34 + 8);
        if ( v65 )
        {
          v71 = *(_DWORD *)(v65 + 8);
          *(_DWORD *)(v65 + 8) = v71 - 1;
          if ( v71 == 1 )
            sub_15D7BC0(v64, v65);
        }
        if ( v60 )
        {
          v66 = *(_DWORD *)(v60 + 8);
          *(_DWORD *)(v60 + 8) = v66 - 1;
          if ( v66 == 1 )
            sub_15D7BC0(v72, v60);
        }
        if ( v33 )
        {
          v14 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(v64, v33);
        }
        if ( (v69 & 1) != 0 )
        {
          v69 ^= 1u;
          v36 = sub_15E1A70(*(_QWORD *)(a1 + 32));
          v65 = v36;
          if ( v36 )
            ++*(_DWORD *)(v36 + 8);
          if ( v35 )
          {
            v14 = (*(_DWORD *)(v35 + 8))-- == 1;
            if ( v14 )
              sub_15D7BC0(v64, v35);
          }
        }
        else
        {
          v65 = v35;
        }
        sub_781820(&v75, a1, v69);
        v40 = v75;
        result = v76;
        v68 = v76;
        if ( !*(_WORD *)(v75 + 4) )
        {
          v41 = *(_QWORD *)(v75 + 16);
          v42 = *(_DWORD *)(v75 + 24);
          result = *(_QWORD *)(v41 + 24);
          if ( !v42 )
            goto LABEL_81;
          if ( result )
          {
            v39 = *(_DWORD *)result;
            if ( *(_QWORD *)result == 0x800000000LL && v42 == 1 )
            {
              result = *(_QWORD *)(v75 + 32);
              if ( !*(_WORD *)(result + 4) )
              {
                v38 = *(_DWORD *)(result + 24);
                if ( !v38 )
                {
                  result = *(_QWORD *)(*(_QWORD *)(result + 16) + 24LL);
LABEL_81:
                  if ( !result || *(_DWORD *)result == -1 )
                    result = sub_13333D0(*(_QWORD *)(a1 + 80), v41, v65, v37, v38, v39);
                }
              }
            }
          }
        }
        *(v7 - 1) = 0;
        if ( v6 )
        {
          v43 = (unsigned __int64)&v6[*((unsigned int *)v6 - 1)];
          result = (unsigned __int64)v6;
          if ( (unsigned __int64)v6 < v43 )
          {
            do
            {
              while ( 1 )
              {
                v44 = *(_QWORD *)result;
                if ( *(_QWORD *)result )
                {
                  v14 = (*(_DWORD *)(v44 + 8))-- == 1;
                  if ( v14 )
                    break;
                }
                result += 8LL;
                if ( result >= v43 )
                  goto LABEL_91;
              }
              v61 = result;
              sub_15D7BC0(v64, v44);
              result = v61 + 8;
            }
            while ( v61 + 8 < v43 );
          }
LABEL_91:
          *((_DWORD *)v6 - 1) = 0;
        }
        v14 = (*(_DWORD *)(v40 + 8))-- == 1;
        if ( v14 )
          result = sub_15D7BC0(v68, v40);
        v5 = v73[0];
LABEL_41:
        if ( !v5 )
          goto LABEL_13;
        ++v8;
        goto LABEL_5;
      }
      if ( !v7 )
        break;
      result = *(v7 - 1);
      if ( (_DWORD)result )
        goto LABEL_36;
      if ( v6 )
      {
        if ( *((_DWORD *)v6 - 1) )
          goto LABEL_11;
        v15 = v8 + 5;
        if ( v8 + 5 >= v9 )
          goto LABEL_11;
        if ( (*(_DWORD *)(v5 + 4LL * (v8 + 3)) ^ 1) == v10 )
          goto LABEL_33;
      }
      else
      {
        v15 = v8 + 5;
        if ( v8 + 5 >= v9 || (*(_DWORD *)(v5 + 4LL * (v8 + 3)) ^ 1) != v10 )
        {
LABEL_11:
          if ( !*(v7 - 2) )
            goto LABEL_143;
          goto LABEL_12;
        }
        v16 = *(_DWORD *)(v5 + 4LL * (v8 + 1));
        if ( v16 == (*(_DWORD *)(v5 + 4LL * (v8 + 4)) ^ 1) && *(_DWORD *)(v5 + 4LL * (v8 + 2)) == -2 )
          goto LABEL_100;
      }
LABEL_36:
      if ( (_DWORD)result == *(v7 - 2) )
      {
        v17 = (unsigned int)(3 * result + 1) >> 1;
        v18 = 4 * v17 + 8;
        if ( 4 * (int)result + 8 >= (unsigned int)v18 || (unsigned int)result >= v17 )
        {
LABEL_143:
          v1 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v75, "Overflow encountered when expanding vector");
          *v1 = (char *)off_1C63128;
          sub_2333C0(v1 + 1, &v75);
          sub_233E40((__int64)&v75);
          __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = (unsigned int *)sub_186B300(v7 - 2, v18);
        v7 = v19 + 2;
        *v19 = v17;
        v5 = v73[0];
        result = (unsigned __int64)&v19[v19[1] + 2];
        goto LABEL_40;
      }
LABEL_12:
      v7[result] = v10;
      ++v8;
      ++*(v7 - 1);
      v9 = *(_DWORD *)(v5 - 4);
      if ( v8 >= v9 )
        goto LABEL_13;
    }
    if ( v6 )
    {
      if ( *((_DWORD *)v6 - 1) )
        goto LABEL_57;
      v15 = v8 + 5;
      if ( v8 + 5 >= v9 || v10 != (*(_DWORD *)(v5 + 4LL * (v8 + 3)) ^ 1) )
        goto LABEL_57;
LABEL_33:
      v16 = *(_DWORD *)(v5 + 4LL * (v8 + 1));
      if ( v16 != (*(_DWORD *)(v5 + 4LL * (v8 + 4)) ^ 1) || *(_DWORD *)(v5 + 4LL * (v8 + 2)) != -2 )
      {
LABEL_34:
        if ( !v7 )
          goto LABEL_57;
        result = *(v7 - 1);
        goto LABEL_36;
      }
    }
    else
    {
      v15 = v8 + 5;
      if ( v8 + 5 >= v9
        || v10 != (*(_DWORD *)(v5 + 4LL * (v8 + 3)) ^ 1)
        || (v16 = *(_DWORD *)(v5 + 4LL * (v8 + 1)), v16 != (*(_DWORD *)(v5 + 4LL * (v8 + 4)) ^ 1))
        || *(_DWORD *)(v5 + 4LL * (v8 + 2)) != -2 )
      {
LABEL_57:
        v29 = (_QWORD *)sub_186B270(0x10u);
        v7 = (unsigned int *)(v29 + 1);
        *v29 = 2;
        v5 = v73[0];
        result = (unsigned __int64)(v29 + 1);
LABEL_40:
        *(_DWORD *)result = v10;
        ++*(v7 - 1);
        goto LABEL_41;
      }
    }
LABEL_100:
    if ( *(_DWORD *)(v5 + 4LL * v15) == -2 )
    {
      if ( (v10 & 1) != 0 )
        v10 ^= 1u;
      else
        v16 ^= 1u;
      v62 = v16;
      result = sub_781820(&v75, a1, v10);
      v46 = v75;
      v47 = v62;
      if ( v75 )
      {
        v48 = v76;
        v14 = (*(_DWORD *)(v75 + 8))-- == 1;
        if ( v14 )
        {
          result = sub_15D7BC0(v48, v46);
          v47 = v62;
        }
      }
      if ( !*(_WORD *)(v46 + 4) )
      {
        v49 = *(_DWORD *)(v46 + 24);
        v50 = *(_DWORD **)(*(_QWORD *)(v46 + 16) + 24LL);
        if ( v49 )
        {
          if ( v50 )
          {
            if ( !*v50 && v50[1] == 8 && v49 == 1 )
            {
              v57 = *(_QWORD *)(v46 + 32);
              if ( !*(_WORD *)(v57 + 4) && !*(_DWORD *)(v57 + 24) )
              {
                v58 = *(_DWORD **)(*(_QWORD *)(v57 + 16) + 24LL);
                if ( !v58 || *v58 == -1 )
                {
LABEL_132:
                  v70 = *(_QWORD *)(a1 + 80);
                  sub_781820(&v75, a1, v47);
                  v54 = v75;
                  v63 = v76;
                  result = sub_13333D0(v70, *(_QWORD *)(v46 + 16), v75, v76, v55, v56);
                  if ( v54 )
                  {
                    v14 = (*(_DWORD *)(v54 + 8))-- == 1;
                    if ( v14 )
                      result = sub_15D7BC0(v63, v54);
                  }
                }
              }
            }
          }
        }
        else if ( !v50 || *v50 == -1 )
        {
          goto LABEL_132;
        }
      }
      v5 = v73[0];
      v8 = v15;
      goto LABEL_41;
    }
    goto LABEL_34;
  }
LABEL_13:
  if ( v65 )
  {
    v59 = *(_DWORD *)(v65 + 8);
    result = (unsigned int)(v59 - 1);
    *(_DWORD *)(v65 + 8) = result;
    if ( v59 == 1 )
      result = sub_15D7BC0(v64, v65);
  }
  if ( v6 )
  {
    v11 = v6;
    v12 = (unsigned __int64)&v6[*((unsigned int *)v6 - 1)];
    if ( (unsigned __int64)v6 < v12 )
    {
      do
      {
        while ( 1 )
        {
          v13 = *v11;
          if ( *v11 )
          {
            v14 = (*(_DWORD *)(v13 + 8))-- == 1;
            if ( v14 )
              break;
          }
          if ( (unsigned __int64)++v11 >= v12 )
            goto LABEL_23;
        }
        ++v11;
        sub_15D7BC0(v64, v13);
      }
      while ( (unsigned __int64)v11 < v12 );
    }
LABEL_23:
    result = sub_186B220(v6 - 1);
  }
  if ( v7 )
    result = sub_186B220(v7 - 2);
  if ( v73[0] )
    return sub_186B220((void *)(v73[0] - 8LL));
  return result;
}

