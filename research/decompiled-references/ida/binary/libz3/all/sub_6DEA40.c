__int64 __fastcall sub_6DEA40(const __m128i **a1, __int64 a2, __int64 a3, __int64 **a4)
{
  char **exception; // r14
  const __m128i *v5; // r12
  __int64 v6; // r13
  _QWORD *v7; // r15
  _QWORD *v8; // rax
  int v9; // r8d
  int v10; // r9d
  unsigned int *v11; // rcx
  unsigned int v12; // edx
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // r14d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // r14
  _QWORD *v21; // r15
  int v22; // eax
  unsigned int v23; // r12d
  __m128i v25; // xmm0
  _DWORD *v26; // r14
  __int64 *v27; // rax
  __int64 v28; // rdx
  int v29; // edx
  __int64 *v30; // r13
  __int64 v31; // rax
  __int64 *v32; // r15
  __int64 v33; // rax
  __int64 *v34; // r14
  __int64 *v35; // rdi
  int v36; // [rsp+0h] [rbp-110h]
  __int64 **v37; // [rsp+8h] [rbp-108h]
  __int64 *v38; // [rsp+10h] [rbp-100h]
  __int64 v39; // [rsp+18h] [rbp-F8h]
  int v40; // [rsp+20h] [rbp-F0h]
  __int64 v41; // [rsp+28h] [rbp-E8h] BYREF
  __m128i v42; // [rsp+30h] [rbp-E0h] BYREF
  int *v43; // [rsp+40h] [rbp-D0h] BYREF
  void *v44; // [rsp+48h] [rbp-C8h]
  int **v45; // [rsp+50h] [rbp-C0h]
  __int64 (__fastcall **v46)(); // [rsp+58h] [rbp-B8h]
  void *ptr; // [rsp+60h] [rbp-B0h]
  __int64 v48; // [rsp+68h] [rbp-A8h]
  void *v49; // [rsp+70h] [rbp-A0h]
  __int64 v50; // [rsp+80h] [rbp-90h]
  void *v51; // [rsp+88h] [rbp-88h]
  __int64 (__fastcall **v52)(); // [rsp+90h] [rbp-80h]
  __int64 v53; // [rsp+A0h] [rbp-70h]
  void *v54; // [rsp+A8h] [rbp-68h]
  __int64 v55; // [rsp+B8h] [rbp-58h]
  void *v56; // [rsp+C0h] [rbp-50h]
  __int64 v57[2]; // [rsp+C8h] [rbp-48h] BYREF
  char v58; // [rsp+D8h] [rbp-38h]

  v5 = *a1;
  v37 = a4;
  sub_2FCDE0((*a1)[71].m128i_i64);
  v6 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8);
  v7 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 == v6 )
    goto LABEL_57;
  while ( *v7 <= 1u )
  {
    if ( (_QWORD *)v6 == ++v7 )
      goto LABEL_57;
  }
  if ( (_QWORD *)v6 == v7 )
  {
LABEL_57:
    v44 = nullptr;
    v43 = nullptr;
    v42.m128i_i64[0] = (__int64)&off_1C62200;
    *v37 = nullptr;
    return 1;
  }
  v8 = (_QWORD *)sub_186B270(0x18u);
  *v8 = 2;
  v11 = (unsigned int *)(v8 + 1);
  v12 = 1;
  v13 = v8 + 1;
  while ( 1 )
  {
    *(_QWORD *)v11 = *v7;
    v14 = v7 + 1;
    *((_DWORD *)v13 - 1) = v12;
    if ( (_QWORD *)v6 == v7 + 1 )
      break;
    while ( 1 )
    {
      v7 = v14;
      if ( *v14 > 1u )
        break;
      if ( (_QWORD *)v6 == ++v14 )
        goto LABEL_17;
    }
    if ( (_QWORD *)v6 == v14 )
      break;
    v15 = *((_DWORD *)v13 - 1);
    if ( v15 == *((_DWORD *)v13 - 2) )
    {
      v16 = (3 * v15 + 1) >> 1;
      v17 = 8 * v16 + 8;
      if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v42.m128i_i64, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v42);
        sub_233E40((__int64)&v42);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v18 = (unsigned int *)sub_186B300(v13 - 1, v17);
      v19 = v18[1];
      v13 = v18 + 2;
      *v18 = v16;
      v11 = &v18[2 * v19 + 2];
      v12 = v19 + 1;
    }
    else
    {
      v11 = (unsigned int *)&v13[v15];
      v12 = v15 + 1;
    }
  }
