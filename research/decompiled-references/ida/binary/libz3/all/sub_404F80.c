__int64 __fastcall sub_404F80(__m128i *a1, __int64 *a2, __int32 a3, unsigned __int64 a4, __int8 a5, __int64 *a6)
{
  char **exception; // r12
  char **v7; // r12
  __int32 v8; // eax
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rsi
  int v18; // eax
  __int64 *v19; // rsi
  int v20; // eax
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // r8d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rsi
  __int64 result; // rax
  __int64 v32; // rbp
  __int64 v33; // r14
  __int64 v34; // r13
  __int64 v35; // rcx
  __int64 *v36; // rcx
  int v37; // eax
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // r15
  _QWORD *v42; // rdx
  unsigned int v43; // eax
  unsigned int v44; // ecx
  size_t v45; // rsi
  __int64 v46; // rax
  _DWORD *v47; // rdx
  __int64 *v48; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // [rsp+0h] [rbp-78h]
  int v52; // [rsp+8h] [rbp-70h]
  unsigned int v53; // [rsp+Ch] [rbp-6Ch]
  __int64 *v54; // [rsp+10h] [rbp-68h]
  __int64 v55; // [rsp+18h] [rbp-60h]
  __int64 v56; // [rsp+20h] [rbp-58h] BYREF
  char v57; // [rsp+28h] [rbp-50h]
  int v58; // [rsp+30h] [rbp-48h]
  int v59; // [rsp+38h] [rbp-40h]
  int v60; // [rsp+40h] [rbp-38h]
  void *v61; // [rsp+48h] [rbp-30h]

  v8 = a3;
  v11 = a2[1];
  a1->m128i_i64[0] = (__int64)a2;
  v54 = a6;
  a1->m128i_i32[2] = a3;
  a1[1] = _mm_unpacklo_epi64((__m128i)a4, (__m128i)(unsigned __int64)v11);
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  v12 = a2[3];
  v13 = *a2;
  a1[2].m128i_i8[0] = a5;
  a1[2].m128i_i64[1] = v11;
  v14 = *(unsigned int *)(v12 + 32);
  a1[3].m128i_i64[0] = 0;
  v55 = v13;
  if ( (_DWORD)v14 )
  {
    v15 = 8 * v14;
    v16 = 0;
    while ( 1 )
    {
      v20 = sub_439010(v13 + 8, *(_QWORD *)(a2[6] + v16), 1, (unsigned int)(v8 + 1));
      v23 = sub_15DC610(v11, v20, 0, 0, v21, v22, v51, v52, (int)v54, v55, v56, v57, v58, v59, v60, v61);
      v24 = v23;
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      v25 = (_QWORD *)a1[3].m128i_i64[0];
      if ( !v25 )
        break;
      v26 = *((_DWORD *)v25 - 1);
      if ( v26 != *((_DWORD *)v25 - 2) )
      {
        v17 = v26;
        v18 = v26 + 1;
        v19 = &v25[v17];
        goto LABEL_6;
      }
      v27 = (3 * v26 + 1) >> 1;
      v28 = 8 * v27 + 8;
      if ( 8 * v26 + 8 >= (unsigned int)v28 || v26 >= v27 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_3FCFD0(&v56, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v56);
        sub_233E40((__int64)&v56);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v53 = (3 * v26 + 1) >> 1;
      v51 = v24;
      v29 = (unsigned int *)sub_186B300(v25 - 1, v28);
      v30 = v29[1];
      v16 += 8;
      a1[3].m128i_i64[0] = (__int64)(v29 + 2);
      *v29 = v53;
      *(_QWORD *)&v29[2 * v30 + 2] = v51;
      v29[1] = v30 + 1;
      if ( v15 == v16 )
        goto LABEL_15;
LABEL_7:
      v8 = a1->m128i_i32[2];
    }
    v51 = v23;
    v49 = (_QWORD *)sub_186B270(0x18u);
    v25 = v49 + 1;
    *v49 = 2;
    v24 = v51;
    v18 = 1;
    a1[3].m128i_i64[0] = (__int64)v25;
    v19 = v25;
LABEL_6:
    v16 += 8;
    *v19 = v24;
    *((_DWORD *)v25 - 1) = v18;
    if ( v15 == v16 )
      goto LABEL_15;
    goto LABEL_7;
  }
LABEL_15:
  result = (__int64)v54;
  if ( v54 )
  {
    v32 = *v54;
    if ( *v54 )
    {
      result = *(unsigned int *)(v32 - 4);
      v33 = v32 + 8 * result;
      if ( v33 != v32 )
      {
        v34 = v55 + 8;
        while ( 1 )
        {
          v37 = sub_439010(v34, *(_QWORD *)(*(_QWORD *)v32 + 16LL), 0, (unsigned int)(a1->m128i_i32[2] + 1));
          v40 = sub_15DC610(v11, v37, 0, 0, v38, v39, v51, v52, (int)v54, v55, v56, v57, v58, v59, v60, v61);
          v41 = v40;
          if ( v40 )
            ++*(_DWORD *)(v40 + 8);
          v42 = (_QWORD *)a1[3].m128i_i64[0];
          if ( !v42 )
            break;
          v43 = *((_DWORD *)v42 - 1);
          if ( v43 == *((_DWORD *)v42 - 2) )
          {
            v44 = (3 * v43 + 1) >> 1;
            v45 = 8 * v44 + 8;
            if ( 8 * v43 + 8 >= (unsigned int)v45 || v43 >= v44 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_3FCFD0(&v56, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, &v56);
              sub_233E40((__int64)&v56);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v51) = (3 * v43 + 1) >> 1;
            v46 = sub_186B300(v42 - 1, v45);
            v47 = (_DWORD *)(v46 + 8);
            v32 += 8;
            a1[3].m128i_i64[0] = v46 + 8;
            *(_DWORD *)v46 = v51;
            LODWORD(v46) = *(_DWORD *)(v46 + 4);
            v48 = (__int64 *)&v47[2 * (unsigned int)v46];
            result = (unsigned int)(v46 + 1);
            *v48 = v41;
            *(v47 - 1) = result;
            if ( v33 == v32 )
              return result;
          }
          else
          {
            v35 = v43;
            result = v43 + 1;
            v36 = &v42[v35];
LABEL_20:
            v32 += 8;
            *v36 = v41;
            *((_DWORD *)v42 - 1) = result;
            if ( v33 == v32 )
              return result;
          }
        }
        v50 = (_QWORD *)sub_186B270(0x18u);
        v42 = v50 + 1;
        *v50 = 2;
        result = 1;
        a1[3].m128i_i64[0] = (__int64)v42;
        v36 = v42;
        goto LABEL_20;
      }
    }
  }
  return result;
}

