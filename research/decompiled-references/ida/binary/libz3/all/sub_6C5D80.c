__int64 __fastcall sub_6C5D80(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  __int64 *v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 *v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  unsigned int v15; // eax
  _DWORD *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned int v19; // r8d
  size_t v20; // rsi
  unsigned int v21; // r14d
  unsigned int *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r11
  int v26; // eax
  unsigned int v27; // edi
  int v28; // esi
  int v29; // esi
  unsigned int v30; // eax
  unsigned int v31; // edi
  int v32; // esi
  unsigned int v33; // ebx
  unsigned int v34; // eax
  int v35; // esi
  unsigned int v36; // esi
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // r11
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rbx
  int v43; // eax
  __m128i v44; // xmm0
  __int64 v45; // rax
  __int64 v46; // rax
  __m128i v47; // xmm1
  __int64 v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rsi
  size_t v51; // rdx
  unsigned int v52; // ebx
  void *v53; // r15
  __int64 v54; // r14
  _QWORD *v55; // r13
  _QWORD *v56; // r14
  void *v57; // rbp
  int v59; // eax
  char **exception; // rbp
  void *v61; // [rsp+8h] [rbp-140h]
  unsigned int v62; // [rsp+10h] [rbp-138h]
  _DWORD *v63; // [rsp+10h] [rbp-138h]
  _QWORD v64[2]; // [rsp+30h] [rbp-118h] BYREF
  _QWORD v65[2]; // [rsp+40h] [rbp-108h] BYREF
  __int64 v66[4]; // [rsp+50h] [rbp-F8h] BYREF
  __m128i v67; // [rsp+70h] [rbp-D8h]
  __int64 v68; // [rsp+80h] [rbp-C8h]
  __int64 v69; // [rsp+88h] [rbp-C0h]
  _QWORD v70[2]; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v72; // [rsp+A8h] [rbp-A0h]
  _QWORD *v73; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v74; // [rsp+C0h] [rbp-88h]
  __int64 v75; // [rsp+C8h] [rbp-80h]
  unsigned int v76; // [rsp+D0h] [rbp-78h]
  __int64 v77; // [rsp+D8h] [rbp-70h]
  _QWORD v78[2]; // [rsp+E0h] [rbp-68h] BYREF
  _QWORD v79[3]; // [rsp+F0h] [rbp-58h] BYREF
  _QWORD *v80; // [rsp+108h] [rbp-40h]

  v68 = 0;
  v69 = 0;
  v70[0] = 0;
  v70[1] = 0;
  v71 = 1;
  v73 = nullptr;
  v64[0] = 0;
  v64[1] = 0;
  v65[0] = 1;
  v65[1] = 0;
  v67 = 0;
  v72 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v64, &qword_1C7F2A0);
  v74 = a3;
  v75 = a2;
  v76 = a4;
  v77 = 0;
  v78[0] = 0;
  v78[1] = 0;
  v79[0] = 1;
  v79[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v78, (int *)v64);
  v79[2] = 0;
  v9 = *(__int64 **)(a1 + 88);
  if ( v9 )
  {
    v10 = *((unsigned int *)v9 - 1);
    v80 = nullptr;
    if ( (_DWORD)v10 )
    {
      v11 = v9;
      v12 = &v9[v10];
      v13 = (_QWORD *)sub_186B270(0x18u);
      v14 = v13 + 1;
      *v13 = 2;
      v15 = 1;
      v80 = v14;
      v16 = v14;
      while ( 1 )
      {
        v17 = *v11++;
        *v14 = v17;
        *(v16 - 1) = v15;
        if ( v12 == v11 )
          break;
        if ( *(v16 - 2) == v15 )
        {
          v19 = (3 * v15 + 1) >> 1;
          v20 = 8 * v19 + 8;
          v21 = v19;
          if ( 8 * v15 + 8 >= (unsigned int)v20 || v15 >= v19 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v66, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v66);
            sub_233E40((__int64)v66);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v22 = (unsigned int *)sub_186B300(v16 - 2, v20);
          v23 = v22[1];
          v16 = v22 + 2;
          *v22 = v21;
          v80 = v16;
          LODWORD(v22) = v23;
          v14 = &v16[2 * v23];
          v15 = (_DWORD)v22 + 1;
        }
        else
        {
          v18 = v15++;
          v14 = &v16[2 * v18];
        }
      }
      goto LABEL_12;
    }
  }
  else
  {
    v80 = nullptr;
  }
  v16 = nullptr;
