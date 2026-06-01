unsigned __int64 __fastcall sub_6AB040(__int64 *a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 *v5; // r12
  int *v6; // r13
  __int64 *v7; // r14
  int v8; // eax
  __int64 v9; // rsi
  __int64 *v10; // r14
  int v11; // eax
  __int64 v12; // rsi
  char *v13; // rdi
  __int64 v14; // r13
  __int64 v15; // r12
  char *v16; // rbx
  void *v17; // rdi
  void *v18; // rdi
  __int64 v20; // r12
  unsigned __int64 v21; // r13
  _BYTE *v22; // rsi
  __int64 v23; // r13
  _BYTE *v24; // rdi
  char *v25; // r12
  char *v26; // rax
  unsigned __int64 v27; // rdx
  size_t v28; // r8
  __int64 v29; // r15
  size_t v30; // r10
  _BYTE *v31; // rsi
  const char *v32; // rsi
  unsigned int v33; // r15d
  __int64 v34; // rax
  const char *v35; // rsi
  void *v36; // rdi
  __int64 v37; // rax
  __int64 *v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  _DWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdx
  unsigned __int64 v48; // r15
  __int64 v49; // rax
  const char *v50; // rsi
  __int64 v51; // [rsp+8h] [rbp-130h]
  _QWORD *v52; // [rsp+18h] [rbp-120h]
  _QWORD *v53; // [rsp+18h] [rbp-120h]
  unsigned __int64 v54; // [rsp+18h] [rbp-120h]
  size_t v55; // [rsp+20h] [rbp-118h]
  char tinfo_details; // [rsp+2Eh] [rbp-10Ah]
  char v57; // [rsp+2Fh] [rbp-109h]
  size_t v58; // [rsp+38h] [rbp-100h]
  int v59; // [rsp+4Ch] [rbp-ECh] BYREF
  int v60; // [rsp+50h] [rbp-E8h] BYREF
  int v61; // [rsp+54h] [rbp-E4h] BYREF
  __int64 v62; // [rsp+58h] [rbp-E0h] BYREF
  void *v63; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v64; // [rsp+68h] [rbp-D0h]
  void *v65; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v66; // [rsp+88h] [rbp-B0h]
  void *ptr; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v68; // [rsp+A8h] [rbp-90h]
  void *v69; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v70; // [rsp+C8h] [rbp-70h]
  __int128 v71; // [rsp+D8h] [rbp-60h]
  __int64 v72; // [rsp+E8h] [rbp-50h]
  int v73; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v74; // [rsp+F8h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  if ( !a1[7] )
  {
    if ( !under_debugger )
      interr(2920);
    BUG();
  }
  v3 = *a1;
  v62 = 0;
  v69 = nullptr;
  v72 = 0;
  v73 = 1;
  v63 = nullptr;
  v70 = 0;
  v71 = 0;
  v64 = 0;
  if ( (unsigned int)sub_699DC0(v3, &v62, a2, 1) )
  {
    tinfo_details = get_tinfo_details(v62, 141, &v69);
    if ( tinfo_details )
    {
      if ( sub_517DD0(*(__int64 **)(*(_QWORD *)*a1 + 1680LL), &v63, *(_DWORD *)a1[7]) > 0 )
      {
        v20 = v64;
        v21 = 2;
        if ( (_QWORD)v64 )
        {
          v21 = v64 + 1;
          v20 = v64 - 1;
        }
        v22 = v63;
        if ( *((_QWORD *)&v64 + 1) < v21 )
        {
          v63 = (void *)qvector_reserve(&v63, v63, v21, 1);
          v22 = v63;
        }
        *(_QWORD *)&v64 = v21;
        v22[v20] = 46;
        *((_BYTE *)v63 + v20 + 1) = 0;
        v51 = ((_QWORD)v64 == 0) + (_QWORD)v64 - 1LL;
        if ( (_QWORD)v70 )
        {
          v57 = 0;
          v23 = 0;
          while ( 1 )
          {
            v24 = v63;
            v25 = (char *)v69 + 128 * v23;
            v26 = (char *)v63;
            if ( v51 )
            {
              v47 = v64;
              v48 = v51 + 1;
              if ( (unsigned __int64)v64 < v51 + 1 )
              {
                if ( *((_QWORD *)&v64 + 1) < v48 )
                {
                  v26 = (char *)qvector_reserve(&v63, v63, v51 + 1, 1);
                  v63 = v26;
                  v47 = v64;
                }
                memset(&v26[v47], 0, v48 - v47);
                *(_QWORD *)&v64 = v51 + 1;
                v24 = v63;
              }
              else if ( v48 != (_QWORD)v64 )
              {
                *(_QWORD *)&v64 = v51 + 1;
              }
              v24[v51] = 0;
            }
            else if ( v63 )
            {
              *(_QWORD *)&v64 = 0;
              qfree(v63);
              v63 = nullptr;
              *((_QWORD *)&v64 + 1) = 0;
            }
            v27 = *((_QWORD *)v25 + 3);
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v27 != 1 )
              {
                v29 = v64;
                v30 = v27 - 1;
                if ( (_QWORD)v64 )
                {
                  v29 = v64 - 1;
                  v30 = v28 + v64 - 1;
                  v27 += v64 - 1;
                }
                v31 = v63;
                if ( *((_QWORD *)&v64 + 1) < v27 )
                {
                  v58 = v30;
                  v55 = v28;
                  v54 = v27;
                  v63 = (void *)qvector_reserve(&v63, v63, v27, 1);
                  v30 = v58;
                  v31 = v63;
                  v28 = v55;
                  v27 = v54;
                }
                *(_QWORD *)&v64 = v27;
                v31[v30] = 0;
                memcpy((char *)v63 + v29, *((const void **)v25 + 2), v28);
              }
            }
            v32 = haystack;
            if ( (_QWORD)v64 )
              v32 = (const char *)v63;
            v33 = sub_698F20((_QWORD *)*a1, v32, 0, 0);
            if ( v33 == -1 )
              goto LABEL_65;
            v34 = *a1;
            ptr = nullptr;
            v68 = 0;
            v52 = *(_QWORD **)(*(_QWORD *)v34 + 1680LL);
            v59 = sub_3B90A0(*(_QWORD **)(*v52 + 1480LL), v33);
            if ( sub_79B6F0(&v59, *v52, &ptr, 1, 83) > 0 )
              break;
            if ( ptr )
            {
              *(_QWORD *)&v68 = 0;
              qfree(ptr);
            }
            v49 = *a1;
            ptr = nullptr;
            v68 = 0;
            v53 = *(_QWORD **)(*(_QWORD *)v49 + 1680LL);
            LODWORD(v65) = sub_3B90A0(*(_QWORD **)(*v53 + 1480LL), v33);
            if ( sub_79B6F0(&v65, *v53, &ptr, 0, 83) <= 0 )
            {
              if ( ptr )
              {
                *(_QWORD *)&v68 = 0;
                qfree(ptr);
              }
              goto LABEL_49;
            }
            v50 = haystack;
            if ( (_QWORD)v68 )
              v50 = (const char *)ptr;
            sub_51E760((__int64)v25, v50, 0);
            v36 = ptr;
            if ( ptr )
              goto LABEL_47;
LABEL_48:
            v57 = tinfo_details;
LABEL_49:
            sub_516B80(*(__int64 **)(*(_QWORD *)*a1 + 1680LL), v33, &byte_22CD811, 2);
            sub_516B80(*(__int64 **)(*(_QWORD *)*a1 + 1680LL), v33, &byte_22CD811, 3);
            v37 = a1[3];
            if ( !v37 )
              goto LABEL_56;
            v38 = a1 + 2;
            do
            {
              while ( 1 )
              {
                v39 = *(_QWORD *)(v37 + 16);
                v40 = *(_QWORD *)(v37 + 24);
                if ( *(_DWORD *)(v37 + 32) < v33 )
                  break;
                v38 = (__int64 *)v37;
                v37 = *(_QWORD *)(v37 + 16);
                if ( !v39 )
                  goto LABEL_54;
              }
              v37 = *(_QWORD *)(v37 + 24);
            }
            while ( v40 );
LABEL_54:
            if ( v38 != a1 + 2 && v33 >= *((_DWORD *)v38 + 8) )
            {
              v45 = v38[5];
            }
            else
            {
LABEL_56:
              v41 = a1[7];
              v42 = *(unsigned int *)(v41 + 4);
              if ( !(_DWORD)v42 )
                goto LABEL_64;
              v43 = *(_DWORD **)(v41 + 8);
              v44 = 0;
              while ( v33 != *v43 )
              {
                ++v44;
                v43 += 5;
                if ( v42 == v44 )
                  goto LABEL_64;
              }
              if ( !v43 )
                goto LABEL_64;
              v45 = (unsigned int)v43[3];
            }
            if ( v45 )
              v57 |= sub_69DC80((__int64 *)*a1, (__int64)v25, v45, v33, nullptr);
LABEL_64:
            clr_abits(v33, 3254779904LL);
LABEL_65:
            if ( ++v23 >= (unsigned __int64)v70 )
            {
              if ( v57 )
              {
                v46 = 13;
                if ( HIBYTE(v73) )
                  v46 = 29;
                if ( (unsigned __int8)create_tinfo(&v62, v46, 13, &v69) )
                  save_tinfo(&v62, *(_QWORD *)(*a1 + 8), a2, 0, 5);
              }
              goto LABEL_3;
            }
          }
          v35 = haystack;
          if ( (_QWORD)v68 )
            v35 = (const char *)ptr;
          sub_51E760((__int64)v25, v35, 1);
          v36 = ptr;
          if ( !ptr )
            goto LABEL_48;
LABEL_47:
          *(_QWORD *)&v68 = 0;
          qfree(v36);
          goto LABEL_48;
        }
      }
    }
  }
