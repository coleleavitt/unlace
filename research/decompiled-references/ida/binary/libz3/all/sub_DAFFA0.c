__int64 __fastcall sub_DAFFA0(__int64 a1, __int64 **a2)
{
  __int64 v4; // r15
  _QWORD *v5; // rbx
  __int64 *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rsi
  _QWORD *v9; // rbp
  unsigned int v10; // ebx
  __int64 v11; // rax
  int v12; // edx
  _Unwind_Exception **v13; // rax
  __int64 v14; // rsi
  __int64 *v15; // r8
  __int64 v16; // rdx
  __int64 *v17; // rdi
  __int64 *v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // rdi
  bool v24; // zf
  char v25; // al
  unsigned int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // r14
  unsigned int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  _QWORD *v32; // rdx
  __int64 *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 *v37; // rdi
  int v38; // eax
  int v39; // eax
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rdx
  unsigned int v45; // edx
  size_t v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // edx
  __int64 *v50; // rax
  __int64 v51; // rax
  int v52; // edx
  __int64 *v53; // rax
  __int64 v54; // rax
  int v55; // ecx
  __int64 *v56; // rax
  unsigned __int64 v57; // r12
  __int64 *v58; // rbx
  __int64 v59; // rsi
  __int64 result; // rax
  void *v61; // rbx
  _QWORD *v62; // rax
  char **exception; // r12
  __int64 v64; // rdx
  _Unwind_Exception *v65; // [rsp+0h] [rbp-78h]
  int v66; // [rsp+0h] [rbp-78h]
  _Unwind_Exception *v67; // [rsp+0h] [rbp-78h]
  __int64 *ptr; // [rsp+8h] [rbp-70h]
  void *ptrb; // [rsp+8h] [rbp-70h]
  void *ptrc; // [rsp+8h] [rbp-70h]
  int ptra; // [rsp+8h] [rbp-70h]
  __m128i v72; // [rsp+10h] [rbp-68h] BYREF
  __int64 v73; // [rsp+20h] [rbp-58h] BYREF
  __int64 v74; // [rsp+28h] [rbp-50h]

  v4 = **a2;
  v5 = (_QWORD *)sub_186B270(8u);
  sub_DA3080(v5, v4, *(_QWORD *)(a1 + 16), *(_BYTE *)(a1 + 24));
  v6 = *a2;
  *(_QWORD *)(a1 + 32) = v5;
  v7 = v6[9];
  if ( !v7 )
    goto LABEL_98;
  v8 = *v6;
  v9 = nullptr;
  v10 = 0;
  while ( 2 )
  {
    v25 = *(_BYTE *)(v7 + 3) >> 6;
    if ( v25 )
    {
      if ( v25 != 1 )
      {
LABEL_21:
        if ( v25 == 2 )
          v26 = *(_DWORD *)(v7 + 4) - 1;
        else
          v26 = *(_DWORD *)(v7 + 4);
        goto LABEL_23;
      }
    }
    else
    {
      do
      {
        v7 = *(_QWORD *)(v7 + 16);
        v25 = *(_BYTE *)(v7 + 3) >> 6;
      }
      while ( !v25 );
      if ( v25 != 1 )
        goto LABEL_21;
    }
    v26 = *(_DWORD *)(v7 + 4) + 1;
LABEL_23:
    if ( v10 >= v26 )
      goto LABEL_33;
    if ( (*((_BYTE *)v6 + 123) & 0x10) == 0 )
      break;
    v11 = v6[13];
    v12 = 17;
    while ( 1 )
    {
      if ( *(char *)(v11 + 3) < 0 )
      {
        if ( *(_BYTE *)(v11 + 3) >> 6 != 2 )
        {
          v13 = (_Unwind_Exception **)(*(_QWORD *)(v11 + 16) + 8LL * v10);
          goto LABEL_7;
        }
        goto LABEL_56;
      }
      if ( v10 == *(_DWORD *)(v11 + 4) )
        break;
LABEL_56:
      v11 = *(_QWORD *)(v11 + 16);
      if ( !--v12 )
      {
        sub_236900((_QWORD *)(v8 + 672), v6 + 13);
        v44 = v6[13];
        v6 = *a2;
        v13 = (_Unwind_Exception **)(*(_QWORD *)(v44 + 16) + 8LL * v10);
        goto LABEL_7;
      }
    }
    v13 = (_Unwind_Exception **)(v11 + 8);
LABEL_7:
    v65 = *v13;
    if ( *v13 )
    {
      v14 = *v6;
      v15 = *(__int64 **)(a1 + 32);
      if ( (*((_BYTE *)v6 + 123) & 0x20) != 0 )
      {
        v16 = *(_QWORD *)(v14 + 864);
        goto LABEL_10;
      }
      v51 = v6[9];
      v52 = 18;
      while ( 2 )
      {
        if ( !--v52 )
        {
          ptr = *(__int64 **)(a1 + 32);
          sub_233F80((__int64 *)(v14 + 616), (_DWORD *)v6 + 18);
          v15 = ptr;
          v53 = (__int64 *)(*(_QWORD *)(v6[9] + 16) + 8LL * v10);
          goto LABEL_75;
        }
        if ( *(char *)(v51 + 3) < 0 )
        {
          if ( *(_BYTE *)(v51 + 3) >> 6 != 2 )
          {
            v53 = (__int64 *)(*(_QWORD *)(v51 + 16) + 8LL * v10);
            goto LABEL_75;
          }
          goto LABEL_77;
        }
        if ( v10 != *(_DWORD *)(v51 + 4) )
        {
LABEL_77:
          v51 = *(_QWORD *)(v51 + 16);
          continue;
        }
        break;
      }
      v53 = (__int64 *)(v51 + 8);
LABEL_75:
      v16 = *v53;
LABEL_10:
      sub_DA5410(&v72, v15, v16);
      sub_DA3E90(*(_QWORD **)(a1 + 32), (__int64)&v72);
      v17 = *(__int64 **)(a1 + 32);
      v73 = 0;
      v74 = v4;
      sub_DA3D80(v17, (__int64)&v72);
      v18 = *a2;
      v19 = **a2;
      if ( (*((_BYTE *)*a2 + 123) & 0x20) != 0 )
      {
        v20 = *(_QWORD *)(v19 + 864);
        goto LABEL_12;
      }
      v54 = v18[9];
      v55 = 18;
      while ( 2 )
      {
        if ( !--v55 )
        {
          ptr = *a2;
          sub_233F80((__int64 *)(v19 + 616), (_DWORD *)v18 + 18);
          v56 = (__int64 *)(*(_QWORD *)(ptr[9] + 16) + 8LL * v10);
          goto LABEL_83;
        }
        if ( *(char *)(v54 + 3) < 0 )
        {
          if ( *(_BYTE *)(v54 + 3) >> 6 != 2 )
          {
            v56 = (__int64 *)(*(_QWORD *)(v54 + 16) + 8LL * v10);
            goto LABEL_83;
          }
          goto LABEL_85;
        }
        if ( v10 != *(_DWORD *)(v54 + 4) )
        {
LABEL_85:
          v54 = *(_QWORD *)(v54 + 16);
          continue;
        }
        break;
      }
      v56 = (__int64 *)(v54 + 8);
LABEL_83:
      v20 = *v56;
LABEL_12:
      LODWORD(ptrb) = sub_167E610(v20, (int)v65, ptr, v72.m128i_i32[0]);
      v21 = sub_167E610(v73, v66, ptrb, v72.m128i_i32[0]);
      if ( (double)(int)ptr * 1.2 >= (double)v21 )
        sub_EDBFA0((int)*a2);
      v22 = v73;
      if ( v73 )
      {
        v23 = v74;
        v24 = (*(_DWORD *)(v73 + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v23, v22);
      }
      ++v10;
      sub_DA3950((__int64)&v72);
      v6 = *a2;
      v7 = (*a2)[9];
      if ( !v7 )
        goto LABEL_33;
LABEL_18:
      v8 = *v6;
      continue;
    }
    break;
  }
  v27 = *v6;
  if ( (*((_BYTE *)v6 + 123) & 0x20) != 0 )
  {
    v28 = *(_QWORD *)(v27 + 864);
    goto LABEL_27;
  }
  v48 = v6[9];
  v49 = 17;
  while ( 2 )
  {
    if ( *(char *)(v48 + 3) < 0 )
    {
      if ( *(_BYTE *)(v48 + 3) >> 6 != 2 )
      {
        v50 = (__int64 *)(*(_QWORD *)(v48 + 16) + 8LL * v10);
        goto LABEL_66;
      }
LABEL_68:
      v48 = *(_QWORD *)(v48 + 16);
      if ( !--v49 )
      {
        sub_233F80((__int64 *)(v27 + 616), (_DWORD *)v6 + 18);
        v50 = (__int64 *)(*(_QWORD *)(v6[9] + 16) + 8LL * v10);
        goto LABEL_66;
      }
      continue;
    }
    break;
  }
  if ( v10 != *(_DWORD *)(v48 + 4) )
    goto LABEL_68;
  v50 = (__int64 *)(v48 + 8);
LABEL_66:
  v28 = *v50;
LABEL_27:
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  if ( v9 )
  {
    v29 = *((_DWORD *)v9 - 1);
    if ( v29 == *((_DWORD *)v9 - 2) )
    {
      v45 = (3 * v29 + 1) >> 1;
      v46 = 8 * v45 + 8;
      if ( 8 * v29 + 8 >= (unsigned int)v46 || v29 >= v45 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_177758(&v73, "Overflow encountered when expanding vector", v64);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v73);
        sub_233E40((__int64)&v73);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v65) = (3 * v29 + 1) >> 1;
      v47 = sub_186B300(v9 - 1, v46);
      v9 = (_QWORD *)(v47 + 8);
      *(_DWORD *)v47 = (_DWORD)v65;
      LODWORD(v47) = *(_DWORD *)(v47 + 4);
      v32 = &v9[(unsigned int)v47];
      v31 = v47 + 1;
    }
    else
    {
      v30 = v29;
      v31 = v29 + 1;
      v32 = &v9[v30];
    }
  }
  else
  {
    v62 = (_QWORD *)sub_186B270(0x18u);
    v9 = v62 + 1;
    *v62 = 2;
    v31 = 1;
    v32 = v9;
  }
  *v32 = v28;
  v33 = *a2;
  *((_DWORD *)v9 - 1) = v31;
  sub_EDBFA0((int)v33);
  v6 = *a2;
  ++v10;
  v7 = (*a2)[9];
  if ( v7 )
    goto LABEL_18;
LABEL_33:
  if ( !v9 )
  {
LABEL_98:
    result = sub_ED9A60(v6);
    goto LABEL_94;
  }
  v34 = *((unsigned int *)v9 - 1);
  if ( (_DWORD)v34 )
  {
    v35 = sub_15EC1C0(v4, v34);
    v36 = v35;
    if ( v35 )
      ++*(_DWORD *)(v35 + 8);
    sub_DA5410(&v72, *(_QWORD **)(a1 + 32), v35);
    sub_DA3E90(*(_QWORD **)(a1 + 32), (__int64)&v72);
    v37 = *(__int64 **)(a1 + 32);
    v73 = 0;
    v74 = v4;
    sub_DA3D80(v37, (__int64)&v72);
    v38 = sub_167E610(v36, (int)v65, ptr, v72.m128i_i32[0]);
    v39 = sub_167E610(v73, v38, ptrc, v72.m128i_i32[0]);
    v40 = v73;
    if ( (double)v39 > (double)(int)v67 * 1.2 && v73 != v36 )
    {
      if ( v73 )
      {
        v41 = v74;
        v24 = (*(_DWORD *)(v73 + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v41, v40);
      }
      v73 = v36;
      if ( v36 )
        ++*(_DWORD *)(v36 + 8);
      LODWORD(v40) = v36;
    }
    sub_EDBA20((int)*a2, v40, 0, v67, ptra, v72.m128i_i32[0], v72.m128i_i64[1], v73);
    v42 = v73;
    if ( v73 )
    {
      v43 = v74;
      v24 = (*(_DWORD *)(v73 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v43, v42);
    }
    sub_DA3950((__int64)&v72);
    if ( v36 )
    {
      v24 = (*(_DWORD *)(v36 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v4, v36);
    }
    sub_ED9A60(*a2);
  }
  else
  {
    sub_ED9A60(v6);
  }
  v57 = (unsigned __int64)&v9[*((unsigned int *)v9 - 1)];
  if ( (unsigned __int64)v9 < v57 )
  {
    v58 = v9;
    do
    {
      while ( 1 )
      {
        v59 = *v58;
        if ( *v58 )
        {
          v24 = (*(_DWORD *)(v59 + 8))-- == 1;
          if ( v24 )
            break;
        }
        if ( (unsigned __int64)++v58 >= v57 )
          goto LABEL_93;
      }
      ++v58;
      sub_15D7BC0(v4, v59);
    }
    while ( (unsigned __int64)v58 < v57 );
  }
LABEL_93:
  result = sub_186B220(v9 - 1);
LABEL_94:
  v61 = *(void **)(a1 + 32);
  if ( v61 )
  {
    sub_DA39E0(*(_QWORD **)(a1 + 32));
    result = sub_186B220(v61);
  }
  *(_QWORD *)(a1 + 32) = 0;
  return result;
}

