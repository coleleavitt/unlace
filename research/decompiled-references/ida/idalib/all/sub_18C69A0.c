unsigned __int64 __fastcall sub_18C69A0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbp
  __int64 v14; // rbp
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbp
  size_t v20; // r15
  unsigned int v21; // eax
  __int64 v22; // rdx
  unsigned int v23; // r9d
  unsigned __int64 v24; // r8
  char *v25; // rax
  char *v26; // rdx
  char *v27; // rdi
  __int64 v28; // rax
  unsigned __int64 v29; // r15
  char *v30; // rdi
  unsigned __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r13
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // rdi
  int v39; // edx
  _QWORD *v40; // rcx
  __int64 v41; // rbp
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  void *v46; // [rsp+0h] [rbp-128h]
  unsigned __int64 v47; // [rsp+0h] [rbp-128h]
  unsigned __int64 v48; // [rsp+8h] [rbp-120h]
  __int64 v49; // [rsp+8h] [rbp-120h]
  unsigned int v50; // [rsp+10h] [rbp-118h]
  unsigned int v51; // [rsp+10h] [rbp-118h]
  unsigned int v52; // [rsp+1Ch] [rbp-10Ch] BYREF
  char *v53; // [rsp+20h] [rbp-108h] BYREF
  void *v54; // [rsp+30h] [rbp-F8h] BYREF
  unsigned int v55; // [rsp+38h] [rbp-F0h]
  void *v56; // [rsp+40h] [rbp-E8h] BYREF
  size_t v57; // [rsp+48h] [rbp-E0h]
  __int64 v58; // [rsp+50h] [rbp-D8h] BYREF
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-C0h]
  _BYTE v61[176]; // [rsp+78h] [rbp-B0h] BYREF

  v5 = *(_QWORD *)(a1 + 544);
  v52 = a2;
  if ( v5 )
  {
    v6 = *(_BYTE *)(v5 + 8) & 0x7F;
    if ( (unsigned __int8)v6 <= 0x27u && (v7 = 0xFC00040180LL, _bittest64(&v7, v6)) )
    {
LABEL_4:
      v8 = sub_B8C1B0(v5);
      if ( v8 )
        goto LABEL_5;
    }
    else
    {
      v14 = 0xFC00040180LL;
      while ( 1 )
      {
        v15 = *(_QWORD *)(sub_B8C1B0(v5) + 16);
        v5 = (v15 & 4) != 0 ? *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL) : v15 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v5 )
          break;
        v16 = *(_BYTE *)(v5 + 8) & 0x7F;
        if ( (unsigned __int8)v16 <= 0x27u && _bittest64(&v14, v16) )
          goto LABEL_4;
      }
    }
  }
  sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v52, 0x1617u, 0);
  sub_15F7200(&ptr);
  v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
  v35 = *(_QWORD *)(v34 + 72);
  if ( (v35 & 1) != 0 )
  {
    v36 = v35 & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    v40 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v35 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      v8 = 0;
      goto LABEL_5;
    }
    v8 = v35 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v35 & 2) == 0 )
      goto LABEL_5;
    v41 = v40[2295];
    v42 = v34 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v41 )
    {
      v43 = v40[294];
      v40[304] += 24LL;
      v44 = (v43 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v40[295] >= v44 + 24 && v43 )
      {
        v40[294] = v44 + 24;
        v45 = (v43 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v45 = sub_986170((__int64)(v40 + 294), 24, 24, 3, v32, v33);
        v44 = v45 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v45 = v41;
      v42 = v44 | 4;
      *(_DWORD *)(v45 + 8) = 0;
      *(_QWORD *)(v45 + 16) = v34;
    }
    v36 = v42 & 0xFFFFFFFFFFFFFFFELL;
    v35 = v36 | 1;
    *(_QWORD *)(v34 + 72) = v36 | 1;
  }
  v37 = v35 & 0xFFFFFFFFFFFFFFF8LL;
  v8 = v37;
  if ( v36 )
  {
    if ( (v36 & 4) != 0 )
    {
      v8 = 0;
      if ( v37 )
      {
        v38 = *(_QWORD *)v37;
        v39 = *(_DWORD *)(*(_QWORD *)v37 + 12LL);
        if ( *(_DWORD *)(v37 + 8) != v39 )
        {
          *(_DWORD *)(v37 + 8) = v39;
          v47 = v37;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 152LL))(v38, v34);
          v37 = v47;
        }
        v8 = *(_QWORD *)(v37 + 16);
      }
    }
  }
