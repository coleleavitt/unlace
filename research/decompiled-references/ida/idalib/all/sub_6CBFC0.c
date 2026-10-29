unsigned __int64 __fastcall sub_6CBFC0(__int64 **a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 *v5; // rbp
  __int64 *v6; // r13
  _QWORD *v7; // r14
  _QWORD *v8; // r14
  char *v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rbp
  char *v12; // rbx
  void *v13; // rdi
  void *v14; // rdi
  __int64 v16; // rbp
  unsigned __int64 v17; // r13
  _BYTE *v18; // rsi
  __int64 v19; // r13
  _BYTE *v20; // rdi
  char *v21; // rbp
  char *v22; // rax
  unsigned __int64 v23; // rdx
  size_t v24; // r8
  __int64 v25; // r15
  size_t v26; // r10
  _BYTE *v27; // rsi
  const char *v28; // rsi
  __int64 *v29; // r15
  __int64 *v30; // rax
  const char *v31; // rsi
  void *v32; // rdi
  __int64 *v33; // rax
  __int64 **v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rdx
  unsigned __int64 v44; // r15
  __int64 *v45; // rax
  const char *v46; // rsi
  __int64 v47; // [rsp+8h] [rbp-130h]
  _QWORD *v48; // [rsp+18h] [rbp-120h]
  _QWORD *v49; // [rsp+18h] [rbp-120h]
  unsigned __int64 v50; // [rsp+18h] [rbp-120h]
  size_t v51; // [rsp+20h] [rbp-118h]
  char tinfo_details; // [rsp+2Eh] [rbp-10Ah]
  char v53; // [rsp+2Fh] [rbp-109h]
  size_t v54; // [rsp+38h] [rbp-100h]
  __int64 v55; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int64 v56; // [rsp+48h] [rbp-F0h] BYREF
  unsigned __int64 v57; // [rsp+50h] [rbp-E8h] BYREF
  unsigned __int64 v58; // [rsp+58h] [rbp-E0h] BYREF
  void *v59; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v60; // [rsp+68h] [rbp-D0h]
  void *v61; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v62; // [rsp+88h] [rbp-B0h]
  void *ptr; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v64; // [rsp+A8h] [rbp-90h]
  void *v65; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v66; // [rsp+C8h] [rbp-70h]
  __int128 v67; // [rsp+D8h] [rbp-60h]
  __int64 v68; // [rsp+E8h] [rbp-50h]
  int v69; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v70; // [rsp+F8h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  if ( !a1[7] )
  {
    if ( !under_debugger )
      interr(2920);
    BUG();
  }
  v3 = (__int64)*a1;
  v55 = 0;
  v65 = nullptr;
  v68 = 0;
  v69 = 1;
  v59 = nullptr;
  v66 = 0;
  v67 = 0;
  v60 = 0;
  if ( (unsigned int)sub_6BA720(v3, &v55, a2, 1) )
  {
    tinfo_details = get_tinfo_details(v55, 141, &v65);
    if ( tinfo_details )
    {
      if ( sub_5301C0(*(__int64 **)(**a1 + 1872), &v59, *a1[7]) > 0 )
      {
        v16 = v60;
        v17 = 2;
        if ( (_QWORD)v60 )
        {
          v17 = v60 + 1;
          v16 = v60 - 1;
        }
        v18 = v59;
        if ( *((_QWORD *)&v60 + 1) < v17 )
        {
          v59 = (void *)qvector_reserve(&v59, v59, v17, 1);
          v18 = v59;
        }
        *(_QWORD *)&v60 = v17;
        v18[v16] = 46;
        *((_BYTE *)v59 + v16 + 1) = 0;
        v47 = ((_QWORD)v60 == 0) + (_QWORD)v60 - 1LL;
        if ( (_QWORD)v66 )
        {
          v53 = 0;
          v19 = 0;
          while ( 1 )
          {
            v20 = v59;
            v21 = (char *)v65 + 144 * v19;
            v22 = (char *)v59;
            if ( v47 )
            {
              v43 = v60;
              v44 = v47 + 1;
              if ( (unsigned __int64)v60 < v47 + 1 )
              {
                if ( *((_QWORD *)&v60 + 1) < v44 )
                {
                  v22 = (char *)qvector_reserve(&v59, v59, v47 + 1, 1);
                  v59 = v22;
                  v43 = v60;
                }
                memset(&v22[v43], 0, v44 - v43);
                *(_QWORD *)&v60 = v47 + 1;
                v20 = v59;
              }
              else if ( v44 != (_QWORD)v60 )
              {
                *(_QWORD *)&v60 = v47 + 1;
              }
              v20[v47] = 0;
            }
            else if ( v59 )
            {
              *(_QWORD *)&v60 = 0;
              qfree(v59);
              v59 = nullptr;
              *((_QWORD *)&v60 + 1) = 0;
            }
            v23 = *((_QWORD *)v21 + 3);
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v23 != 1 )
              {
                v25 = v60;
                v26 = v23 - 1;
                if ( (_QWORD)v60 )
                {
                  v25 = v60 - 1;
                  v26 = v24 + v60 - 1;
                  v23 += v60 - 1;
                }
                v27 = v59;
                if ( *((_QWORD *)&v60 + 1) < v23 )
                {
                  v54 = v26;
                  v51 = v24;
                  v50 = v23;
                  v59 = (void *)qvector_reserve(&v59, v59, v23, 1);
                  v26 = v54;
                  v27 = v59;
                  v24 = v51;
                  v23 = v50;
                }
                *(_QWORD *)&v60 = v23;
                v27[v26] = 0;
                memcpy((char *)v59 + v25, *((const void **)v21 + 2), v24);
              }
            }
            v28 = haystack;
            if ( (_QWORD)v60 )
              v28 = (const char *)v59;
            v29 = (__int64 *)sub_6B9860(*a1, v28, 0, 0);
            if ( v29 == (__int64 *)-1LL )
              goto LABEL_65;
            v30 = *a1;
            ptr = nullptr;
            v64 = 0;
            v48 = *(_QWORD **)(*v30 + 1872);
            v56 = sub_3BDD60(*(_QWORD **)(*v48 + 1672LL), (__int64)v29);
            if ( sub_7BEA80(&v56, *v48, &ptr, 1, 83) > 0 )
              break;
            if ( ptr )
            {
              *(_QWORD *)&v64 = 0;
              qfree(ptr);
            }
            v45 = *a1;
            ptr = nullptr;
            v64 = 0;
            v49 = *(_QWORD **)(*v45 + 1872);
            v61 = (void *)sub_3BDD60(*(_QWORD **)(*v49 + 1672LL), (__int64)v29);
            if ( sub_7BEA80(&v61, *v49, &ptr, 0, 83) <= 0 )
            {
              if ( ptr )
              {
                *(_QWORD *)&v64 = 0;
                qfree(ptr);
              }
              goto LABEL_49;
            }
            v46 = haystack;
            if ( (_QWORD)v64 )
              v46 = (const char *)ptr;
            sub_537280((__int64)v21, v46, 0);
            v32 = ptr;
            if ( ptr )
              goto LABEL_47;
LABEL_48:
            v53 = tinfo_details;
LABEL_49:
            sub_52EFD0(*(__int64 **)(**a1 + 1872), (__int64)v29, &byte_22F0C30, 2);
            sub_52EFD0(*(__int64 **)(**a1 + 1872), (__int64)v29, &byte_22F0C30, 3);
            v33 = a1[3];
            if ( !v33 )
              goto LABEL_56;
            v34 = a1 + 2;
            do
            {
              while ( 1 )
              {
                v35 = v33[2];
                v36 = v33[3];
                if ( v33[4] < (unsigned __int64)v29 )
                  break;
                v34 = (__int64 **)v33;
                v33 = (__int64 *)v33[2];
                if ( !v35 )
                  goto LABEL_54;
              }
              v33 = (__int64 *)v33[3];
            }
            while ( v36 );
LABEL_54:
            if ( v34 != a1 + 2 && v29 >= v34[4] )
            {
              v41 = (unsigned __int64)v34[5];
            }
            else
            {
LABEL_56:
              v37 = a1[7];
              v38 = *((unsigned int *)v37 + 2);
              if ( !(_DWORD)v38 )
                goto LABEL_64;
              v39 = v37[2];
              v40 = 0;
              while ( v29 != *(__int64 **)v39 )
              {
                ++v40;
                v39 += 32;
                if ( v38 == v40 )
                  goto LABEL_64;
              }
              if ( !v39 )
                goto LABEL_64;
              v41 = *(unsigned int *)(v39 + 24);
            }
            if ( v41 )
              v53 |= sub_6BE720(*a1, (__int64)v21, v41, (unsigned __int64)v29, nullptr);
LABEL_64:
            clr_abits(v29, -1040187392);
LABEL_65:
            if ( ++v19 >= (unsigned __int64)v66 )
            {
              if ( v53 )
              {
                v42 = 13;
                if ( HIBYTE(v69) )
                  v42 = 29;
                if ( (unsigned __int8)create_tinfo(&v55, v42, 13, &v65) )
                  save_tinfo(&v55, (*a1)[1], a2, 0, 5);
              }
              goto LABEL_3;
            }
          }
          v31 = haystack;
          if ( (_QWORD)v64 )
            v31 = (const char *)ptr;
          sub_537280((__int64)v21, v31, 1);
          v32 = ptr;
          if ( !ptr )
            goto LABEL_48;
LABEL_47:
          *(_QWORD *)&v64 = 0;
          qfree(v32);
          goto LABEL_48;
        }
      }
    }
  }
