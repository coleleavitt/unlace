__int64 *__fastcall sub_6E7D60(__int64 *a1, int a2, __int64 a3, unsigned int a4, __int64 *a5, __m128i *a6)
{
  __int64 *result; // rax
  __int64 v9; // r12
  __int64 *v10; // rbp
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // r14
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rbp
  unsigned int v32; // r14d
  __int64 v33; // rax
  __int64 v34; // r12
  unsigned int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  _QWORD *v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // r12
  __int64 v41; // rdi
  __int64 *v42; // rbp
  __int64 v43; // rsi
  __int64 v44; // rdi
  unsigned int v46; // ecx
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  int v51; // r13d
  int v52; // eax
  __int64 v53; // rax
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  int v57; // r9d
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  char **exception; // r12
  __m128i v62; // [rsp+8h] [rbp-F0h]
  unsigned int v63; // [rsp+8h] [rbp-F0h]
  __int64 v64; // [rsp+18h] [rbp-E0h]
  __int64 v65; // [rsp+20h] [rbp-D8h]
  __int64 *v66; // [rsp+28h] [rbp-D0h]
  __int64 v67; // [rsp+30h] [rbp-C8h]
  struct _Unwind_Exception *v68; // [rsp+38h] [rbp-C0h]
  __int64 v69; // [rsp+40h] [rbp-B8h] BYREF
  __int64 *v70; // [rsp+48h] [rbp-B0h]
  __m128i v71; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v72[2]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v73; // [rsp+70h] [rbp-88h]
  __int64 (__fastcall **v74)(); // [rsp+80h] [rbp-78h] BYREF
  __int64 *v75; // [rsp+88h] [rbp-70h]
  __int64 *v76; // [rsp+90h] [rbp-68h]
  __m128i v77; // [rsp+A0h] [rbp-58h] BYREF

  result = &off_1C532D8;
  v72[1] = (__int64)a1;
  v72[0] = (__int64)&off_1C532D8;
  v73 = (__int64)a5;
  if ( (a2 & 0xFFFFFFFD) == 1 )
  {
    v75 = a1;
    v74 = off_1C53318;
    result = v72;
    v76 = v72;
    if ( a4 != 2 )
    {
      if ( a4 <= 2 )
      {
        if ( a4 )
          return (__int64 *)sub_6E7B10((__int64)&v74, a3, a6);
        v21 = *a1;
        v71.m128i_i64[0] = 0;
        v71.m128i_i64[1] = v21;
        sub_6E7B10((__int64)&v74, a3, &v71);
        v26 = sub_6E43D0(v75, a3, v22, v23, v24, v25);
        v27 = v26;
        if ( v26 )
          ++*(_DWORD *)(v26 + 8);
        sub_6DE2A0(0, v21);
        v77 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v71), (__m128i)(unsigned __int64)v27);
        v28 = sub_6E1880(a1, 2, &v77);
        v29 = v28;
        if ( v28 )
          ++*(_DWORD *)(v28 + 8);
        sub_6DE2A0(a6->m128i_i64[0], a6->m128i_i64[1]);
        a6->m128i_i64[0] = v29;
        sub_6DE2A0(v27, v21);
        return (__int64 *)sub_6DE2A0(v71.m128i_i64[0], v71.m128i_i64[1]);
      }
      if ( a4 != 3 )
        return result;
      v71.m128i_i64[0] = *a1;
      v30 = *(_QWORD *)(a3 + 8);
      if ( v30 )
      {
        v31 = 0;
        v32 = 0;
        while ( v32 < *(_DWORD *)(v30 - 4) )
        {
          v33 = sub_6E15B0((_DWORD)a1, *(_QWORD *)(v30 + 8LL * v32), v32, a4, (_DWORD)a5, (_DWORD)a6);
          v34 = v33;
          if ( v33 )
            ++*(_DWORD *)(v33 + 8);
          if ( v31 )
          {
            v35 = *(_DWORD *)(v31 - 4);
            if ( v35 == *(_DWORD *)(v31 - 8) )
            {
              v46 = (3 * v35 + 1) >> 1;
              v47 = 8 * v46 + 8;
              if ( 8 * v35 + 8 >= (unsigned int)v47 || v35 >= v46 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v77.m128i_i64, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v77);
                sub_233E40((__int64)&v77);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v63 = (3 * v35 + 1) >> 1;
              v48 = (unsigned int *)sub_186B300((void *)(v31 - 8), v47);
              v49 = v48[1];
              a4 = v63;
              v31 = (__int64)(v48 + 2);
              *v48 = v63;
              LODWORD(v48) = v49;
              v38 = (_QWORD *)(v31 + 8 * v49);
              v37 = (_DWORD)v48 + 1;
            }
            else
            {
              v36 = v35;
              v37 = v35 + 1;
              v38 = (_QWORD *)(v31 + 8 * v36);
            }
          }
          else
          {
            v60 = (_QWORD *)sub_186B270(0x18u);
            v31 = (__int64)(v60 + 1);
            *v60 = 2;
            v37 = 1;
            v38 = (_QWORD *)v31;
          }
          *v38 = v34;
          ++v32;
          *(_DWORD *)(v31 - 4) = v37;
          v30 = *(_QWORD *)(a3 + 8);
          if ( !v30 )
            goto LABEL_37;
        }
        if ( v31 )
        {
LABEL_37:
          v39 = *(unsigned int *)(v31 - 4);
          goto LABEL_38;
        }
      }
      v31 = 0;
      v39 = 0;
LABEL_38:
      v40 = sub_6E3580(a1, v39, v31);
      v71.m128i_i64[1] = v31;
      sub_2B4F40(v71.m128i_i64);
      if ( v40 )
        ++*(_DWORD *)(v40 + 8);
      sub_6DE2A0(a6->m128i_i64[0], a6->m128i_i64[1]);
      a6->m128i_i64[0] = v40;
      v41 = *a1;
      goto LABEL_41;
    }
    v19 = sub_6E43D0(a1, a3, a3, 2, (int)a5, (int)a6);
    v20 = v19;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    result = (__int64 *)sub_6DE2A0(a6->m128i_i64[0], a6->m128i_i64[1]);
    a6->m128i_i64[0] = v20;
  }
  else
  {
    if ( a4 != 2 )
    {
      if ( a4 <= 2 )
      {
        if ( a4 )
          return (__int64 *)sub_6E3DE0((__int64)v72, a3, a6->m128i_i64);
        else
          return (__int64 *)sub_6E3700((__int64)v72, a3, a6->m128i_i64);
      }
      if ( a4 != 3 )
        return result;
      sub_6E3B10((__int64)v72, a3, a6->m128i_i64);
      v41 = *a1;
LABEL_41:
      result = (__int64 *)sub_15E1A70(v41);
      v42 = result;
      if ( result )
        ++*((_DWORD *)result + 2);
      v43 = a6->m128i_i64[0];
      if ( a6->m128i_i64[0] )
      {
        v44 = a6->m128i_i64[1];
        if ( (*(_DWORD *)(v43 + 8))-- == 1 )
          result = (__int64 *)sub_15D7BC0(v44, v43);
      }
      a6->m128i_i64[0] = (__int64)v42;
      return result;
    }
    v9 = a5[3];
    v10 = (__int64 *)*a1;
    v67 = a5[4];
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    v70 = v10;
    v69 = 0;
    v71.m128i_i64[0] = 0;
    v71.m128i_i64[1] = (__int64)v10;
    v74 = nullptr;
    v75 = v10;
    sub_6E1E10(a1, a3, a5, &v69, v71.m128i_i64, (__int64 *)&v74);
    v15 = v69;
    v65 = (__int64)v74;
    v66 = v75;
    v62 = v71;
    v64 = (__int64)v70;
    if ( *(_DWORD *)(v73 + 16) )
    {
      v50 = sub_6E1C90(a1, v71.m128i_i64[0], v9);
      v51 = sub_6E1C90(a1, v62.m128i_i64[0], v50);
      v52 = sub_6E1C90(a1, v15, v15);
      v53 = sub_6E10F0((__int64)a1, v52, v51);
      v18 = v53;
      if ( v53 )
        ++*(_DWORD *)(v53 + 8);
      v68 = (struct _Unwind_Exception *)sub_6E15B0((_DWORD)a1, v53, v54, v55, v56, v57);
      v58 = sub_6E1C90(a1, v15, v62.m128i_i64[0]);
      v77.m128i_i64[0] = sub_6E1710((__int64)a1, v58);
      v77.m128i_i64[1] = (__int64)v68;
      v59 = sub_6E3580(a1, 2, &v77);
      v17 = v59;
      if ( v59 )
        ++*(_DWORD *)(v59 + 8);
      sub_6DE2A0(a6->m128i_i64[0], a6->m128i_i64[1]);
    }
    else
    {
      v16 = sub_6E15B0((_DWORD)a1, v69, v11, v12, v13, v14);
      v17 = v16;
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      sub_6DE2A0(a6->m128i_i64[0], a6->m128i_i64[1]);
      v18 = 0;
    }
    a6->m128i_i64[0] = v17;
    sub_6DE2A0(v18, (__int64)v10);
    sub_6DE2A0(v65, (__int64)v66);
    sub_6DE2A0(v9, v67);
    sub_6DE2A0(v62.m128i_i64[0], v62.m128i_i64[1]);
    return (__int64 *)sub_6DE2A0(v15, v64);
  }
  return result;
}