LABEL_12:
  v24 = *(_QWORD *)(a1 + 832);
  v25 = *(unsigned int *)(a1 + 840);
  if ( v75 )
  {
    v26 = *(_DWORD *)(v75 + 12);
    v27 = v76 + v26;
  }
  else
  {
    v27 = v76;
    v26 = 0;
  }
  v28 = 0;
  if ( v74 )
    v28 = *(_DWORD *)(v74 + 12);
  v29 = (v76 >> 13) ^ (v28 - v27);
  v30 = (v26 - v76 - v29) ^ (v29 << 8);
  v31 = (v76 - v29 - v30) ^ (v30 >> 13);
  v32 = (v29 - v30 - v31) ^ (v31 >> 12);
  v33 = (v30 - v31 - v32) ^ (v32 << 16);
  v34 = (v31 - v32 - v33) ^ (v33 >> 5);
  v35 = (v32 - v33 - v34) ^ (v34 >> 3);
  v36 = (v34 - v35 - ((v33 - v34 - v35) ^ (v35 << 10))) ^ (((v33 - v34 - v35) ^ (v35 << 10)) >> 15);
  v37 = 88 * v25;
  v38 = v36 & ((_DWORD)v25 - 1);
  v39 = v24 + 88 * v25;
  v40 = 88 * v38;
  v41 = v24 + v40;
  if ( v40 == v37 )
  {
LABEL_45:
    while ( v41 != v24 )
    {
      v59 = *(_DWORD *)(v24 + 4);
      if ( v59 == 2 )
      {
        if ( *(_DWORD *)v24 == v36
          && *(_QWORD *)(v24 + 8) == v74
          && *(_QWORD *)(v24 + 16) == v75
          && *(_DWORD *)(v24 + 24) == v76 )
        {
          v42 = v24;
          goto LABEL_25;
        }
      }
      else if ( !v59 )
      {
        break;
      }
      v24 += 88;
    }
LABEL_33:
    v52 = 0;
    goto LABEL_34;
  }
  v42 = v24 + v40;
  while ( 1 )
  {
    v43 = *(_DWORD *)(v42 + 4);
    if ( v43 != 2 )
    {
      if ( !v43 )
        goto LABEL_33;
      goto LABEL_19;
    }
    if ( *(_DWORD *)v42 == v36
      && *(_QWORD *)(v42 + 8) == v74
      && *(_QWORD *)(v42 + 16) == v75
      && *(_DWORD *)(v42 + 24) == v76 )
    {
      break;
    }
LABEL_19:
    v42 += 88;
    if ( v39 == v42 )
      goto LABEL_45;
  }
LABEL_25:
  v44 = _mm_loadu_si128((const __m128i *)(v42 + 8));
  LODWORD(v68) = *(_DWORD *)(v42 + 24);
  v45 = *(_QWORD *)(v42 + 32);
  v67 = v44;
  v69 = v45;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v70, (int *)(v42 + 40));
  *((_QWORD *)&v72 + 1) = *(_QWORD *)(v42 + 72);
  if ( &v73 == (_QWORD **)(v42 + 80) )
  {
LABEL_57:
    v16 = v80;
    goto LABEL_32;
  }
  if ( v73 )
    sub_186B220(v73 - 1);
  v46 = *(_QWORD *)(v42 + 80);
  if ( !v46 )
  {
    v73 = nullptr;
    goto LABEL_57;
  }
  v47 = _mm_cvtsi32_si128(*(_DWORD *)(v46 - 4));
  v48 = *(unsigned int *)(v46 - 8);
  v62 = v48;
  v49 = (_QWORD *)sub_186B270(8 * v48 + 8);
  v50 = *(_QWORD **)(v42 + 80);
  v73 = v49 + 1;
  v16 = v80;
  *v49 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v62), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v47))).m128i_u64[0];
  if ( !v50 )
    goto LABEL_32;
  v51 = 8LL * *((unsigned int *)v50 - 1);
  if ( v51 > 8 )
  {
    v63 = v16;
    memmove(v49 + 1, v50, v51);
    v16 = v63;
    goto LABEL_32;
  }
  v52 = 1;
  if ( v51 == 8 )
  {
    v49[1] = *v50;
LABEL_32:
    v52 = 1;
  }
LABEL_34:
  if ( v16 )
    sub_186B220(v16 - 2);
  v61 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v78);
  sub_182CBA0(v61, v79);
  v53 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v64);
  sub_182CBA0(v53, v65);
  if ( (_BYTE)v52 )
  {
    v54 = v69;
    if ( v69 )
      ++*(_DWORD *)(v69 + 8);
    sub_6BFE30(*a5, a5[1]);
    *a5 = v54;
    v55 = v73;
    if ( v73 )
    {
      v56 = &v73[*((unsigned int *)v73 - 1)];
      if ( v56 != v73 )
      {
        do
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 88LL))(*(_QWORD *)(a1 + 40), *v55++);
        while ( v56 != v55 );
        goto LABEL_42;
      }
LABEL_43:
      sub_186B220(v55 - 1);
    }
  }
  else
  {
LABEL_42:
    v55 = v73;
    if ( v73 )
      goto LABEL_43;
  }
  v57 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v70);
  sub_182CBA0(v57, &v71);
  return v52;
}