LABEL_3:
  v5 = *a1;
  v61 = nullptr;
  ptr = nullptr;
  v6 = a1[7];
  v62 = 0;
  v64 = 0;
  v7 = *(_QWORD **)(*v5 + 1872);
  v57 = sub_3BDD60(*(_QWORD **)(*v7 + 1672LL), *v6);
  sub_7BEA80(&v57, *v7, &v61, 1, 83);
  v8 = *(_QWORD **)(*v5 + 1872);
  v58 = sub_3BDD60(*(_QWORD **)(*v8 + 1672LL), *v6);
  sub_7BEA80(&v58, *v8, &ptr, 0, 83);
  sub_52EFD0(*(__int64 **)(*v5 + 1872), *v6, &byte_22F0C30, 2);
  sub_52EFD0(*(__int64 **)(*v5 + 1872), *v6, &byte_22F0C30, 3);
  if ( (unsigned __int64)v62 > 1 )
  {
    sub_6BA270((__int64)v5, a2, (__int64)v61, 1u);
  }
  else if ( (unsigned __int64)v64 > 1 )
  {
    sub_6BA270((__int64)v5, a2, (__int64)ptr, 0);
  }
  if ( ptr )
  {
    *(_QWORD *)&v64 = 0;
    qfree(ptr);
  }
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v61);
  }
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59);
  }
  v9 = (char *)v65;
  if ( v65 )
  {
    v10 = v66;
    if ( (_QWORD)v66 )
    {
      v11 = 0;
      do
      {
        v12 = &v9[144 * v11];
        clear_tinfo_t(v12 + 64);
        v13 = *((void **)v12 + 5);
        if ( v13 )
        {
          *((_QWORD *)v12 + 6) = 0;
          qfree(v13);
        }
        v14 = *((void **)v12 + 2);
        if ( v14 )
        {
          *((_QWORD *)v12 + 3) = 0;
          qfree(v14);
        }
        ++v11;
        v9 = (char *)v65;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v66 = 0;
    qfree(v9);
  }
  clear_tinfo_t(&v55);
  return v70 - __readfsqword(0x28u);
}
