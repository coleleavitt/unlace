__int64 __fastcall sub_57E7C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  void *v10; // rax
  _QWORD *v11; // rax
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r13
  unsigned __int64 v15; // rcx
  __int64 v16; // rbp
  unsigned int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  _QWORD *v20; // rdx
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 **v26; // r9
  __int64 *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rsi
  int v30; // eax
  __int64 *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rdi
  unsigned int v34; // r10d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rsi
  _QWORD *v38; // rax
  size_t v39; // rdi
  __int64 v40; // rax
  __int64 *v41; // r15
  _DWORD *v42; // r12
  __int64 v43; // r10
  __int64 *v44; // r11
  unsigned __int64 v45; // r8
  __int64 *v46; // rdx
  __int64 v47; // rdx
  unsigned __int64 v48; // r8
  __m128i v49; // xmm0
  unsigned __int64 v50; // r8
  __int64 *v51; // rdx
  __int64 v52; // rdi
  __int64 *v53; // rbx
  unsigned __int64 v54; // r14
  void *v55; // rdi
  _QWORD *v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rax
  char **exception; // r12
  char **v60; // r12
  __int64 v61; // [rsp+8h] [rbp-A0h]
  __int64 **v62; // [rsp+10h] [rbp-98h]
  __int64 **v63; // [rsp+10h] [rbp-98h]
  unsigned int v64; // [rsp+10h] [rbp-98h]
  unsigned int v65; // [rsp+18h] [rbp-90h]
  _QWORD *v66; // [rsp+18h] [rbp-90h]
  unsigned __int64 v67; // [rsp+18h] [rbp-90h]
  __int64 v68; // [rsp+20h] [rbp-88h]
  _QWORD *v69; // [rsp+28h] [rbp-80h]
  __int64 v71; // [rsp+38h] [rbp-70h]
  __int64 v72[11]; // [rsp+50h] [rbp-58h] BYREF

  v8 = a1;
  *a1 = &off_1C51650;
  v9 = *(_QWORD **)(a2 + 8);
  v8[1] = v9[3];
  v10 = __dynamic_cast(
          v9,
          (const struct __class_type_info *)&`typeinfo for'datalog::relation_plugin,
          (const struct __class_type_info *)&`typeinfo for'datalog::product_relation_plugin,
          0);
  if ( !v10 )
    __cxa_bad_cast();
  v8[2] = v10;
  v11 = (_QWORD *)(a4 + 32);
  if ( !a4 )
    v11 = nullptr;
  *((_BYTE *)v8 + 24) = a5;
  v8[4] = 0;
  v69 = v11;
  result = *(_QWORD *)(a2 + 32);
  if ( !result )
    return result;
  v13 = *(unsigned int *)(result - 4);
  if ( !(_DWORD)v13 )
    return result;
  v68 = 0;
  v14 = 8 * v13;
  v15 = 0;
  while ( 2 )
  {
    v61 = 0;
    v16 = *(_QWORD *)(result + v68);
    if ( v69 )
      v61 = *(_QWORD *)(*v69 + v68);
    if ( v15 )
    {
      v17 = *(_DWORD *)(v15 - 4);
      if ( v17 == *(_DWORD *)(v15 - 8) )
      {
        v64 = (3 * v17 + 1) >> 1;
        v39 = 8 * v64 + 8;
        if ( 8 * v17 + 8 >= (unsigned int)v39 || v17 >= (3 * v17 + 1) >> 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v72, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v72);
          sub_233E40((__int64)v72);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v40 = sub_186B270(v39);
        v41 = (__int64 *)v8[4];
        v42 = (_DWORD *)v40;
        v15 = v40 + 8;
        if ( v41 )
        {
          v43 = *((unsigned int *)v41 - 1);
          *(_DWORD *)(v40 + 4) = v43;
          v44 = &v41[v43];
          if ( v41 != v44 )
          {
            v45 = 8 * v43 - 8;
            v46 = v41;
            if ( v45 <= 8 || v15 < (unsigned __int64)(v41 + 2) && (unsigned __int64)v41 < v40 + 24 )
            {
              v57 = v40 + 8;
              do
              {
                v58 = *v46;
                *v46++ = 0;
                v57 += 8;
                *(_QWORD *)(v57 - 8) = v58;
              }
              while ( v46 != v44 );
            }
            else
            {
              v47 = 0;
              v48 = (v45 >> 3) + 1;
              do
              {
                v49 = _mm_loadu_si128((const __m128i *)&v41[v47]);
                *(_OWORD *)&v41[v47] = 0;
                *(__m128i *)(v40 + v47 * 8 + 8) = v49;
                v47 += 2;
              }
              while ( 2 * (v48 >> 1) != v47 );
              if ( (v48 & 1) != 0 )
              {
                v50 = v48 & 0xFFFFFFFFFFFFFFFELL;
                v51 = &v41[v50];
                v52 = *v51;
                *v51 = 0;
                *(_QWORD *)(v15 + 8 * v50) = v52;
              }
            }
          }
          if ( (_DWORD)v43 )
          {
            v66 = v8;
            v53 = &v41[v43];
            v71 = a3;
            v54 = v15;
            do
            {
              while ( *v41 )
              {
                v55 = (void *)(*v41++ - 8);
                sub_186B220(v55);
                if ( v53 == v41 )
                  goto LABEL_43;
              }
              ++v41;
            }
            while ( v41 != v53 );
LABEL_43:
            v8 = v66;
            v15 = v54;
            a3 = v71;
            v41 = (__int64 *)v66[4];
          }
          v67 = v15;
          sub_186B220(v41 - 1);
          v15 = v67;
          v20 = (_QWORD *)(v67 + 8LL * (unsigned int)v42[1]);
          v19 = v42[1] + 1;
        }
        else
        {
          *(_DWORD *)(v40 + 4) = 0;
          v20 = (_QWORD *)(v40 + 8);
          v19 = 1;
        }
        v8[4] = v15;
        *v42 = v64;
      }
      else
      {
        v18 = v17;
        v19 = v17 + 1;
        v20 = (_QWORD *)(v15 + 8 * v18);
      }
    }
    else
    {
      v56 = (_QWORD *)sub_186B270(0x18u);
      v15 = (unsigned __int64)(v56 + 1);
      *v56 = 2;
      v19 = 1;
      v8[4] = v15;
      v20 = (_QWORD *)v15;
    }
    *v20 = 0;
    v21 = 0;
    *(_DWORD *)(v15 - 4) = v19;
    do
    {
      while ( 1 )
      {
        v32 = *(_QWORD *)(*(_QWORD *)(a3 + 32) + v21);
        v33 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 24LL);
        if ( *((_BYTE *)v8 + 24) )
          v22 = sub_4C49F0(v33, v16, v32, v61);
        else
          v22 = sub_4C4940(v33, v16, v32, v61);
        v23 = v8[4];
        v24 = v22;
        v25 = 0x7FFFFFFF8LL;
        if ( v23 )
          v25 = 8LL * (unsigned int)(*(_DWORD *)(v23 - 4) - 1);
        v26 = (__int64 **)(v23 + v25);
        v27 = *(__int64 **)(v23 + v25);
        if ( !v27 )
        {
          v63 = v26;
          v38 = (_QWORD *)sub_186B270(0x18u);
          v27 = v38 + 1;
          v31 = v27;
          *v38 = 2;
          v30 = 1;
          *v63 = v27;
          goto LABEL_19;
        }
        v28 = *((_DWORD *)v27 - 1);
        if ( v28 == *((_DWORD *)v27 - 2) )
          break;
        v29 = v28;
        v30 = v28 + 1;
        v31 = &v27[v29];
LABEL_19:
        v21 += 8;
        *v31 = v24;
        *((_DWORD *)v27 - 1) = v30;
        if ( v21 == v14 )
          goto LABEL_25;
      }
      v34 = (3 * v28 + 1) >> 1;
      v35 = 8 * v34 + 8;
      if ( 8 * v28 + 8 >= (unsigned int)v35 || v28 >= v34 )
      {
        v60 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v72, "Overflow encountered when expanding vector");
        *v60 = (char *)off_1C63128;
        sub_2333C0(v60 + 1, v72);
        sub_233E40((__int64)v72);
        __cxa_throw(v60, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v65 = (3 * v28 + 1) >> 1;
      v62 = v26;
      v36 = (unsigned int *)sub_186B300(v27 - 1, v35);
      v37 = v36[1];
      v21 += 8;
      *v36 = v65;
      *v62 = (__int64 *)(v36 + 2);
      *(_QWORD *)&v36[2 * v37 + 2] = v24;
      v36[1] = v37 + 1;
    }
    while ( v21 != v14 );
LABEL_25:
    v68 += 8;
    result = v68;
    if ( v14 != v68 )
    {
      v15 = v8[4];
      result = *(_QWORD *)(a2 + 32);
      continue;
    }
    return result;
  }
}

