__int64 __fastcall sub_8EEC80(__int64 a1, __int64 a2)
{
  char **v2; // r12
  char **v3; // r12
  char **exception; // r12
  __int64 *v6; // rcx
  unsigned int *v7; // rbx
  __int64 *v8; // r13
  unsigned int *v9; // rax
  unsigned int v10; // r14d
  __int64 v11; // r14
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // r14d
  __int64 v15; // rax
  unsigned int v16; // edx
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 *v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  size_t v29; // rdx
  __int64 **v30; // r15
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 result; // rax
  __int64 **v34; // rdx
  unsigned int v35; // r15d
  size_t v36; // rdi
  __int64 v37; // rax
  __int64 *v38; // rcx
  _DWORD *v39; // r14
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 *v42; // rax
  __int64 *v43; // r9
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rdi
  _QWORD *v47; // rax
  unsigned int v48; // edi
  unsigned int v49; // ecx
  unsigned int *v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rdx
  __int64 *v53; // r13
  int v54; // [rsp+0h] [rbp-90h]
  unsigned int v55; // [rsp+4h] [rbp-8Ch]
  void *v56; // [rsp+8h] [rbp-88h]
  __int64 *v57; // [rsp+8h] [rbp-88h]
  unsigned int v58; // [rsp+10h] [rbp-80h]
  unsigned int v59; // [rsp+10h] [rbp-80h]
  __int64 *v60; // [rsp+10h] [rbp-80h]
  __int64 *v61; // [rsp+18h] [rbp-78h]
  __int64 v62; // [rsp+18h] [rbp-78h]
  __int64 v63; // [rsp+18h] [rbp-78h]
  _BYTE v64[16]; // [rsp+20h] [rbp-70h] BYREF
  __int64 v65; // [rsp+30h] [rbp-60h]
  __int64 v66[10]; // [rsp+40h] [rbp-50h] BYREF

  v6 = *(__int64 **)(a2 + 8);
  v61 = v6;
  if ( !v6 )
  {
    v30 = *(__int64 ***)(a1 + 8928);
    v7 = nullptr;
    v53 = nullptr;
    if ( v30 )
      goto LABEL_22;
LABEL_43:
    v47 = (_QWORD *)sub_186B270(0x28u);
    v30 = (__int64 **)(v47 + 1);
    *v47 = 2;
    result = 1;
    *(_QWORD *)(a1 + 8928) = v30;
    v34 = v30;
    goto LABEL_24;
  }
  v7 = nullptr;
  v8 = &v6[*((unsigned int *)v6 - 1)];
  if ( v6 == v8 )
  {
    v61 = nullptr;
    v53 = nullptr;
  }
  else
  {
    do
    {
      v11 = *v61;
      sub_B6CE00(a1);
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 7488) + 48LL))(*(_QWORD *)(a1 + 7488), v11);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 7488) + 64LL))(*(_QWORD *)(a1 + 7488));
      v14 = sub_B645B0(a1, v11);
      if ( v7 )
      {
        v15 = *(v7 - 1);
        if ( (_DWORD)v15 == *(v7 - 2) )
        {
          v16 = (unsigned int)(3 * v15 + 1) >> 1;
          v17 = 4 * v16 + 8;
          if ( 4 * (int)v15 + 8 >= (unsigned int)v17 || (unsigned int)v15 >= v16 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_8E4EB0(v66, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v66);
            sub_233E40((__int64)v66);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v58 = (unsigned int)(3 * v15 + 1) >> 1;
          v18 = (unsigned int *)sub_186B300(v7 - 2, v17);
          v7 = v18 + 2;
          *v18 = v58;
          v9 = &v18[v18[1] + 2];
        }
        else
        {
          v9 = &v7[v15];
        }
      }
      else
      {
        v27 = (_QWORD *)sub_186B270(0x10u);
        *v27 = 2;
        v9 = (unsigned int *)(v27 + 1);
        v7 = v9;
      }
      *v9 = v14;
      ++v61;
      v10 = *(v7 - 1) + 1;
      *(v7 - 1) = v10;
    }
    while ( v8 != v61 );
    if ( v10 <= 1 )
    {
      v61 = nullptr;
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 104);
      if ( *(_DWORD *)(v19 + 712) )
      {
        v20 = sub_B65120(a1, v10, (int)v7, 0, v12, v13, v54, v56);
        sub_B725E0(v64, a1, v20, 1);
        v21 = sub_180C100(a1 + 8400, 24);
        v22 = *(_QWORD **)(a1 + 8600);
        *(_BYTE *)(v21 + 8) = v64[8] & 3 | *(_BYTE *)(v21 + 8) & 0xFC;
        *(_QWORD *)v21 = off_1C57620;
        *(_QWORD *)(v21 + 16) = v65;
        if ( v22 )
        {
          v23 = *((_DWORD *)v22 - 1);
          if ( v23 == *((_DWORD *)v22 - 2) )
          {
            v48 = (3 * v23 + 1) >> 1;
            v49 = 8 * v48 + 8;
            if ( 8 * v23 + 8 >= v49 || v23 >= v48 )
            {
              v2 = (char **)__cxa_allocate_exception(0x28u);
              sub_8E4EB0(v66, "Overflow encountered when expanding vector");
              *v2 = (char *)off_1C63128;
              sub_2333C0(v2 + 1, v66);
              sub_233E40((__int64)v66);
              __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v62 = v21;
            v50 = (unsigned int *)sub_186B300(v22 - 1, v49);
            v51 = v50[1];
            v22 = v50 + 2;
            v21 = v62;
            *v50 = v48;
            *(_QWORD *)(a1 + 8600) = v50 + 2;
            LODWORD(v50) = v51;
            v26 = &v22[v51];
            v25 = (_DWORD)v50 + 1;
          }
          else
          {
            v24 = v23;
            v25 = v23 + 1;
            v26 = &v22[v24];
          }
        }
        else
        {
          v63 = v21;
          v52 = (_QWORD *)sub_186B270(0x18u);
          *v52 = 2;
          v21 = v63;
          v25 = 1;
          v22 = v52 + 1;
          *(_QWORD *)(a1 + 8600) = v22;
          v26 = v22;
        }
        *v26 = v21;
        v19 = *(_QWORD *)(a1 + 104);
        *((_DWORD *)v22 - 1) = v25;
        v10 = *(v7 - 1);
      }
      else
      {
        v21 = 0;
      }
      v61 = (__int64 *)sub_AA3C00(v19, v10, v7, 0, v21, 0, 0, 0);
      v10 = *(v7 - 1);
    }
    v59 = *(v7 - 2);
    v28 = (_QWORD *)sub_186B270(4LL * v59 + 8);
    v53 = v28 + 1;
    v29 = 4LL * *(v7 - 1);
    *v28 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v59), _mm_cvtsi32_si128(v10)).m128i_u64[0];
    if ( v29 )
      memcpy(v28 + 1, v7, v29);
  }
  v30 = *(__int64 ***)(a1 + 8928);
  if ( !v30 )
    goto LABEL_43;
