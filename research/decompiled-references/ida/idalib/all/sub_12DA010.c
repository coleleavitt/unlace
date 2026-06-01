__int64 __fastcall sub_12DA010(
        __int64 a1,
        const char *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 result; // rax
  unsigned __int64 v7; // r15
  int v8; // r14d
  unsigned int v10; // ebp
  __int64 v11; // rcx
  _DWORD *v12; // r13
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  _DWORD *v16; // rdi
  unsigned int v17; // r13d
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r13
  int v22; // r15d
  size_t v23; // rbx
  int v24; // ebp
  __int64 v25; // r15
  const void *v26; // rax
  size_t v27; // rdx
  size_t v28; // rbx
  unsigned int v29; // r13d
  const char *v30; // rax
  size_t v31; // rdx
  size_t v32; // rbx
  __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  size_t v35; // r8
  const char *v36; // rax
  __int64 v37; // rax
  bool v38; // al
  void **v39; // rcx
  unsigned int v40; // ebx
  __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // r15d
  _DWORD *v45; // [rsp+0h] [rbp-140h]
  unsigned __int8 v46; // [rsp+0h] [rbp-140h]
  const void *v47; // [rsp+0h] [rbp-140h]
  __int64 v48; // [rsp+10h] [rbp-130h]
  unsigned int v49; // [rsp+18h] [rbp-128h]
  unsigned int v50; // [rsp+18h] [rbp-128h]
  unsigned int v51; // [rsp+20h] [rbp-120h]
  int v53; // [rsp+38h] [rbp-108h]
  unsigned __int8 v54; // [rsp+3Ch] [rbp-104h]
  __int64 v55; // [rsp+40h] [rbp-100h]
  size_t v56; // [rsp+48h] [rbp-F8h]
  const char *v57; // [rsp+48h] [rbp-F8h]
  const char *v58; // [rsp+48h] [rbp-F8h]
  size_t v59; // [rsp+50h] [rbp-F0h]
  char v60; // [rsp+67h] [rbp-D9h] BYREF
  void *ptr; // [rsp+68h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+70h] [rbp-D0h]
  _BYTE v63[192]; // [rsp+80h] [rbp-C0h] BYREF

  result = 1;
  if ( !a5 )
    return result;
  v7 = HIDWORD(a4);
  v8 = a4;
  v10 = a4;
  v11 = HIDWORD(a4);
  v54 = a6;
  ptr = v63;
  v55 = v10;
  LODWORD(v48) = a5 + v7;
  v12 = (_DWORD *)(a1 + 32);
  v45 = (_DWORD *)(a1 + 32);
  v13 = *(_QWORD *)(a1 + 40);
  v53 = (int)a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v13 )
  {
    do
    {
      while ( 1 )
      {
        v14 = *(_DWORD *)(v13 + 32);
        if ( v14 > v8 || *(_DWORD *)(v13 + 36) > (unsigned int)v11 && v14 == v8 )
          break;
        v13 = *(_QWORD *)(v13 + 24);
        if ( !v13 )
          goto LABEL_9;
      }
      v12 = (_DWORD *)v13;
      v13 = *(_QWORD *)(v13 + 16);
    }
    while ( v13 );
LABEL_9:
    if ( *(_DWORD **)(a1 + 48) == v12 )
      goto LABEL_11;
  }
  else if ( v12 == *(_DWORD **)(a1 + 48) )
  {
    goto LABEL_67;
  }
  v49 = v11;
  v15 = std::_Rb_tree_decrement(v12);
  v11 = v49;
  v12 = (_DWORD *)v15;
LABEL_11:
  if ( v45 == v12 )
  {
LABEL_67:
    v20 = v10;
    v23 = 0;
    v38 = 1;
    goto LABEL_46;
  }
  v16 = v12;
  v17 = v11;
  while ( 1 )
  {
    v18 = v16[8];
    v19 = (unsigned int)v16[9];
    if ( v8 == v18 )
    {
      if ( v17 == (_DWORD)v19 )
      {
LABEL_15:
        v11 = v17;
        v20 = v10;
        v21 = v16;
LABEL_16:
        if ( v45 != v21 )
        {
          v22 = v21[8];
          v19 = (unsigned int)v21[9];
          goto LABEL_18;
        }
        v23 = 0;
LABEL_45:
        v38 = v10 == (_DWORD)v20;
LABEL_46:
        if ( (unsigned int)v48 > (unsigned int)v11 && v38 )
          goto LABEL_24;
        v39 = (void **)ptr;
LABEL_49:
        result = sub_12D9AA0(a1, v53, a3, v39, v23, v54);
        goto LABEL_26;
      }
    }
    else if ( v8 < v18 )
    {
      goto LABEL_15;
    }
    v40 = v19 + v16[14];
    LOBYTE(a2) = v8 <= v18;
    v38 = v8 <= v18 && v40 > v17;
    if ( v38 )
      break;
    v16 = (_DWORD *)std::_Rb_tree_increment(v16, a2);
    if ( v45 == v16 )
    {
      v11 = v17;
      v20 = v10;
      v23 = 0;
      v38 = 1;
      goto LABEL_46;
    }
  }
  v11 = v17;
  v21 = v16;
  if ( (unsigned int)v7 > (unsigned int)v19 )
  {
    v50 = v16[8];
    v43 = std::_Rb_tree_increment(v16, a2, v19, v11);
    v11 = v40;
    v20 = v50;
    v21 = (_DWORD *)v43;
    goto LABEL_16;
  }
  if ( v45 == v16 )
  {
    v20 = v10;
    v23 = 0;
    goto LABEL_46;
  }
  v22 = v16[8];
  v20 = v10;