LABEL_5:
  v9 = sub_B8D340(v8);
  if ( (unsigned __int8)sub_B8E180(v9) )
  {
    v10 = *(_QWORD **)(a1 + 248);
    v11 = 0;
    v12 = v10[2384];
    return sub_C08900(v10, v52, v12, a3, (unsigned int)**(char **)(a1 + 232) >> 31, v11);
  }
  if ( a3 == 1 )
  {
    sub_C05290(&v56, 1u, v8, (**(_BYTE **)(a1 + 232) & 0x20) != 0);
    v55 = 32;
    v54 = (void *)(unsigned int)(v57 + 1);
LABEL_38:
    v31 = sub_A70EF0(*(_QWORD *)(a1 + 248), *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18648LL) | 1LL);
    v12 = sub_A70F70(*(_QWORD *)(a1 + 248), v31, (__int64)&v54, nullptr, 0, 0);
    v11 = sub_C09810(*(_QWORD **)(a1 + 248), v56, v57, 0, 0, v12, (__int64)&v52, 1);
    goto LABEL_39;
  }
  sub_C05290(&v56, a3, v8, 0);
  v55 = 32;
  v54 = (void *)(unsigned int)(v57 + 1);
  if ( a3 != 2 && a3 != 5 )
    goto LABEL_38;
  v17 = sub_A70EF0(*(_QWORD *)(a1 + 248), *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18664LL) | 1LL);
  v18 = *(_QWORD *)(a1 + 248);
  v19 = v17;
  v20 = v57;
  ptr = v61;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  v46 = v56;
  v21 = sub_AAE980(v18, v17);
  v22 = si128.m128i_i64[0];
  v23 = v21;
  v24 = (v20 + 1) * v21;
  if ( v24 == si128.m128i_i64[0] )
  {
LABEL_44:
    v25 = (char *)ptr;
    goto LABEL_25;
  }
  if ( v24 < si128.m128i_i64[0] )
  {
    si128.m128i_i64[0] = (v20 + 1) * v21;
    goto LABEL_44;
  }
  if ( v24 > si128.m128i_i64[1] )
  {
    v51 = v21;
    v49 = (v20 + 1) * v21;
    sub_2236E10(&ptr, v61, v24, 1);
    v22 = si128.m128i_i64[0];
    v23 = v51;
    v24 = v49;
  }
  v25 = (char *)ptr;
  if ( (char *)ptr + v22 != (char *)ptr + v24 )
  {
    v50 = v23;
    v48 = v24;
    memset((char *)ptr + v22, 0, v24 - v22);
    v25 = (char *)ptr;
    v23 = v50;
    v24 = v48;
  }
  si128.m128i_i64[0] = v24;
LABEL_25:
  v53 = v25;
  sub_2219080(v23, v46, v20, &v53);
  v26 = v53;
  v27 = (char *)ptr;
  v28 = si128.m128i_i64[0];
  v29 = v53 - (_BYTE *)ptr;
  if ( v53 - (_BYTE *)ptr != si128.m128i_i64[0] )
  {
    if ( (unsigned __int64)(v53 - (_BYTE *)ptr) >= si128.m128i_i64[0] )
    {
      if ( v29 > si128.m128i_i64[1] )
      {
        sub_2236E10(&ptr, v61, v53 - (_BYTE *)ptr, 1);
        v27 = (char *)ptr;
        v28 = si128.m128i_i64[0];
        v26 = (char *)ptr + v29;
      }
      v30 = &v27[v28];
      if ( v26 != v30 )
        memset(v30, 0, v26 - v30);
    }
    si128.m128i_i64[0] = v29;
  }
  v12 = sub_A70F70(*(_QWORD *)(a1 + 248), v19, (__int64)&v54, nullptr, 0, 0);
  v11 = sub_C09810(*(_QWORD **)(a1 + 248), ptr, si128.m128i_u64[0], 1u, 0, v12, (__int64)&v52, 1);
  if ( ptr == v61 )
  {
LABEL_39:
    if ( v55 <= 0x40 )
      goto LABEL_34;
LABEL_40:
    if ( v54 )
      operator delete[](v54);
    goto LABEL_34;
  }
  free(ptr);
  if ( v55 > 0x40 )
    goto LABEL_40;
LABEL_34:
  if ( v56 != &v58 )
    operator delete(v56);
  v10 = *(_QWORD **)(a1 + 248);
  return sub_C08900(v10, v52, v12, a3, (unsigned int)**(char **)(a1 + 232) >> 31, v11);
}