LABEL_22:
  v31 = *((_DWORD *)v30 - 1);
  if ( v31 == *((_DWORD *)v30 - 2) )
  {
    v35 = (3 * v31 + 1) >> 1;
    v55 = v35;
    v36 = 16 * v35 + 8;
    if ( 16 * v31 + 8 >= (unsigned int)v36 || v31 >= v35 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_8E4EB0(v66, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v66);
      sub_233E40((__int64)v66);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v37 = sub_186B270(v36);
    v38 = *(__int64 **)(a1 + 8928);
    v39 = (_DWORD *)v37;
    v30 = (__int64 **)(v37 + 8);
    if ( v38 )
    {
      v40 = *((unsigned int *)v38 - 1);
      v41 = v37 + 8;
      *(_DWORD *)(v37 + 4) = v40;
      v42 = v38;
      v43 = &v38[2 * v40];
      if ( v38 != v43 )
      {
        do
        {
          v44 = *v42;
          v42 += 2;
          v41 += 16;
          *(_QWORD *)(v41 - 16) = v44;
          v45 = *(v42 - 1);
          *(v42 - 1) = 0;
          *(_QWORD *)(v41 - 8) = v45;
        }
        while ( v42 != v43 );
      }
      v60 = &v38[2 * v40];
      if ( (_DWORD)v40 )
      {
        do
        {
          while ( 1 )
          {
            v46 = v38[1];
            if ( !v46 )
              break;
            v57 = v38;
            sub_186B220((void *)(v46 - 8));
            v38 = v57 + 2;
            if ( v60 == v57 + 2 )
              goto LABEL_35;
          }
          v38 += 2;
        }
        while ( v60 != v38 );
LABEL_35:
        v38 = *(__int64 **)(a1 + 8928);
      }
      sub_186B220(v38 - 1);
      v34 = &v30[2 * (unsigned int)v39[1]];
      result = (unsigned int)(v39[1] + 1);
    }
    else
    {
      *(_DWORD *)(v37 + 4) = 0;
      v34 = (__int64 **)(v37 + 8);
      result = 1;
    }
    *(_QWORD *)(a1 + 8928) = v30;
    *v39 = v55;
  }
  else
  {
    v32 = v31;
    result = v31 + 1;
    v34 = &v30[2 * v32];
  }
LABEL_24:
  v34[1] = v53;
  *v34 = v61;
  *((_DWORD *)v30 - 1) = result;
  if ( v7 )
    return sub_186B220(v7 - 2);
  return result;
}