LABEL_18:
  v51 = v10;
  v23 = 0;
  v24 = v22;
  v25 = (__int64)v21;
  while ( 2 )
  {
    if ( v8 <= v24 && ((unsigned int)v48 <= (unsigned int)v19 || v8 != v24) )
    {
      v10 = v51;
      goto LABEL_23;
    }
    v29 = v19 + *(_DWORD *)(v25 + 56);
    if ( (int)v20 < v24 || (unsigned int)v11 < (unsigned int)v19 && (_DWORD)v20 == v24 )
    {
      a2 = (const char *)((v11 << 32) | (unsigned int)v20);
      v60 = 0;
      v30 = (const char *)sub_12D9E50(
                            a1,
                            (__int64)a2,
                            (unsigned int)v24 | (unsigned __int64)(v19 << 32),
                            (__int64)&v60,
                            v20,
                            a6);
      v32 = v31;
      if ( v60 )
        goto LABEL_25;
      v33 = si128.m128i_i64[0];
      v34 = v31 + si128.m128i_i64[0];
      if ( v34 > si128.m128i_i64[1] )
      {
        a2 = v63;
        v58 = v30;
        sub_2236E10(&ptr, v63, v34, 1);
        v33 = si128.m128i_i64[0];
        v30 = v58;
        if ( v32 )
        {
LABEL_33:
          a2 = v30;
          memcpy((char *)ptr + v33, v30, v32);
          v33 = si128.m128i_i64[0];
        }
      }
      else if ( v32 )
      {
        goto LABEL_33;
      }
      v23 = v33 + v32;
      si128.m128i_i64[0] = v23;
    }
    v35 = *(_QWORD *)(v25 + 48);
    v36 = *(const char **)(v25 + 40);
    if ( v35 + v23 > si128.m128i_i64[1] )
    {
      a2 = v63;
      v59 = *(_QWORD *)(v25 + 48);
      v57 = *(const char **)(v25 + 40);
      sub_2236E10(&ptr, v63, v35 + v23, 1);
      v23 = si128.m128i_i64[0];
      v35 = v59;
      v36 = v57;
    }
    if ( v35 )
    {
      a2 = v36;
      v56 = v35;
      memcpy((char *)ptr + v23, v36, v35);
      v23 = v56 + si128.m128i_i64[0];
    }
    si128.m128i_i64[0] = v23;
    v37 = std::_Rb_tree_increment(v25, a2);
    v25 = v37;
    if ( v45 != (_DWORD *)v37 )
    {
      v20 = (unsigned int)v24;
      v19 = *(unsigned int *)(v37 + 36);
      v11 = v29;
      v24 = *(_DWORD *)(v37 + 32);
      continue;
    }
    break;
  }
  v44 = v24;
  v11 = v29;
  v10 = v51;
  v20 = v44;
LABEL_23:
  if ( (int)v10 <= (int)v20 )
    goto LABEL_45;
LABEL_24:
  v60 = 0;
  v26 = (const void *)sub_12D9E50(a1, (v11 << 32) | (unsigned int)v20, v55 | (v48 << 32), (__int64)&v60, v20, a6);
  v28 = v27;
  if ( !v60 )
  {
    v41 = si128.m128i_i64[0];
    v42 = v27 + si128.m128i_i64[0];
    if ( v42 > si128.m128i_i64[1] )
    {
      v47 = v26;
      sub_2236E10(&ptr, v63, v42, 1);
      v41 = si128.m128i_i64[0];
      v26 = v47;
    }
    v39 = (void **)ptr;
    if ( v28 )
    {
      memcpy((char *)ptr + v41, v26, v28);
      v41 = si128.m128i_i64[0];
      v39 = (void **)ptr;
    }
    v23 = v41 + v28;
    si128.m128i_i64[0] = v23;
    goto LABEL_49;
  }
LABEL_25:
  result = 0;
LABEL_26:
  if ( ptr != v63 )
  {
    v46 = result;
    free(ptr);
    return v46;
  }
  return result;
}