LABEL_3:
  v5 = (__int64 *)*a1;
  v65 = nullptr;
  ptr = nullptr;
  v6 = (int *)a1[7];
  v66 = 0;
  v68 = 0;
  v7 = *(__int64 **)(*v5 + 1680);
  v8 = sub_3B90A0(*(_QWORD **)(*v7 + 1480), *v6);
  v9 = *v7;
  v60 = v8;
  sub_79B6F0(&v60, v9, &v65, 1, 83);
  v10 = *(__int64 **)(*v5 + 1680);
  v11 = sub_3B90A0(*(_QWORD **)(*v10 + 1480), *v6);
  v12 = *v10;
  v61 = v11;
  sub_79B6F0(&v61, v12, &ptr, 0, 83);
  sub_516B80(*(__int64 **)(*v5 + 1680), *v6, &byte_22CD811, 2);
  sub_516B80(*(__int64 **)(*v5 + 1680), *v6, &byte_22CD811, 3);
  if ( (unsigned __int64)v66 > 1 )
  {
    sub_699910((__int64)v5, a2, (__int64)v65, 1u);
  }
  else if ( (unsigned __int64)v68 > 1 )
  {
    sub_699910((__int64)v5, a2, (__int64)ptr, 0);
  }
  if ( ptr )
  {
    *(_QWORD *)&v68 = 0;
    qfree(ptr);
  }
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v65);
  }
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63);
  }
  v13 = (char *)v69;
  if ( v69 )
  {
    v14 = v70;
    if ( (_QWORD)v70 )
    {
      v15 = 0;
      do
      {
        v16 = &v13[128 * v15];
        clear_tinfo_t(v16 + 64);
        v17 = *((void **)v16 + 5);
        if ( v17 )
        {
          *((_QWORD *)v16 + 6) = 0;
          qfree(v17);
        }
        v18 = *((void **)v16 + 2);
        if ( v18 )
        {
          *((_QWORD *)v16 + 3) = 0;
          qfree(v18);
        }
        ++v15;
        v13 = (char *)v69;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v70 = 0;
    qfree(v13);
  }
  clear_tinfo_t(&v62);
  return v74 - __readfsqword(0x28u);
}

