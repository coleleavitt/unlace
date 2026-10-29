__int64 __fastcall sub_3C6030(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        unsigned int *a3,
        int a4,
        unsigned int *a5,
        char a6)
{
  unsigned int tinfo_tid; // ebx
  __int64 member; // r15
  _QWORD *v9; // r12
  unsigned int v10; // ebx
  unsigned int v11; // eax
  char *v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rbp
  char *v15; // r12
  void *v16; // rdi
  void *v17; // rdi
  char *v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r12
  char *v21; // rbp
  void *v22; // rdi
  void *v23; // rdi
  __int64 v25; // rdx
  char *v26; // rdi
  const char *v27; // rax
  size_t v28; // rax
  const char *v29; // r8
  size_t v30; // r15
  void *v31; // rdi
  void *v32; // rdx
  int v34; // [rsp+Ch] [rbp-15Ch]
  unsigned int *v35; // [rsp+10h] [rbp-158h]
  const char *src; // [rsp+20h] [rbp-148h]
  void *srca; // [rsp+20h] [rbp-148h]
  const char *v39; // [rsp+28h] [rbp-140h]
  __int64 v40; // [rsp+38h] [rbp-130h] BYREF
  void *ptr; // [rsp+40h] [rbp-128h] BYREF
  __int64 v42; // [rsp+48h] [rbp-120h]
  void *v43; // [rsp+60h] [rbp-108h] BYREF
  __int128 v44; // [rsp+68h] [rbp-100h]
  __int128 v45; // [rsp+78h] [rbp-F0h]
  __int64 v46; // [rsp+88h] [rbp-E0h]
  int v47; // [rsp+90h] [rbp-D8h]
  __int128 v48; // [rsp+A0h] [rbp-C8h] BYREF
  void *dest; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v50; // [rsp+B8h] [rbp-B0h]
  void *v51; // [rsp+C8h] [rbp-A0h]
  __int128 v52; // [rsp+D0h] [rbp-98h]
  __int128 v53; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v54; // [rsp+100h] [rbp-68h]
  int v55; // [rsp+108h] [rbp-60h]
  __int64 v56; // [rsp+110h] [rbp-58h]
  char v57; // [rsp+118h] [rbp-50h]
  unsigned __int64 v58; // [rsp+128h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( a4 > 0 )
  {
    tinfo_tid = *a3;
    v34 = a4 - 1;
    v35 = a3 + 1;
    while ( 1 )
    {
      if ( !a6 && !*a5 )
        return 0;
      v40 = 0;
      v43 = nullptr;
      v46 = 0;
      v47 = 1;
      v44 = 0;
      v45 = 0;
      if ( !(unsigned __int8)get_type_by_tid(&v40, tinfo_tid) || !(unsigned __int8)get_tinfo_details(v40, 13, &v43) )
      {
        v10 = (**a2)(a2, tinfo_tid, 0, 0, -1);
        goto LABEL_25;
      }
      if ( HIBYTE(v47) )
      {
        member = -1;
        v9 = nullptr;
        if ( v34 <= 0 )
          goto LABEL_9;
        --v34;
        v25 = *v35++;
        sub_699670(&ptr, a1, v25);
        dest = nullptr;
        v57 = 0;
        v26 = (char *)haystack;
        v51 = nullptr;
        v54 = 1;
        v55 = -1;
        v56 = 0;
        v48 = 0;
        v50 = 0;
        v52 = 0;
        v53 = 0;
        if ( v42 )
          v26 = (char *)ptr;
        v27 = (const char *)sub_69C980(v26);
        if ( v27 && (src = v27, v28 = strlen(v27), v29 = src, (v30 = v28) != 0) )
        {
          v31 = dest;
          v32 = (void *)(v28 + 1);
          if ( *((_QWORD *)&v50 + 1) < v28 + 1 )
          {
            v39 = src;
            srca = (void *)(v28 + 1);
            dest = (void *)qvector_reserve(&dest, dest, v32, 1);
            v29 = v39;
            v31 = dest;
            v32 = srca;
          }
          *(_QWORD *)&v50 = v32;
          memmove(v31, v29, v30);
          *((_BYTE *)dest + v30) = 0;
        }
        else
        {
          *(_QWORD *)&v50 = 0;
        }
        member = udt_type_data_t__find_member((int)&v43);
        clear_tinfo_t(&v53);
        if ( v51 )
        {
          *(_QWORD *)&v52 = 0;
          qfree(v51);
        }
        if ( dest )
        {
          *(_QWORD *)&v50 = 0;
          qfree(dest);
        }
        if ( ptr )
        {
          v42 = 0;
          qfree(ptr);
        }
      }
      else
      {
        member = udt_type_data_t__get_best_fit_member(&v43, *a5);
      }
      v9 = nullptr;
      if ( member >= 0 )
        v9 = (char *)v43 + 128 * member;
LABEL_9:
      v10 = (**a2)(a2, tinfo_tid, &v40, &v43, member);
      if ( v10 || !v9 )
        goto LABEL_25;
      v11 = *a5;
      if ( !HIBYTE(v47) )
        v11 -= *v9 >> 3;
      *a5 = v11;
      *(_QWORD *)&v48 = 0;
      *(_QWORD *)&v48 = get_tinfo_property(v9[8], 289);
      if ( (get_tinfo_property(v48, 2) & 0x2F) != 0xD )
      {
        v10 = 0;
        clear_tinfo_t(&v48);
LABEL_25:
        v18 = (char *)v43;
        if ( v43 )
        {
          v19 = v44;
          if ( (_QWORD)v44 )
          {
            v20 = 0;
            do
            {
              v21 = &v18[128 * v20];
              clear_tinfo_t(v21 + 64);
              v22 = *((void **)v21 + 5);
              if ( v22 )
              {
                *((_QWORD *)v21 + 6) = 0;
                qfree(v22);
              }
              v23 = *((void **)v21 + 2);
              if ( v23 )
              {
                *((_QWORD *)v21 + 3) = 0;
                qfree(v23);
              }
              ++v20;
              v18 = (char *)v43;
            }
            while ( v19 != v20 );
          }
          *(_QWORD *)&v44 = 0;
          qfree(v18);
        }
        clear_tinfo_t(&v40);
        return v10;
      }
      tinfo_tid = get_tinfo_tid(&v48, 0);
      clear_tinfo_t(&v48);
      v12 = (char *)v43;
      if ( v43 )
      {
        v13 = v44;
        if ( (_QWORD)v44 )
        {
          v14 = 0;
          do
          {
            v15 = &v12[128 * v14];
            clear_tinfo_t(v15 + 64);
            v16 = *((void **)v15 + 5);
            if ( v16 )
            {
              *((_QWORD *)v15 + 6) = 0;
              qfree(v16);
            }
            v17 = *((void **)v15 + 2);
            if ( v17 )
            {
              *((_QWORD *)v15 + 3) = 0;
              qfree(v17);
            }
            ++v14;
            v12 = (char *)v43;
          }
          while ( v13 != v14 );
        }
        *(_QWORD *)&v44 = 0;
        qfree(v12);
      }
      clear_tinfo_t(&v40);
    }
  }
  return 0;
}

