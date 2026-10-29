__int64 __fastcall sub_3CEFB0(__int64 *a1, unsigned int a2, int a3, int *a4, const __m128i *a5)
{
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r12
  unsigned int v12; // r13d
  __int64 v13; // r13
  __int64 v14; // rax
  int v15; // eax
  void *v16; // rdi
  __int64 v17; // rsi
  void *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // edx
  unsigned int v25; // eax
  unsigned int v26; // esi
  unsigned int v27; // eax
  unsigned int v28; // r12d
  int v29; // eax
  int v30; // edx
  __int64 v31; // rax
  _DWORD *v32; // rsi
  unsigned __int64 i; // r13
  unsigned int v34; // ebp
  void *v35; // r12
  unsigned int v36; // r9d
  int *v37; // rax
  int v38; // r8d
  unsigned int v39; // ecx
  char v40; // bp
  __int64 v41; // rax
  char *v42; // rax
  char fixup; // al
  void (__fastcall *v44)(int *, const __m128i *, __int64); // rax
  unsigned int *v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rax
  int v48; // eax
  int *v49; // [rsp+0h] [rbp-168h]
  unsigned int v50; // [rsp+0h] [rbp-168h]
  int v51[2]; // [rsp+8h] [rbp-160h]
  __int64 v52; // [rsp+10h] [rbp-158h]
  __int64 (__fastcall ***v54)(); // [rsp+20h] [rbp-148h]
  void **p_ptr; // [rsp+28h] [rbp-140h]
  __int64 v56; // [rsp+30h] [rbp-138h]
  int v57; // [rsp+38h] [rbp-130h]
  void *ptr; // [rsp+40h] [rbp-128h] BYREF
  __int128 v59; // [rsp+48h] [rbp-120h]
  __int64 (__fastcall **v60)(); // [rsp+60h] [rbp-108h] BYREF
  __int64 *v61; // [rsp+68h] [rbp-100h]
  bool (__fastcall *v62)(__int16); // [rsp+70h] [rbp-F8h]
  __int64 v63; // [rsp+78h] [rbp-F0h]
  int v64[4]; // [rsp+80h] [rbp-E8h] BYREF
  int v65[2]; // [rsp+90h] [rbp-D8h]
  int v66[2]; // [rsp+98h] [rbp-D0h]
  int v67[4]; // [rsp+A0h] [rbp-C8h] BYREF
  void (__fastcall *v68[15])(int *, int *, __int64); // [rsp+B0h] [rbp-B8h] BYREF
  unsigned __int64 v69; // [rsp+128h] [rbp-40h]

  HIDWORD(v52) = a3;
  v49 = a4;
  v69 = __readfsqword(0x28u);
  v5 = a3 + a2;
  if ( a2 >= a3 + a2 )
    return 0;
  v10 = (unsigned __int16)a4 & 0x800;
  v11 = sub_3B9AA0((__int64)a1, a2, 4) & 0x600;
  if ( v11 == 512 )
  {
    if ( !v10 )
    {
      if ( (*(_BYTE *)(a1[2] + 13) & 1) == 0 )
        return 0;
      v12 = a2;
      if ( (sub_3B9AA0((__int64)a1, a2, 4) & 0x600) == 0x200 )
        v12 = sub_3BD5D0((__int64)a1, a2);
      if ( (sub_3B9AA0((__int64)a1, v12, 4) & 0x600) != 0x400 || !(unsigned __int8)is_problem_present(13, v12) )
        return 0;
    }
    LOBYTE(v13) = 1;
  }
  else
  {
    v13 = (v10 >> 11) & 1;
  }
  v14 = sub_4EE820(a1 + 194, a2);
  if ( !v14 || *(_DWORD *)(v14 + 4) < v5 )
    return 0;
  *(_QWORD *)v51 = (unsigned __int16)v49 & 0x600;
  if ( (*(_BYTE *)(a1[2] + 9) & 8) == 0 )
  {
    ptr = nullptr;
    v59 = 0;
    if ( ((unsigned __int16)v49 & 0x600) != 0x400 )
      goto LABEL_19;
LABEL_25:
    if ( v11 != 1536 )
    {
      *(_QWORD *)v51 = 1024;
      if ( !(_BYTE)v13 )
        goto LABEL_29;
LABEL_27:
      v19 = v59;
      v16 = ptr;
      v17 = v59 + 1;
      v18 = ptr;
      if ( *((_QWORD *)&v59 + 1) >= (unsigned __int64)(v59 + 1) )
        goto LABEL_28;
      goto LABEL_23;
    }
    *(_QWORD *)v51 = 1024;
    if ( (_BYTE)v13 )
      goto LABEL_27;
LABEL_97:
    if ( !sub_375980(0x1Du, a2, v49, a2, HIDWORD(v52)) )
    {
LABEL_98:
      sub_4DB6D0(a1, 8, a2, 0);
      goto LABEL_36;
    }
    goto LABEL_27;
  }
  if ( *(_QWORD *)v51 == 1024 )
  {
    v47 = (unsigned int)v49 & 0xF0000000;
    if ( v47 != 1610612736 && v47 != 3489660928LL && v47 != 1342177280 )
    {
      v48 = sub_3C4370(a1, a2, (__int64)v49, nullptr);
      if ( (v48 & (v48 - 1)) == 0 && ((v48 - 1) & a2) != 0 )
        return 0;
    }
    ptr = nullptr;
    v59 = 0;
    goto LABEL_25;
  }
  v15 = sub_3C4370(a1, a2, (__int64)v49, nullptr);
  if ( (v15 & (v15 - 1)) == 0 && (a2 & (v15 - 1)) != 0 )
    return 0;
  ptr = nullptr;
  v59 = 0;
LABEL_19:
  if ( v49 || (*(_QWORD *)v51 = 0, v11 != 1024) )
  {
    if ( !(_BYTE)v13 )
      goto LABEL_29;
    goto LABEL_22;
  }
  if ( !(_BYTE)v13 )
  {
    *(_QWORD *)v51 = 0;
    if ( (unsigned __int8)is_problem_present(13, a2) )
      goto LABEL_27;
    goto LABEL_97;
  }
LABEL_22:
  v16 = ptr;
  v17 = v59 + 1;
LABEL_23:
  v18 = (void *)qvector_reserve(&ptr, v16, v17, 4);
  ptr = v18;
  v19 = v59;
LABEL_28:
  *((_DWORD *)v18 + v19) = a2;
  *(_QWORD *)&v59 = v59 + 1;
LABEL_29:
  v20 = sub_4ECA50(a1 + 170, a2);
  v21 = (unsigned int *)sub_4EE890(a1 + 170, v20);
  if ( v21 )
  {
    v24 = *v21;
    v25 = v21[1];
    if ( a2 >= v24 )
      v24 = a2;
    if ( v5 <= v25 )
      v25 = v5;
    if ( v25 >= v24 && v24 < v25 )
      goto LABEL_36;
  }
  v26 = a2 + 1;
  v61 = a1;
  v60 = &off_2AFCFD8;
  v62 = sub_3B3520;
  v63 = 0;
  if ( a2 + 1 < v5 )
  {
    v54 = &v60;
    p_ptr = &ptr;
    do
    {
      v27 = sub_3B3AD0(a1, v26, v5, 0, (__int64 (__fastcall ***)(_QWORD, _QWORD *, __int64))&v60);
      v28 = v27;
      if ( v27 >= v5 )
        break;
      v29 = sub_3B9AA0((__int64)a1, v27, 4);
      v30 = v29;
      if ( v10 )
      {
        if ( (v29 & 0x400) != 0 )
          goto LABEL_44;
      }
      else
      {
        if ( (v29 & 0xC000) == 0x4000 )
          goto LABEL_36;
        if ( (v29 & 0x400) != 0 )
        {
          if ( v49 )
          {
            if ( *(_QWORD *)v51 == 1536 )
            {
              if ( (v29 & 0x600) == 0x400 )
                goto LABEL_68;
            }
            else if ( *(_QWORD *)v51 == 1024 )
            {
              v41 = v29 & 0x600;
              if ( v41 == 1536 )
                goto LABEL_68;
              if ( ((v30 ^ (unsigned int)v49) & 0xF0000000) != 0 )
              {
                if ( v41 == 1024 )
                  goto LABEL_75;
LABEL_67:
                if ( (_UNKNOWN *)(v30 & 0xF00000) != &loc_400000 )
                  goto LABEL_68;
                goto LABEL_82;
              }
            }
          }
          else
          {
            if ( (v29 & 0x600) != 0x400 )
              goto LABEL_67;
LABEL_75:
            v57 = v30;
            if ( !(unsigned __int8)get_fixup(0, v28) )
            {
              v42 = (char *)(v57 & 0xF00000);
              if ( v42 != (char *)&loc_400000 )
              {
                if ( (v57 & 0xF0000000) == 0x20000000 && v42 == (_BYTE *)&loc_4FFFFF + 1 )
                {
                  fixup = get_fixup(0, v28 + 2);
                  goto LABEL_84;
                }
                goto LABEL_68;
              }
LABEL_82:
              if ( v28 <= 3 )
                goto LABEL_68;
              fixup = get_fixup(0, v28 - 4);
LABEL_84:
              if ( !fixup )
              {
LABEL_68:
                if ( !sub_375980(0x1Du, v28, v49, a2, HIDWORD(v52)) )
                  goto LABEL_98;
              }
            }
          }
LABEL_44:
          v31 = v59;
          v32 = ptr;
          if ( *((_QWORD *)&v59 + 1) < (unsigned __int64)(v59 + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v59 + 1, 4);
            v32 = ptr;
            v31 = v59;
          }
          v32[v31] = v28;
          *(_QWORD *)&v59 = v59 + 1;
        }
      }
      v26 = v28 + 1;
      v61 = a1;
      v60 = &off_2AFCFD8;
      v62 = sub_3B3520;
      v63 = 0;
    }
    while ( v28 + 1 < v5 );
  }
  for ( i = 0; i < (unsigned __int64)v59; ++i )
  {
    v34 = *((_DWORD *)ptr + i);
    if ( (sub_3B9AA0((__int64)a1, v34, 4) & 0x600) == 0x200 )
      v34 = sub_3BD5D0((__int64)a1, v34);
    v35 = (void *)sub_3B9AA0((__int64)a1, v34, 0);
    v36 = sub_3C4370(a1, v34, (__int64)v35, nullptr);
    if ( v34 >= a2 || a2 - v34 < v36 )
    {
      memset(v68, 0, 16);
      *(_OWORD *)v67 = 0;
      sub_3CB9E0(a1, v34, 4);
      if ( v68[0] )
        v68[0](v67, v67, 3);
    }
    else
    {
      v51[0] = v36;
      v50 = (a2 - v34) / v36;
      v37 = sub_3C4190(a1, v67, v34, 0, (__int64)v35);
      v38 = -1;
      if ( v37 )
        v38 = *v37;
      *(_QWORD *)v65 = 0;
      v39 = v51[0] * v50;
      *(_QWORD *)v66 = 0;
      v49 = v64;
      *(_OWORD *)v64 = 0;
      v40 = sub_3CE970(a1, v34, v35, v39, v38, (const __m128i *)v64);
      if ( *(_QWORD *)v65 )
        (*(void (__fastcall **)(int *, int *, __int64))v65)(v64, v64, 3);
      if ( !v40 )
        goto LABEL_36;
    }
  }
  memset(v68, 0, 16);
  v44 = (void (__fastcall *)(int *, const __m128i *, __int64))a5[1].m128i_i64[0];
  *(_OWORD *)v67 = 0;
  if ( v44 )
  {
    v44(v67, a5, 2);
    *(__m128i *)v68 = _mm_loadu_si128(a5 + 1);
  }
  v6 = sub_3BCAD0(
         (__int64)a1,
         a2,
         v5,
         (__int64)v67,
         v22,
         v23,
         (int)v49,
         v51[0],
         v52,
         (int)a5,
         (int)v54,
         (int)p_ptr,
         (__int64)(a1 + 170));
  if ( v68[0] )
    v68[0](v67, v67, 3);
  if ( (_BYTE)v6 )
  {
    v45 = (unsigned int *)sub_4EE820(v56, a2);
    if ( v45 && v45[1] < v5 )
    {
      v46 = sub_4EC9F0(v56, *v45);
      v6 = sub_4EEC40(v56, v46, v5);
    }
    goto LABEL_37;
  }
LABEL_36:
  v6 = 0;
LABEL_37:
  if ( ptr )
  {
    *(_QWORD *)&v59 = 0;
    qfree(ptr);
  }
  return v6;
}

