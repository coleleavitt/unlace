__int64 __fastcall sub_8538A0(__int64 *a1, __int64 a2, __m128i *a3)
{
  unsigned int v4; // r15d
  unsigned __int64 v6; // rax
  signed int v7; // ebp
  int v8; // edx
  __int64 v9; // r14
  _BYTE *v10; // r12
  __int64 v11; // r14
  bool v12; // r13
  __int64 (*v13)(); // rax
  __int64 (*v14)(); // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rbp
  __int64 (*v22)(); // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 (*v25)(); // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  unsigned __int8 v31; // dl
  int v32; // eax
  __int64 v33; // rax
  unsigned int v34; // eax
  void **v35; // rbx
  void **v36; // rdi
  void **v37; // r12
  __int64 *v38; // r14
  __int64 *v39; // r13
  __int64 v41; // [rsp+8h] [rbp-220h]
  __int64 v42; // [rsp+8h] [rbp-220h]
  unsigned __int8 v43; // [rsp+8h] [rbp-220h]
  bool v44; // [rsp+17h] [rbp-211h]
  __int64 v45; // [rsp+18h] [rbp-210h] BYREF
  _BYTE *v46; // [rsp+20h] [rbp-208h] BYREF
  unsigned __int64 v47; // [rsp+28h] [rbp-200h] BYREF
  unsigned __int64 v48; // [rsp+30h] [rbp-1F8h] BYREF
  signed int v49; // [rsp+38h] [rbp-1F0h]
  bool v50; // [rsp+40h] [rbp-1E8h]
  __int64 *v51[6]; // [rsp+50h] [rbp-1D8h] BYREF
  __int64 v52; // [rsp+80h] [rbp-1A8h] BYREF
  void *v53[3]; // [rsp+88h] [rbp-1A0h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-188h]
  __int64 v55; // [rsp+A8h] [rbp-180h]
  __int64 v56; // [rsp+B8h] [rbp-170h]
  __int64 v57; // [rsp+C8h] [rbp-160h]
  __int64 v58; // [rsp+D8h] [rbp-150h]
  __int64 v59; // [rsp+E8h] [rbp-140h]
  __int64 v60; // [rsp+F8h] [rbp-130h]
  __int64 v61; // [rsp+108h] [rbp-120h]
  __int64 v62; // [rsp+118h] [rbp-110h]
  void *v63; // [rsp+128h] [rbp-100h]
  __int64 v64; // [rsp+130h] [rbp-F8h]
  int v65; // [rsp+138h] [rbp-F0h]
  char v66; // [rsp+13Ch] [rbp-ECh]
  char v67; // [rsp+140h] [rbp-E8h] BYREF
  __int64 v68; // [rsp+160h] [rbp-C8h]
  void *ptr; // [rsp+168h] [rbp-C0h]
  __int64 v70; // [rsp+170h] [rbp-B8h]
  _BYTE v71[96]; // [rsp+178h] [rbp-B0h] BYREF
  int v72; // [rsp+1D8h] [rbp-50h]
  __int64 v73; // [rsp+1E0h] [rbp-48h]
  __int16 v74; // [rsp+1E8h] [rbp-40h]
  char v75; // [rsp+1EAh] [rbp-3Eh]

  v45 = a2;
  if ( (a3[1].m128i_i8[8] & 1) != 0 )
    return 0;
  v4 = a3[8].m128i_i8[0] & 1;
  if ( (a3[8].m128i_i8[0] & 1) != 0 && (*(_BYTE *)(a2 + 1) & 6) == 0 )
    return v4;
  sub_84F320((__int64)&v48, (__int64)a1, a2, a3, 6u);
  v44 = v50;
  if ( !v50 )
    return 0;
  if ( (unsigned __int8)sub_B0DD50(*(_QWORD *)(*(_QWORD *)(v45 + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
    return (unsigned int)sub_82B240((__int64)a1, v45, (__int64)a3, v48, v49);
  v46 = (_BYTE *)sub_B0E440(*(_QWORD *)(**(_QWORD **)(v45 + 24) & 0xFFFFFFFFFFFFFFF0LL));
  v6 = sub_6E8B00(a1[2], (__int64)v46);
  v51[3] = (__int64 *)&v48;
  v7 = a3[3].m128i_i32[2];
  v51[1] = (__int64 *)a3;
  v51[2] = a1;
  v8 = v49;
  v47 = *(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] | v6 & 7;
  v51[0] = &v45;
  v51[4] = (__int64 *)&v46;
  v51[5] = (__int64 *)&v47;
  if ( v7 < v49 )
  {
LABEL_56:
    v63 = &v67;
    v74 = 257;
    v52 = 0;
    v53[1] = v53;
    v53[0] = v53;
    v53[2] = nullptr;
    v54 = 1;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v64 = 4;
    v65 = 0;
    v66 = 1;
    v68 = 0;
    ptr = v71;
    v70 = 0x400000000LL;
    v72 = 0;
    v73 = 0;
    v75 = 0;
    if ( !(unsigned __int8)sub_777820(v48, (__int64)v46, &v52)
      || (LOBYTE(v34) = sub_76E0C0((__int64)&v52, v47), v4 = v34, (_BYTE)v34)
      || *((_DWORD *)v53[0] + 32) )
    {
      v4 = sub_852C30(v51, (__int64)&v52);
    }
    else
    {
      v43 = sub_82B240((__int64)a1, v45, (__int64)a3, v48, v49);
      if ( v43 )
      {
        v38 = *((__int64 **)v53[0] + 2);
        v39 = &v38[3 * *((unsigned int *)v53[0] + 6)];
        if ( v39 == v38 )
        {
LABEL_79:
          v4 = v43;
        }
        else
        {
          while ( (unsigned __int8)sub_82D840((__int64)a1, v45, (__int64)a3, v38[1], *v38) )
          {
            v38 += 3;
            if ( v39 == v38 )
              goto LABEL_79;
          }
        }
      }
    }
    if ( ptr != v71 )
      free(ptr);
    if ( !v66 )
      free(v63);
    if ( (v54 & 1) == 0 )
      operator delete();
    v35 = (void **)v53[0];
    if ( v53[0] != v53 )
    {
      while ( 1 )
      {
        v36 = (void **)v35[2];
        v37 = (void **)*v35;
        if ( v36 != v35 + 4 )
          free(v36);
        operator delete(v35, 0x90u);
        if ( v37 == v53 )
          break;
        v35 = v37;
      }
    }
    return v4;
  }
  while ( 2 )
  {
    if ( (unsigned __int32)a3[1].m128i_i32[2] >> 4 == v7 )
    {
      v10 = (_BYTE *)sub_B0E910(*(_QWORD *)(a3[2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL));
      goto LABEL_15;
    }
    v9 = (unsigned int)(v7 - 1);
    v10 = (_BYTE *)(*(_QWORD *)(a3[3].m128i_i64[0] + 8 * v9) & 0xFFFFFFFFFFFFFFF8LL);
    if ( *(_QWORD *)(a3[3].m128i_i64[0] + 8 * v9) > 7u && (v10[28] & 0x7Fu) - 57 <= 2 )
    {
LABEL_15:
      v11 = (__int64)v46;
      v12 = v10 == nullptr || v46 == nullptr;
      if ( v12 )
      {
        v8 = v49;
        v12 = v10 == nullptr;
        LODWORD(v9) = v7 - 1;
      }
      else
      {
        if ( v46 == v10 )
          return (unsigned int)sub_82B240((__int64)a1, v45, (__int64)a3, (unsigned __int64)v10, v7);
        v13 = *(__int64 (**)())(*(_QWORD *)v10 + 32LL);
        v41 = v13 == sub_6A41B0 ? sub_777E10((__int64)v10) : ((__int64 (__fastcall *)(_BYTE *))v13)(v10);
        v14 = *(__int64 (**)())(*(_QWORD *)v11 + 32LL);
        v15 = v14 == sub_6A41B0 ? sub_777E10(v11) : ((__int64 (__fastcall *)(__int64))v14)(v11);
        if ( v41 == v15 )
          return (unsigned int)sub_82B240((__int64)a1, v45, (__int64)a3, (unsigned __int64)v10, v7);
        v8 = v49;
        LODWORD(v9) = v7 - 1;
      }
      goto LABEL_23;
    }
    v12 = v44;
    v10 = nullptr;
LABEL_23:
    if ( v8 >= v7 )
      goto LABEL_10;
    if ( (unsigned __int32)a3[1].m128i_i32[2] >> 4 == (_DWORD)v9 )
    {
      v17 = sub_B0E910(*(_QWORD *)(a3[2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL));
    }
    else
    {
      v16 = *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * (unsigned int)(v7 - 2));
      v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v16 <= 7 || (*(_BYTE *)(v17 + 28) & 0x7Fu) - 57 > 2 )
        BUG();
    }
    sub_8226C0((__int64 *)(*(_QWORD *)(v17 + 104) + 96LL), *(_QWORD *)(v17 + 104));
    v18 = *(_QWORD *)(v17 + 128);
    if ( (*(_BYTE *)(v18 + 24) & 1) != 0 )
      sub_7A2E20(v18);
    sub_8226C0((__int64 *)(*(_QWORD *)(v17 + 104) + 96LL), *(_QWORD *)(v17 + 104));
    v19 = *(_QWORD *)(v17 + 104);
    sub_8226C0((__int64 *)(v19 + 96), v19);
    v20 = *(_QWORD *)(v17 + 128);
    if ( (*(_BYTE *)(v20 + 24) & 1) != 0 )
      v21 = sub_7A2E20(v20);
    else
      v21 = *(_QWORD *)(v20 + 24);
    while ( 1 )
    {
      v27 = *(_QWORD *)(**(_QWORD **)(v21 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      v28 = *(_QWORD *)(v27 + 8);
      if ( (v28 & 7) != 0 || (v28 & 8) != 0 )
        v27 = sub_B0CF30(**(_QWORD **)(v21 + 16), v19);
      v29 = sub_B0E910(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL));
      v30 = v29;
      if ( !v29 || v12 )
        goto LABEL_35;
      if ( (_BYTE *)v29 == v10 )
        break;
      v22 = *(__int64 (**)())(*(_QWORD *)v29 + 32LL);
      if ( v22 == sub_6A41B0 )
      {
        v23 = sub_777E10(v30);
        v24 = (__int64)v10;
        v42 = v23;
        v25 = *(__int64 (**)())(*(_QWORD *)v10 + 32LL);
        if ( v25 == sub_6A41B0 )
          goto LABEL_33;
      }
      else
      {
        v33 = ((__int64 (__fastcall *)(__int64))v22)(v30);
        v24 = (__int64)v10;
        v42 = v33;
        v25 = *(__int64 (**)())(*(_QWORD *)v10 + 32LL);
        if ( v25 == sub_6A41B0 )
        {
LABEL_33:
          v26 = sub_777E10(v24);
          goto LABEL_34;
        }
      }
      v26 = ((__int64 (__fastcall *)(__int64))v25)(v24);
LABEL_34:
      if ( v42 == v26 )
        break;
LABEL_35:
      v21 += 24;
    }
    v31 = *(_BYTE *)(v21 + 12);
    v32 = (v31 >> 2) & 3;
    if ( (~v31 & 0xC) == 0 )
      v32 = v31 & 2;
    if ( !v32 )
    {
      v8 = v49;
LABEL_10:
      if ( v8 > (int)v9 )
        goto LABEL_56;
      v7 = v9;
      continue;
    }
    return (unsigned int)sub_852C30(v51, 0);
  }
}

