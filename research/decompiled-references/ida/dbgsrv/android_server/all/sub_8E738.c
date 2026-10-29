/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E738
// Address: 0x000000000008E738

//----- (000000000008E738) ----------------------------------------------------
__int64 __fastcall sub_8E738(
        __int64 (__fastcall ***a1)(_QWORD, pthread_mutex_t *, __int64, char **, __int64 *, void **),
        __int64 a2,
        __int64 *a3,
        unsigned __int64 *a4,
        const void *a5,
        int a6,
        char a7)
{
  size_t v14; // x0
  struct __pthread_internal_list *prev; // x1
  struct __pthread_internal_list *v16; // x27
  size_t v17; // x26
  const char *v18; // x1
  const char *v19; // x1
  char *v20; // x0
  __int64 v21; // x9
  bool v22; // zf
  char *v23; // x23
  _QWORD *v24; // x0
  char *v25; // x1
  pthread_mutex_t *v26; // x0
  __int64 (__fastcall **v27)(); // x8
  int v28; // w19
  void *align; // x0
  struct __pthread_internal_list *v30; // x0
  struct __pthread_internal_list *v31; // x0
  void *v32; // x0
  __int128 v33; // q0
  __int128 v34; // q2
  __int128 v35; // q3
  __int128 v36; // q4
  __int128 v37; // q5
  int v38; // w25
  __int64 v39; // x27
  __int64 v40; // x26
  __int64 v41; // x19
  __int64 v42; // x20
  const char *v43; // x0
  const char *v44; // x0
  __int64 v45; // x24
  __int64 v46; // x29
  __int64 v47; // x25
  const char *v48; // x0
  void *v49; // x0
  unsigned __int64 v50; // x21
  __int64 v51; // x1
  __int64 v52; // x8
  void *v53; // x0
  __int64 v54; // x8
  unsigned __int64 *v56; // [xsp+8h] [xbp-1618h]
  __int64 *v57; // [xsp+10h] [xbp-1610h]
  void *v58; // [xsp+18h] [xbp-1608h] BYREF
  __int64 v59; // [xsp+20h] [xbp-1600h]
  unsigned __int64 v60; // [xsp+28h] [xbp-15F8h]
  char *v61; // [xsp+30h] [xbp-15F0h] BYREF
  __int128 v62; // [xsp+38h] [xbp-15E8h]
  __int128 v63; // [xsp+48h] [xbp-15D8h]
  __int128 v64; // [xsp+58h] [xbp-15C8h]
  __int128 v65; // [xsp+68h] [xbp-15B8h]
  __int128 v66; // [xsp+78h] [xbp-15A8h]
  __int128 v67; // [xsp+88h] [xbp-1598h]
  __int64 v68; // [xsp+98h] [xbp-1588h]
  __int64 v69; // [xsp+A0h] [xbp-1580h]
  int v70; // [xsp+DCh] [xbp-1544h]
  int v71; // [xsp+E0h] [xbp-1540h]
  pthread_mutex_t ptr; // [xsp+148h] [xbp-14D8h] BYREF
  __int64 v73; // [xsp+170h] [xbp-14B0h]
  pthread_mutex_t v74; // [xsp+178h] [xbp-14A8h] BYREF
  unsigned __int64 v75; // [xsp+1A0h] [xbp-1480h]
  int v76; // [xsp+1A8h] [xbp-1478h]
  __int16 v77; // [xsp+1ACh] [xbp-1474h]
  int v78[1282]; // [xsp+1B0h] [xbp-1470h] BYREF
  __int64 v79; // [xsp+15B8h] [xbp-68h]

  v79 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v76 = -1;
  v75 = 0;
  memset(&v74, 0, sizeof(v74));
  v77 = 0;
  memset(v78, 0, sizeof(v78));
  if ( a5 && (v14 = strlen((const char *)a5)) != 0 )
  {
    prev = v74.__list.__prev;
    v16 = (struct __pthread_internal_list *)(v14 + 1);
    v17 = v14;
    if ( v75 < v14 + 1 )
    {
      prev = (struct __pthread_internal_list *)qvector_reserve(
                                                 (pthread_mutex_t *)(&v74.__align + 3),
                                                 v74.__list.__prev,
                                                 (unsigned __int64)v16,
                                                 1u);
      v74.__list.__prev = prev;
    }
    v74.__list.__next = v16;
    memmove(prev, a5, v17);
    *((_BYTE *)&v74.__list.__prev->__prev + v17) = 0;
  }
  else
  {
    v74.__list.__next = nullptr;
  }
  v76 = sub_8BCC4((const char *)a5);
  LOBYTE(v77) = a7 & 1;
  if ( v76 != 25 )
    v78[0] = a6;
  if ( (sub_8C5A8((__int64)&v74.__list) & 1) == 0 )
  {
    sub_8CA78((_BYTE *)(a2 + 192), "Couldn't retrieve file information.\n");
    goto LABEL_71;
  }
  if ( *(_BYTE *)(a2 + 184) )
  {
    if ( v74.__list.__next )
      v18 = (const char *)v74.__list.__prev;
    else
      v18 = &byte_F154B;
    sub_39FA0((__int64)"dwarf_file_action_t::with_dwarf_file() binary file found at %s\n", v18);
  }
  v73 = 0;
  memset(&ptr, 0, sizeof(ptr));
  if ( !sub_8C288((__int64)&qword_166BD0, &ptr, (__int64)&v74.__list, (__int64)&ptr.__list) )
  {
    v28 = 0;
    align = (void *)ptr.__align;
    if ( !ptr.__align )
      goto LABEL_29;
    goto LABEL_69;
  }
  if ( *(_BYTE *)(a2 + 184) )
  {
    if ( *(&ptr.__align + 1) )
      v19 = (const char *)ptr.__align;
    else
      v19 = &byte_F154B;
    sub_39FA0((__int64)"dwarf_file_action_t::with_dwarf_file() DWARF file found at %s\n", v19);
  }
  sub_9720C((__int64)&v61);
  v20 = (char *)operator new(0x28u);
  v21 = ptr.__align;
  v22 = *(&ptr.__align + 1) == 0;
  v23 = v20;
  *((_DWORD *)v20 + 2) = 1;
  *(_QWORD *)v20 = off_15DEE8;
  v24 = v20 + 16;
  if ( v22 )
    v25 = &byte_F154B;
  else
    v25 = (char *)v21;
  v26 = (pthread_mutex_t *)sub_39140(v24, v25);
  v61 = v23;
  if ( v76 == 18 )
  {
    v27 = off_15DCA8;
  }
  else
  {
    if ( v76 != 11 )
    {
      if ( !under_debugger )
        v26 = interr(30214);
      __break(1u);
      sub_39134(v26);
    }
    v27 = off_15DD68;
  }
  v33 = *((_OWORD *)v27 + 4);
  v34 = *(_OWORD *)v27;
  v35 = *((_OWORD *)v27 + 1);
  v36 = *((_OWORD *)v27 + 2);
  v37 = *((_OWORD *)v27 + 3);
  v67 = *((_OWORD *)v27 + 5);
  v63 = v35;
  v62 = v34;
  v66 = v33;
  v65 = v37;
  v64 = v36;
  if ( (((__int64 (__fastcall *)(char **, __int64 *))v67)(&v61, &v74.__align + 3) & 1) == 0 )
  {
    sub_8CA78((_BYTE *)(a2 + 192), "Couldn't initialize DWARF loading.\n");
    goto LABEL_68;
  }
  v38 = v69;
  v56 = a4;
  v57 = a3;
  if ( (int)v69 <= 0 )
  {
    v58 = nullptr;
    v59 = 0;
    v60 = 0;
  }
  else
  {
    v39 = 0;
    v40 = (unsigned int)v69;
    v41 = v68 + 16;
    do
    {
      v42 = *(_QWORD *)(v41 + 8);
      if ( v42 )
        v43 = *(const char **)v41;
      else
        v43 = &byte_F154B;
      if ( !strcmp(v43, ".debug_info") )
      {
        v70 = v39;
      }
      else
      {
        if ( v42 )
          v44 = *(const char **)v41;
        else
          v44 = &byte_F154B;
        if ( !strcmp(v44, ".debug_types") )
          v71 = v39;
      }
      ++v39;
      v41 += 120;
    }
    while ( v40 != v39 );
    v58 = nullptr;
    v59 = 0;
    v60 = 0;
    if ( v38 >= 1 )
    {
      v45 = 0;
      v46 = 0;
      v47 = 0;
      do
      {
        if ( *(_QWORD *)(v68 + v45 + 24) )
          v48 = *(const char **)(v68 + v45 + 16);
        else
          v48 = &byte_F154B;
        if ( !strncmp(v48, ".debug_", 7u) )
        {
          if ( v60 >= v46 + 1 )
          {
            v49 = v58;
          }
          else
          {
            v49 = qvector_reserve((pthread_mutex_t *)&v58, v58, v46 + 1, 4u);
            v46 = v59;
            v58 = v49;
          }
          *((_DWORD *)v49 + v46) = v47;
          v46 = ++v59;
        }
        ++v47;
        v45 += 120;
      }
      while ( v47 < (int)v40 );
    }
  }
  LODWORD(a2) = (**a1)(a1, &v74, a2, &v61, (__int64 *)&v74.__list, &v58);
  a3 = v57;
  a4 = v56;
  if ( v58 )
  {
    v59 = 0;
    qfree(v58);
    v58 = nullptr;
    v60 = 0;
  }
  if ( !(_DWORD)a2 )
  {
LABEL_68:
    sub_97308((__int64)&v61);
    LODWORD(a2) = 0;
    v28 = 0;
    align = (void *)ptr.__align;
    if ( !ptr.__align )
      goto LABEL_29;
    goto LABEL_69;
  }
  sub_97308((__int64)&v61);
  v28 = 1;
  align = (void *)ptr.__align;
  if ( !ptr.__align )
  {
LABEL_29:
    v30 = ptr.__list.__prev;
    if ( !ptr.__list.__prev )
      goto LABEL_30;
    goto LABEL_70;
  }
LABEL_69:
  *(&ptr.__align + 1) = 0;
  qfree(align);
  ptr.__align = 0;
  *(&ptr.__align + 2) = 0;
  v30 = ptr.__list.__prev;
  if ( !ptr.__list.__prev )
  {
LABEL_30:
    if ( v28 )
      goto LABEL_31;
    goto LABEL_71;
  }
LABEL_70:
  ptr.__list.__next = nullptr;
  qfree(v30);
  ptr.__list.__prev = nullptr;
  v73 = 0;
  if ( v28 )
  {
LABEL_31:
    v31 = v74.__list.__prev;
    if ( !v74.__list.__prev )
      goto LABEL_32;
    goto LABEL_82;
  }
LABEL_71:
  v50 = *(&v74.__align + 1);
  if ( !*(&v74.__align + 1) )
  {
    v51 = v74.__align;
    if ( *(&v74.__align + 2) )
    {
      v52 = 0;
    }
    else
    {
      v51 = (__int64)qvector_reserve(&v74, (void *)v74.__align, 1u, 1u);
      v52 = *(&v74.__align + 1);
      v74.__align = v51;
    }
    *(_BYTE *)(v51 + v52) = 0;
    v50 = ++*(&v74.__align + 1);
  }
  *a4 = v50;
  if ( *(&v74.__align + 2) > v50 )
  {
    if ( v50 )
    {
      if ( v74.__align )
      {
        v53 = qrealloc((void *)v74.__align, v50);
        if ( v53 )
        {
          v74.__align = (__int64)v53;
          *(&v74.__align + 2) = v50;
        }
      }
    }
  }
  v54 = v74.__align;
  LODWORD(a2) = 0;
  memset(&v74, 0, 24);
  *a3 = v54;
  v31 = v74.__list.__prev;
  if ( !v74.__list.__prev )
  {
LABEL_32:
    v32 = (void *)v74.__align;
    if ( !v74.__align )
      return (unsigned int)a2;
    goto LABEL_83;
  }
LABEL_82:
  v74.__list.__next = nullptr;
  qfree(v31);
  v74.__list.__prev = nullptr;
  v75 = 0;
  v32 = (void *)v74.__align;
  if ( v74.__align )
  {
LABEL_83:
    *(&v74.__align + 1) = 0;
    qfree(v32);
    v74.__align = 0;
    *(&v74.__align + 2) = 0;
  }
  return (unsigned int)a2;
}
// F154B: using guessed type char byte_F154B;
// 15DCA8: using guessed type __int64 (__fastcall *off_15DCA8[8])();
// 15DD68: using guessed type __int64 (__fastcall *off_15DD68[8])();
// 15DEE8: using guessed type __int64 (__fastcall *off_15DEE8[4])();
// 166BD0: using guessed type __int64 qword_166BD0;
// 168DF0: using guessed type char under_debugger;
