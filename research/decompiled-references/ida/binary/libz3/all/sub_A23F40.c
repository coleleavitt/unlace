__int64 __fastcall sub_A23F40(__int64 a1, unsigned int a2, __int64 *a3, unsigned int a4, char a5, _DWORD *a6)
{
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r13
  _QWORD *v15; // rdx
  _DWORD *v16; // r15
  int v17; // r12d
  _QWORD *v18; // rax
  int *v19; // rax
  __int64 v20; // rax
  __int64 *v21; // r13
  __int64 v22; // r12
  unsigned int v23; // eax
  __int64 v24; // r9
  unsigned int v25; // r14d
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rsi
  int v30; // ebx
  _QWORD *v31; // rax
  __int64 v32; // rbx
  _QWORD *v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rax
  unsigned int v36; // edx
  _DWORD *v37; // rax
  __int64 v38; // rax
  unsigned int v39; // r14d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rax
  unsigned int v43; // r14d
  size_t v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r15
  __m128i *v47; // rdx
  _DWORD *v48; // r13
  __int64 v49; // rcx
  const __m128i *v50; // rax
  const __m128i *v51; // rcx
  bool v52; // zf
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // r13
  int v57; // eax
  unsigned int v58; // ebx
  _QWORD *v59; // rax
  _QWORD *v60; // r14
  __int64 v61; // rbx
  _QWORD *v62; // r13
  _QWORD *v63; // r12
  __int64 v64; // rdx
  char v65; // al
  __int64 result; // rax
  __int64 v67; // rdx
  __int64 v68; // rdi
  int v69; // esi
  int v70; // r14d
  __int64 v71; // r12
  int v72; // eax
  __int64 v73; // r8
  int v74; // ecx
  char **exception; // r14
  char **v76; // r14
  __int64 v77; // [rsp+18h] [rbp-C8h]
  __int64 v78; // [rsp+20h] [rbp-C0h]
  __int64 v79; // [rsp+28h] [rbp-B8h]
  unsigned int v80; // [rsp+28h] [rbp-B8h]
  __int64 v81; // [rsp+30h] [rbp-B0h]
  __int64 v82; // [rsp+30h] [rbp-B0h]
  unsigned int v83; // [rsp+38h] [rbp-A8h]
  unsigned int v84; // [rsp+3Ch] [rbp-A4h] BYREF
  int v85[2]; // [rsp+40h] [rbp-A0h] BYREF
  int v86[2]; // [rsp+48h] [rbp-98h]
  __int64 v87[4]; // [rsp+50h] [rbp-90h] BYREF
  __int64 *v88; // [rsp+70h] [rbp-70h] BYREF
  char v89; // [rsp+78h] [rbp-68h]
  int v90; // [rsp+7Ch] [rbp-64h]
  __int64 v91; // [rsp+80h] [rbp-60h]
  int v92; // [rsp+88h] [rbp-58h]
  __int64 v93; // [rsp+90h] [rbp-50h]
  int v94; // [rsp+98h] [rbp-48h]
  _QWORD *v95; // [rsp+A0h] [rbp-40h] BYREF
  unsigned int v96; // [rsp+A8h] [rbp-38h]

  v10 = *(unsigned int *)(a1 + 1224);
  ++*(_DWORD *)(a1 + 324);
  *(_QWORD *)v85 = a1;
  v84 = a2;
  *(_QWORD *)v86 = a1 + 48 * v10 + 1080;
  sub_998560(*(__int64 *)v86);
  ++*(_DWORD *)(a1 + 1224);
  sub_A231F0(a1, a3, a4, a5, a6, (__int64)v85);
  if ( **(_QWORD **)v86 )
    v11 = *(_DWORD *)(**(_QWORD **)v86 - 4LL);
  else
    v11 = 0;
  if ( v11 >= *(_DWORD *)(*(_QWORD *)(a1 + 400) + 32LL)
    || (v12 = *(_QWORD *)(*(_QWORD *)v86 + 8LL)) != 0 && *(_DWORD *)(v12 - 4) )
  {
    v77 = *(_QWORD *)(a1 + 16);
    v20 = sub_A039B0(*(__int64 **)v86, (__int64)"assign-bounds");
    v21 = *(__int64 **)v86;
    v22 = v20;
    v23 = sub_9986B0(*(__int64 *)v86);
    v24 = v21[1];
    v25 = v23;
    if ( v24 )
    {
      v26 = *v21;
      v27 = *(unsigned int *)(v24 - 4);
      if ( *v21 )
      {
LABEL_14:
        v28 = *(unsigned int *)(v26 - 4);
        goto LABEL_15;
      }
    }
    else
    {
      v26 = *v21;
      v27 = 0;
      if ( *v21 )
        goto LABEL_14;
    }
    v28 = 0;
LABEL_15:
    v29 = *(_QWORD *)(a1 + 16);
    v30 = *(_DWORD *)(a1 + 8);
    v83 = v84;
    sub_B72D60(&v88, v29, v28, v26, v27, v24);
    v94 = v30;
    v88 = qword_1C6E7C8;
    v95 = nullptr;
    if ( v25 )
    {
      v31 = (_QWORD *)sub_186B270(0x28u);
      v32 = v22;
      *v31 = 2;
      v33 = v31 + 1;
      v95 = v31 + 1;
      v79 = v22 + 16LL * v25;
LABEL_17:
      sub_15D0E50(v33, v22);
      while ( 1 )
      {
        v34 = (__int64)v95;
        v32 += 16;
        v35 = (unsigned int)(*((_DWORD *)v95 - 1) + 1);
        *((_DWORD *)v95 - 1) = v35;
        if ( v79 == v32 )
          break;
        v36 = *(_DWORD *)(v34 - 8);
        v22 = v32;
        if ( v36 == (_DWORD)v35 )
        {
          v43 = (3 * v36 + 1) >> 1;
          v44 = 16 * v43 + 8;
          if ( 16 * v36 + 8 >= (unsigned int)v44 || v36 >= v43 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_98B3B0(v87, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v87);
            sub_233E40((__int64)v87);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v45 = sub_186B270(v44);
          v46 = (__int64)v95;
          v47 = (__m128i *)(v45 + 8);
          v48 = (_DWORD *)v45;
          v78 = v45 + 8;
          if ( v95 )
          {
            v49 = *((unsigned int *)v95 - 1);
            *(_DWORD *)(v45 + 4) = v49;
            v50 = (const __m128i *)v46;
            v51 = (const __m128i *)(v46 + 16 * v49);
            if ( (const __m128i *)v46 != v51 )
            {
              do
              {
                v52 = v50->m128i_i8[8] == 0;
                *v47 = _mm_loadu_si128(v50);
                v50->m128i_i32[0] = 0;
                if ( !v52 )
                  v50->m128i_i8[8] = 0;
                ++v50;
                ++v47;
              }
              while ( v50 != v51 );
            }
            v53 = *(unsigned int *)(v46 - 4);
            v81 = v46 + 16 * v53;
            if ( (_DWORD)v53 )
            {
              do
              {
                v54 = v46;
                v46 += 16;
                sub_15D0DF0(v54);
              }
              while ( v46 != v81 );
              v46 = (__int64)v95;
            }
            sub_186B220((void *)(v46 - 8));
            v55 = v78;
            v33 = (_QWORD *)(v78 + 16LL * (unsigned int)v48[1]);
          }
          else
          {
            *(_DWORD *)(v45 + 4) = 0;
            v33 = (_QWORD *)(v45 + 8);
            v55 = v45 + 8;
          }
          v95 = (_QWORD *)v55;
          *v48 = v43;
          goto LABEL_17;
        }
        sub_15D0E50(16 * v35 + v34, v32);
      }
    }
    v88 = (__int64 *)&off_1C57938;
    v96 = v83;
    sub_B733F0(&v88, v29);
    v56 = sub_180C100(v77 + 8400, 64);
    v82 = v56;
    *(_BYTE *)(v56 + 8) = v89 & 3 | *(_BYTE *)(v56 + 8) & 0xFC;
    *(_DWORD *)(v56 + 12) = v90;
    *(_QWORD *)(v56 + 16) = v91;
    *(_DWORD *)(v56 + 24) = v92;
    *(_QWORD *)(v56 + 32) = v93;
    *(_QWORD *)v56 = qword_1C6E7C8;
    v57 = v94;
    *(_QWORD *)(v56 + 48) = 0;
    *(_DWORD *)(v56 + 40) = v57;
    if ( v95 )
    {
      v58 = *((_DWORD *)v95 - 1);
      v80 = *((_DWORD *)v95 - 2);
      v59 = (_QWORD *)sub_186B270(16LL * v80 + 8);
      v60 = v59 + 1;
      *v59 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v80), _mm_cvtsi32_si128(v58)).m128i_u64[0];
      *(_QWORD *)(v56 + 48) = v59 + 1;
      v61 = (__int64)v95;
      if ( !v95 )
      {
        *(_QWORD *)v56 = &off_1C57938;
        *(_DWORD *)(v56 + 56) = v96;
        v87[0] = v56;
        goto LABEL_46;
      }
      v62 = &v95[2 * *((unsigned int *)v95 - 1)];
      if ( v95 == v62 )
      {
        *(_QWORD *)v82 = &off_1C57938;
        *(_DWORD *)(v82 + 56) = v96;
        v87[0] = v82;
        goto LABEL_46;
      }
      v63 = v59 + 1;
      do
      {
        sub_15D0E50(v63, v61);
        v61 += 16;
        v63 += 2;
      }
      while ( v62 != (_QWORD *)v61 );
      *(_QWORD *)v82 = &off_1C57938;
      v60 = *(_QWORD **)(v82 + 48);
      *(_DWORD *)(v82 + 56) = v96;
      v87[0] = v82;
      if ( v60 )
      {
LABEL_46:
        if ( *((_DWORD *)v60 - 1) )
          sub_98C690((_QWORD *)(v77 + 8600), v87);
      }
    }
    else
    {
      *(_QWORD *)v56 = &off_1C57938;
      *(_DWORD *)(v56 + 56) = v96;
    }
    v64 = *(_QWORD *)(v77 + 8848);
    v87[0] = v82 | 3;
    v65 = *(_BYTE *)(v64 + v83);
    if ( v65 == -1 )
    {
      sub_8E8670(v77, v87, v83 ^ 1);
    }
    else if ( !v65 )
    {
      sub_8F28B0(v77, v83, v82 | 3, 0);
    }
    v88 = qword_1C6E7C8;
    sub_4EB210((__int64 *)&v95);
    goto LABEL_52;
  }
  v13 = *(_QWORD *)(a1 + 1072);
  if ( v13 )
    *(_DWORD *)(v13 - 4) = 0;
  sub_98CFC0((_QWORD *)(a1 + 1072), &v84);
  if ( **(_QWORD **)v86 )
  {
    v14 = **(_QWORD **)v86 + 4LL * *(unsigned int *)(**(_QWORD **)v86 - 4LL);
    if ( **(_QWORD **)v86 != v14 )
    {
      v15 = *(_QWORD **)(a1 + 1072);
      v16 = **(_DWORD ***)v86;
      v17 = ***(_DWORD ***)v86 ^ 1;
      if ( v15 )
        goto LABEL_24;
      v18 = (_QWORD *)sub_186B270(0x10u);
      v15 = v18 + 1;
      *v18 = 2;
      *(_QWORD *)(a1 + 1072) = v18 + 1;
      v19 = (int *)(v18 + 1);
      while ( 1 )
      {
        *v19 = v17;
        v37 = v16 + 1;
        ++*((_DWORD *)v15 - 1);
        v16 = v37;
        if ( (_DWORD *)v14 == v37 )
          break;
        v17 = *v37 ^ 1;
LABEL_24:
        v38 = *((unsigned int *)v15 - 1);
        if ( (_DWORD)v38 == *((_DWORD *)v15 - 2) )
        {
          v39 = (unsigned int)(3 * v38 + 1) >> 1;
          v40 = 4 * v39 + 8;
          if ( 4 * (int)v38 + 8 >= (unsigned int)v40 || (unsigned int)v38 >= v39 )
          {
            v76 = (char **)__cxa_allocate_exception(0x28u);
            sub_98B3B0((__int64 *)&v88, "Overflow encountered when expanding vector");
            *v76 = (char *)off_1C63128;
            sub_2333C0(v76 + 1, &v88);
            sub_233E40((__int64)&v88);
            __cxa_throw(v76, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v41 = (unsigned int *)sub_186B300(v15 - 1, v40);
          v15 = v41 + 2;
          *v41 = v39;
          v42 = v41[1];
          *(_QWORD *)(a1 + 1072) = v15;
          v19 = (int *)v15 + v42;
        }
        else
        {
          v19 = (int *)v15 + v38;
        }
      }
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
  {
    v70 = sub_186B270(0x28u);
    v71 = sub_A039B0(*(__int64 **)v86, (__int64)"assign-bounds");
    v72 = sub_9986B0(*(__int64 *)v86);
    v73 = *(_QWORD *)(a1 + 1072);
    if ( v73 )
      v74 = *(_DWORD *)(v73 - 4);
    else
      v74 = 0;
    sub_B73A10(v70, *(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v74, v73, v72, v71);
  }
  v67 = *(_QWORD *)(a1 + 1072);
  v68 = *(_QWORD *)(a1 + 16);
  if ( v67 )
    v69 = *(_DWORD *)(v67 - 4);
  else
    v69 = 0;
  sub_B68F30(v68, v69);
LABEL_52:
  result = *(_QWORD *)v85;
  --*(_DWORD *)(*(_QWORD *)v85 + 1224LL);
  return result;
}