LABEL_17:
  v43 = nullptr;
  v44 = nullptr;
  v46 = nullptr;
  v42.m128i_i64[0] = (__int64)&off_1C62200;
  ptr = nullptr;
  if ( !v12 )
    goto LABEL_58;
  v20 = v13;
  v39 = 0;
  v21 = &v13[v12];
  v38 = &v41;
  do
  {
    sub_6E5FF0(
      (_DWORD)v5,
      *v20++,
      (unsigned int)&v42,
      (_DWORD)v38,
      v9,
      v10,
      v36,
      (_DWORD)v37,
      (_DWORD)v38,
      v39,
      v40,
      v39,
      v42.m128i_i32[0],
      v42.m128i_i8[8]);
    v39 = v41;
  }
  while ( v20 != v21 );
  v42.m128i_i64[0] = (__int64)&off_1C62200;
  if ( ptr )
    sub_186B220(ptr);
  if ( !v44 )
  {
    if ( v39 )
    {
      v22 = *(_DWORD *)(v39 - 4);
      if ( !v22 )
      {
        *v37 = nullptr;
        goto LABEL_61;
      }
LABEL_31:
      v25 = _mm_loadl_epi64(v5);
      v26 = *(_DWORD **)(v39 + 8LL * (unsigned int)(v22 - 1));
      v42 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, v25);
      if ( v26 )
        ++v26[2];
      v44 = v26;
      v43 = &off_1C4E7B8;
      v45 = &v43;
      v48 = 0;
      v58 = 1;
      v46 = &off_1C62200;
      v49 = nullptr;
      v50 = 0;
      v51 = nullptr;
      v52 = &off_1C62200;
      v53 = 0;
      v54 = nullptr;
      v55 = 0;
      v56 = nullptr;
      v57[1] = 0;
      v57[0] = v25.m128i_i64[0];
      v27 = (__int64 *)sub_186B270(0x48u);
      v28 = v5->m128i_i64[0];
      *v27 = 0;
      v27[2] = 0;
      *v37 = v27;
      v27[1] = v28;
      v27[3] = v28;
      v27[5] = v28;
      v27[6] = 0;
      v27[7] = 0;
      v27[8] = 0;
      v27[4] = (__int64)v26;
      if ( v13 )
        v29 = *((_DWORD *)v13 - 1);
      else
        v29 = 0;
      v23 = sub_6E8740(
              (_DWORD)v5,
              (unsigned int)&v42,
              v29,
              (_DWORD)v13,
              (int)v27 + 56,
              (int)v27 + 64,
              0,
              (__int64)(v27 + 5));
      if ( !(_BYTE)v23 )
      {
        v30 = *v37;
        if ( *v37 )
        {
          v31 = v30[8];
          if ( v31 )
            sub_186B220((void *)(v31 - 8));
          v32 = (__int64 *)v30[7];
          if ( v32 )
          {
            v33 = *((unsigned int *)v32 - 1);
            if ( (_DWORD)v33 )
            {
              v34 = &v32[2 * v33];
              do
              {
                v35 = v32;
                v32 += 2;
                sub_2B4F40(v35);
              }
              while ( v32 != v34 );
              v32 = (__int64 *)v30[7];
            }
            sub_186B220(v32 - 1);
          }
          sub_2B4F40(v30 + 5);
          sub_6DE2A0(v30[2], v30[3]);
          sub_6DE2A0(*v30, v30[1]);
          sub_186B220(v30);
        }
        *v37 = nullptr;
      }
      sub_2334C0(v57);
      v52 = &off_1C62200;
      if ( v56 )
        sub_186B220(v56);
      if ( v54 )
        sub_186B220(v54);
      v46 = &off_1C62200;
      if ( v51 )
        sub_186B220(v51);
      if ( v49 )
        sub_186B220(v49);
      sub_6DE2A0(v42.m128i_i64[0], v42.m128i_i64[1]);
      if ( v13 )
        sub_186B220(v13 - 1);
      goto LABEL_27;
    }
    goto LABEL_58;
  }
  sub_186B220(v44);
  if ( !v39 )
  {
LABEL_58:
    *v37 = nullptr;
    sub_186B220(v13 - 1);
    return 1;
  }
  v22 = *(_DWORD *)(v39 - 4);
  if ( v22 )
    goto LABEL_31;
  *v37 = nullptr;
  if ( v13 )
  {
LABEL_61:
    v23 = 1;
    sub_186B220(v13 - 1);
    goto LABEL_27;
  }
  v23 = 1;
LABEL_27:
  sub_186B220((void *)(v39 - 8));
  return v23;
}

