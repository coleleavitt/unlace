__int64 __fastcall sub_40C890(__int64 a1, double a2)
{
  char **v2; // r15
  char **v3; // r12
  char **v4; // r12
  int v6; // r9d
  int v7; // eax
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rsi
  char v11; // r8
  __int64 v12; // r15
  __int64 v13; // rsi
  _QWORD *v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 *v19; // rax
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r15
  _QWORD *v23; // rax
  __int64 v24; // rbx
  unsigned int v25; // r13d
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rdi
  bool v30; // zf
  unsigned int v31; // ecx
  unsigned int v32; // r12d
  size_t v33; // rsi
  unsigned int *v34; // rax
  unsigned __int64 v35; // r12
  unsigned int v36; // ecx
  unsigned int v37; // r14d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // r13
  _OWORD *v43; // rax
  __int64 *v44; // rcx
  _QWORD *v45; // r12
  __int64 v46; // rdx
  __int64 v47; // r14
  unsigned int v48; // eax
  __int64 v49; // rdx
  int v50; // eax
  __int64 *v51; // rdx
  __int64 v52; // rax
  std::ios_base *v53; // r13
  _QWORD *v54; // rax
  unsigned int v55; // r15d
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rdx
  unsigned int v59; // eax
  __int64 *v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // r8
  __int64 *v63; // rdi
  __int64 v64; // rax
  _QWORD *v65; // rax
  char **v66; // r14
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rdi
  char **exception; // r12
  _QWORD *v71; // [rsp+20h] [rbp-510h]
  _QWORD *v72; // [rsp+30h] [rbp-500h]
  __int64 *v73; // [rsp+38h] [rbp-4F8h]
  __int64 v74; // [rsp+40h] [rbp-4F0h]
  __int64 *v75; // [rsp+48h] [rbp-4E8h]
  unsigned int v77; // [rsp+6Ch] [rbp-4C4h]
  __int64 v78; // [rsp+70h] [rbp-4C0h]
  __int64 v79; // [rsp+78h] [rbp-4B8h]
  __int64 v80; // [rsp+78h] [rbp-4B8h]
  unsigned int v81; // [rsp+78h] [rbp-4B8h]
  void (***v82)(void); // [rsp+88h] [rbp-4A8h] BYREF
  const __m128i *v83; // [rsp+90h] [rbp-4A0h] BYREF
  __int64 v84; // [rsp+98h] [rbp-498h] BYREF
  __int64 v85[2]; // [rsp+A0h] [rbp-490h] BYREF
  __int64 v86[2]; // [rsp+B0h] [rbp-480h] BYREF
  char v87[8]; // [rsp+C0h] [rbp-470h] BYREF
  void (***v88)(void); // [rsp+C8h] [rbp-468h]
  char v89[16]; // [rsp+D0h] [rbp-460h] BYREF
  void *ptr[2]; // [rsp+E0h] [rbp-450h] BYREF
  int v91; // [rsp+F0h] [rbp-440h]
  __int128 v92; // [rsp+F8h] [rbp-438h]
  __int64 v93; // [rsp+110h] [rbp-420h] BYREF
  __int64 v94; // [rsp+118h] [rbp-418h]
  _BYTE v95[32]; // [rsp+120h] [rbp-410h] BYREF
  char v96[16]; // [rsp+140h] [rbp-3F0h] BYREF
  char v97[8]; // [rsp+150h] [rbp-3E0h] BYREF
  _BYTE v98[376]; // [rsp+158h] [rbp-3D8h] BYREF
  int v99[2]; // [rsp+2D0h] [rbp-260h] BYREF
  _BYTE *v100; // [rsp+360h] [rbp-1D0h]
  int v101; // [rsp+368h] [rbp-1C8h]
  __int64 v102; // [rsp+370h] [rbp-1C0h]
  _QWORD v103[19]; // [rsp+378h] [rbp-1B8h] BYREF
  int v104; // [rsp+410h] [rbp-120h]
  __int64 (__fastcall **v105)(); // [rsp+418h] [rbp-118h] BYREF
  int v106; // [rsp+4A8h] [rbp-88h]
  __int64 v107; // [rsp+4B0h] [rbp-80h]
  __int64 v108; // [rsp+4B8h] [rbp-78h]
  __int64 v109; // [rsp+4C0h] [rbp-70h]
  __int64 v110; // [rsp+4C8h] [rbp-68h]
  __int64 v111; // [rsp+4D0h] [rbp-60h]
  __int64 v112; // [rsp+4D8h] [rbp-58h]
  __int64 v113; // [rsp+4E0h] [rbp-50h]
  _BYTE v114[72]; // [rsp+4E8h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 660) )
  {
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v96);
    v7 = *(_DWORD *)(a1 + 360);
    if ( v7 != -1 )
    {
      if ( v7 == 1 )
      {
        v8 = *(_QWORD *)(a1 + 152);
        sub_400920(v99, a1, a2);
        if ( !*(_QWORD *)v99 )
        {
          sub_180B130(0);
          if ( (unsigned __int8)sub_186A530(a2) )
          {
            sub_186A4C0(a2);
            v69 = sub_180B150(0, a1);
            std::operator<<<std::char_traits<char>>();
            sub_186A500(v69, "Cex validation failed\n");
          }
          else
          {
            sub_180B150(0, a1);
            std::operator<<<std::char_traits<char>>();
          }
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_3FCFD0((__int64 *)v99, "Cex validation failed\n");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v99);
          sub_233E40((__int64)v99);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        sub_3FCDD0(*(__int64 *)v99, v8);
      }
      goto LABEL_7;
    }
    v85[1] = 0;
    v82 = nullptr;
    v9 = *(_QWORD *)(a1 + 152);
    v10 = *(unsigned int *)(a1 + 364);
    v83 = nullptr;
    v11 = *(_BYTE *)(a1 + 668);
    v74 = v9;
    v85[0] = v9;
    sub_40C0C0(a1, v10, (__int64)v85, &v83, v11, v6);
    v84 = 0;
    sub_41E0F0(v87, *(_QWORD *)(a1 + 152), &v84, &v83);
    sub_421690(v87, &v82);
    v12 = *(_QWORD *)(a1 + 152);
    sub_1584DD0(v99, v12, 0);
    *(_QWORD *)v99 = &off_1C4CA60;
    v100 = v114;
    v101 = 0;
    v102 = 0;
    sub_1584DD0(v103, v12, 0);
    v13 = v12;
    v103[18] = 0;
    v104 = 0;
    v103[0] = &off_1C61DB8;
    sub_1584DD0(&v105, v12, 0);
    v107 = 0;
    v106 = 0;
    v108 = v12;
    v105 = &off_1C61DE0;
    *(_QWORD *)v99 = &off_1C4CA80;
    v109 = 0;
    v14 = *(_QWORD **)(a1 + 264);
    v15 = *(unsigned int *)(a1 + 272);
    v110 = v12;
    v111 = 0;
    v112 = v12;
    v16 = &v14[2 * v15];
    v113 = 0;
    v114[8] = 0;
    v71 = v16;
    if ( v16 == v14 )
    {
LABEL_87:
      v79 = 0;
    }
    else
    {
      v17 = v16;
      v18 = v14;
      while ( *v18 <= 1u )
      {
        v18 += 2;
        if ( v17 == v18 )
          goto LABEL_87;
      }
      v72 = v18;
      v79 = 0;
      if ( v71 != v18 )
      {
        while ( 1 )
        {
          v19 = *(__int64 **)(v72[1] + 112LL);
          if ( v19 )
          {
            v73 = &v19[*((unsigned int *)v19 - 1)];
            if ( v19 != v73 )
              break;
          }
LABEL_66:
          v54 = v72 + 2;
          if ( v71 != v72 + 2 )
          {
            while ( *v54 <= 1u )
            {
              v54 += 2;
              if ( v71 == v54 )
                goto LABEL_88;
            }
            v72 = v54;
            if ( v54 != v71 )
              continue;
          }
          goto LABEL_88;
        }
        v75 = *(__int64 **)(v72[1] + 112LL);
        while ( 1 )
        {
          v78 = *v75;
          sub_1374250(&v93, v82, *(_QWORD *)(*v75 + 40));
          v20 = v93;
          v93 = v79;
          sub_3FCDF0(v79, v94);
          v86[0] = *(_QWORD *)(a1 + 152);
          v21 = sub_15E1A70(v86[0]);
          v22 = v21;
          if ( v21 )
            ++*(_DWORD *)(v21 + 8);
          v23 = (_QWORD *)sub_186B270(0x18u);
          v23[1] = v22;
          v24 = (__int64)(v23 + 1);
          *v23 = 0x100000002LL;
          v25 = *(_DWORD *)(v78 + 68);
          v77 = *(_DWORD *)(v78 + 56);
          if ( v25 )
            break;
          v80 = v20;
          v26 = 0;
          if ( v77 )
            goto LABEL_35;
          v40 = *(_QWORD *)(a1 + 152);
LABEL_42:
          v41 = sub_15E1AF0(v40);
          v42 = v41;
          if ( v41 )
            ++*(_DWORD *)(v41 + 8);
          sub_3FCDF0(v80, v74);
          v43 = (_OWORD *)sub_186B270(0x40u);
          ptr[0] = v43;
          *v43 = 0;
          v43[1] = 0;
          v43[2] = 0;
          v43[3] = 0;
          v91 = 0;
          ptr[1] = &byte_8;
          v92 = 0;
          sub_157E9E0((int)ptr, v42);
          sub_157CA60(ptr, *(_QWORD *)(*(_QWORD *)(a1 + 152) + 840LL));
          v44 = (__int64 *)v92;
          v45 = nullptr;
          if ( !(_QWORD)v92 )
            goto LABEL_51;
          v81 = 0;
          while ( 1 )
          {
            v46 = *((unsigned int *)v44 - 1);
            if ( v81 >= (unsigned int)v46 )
              break;
            v47 = 8LL * ((unsigned int)v46 - v81 - 1) + 1;
            if ( v45 )
            {
              v48 = *((_DWORD *)v45 - 1);
              if ( v48 == *((_DWORD *)v45 - 2) )
              {
                v55 = (3 * v48 + 1) >> 1;
                v56 = 8 * v55 + 8;
                if ( 8 * v48 + 8 >= (unsigned int)v56 || v48 >= v55 )
                {
                  v2 = (char **)__cxa_allocate_exception(0x28u);
                  sub_3FCFD0(&v93, "Overflow encountered when expanding vector");
                  *v2 = (char *)off_1C63128;
                  sub_2333C0(v2 + 1, &v93);
                  sub_233E40((__int64)&v93);
                  __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v57 = (unsigned int *)sub_186B300(v45 - 1, v56);
                v58 = v57[1];
                v45 = v57 + 2;
                *v57 = v55;
                v44 = (__int64 *)v92;
                LODWORD(v57) = v58;
                v51 = &v45[v58];
                v50 = (_DWORD)v57 + 1;
              }
              else
              {
                v49 = v48;
                v50 = v48 + 1;
                v51 = &v45[v49];
              }
            }
            else
            {
              v65 = (_QWORD *)sub_186B270(0x18u);
              v51 = v65 + 1;
              v44 = (__int64 *)v92;
              v45 = v65 + 1;
              *v65 = 2;
              v50 = 1;
            }
            *v51 = v47;
            ++v81;
            *((_DWORD *)v45 - 1) = v50;
            if ( !v44 )
              goto LABEL_51;
          }
          if ( (_DWORD)v46 )
          {
            v59 = v46 - 1;
            v60 = v44;
            if ( (unsigned int)v46 >> 1 )
            {
              do
              {
                v61 = v59;
                v62 = *v60;
                --v59;
                ++v60;
                v63 = &v44[v61];
                *(v60 - 1) = *v63;
                *v63 = v62;
              }
              while ( v59 != (_DWORD)v46 - 1 - ((unsigned int)v46 >> 1) );
            }
            v64 = sub_15DB6A0(
                    *(_QWORD *)(a1 + 152),
                    1,
                    v46,
                    v44,
                    v45,
                    v42,
                    0,
                    &qword_18D6CD0,
                    &qword_18D6CD0,
                    0,
                    0,
                    0,
                    0);
            v79 = v64;
            if ( v64 )
              ++*(_DWORD *)(v64 + 8);
            sub_3FCDF0(v42, v74);
          }
          else
          {
LABEL_51:
            v79 = v42;
          }
          v52 = sub_B00C00(*(_QWORD *)(a1 + 152), &qword_1C7F4C8, &qword_18D6CD0);
          v53 = (std::ios_base *)v52;
          if ( v52 )
            ++*(_DWORD *)(v52 + 48);
          sub_E5EBF0(v52, v79);
          v13 = 0;
          if ( (unsigned int)sub_E60CB0(v53, 0, 0) != -1 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(&v93, v79, *(_QWORD *)(a1 + 152), 0, 0, 0);
            sub_160E8B0(v97, &v93);
            sub_18572D0(v95);
            sub_180B130(v95);
            if ( (unsigned __int8)sub_186A530(a2) )
            {
              sub_186A4C0(a2);
              sub_180B150(v95, &v93);
              std::stringbuf::str(&v93, v98);
              std::__ostream_insert<char,std::char_traits<char>>();
              std::operator<<<std::char_traits<char>>();
              sub_233E40((__int64)&v93);
              sub_186A500(&v93, "\n");
            }
            else
            {
              sub_180B150(v95, &v93);
              std::stringbuf::str(&v93, v98);
              std::__ostream_insert<char,std::char_traits<char>>();
              std::operator<<<std::char_traits<char>>();
              sub_233E40((__int64)&v93);
            }
            v66 = (char **)__cxa_allocate_exception(0x28u);
            std::stringbuf::str(&v93, v98);
            *v66 = (char *)off_1C63128;
            sub_2333C0(v66 + 1, &v93);
            sub_233E40((__int64)&v93);
            __cxa_throw(v66, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v30 = (*((_DWORD *)v53 + 12))-- == 1;
          if ( v30 )
          {
            (**(void (__fastcall ***)(std::ios_base *))v53)(v53);
            sub_186B220(v53);
          }
          if ( *((_QWORD *)&v92 + 1) )
            sub_186B220((void *)(*((_QWORD *)&v92 + 1) - 8LL));
          if ( (_QWORD)v92 )
            sub_186B220((void *)(v92 - 8));
          if ( ptr[0] )
            sub_186B220(ptr[0]);
          if ( v45 )
            sub_186B220(v45 - 1);
          v86[1] = v24;
          sub_2334C0(v86);
          if ( v73 == ++v75 )
            goto LABEL_66;
        }
        v26 = v25;
        v27 = v78;
        while ( 1 )
        {
          sub_1374250(&v93, v82, *(_QWORD *)(v27 + 80) & 0xFFFFFFFFFFFFFFF8LL);
          v28 = v93;
          v93 = v20;
          v80 = v28;
          if ( v20 )
          {
            v29 = v94;
            v30 = (*(_DWORD *)(v20 + 8))-- == 1;
            if ( v30 )
              sub_15D7BC0(v29, v20);
          }
          if ( v80 )
            ++*(_DWORD *)(v80 + 8);
          v31 = *(_DWORD *)(v24 - 4);
          if ( v31 == *(_DWORD *)(v24 - 8) )
          {
            v32 = (3 * v31 + 1) >> 1;
            v33 = 8 * v32 + 8;
            if ( 8 * v31 + 8 >= (unsigned int)v33 || v31 >= v32 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_3FCFD0(&v93, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, &v93);
              sub_233E40((__int64)&v93);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v34 = (unsigned int *)sub_186B300((void *)(v24 - 8), v33);
            *v34 = v32;
            v31 = v34[1];
            v24 = (__int64)(v34 + 2);
          }
          v27 += 8;
          *(_QWORD *)(v24 + 8LL * v31) = v80;
          *(_DWORD *)(v24 - 4) = v31 + 1;
          if ( v27 == v78 + 8LL * v25 )
            break;
          v20 = v80;
        }
        if ( v25 < v77 )
        {
          while ( 1 )
          {
LABEL_35:
            v35 = *(_QWORD *)(v78 + 8 * v26 + 80) & 0xFFFFFFFFFFFFFFF8LL;
            if ( *(_QWORD *)(v78 + 8 * v26 + 80) > 7u )
              ++*(_DWORD *)(v35 + 8);
            v36 = *(_DWORD *)(v24 - 4);
            if ( v36 == *(_DWORD *)(v24 - 8) )
            {
              v37 = (3 * v36 + 1) >> 1;
              v38 = 8 * v37 + 8;
              if ( 8 * v36 + 8 >= (unsigned int)v38 || v36 >= v37 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_3FCFD0(&v93, "Overflow encountered when expanding vector");
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, &v93);
                sub_233E40((__int64)&v93);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v39 = (unsigned int *)sub_186B300((void *)(v24 - 8), v38);
              *v39 = v37;
              v36 = v39[1];
              v24 = (__int64)(v39 + 2);
            }
            ++v25;
            *(_QWORD *)(v24 + 8LL * v36) = v35;
            *(_DWORD *)(v24 - 4) = v36 + 1;
            if ( v25 >= v77 )
              break;
            v26 = v25;
          }
        }
        v40 = *(_QWORD *)(a1 + 152);
        goto LABEL_42;
      }
    }
LABEL_88:
    *(_QWORD *)v99 = &off_1C4CA80;
    sub_267D20(v99);
    sub_41E3C0(v89, v13, v67);
    sub_3FCFA0(v88);
    sub_41E3C0(&v83, v13, v68);
    sub_3FCDA0(v82);
    sub_3FCDF0(v79, v74);
    sub_2334C0(v85);
LABEL_7:
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
  }
  return 1;
}

