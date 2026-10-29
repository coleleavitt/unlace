__int64 __fastcall main(int a1, char **a2, char **a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v6; // ebx
  int v7; // r8d
  int v8; // r9d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  const char **v13; // rbx
  const char **v14; // r12
  const char *v15; // rsi
  unsigned int v16; // ebx
  void *v18; // rax
  size_t v19; // r12
  __int16 v20; // r13
  char v21; // al
  void *v22; // r12
  char *v23; // rsi
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  const char *v28; // rcx
  const char *v29; // rsi
  char *v30; // rdx
  int v31; // ecx
  int v32; // r8d
  void **v33; // r9
  size_t v34; // rbx
  size_t v35; // rbx
  size_t v36; // rbx
  size_t v37; // rbp
  size_t v38; // rbx
  size_t v39; // rax
  void *v40; // r15
  size_t v41; // rbx
  _BYTE *v42; // rbx
  char *v43; // rbp
  char *v44; // r15
  unsigned int v45; // edi
  __int64 v46; // r15
  void *v47; // r12
  __int64 v48; // rbp
  __int64 v49; // rbx
  char *v50; // rax
  void *v51; // rdi
  void *v52; // r12
  void **v53; // r9
  const char **v54; // r12
  const char **v55; // r15
  char *v56; // rdi
  unsigned int v57; // eax
  int v58; // edx
  void *v59; // rax
  const char *v60; // r8
  void **v61; // rax
  void *v62; // rax
  void *v63; // rax
  __int64 v64; // rax
  int v65; // r8d
  int v66; // r9d
  const char *v67; // rcx
  const char *v68; // rsi
  const char *v69; // rsi
  int v70[2]; // [rsp+0h] [rbp-678h]
  int v71; // [rsp+8h] [rbp-670h]
  int v72; // [rsp+8h] [rbp-670h]
  void **v73; // [rsp+8h] [rbp-670h]
  int v74; // [rsp+10h] [rbp-668h]
  int v75; // [rsp+18h] [rbp-660h]
  void **v76; // [rsp+18h] [rbp-660h]
  int v77; // [rsp+20h] [rbp-658h]
  int v78; // [rsp+20h] [rbp-658h]
  char *v79; // [rsp+28h] [rbp-650h] BYREF
  void *v80; // [rsp+30h] [rbp-648h] BYREF
  int v81[4]; // [rsp+38h] [rbp-640h]
  void *v82; // [rsp+48h] [rbp-630h]
  void *v83; // [rsp+50h] [rbp-628h] BYREF
  int v84[4]; // [rsp+58h] [rbp-620h]
  __int64 v85; // [rsp+68h] [rbp-610h]
  void *v86; // [rsp+70h] [rbp-608h] BYREF
  void *v87[2]; // [rsp+78h] [rbp-600h]
  int v88; // [rsp+88h] [rbp-5F0h]
  void *v89; // [rsp+90h] [rbp-5E8h] BYREF
  int v90[4]; // [rsp+98h] [rbp-5E0h]
  void *v91; // [rsp+B0h] [rbp-5C8h] BYREF
  __int128 v92; // [rsp+B8h] [rbp-5C0h]
  void *v93; // [rsp+D0h] [rbp-5A8h] BYREF
  void *v94; // [rsp+D8h] [rbp-5A0h] BYREF
  __int128 v95; // [rsp+E0h] [rbp-598h]
  __int16 v96; // [rsp+F0h] [rbp-588h]
  __int64 v97; // [rsp+F8h] [rbp-580h]
  __int128 v98; // [rsp+100h] [rbp-578h]
  __int64 v99; // [rsp+110h] [rbp-568h]
  __int128 v100; // [rsp+118h] [rbp-560h]
  __int64 v101; // [rsp+128h] [rbp-550h] BYREF
  __int128 v102; // [rsp+130h] [rbp-548h]
  __int16 v103; // [rsp+140h] [rbp-538h]
  __int64 v104; // [rsp+148h] [rbp-530h]
  __int128 v105; // [rsp+150h] [rbp-528h]
  __int64 v106; // [rsp+160h] [rbp-518h]
  __int128 v107; // [rsp+168h] [rbp-510h]
  __int64 v108; // [rsp+178h] [rbp-500h]
  __int64 v109; // [rsp+180h] [rbp-4F8h]
  int v110; // [rsp+188h] [rbp-4F0h]
  int v111[2]; // [rsp+190h] [rbp-4E8h] BYREF
  void *dest; // [rsp+198h] [rbp-4E0h] BYREF
  size_t v113[2]; // [rsp+1A0h] [rbp-4D8h]
  void *v114; // [rsp+1B0h] [rbp-4C8h] BYREF
  size_t n[2]; // [rsp+1B8h] [rbp-4C0h]
  __int64 v116; // [rsp+1C8h] [rbp-4B0h]
  int v117; // [rsp+1D0h] [rbp-4A8h]
  __int16 v118; // [rsp+1D4h] [rbp-4A4h]
  char v119; // [rsp+1D6h] [rbp-4A2h]
  __int64 (__fastcall **v120)(); // [rsp+1E0h] [rbp-498h] BYREF
  void *ptr; // [rsp+1E8h] [rbp-490h]
  __int128 v122; // [rsp+1F0h] [rbp-488h]
  void *src; // [rsp+200h] [rbp-478h]
  __int128 v124; // [rsp+208h] [rbp-470h]
  __int64 v125; // [rsp+218h] [rbp-460h]
  int v126; // [rsp+220h] [rbp-458h]
  __int16 v127; // [rsp+224h] [rbp-454h]
  char v128; // [rsp+226h] [rbp-452h]
  char s[1032]; // [rsp+230h] [rbp-448h] BYREF
  unsigned __int64 v130; // [rsp+638h] [rbp-40h]

  v130 = __readfsqword(0x28u);
  v118 = 0;
  *(_QWORD *)v111 = &off_78CE8;
  dest = nullptr;
  v114 = nullptr;
  v116 = -1;
  v117 = 0;
  v119 = 0;
  *(_OWORD *)v113 = 0;
  *(_OWORD *)n = 0;
  v6 = sub_B760(
         (int)v111,
         a1,
         (int)a2,
         (int)&off_78D60,
         (int)&v80,
         a6,
         (int)v111,
         v71,
         (int)&v80,
         v75,
         v77,
         v79,
         0,
         0,
         0,
         v82,
         (__int64)v83,
         v84[0],
         *(void **)&v84[2],
         v85,
         (int)v86,
         v87[0],
         (__int64)v87[1],
         v88,
         (int)v89,
         v90[0],
         *(__int64 *)&v90[2]);
  if ( !byte_7A94A )
  {
    v91 = nullptr;
    v92 = 0;
    sub_C570(&v93, "No host specified");
    sub_D180(
      (int)v111,
      (int)&v91,
      (int)&off_78D60,
      (int)&v93,
      (int)&v80,
      15,
      v70[0],
      v72,
      v74,
      (int)v76,
      v78,
      v79,
      (__int64)v80,
      v81[0],
      v81[2],
      v82,
      (__int64)v83,
      v84[0],
      *(__int64 *)&v84[2]);
    if ( v93 )
    {
      v94 = nullptr;
      j__free(v93);
    }
    v13 = (const char **)v91;
    v14 = (const char **)((char *)v91 + 24 * v92);
    if ( v91 != v14 )
    {
      do
      {
        v15 = s1;
        if ( v13[1] )
          v15 = *v13;
        sub_1D2A0((unsigned int)"%s\n", (_DWORD)v15, v9, v10, v11, v12, v70[0]);
        v13 += 3;
      }
      while ( v14 != v13 );
    }
    v16 = 1;
    sub_C600(&v91);
    goto LABEL_9;
  }
  if ( byte_7A949 )
  {
    v28 = "off";
    if ( (dword_7AA08 & 1) == 0 )
      v28 = "on";
    v29 = s1;
    if ( ::n )
      LODWORD(v29) = (_DWORD)::src;
    sub_1D2A0(
      (unsigned int)"Connecting to %s:%d TLS=%s\n",
      (_DWORD)v29,
      (unsigned __int16)word_7A980,
      (_DWORD)v28,
      v7,
      v8,
      v70[0]);
  }
  v18 = (void *)sub_19730((dword_7AA08 & 1) == 0);
  v19 = ::n;
  v89 = v18;
  v94 = nullptr;
  v20 = word_7A980;
  v93 = &qword_C0;
  v95 = 0;
  if ( ::n )
  {
    v94 = (void *)sub_29E10(::n);
    *((_QWORD *)&v95 + 1) = v19;
    memcpy(v94, ::src, v19);
    *(_QWORD *)&v95 = v19;
  }
  v104 = 0;
  v101 = 0;
  v96 = v20;
  v97 = 0;
  v99 = 0;
  v103 = 0;
  v106 = 0;
  v108 = 0;
  v109 = 0;
  v110 = -1;
  v98 = 0;
  v100 = 0;
  v102 = 0;
  v105 = 0;
  v107 = 0;
  v21 = sub_197A0(v89, &v93);
  v22 = v89;
  if ( !v21 )
  {
    v64 = sub_19780(v89);
    sub_C570(&v91, v64);
    sub_19810(&v89, 0xFFFFFFFFLL);
    v67 = s1;
    if ( (_QWORD)v92 )
      LODWORD(v67) = (_DWORD)v91;
    v68 = s1;
    if ( ::n )
      LODWORD(v68) = (_DWORD)::src;
    sub_B230((unsigned int)"%s:%u: '%s'", (_DWORD)v68, (unsigned __int16)word_7A980, (_DWORD)v67, v65, v66, v70[0]);
  }
  sub_B640(&v101);
  sub_B640(&v94);
  sub_13410(&v93, v22);
  v93 = &off_79B28;
  if ( byte_7A904 )
    sub_13470(&v93, &::ptr, &qword_7A910);
  v23 = (char *)&v83;
  v83 = nullptr;
  *(_OWORD *)v84 = 0;
  if ( (unsigned int)sub_135A0(&v93, &v83) )
  {
    v69 = s1;
    if ( *(_QWORD *)v84 )
      LODWORD(v69) = (_DWORD)v83;
    sub_B230((unsigned int)"Failed initial handshake: %s", (_DWORD)v69, v24, v25, v26, v27, v70[0]);
  }
  if ( !v119
    || (sub_1D2A0(
          (unsigned int)"Entering interactive mode. Type 'help' for a list of available commands.\n",
          (unsigned int)&v83,
          v24,
          v25,
          v26,
          v27,
          v70[0]),
        !v119) )
  {
    sub_E390(v6, *(_QWORD *)v70, &v93);
    goto LABEL_21;
  }
  v34 = v113[0];
  v120 = &off_78CE8;
  ptr = nullptr;
  v122 = 0;
  if ( v113[0] )
  {
    v63 = (void *)sub_29E10(v113[0]);
    LODWORD(v23) = (_DWORD)dest;
    ptr = v63;
    *((_QWORD *)&v122 + 1) = v34;
    memcpy(v63, dest, v34);
    *(_QWORD *)&v122 = v34;
  }
  v35 = n[0];
  src = nullptr;
  v124 = 0;
  if ( n[0] )
  {
    v62 = (void *)sub_29E10(n[0]);
    LODWORD(v23) = (_DWORD)v114;
    src = v62;
    *((_QWORD *)&v124 + 1) = v35;
    memcpy(v62, v114, v35);
    *(_QWORD *)&v124 = v35;
  }
  v125 = v116;
  v126 = v117;
  v127 = v118;
  v128 = v119;
LABEL_35:
  v36 = v122;
  if ( !(_QWORD)v122 || (v37 = v122 - 1, (_QWORD)v122 == 1) )
  {
LABEL_37:
    v113[0] = 0;
    goto LABEL_38;
  }
  while ( 1 )
  {
    v47 = ptr;
    if ( v113[1] < v36 )
      dest = (void *)sub_29E60(&dest, dest, v36, 1);
    LODWORD(v23) = (_DWORD)v47;
    v113[0] = v36;
    memmove(dest, v47, v37);
    *((char *)dest + v36 - 1) = 0;
LABEL_38:
    v38 = v124;
    if ( (unsigned __int64)v124 > 1 )
    {
      v52 = src;
      if ( n[1] < (unsigned __int64)v124 )
        v114 = (void *)sub_29E60(&v114, v114, v124, 1);
      LODWORD(v23) = (_DWORD)v52;
      n[0] = v38;
      memmove(v114, v52, v38 - 1);
      *((char *)v114 + v38 - 1) = 0;
    }
    else
    {
      n[0] = 0;
    }
    *(_QWORD *)v81 = 0;
    word_7A902 = 0;
    v116 = v125;
    v117 = v126;
    v118 = v127;
    v119 = v128;
    sub_1D2A0((unsigned int)"lsadm> ", (_DWORD)v23, (_DWORD)v30, v31, v32, (_DWORD)v33, v70[0]);
    if ( !sub_29D20(s, 1024) )
      break;
    v86 = nullptr;
    *(_OWORD *)v87 = 0;
    v39 = strlen(s);
    v40 = (void *)(v39 + 1);
    v41 = v39;
    v23 = s;
    v86 = (void *)sub_29E60(&v86, 0, v39 + 1, 1);
    v87[0] = v40;
    memmove(v86, s, v41);
    *((_BYTE *)v86 + v41) = 0;
    v42 = v87[0];
    if ( v87[0] > (char *)&dword_0 + 1 )
    {
      v43 = (char *)v86;
      v44 = (char *)v86 + (unsigned __int64)v87[0] - 1;
      v73 = (void **)v86;
      if ( v86 < v44 )
      {
        while ( 1 )
        {
          v45 = *(v44 - 1);
          if ( v45 > 0x7F || !isspace(v45) )
            break;
          if ( --v44 == v43 )
            goto LABEL_59;
        }
      }
      v46 = v44 - v43;
      if ( v46 )
      {
        v33 = (void **)(v46 + 1);
        if ( (unsigned __int64)v42 < v46 + 1 )
        {
          if ( v87[1] < v33 )
          {
            v61 = (void **)sub_29E60(&v86, v43, v46 + 1, 1);
            v42 = v87[0];
            v33 = (void **)(v46 + 1);
            v73 = v61;
            v86 = v61;
          }
          LODWORD(v23) = 0;
          v76 = v33;
          memset((char *)v73 + (_QWORD)v42, 0, (char *)v33 - v42);
          LODWORD(v33) = (_DWORD)v76;
          v43 = (char *)v86;
          v87[0] = v76;
        }
        else if ( v42 != (_BYTE *)(v46 + 1) )
        {
          v87[0] = (void *)(v46 + 1);
        }
        v43[v46] = 0;
        if ( v87[0] <= (char *)&dword_0 + 1 )
          goto LABEL_51;
      }
      else
      {
LABEL_59:
        if ( v43 )
        {
          v87[0] = nullptr;
          j__free(v43);
          v86 = nullptr;
          v87[1] = nullptr;
          if ( v87[0] <= (char *)&dword_0 + 1 )
            goto LABEL_35;
        }
      }
      v23 = (char *)&v89;
      v89 = nullptr;
      *(_OWORD *)v90 = 0;
      sub_AFB0(&v86, &v89, " ", 1);
      if ( *(_QWORD *)v90 )
      {
        v92 = 0;
        v91 = nullptr;
        v91 = (void *)sub_29E60(&v91, 0, 1, 8);
        *((_QWORD *)v91 + v92) = "lsadm";
        v54 = (const char **)v89;
        v23 = (char *)(v92 + 1);
        *(_QWORD *)&v92 = v92 + 1;
        v55 = (const char **)((char *)v89 + 24 * *(_QWORD *)v90);
        if ( v55 != v89 )
        {
          v53 = (void **)&v79;
          do
          {
            v60 = s1;
            if ( v54[1] )
              v60 = *v54;
            v59 = v91;
            v79 = (char *)v60;
            v56 = v23 + 1;
            if ( v53 < v91 || v53 >= (void **)((char *)v91 + 8 * *((_QWORD *)&v92 + 1)) )
            {
              if ( *((_QWORD *)&v92 + 1) < (unsigned __int64)v56 )
              {
                v73 = v53;
                v59 = (void *)sub_29E60(&v91, v91, v23 + 1, 8);
                v91 = v59;
                v23 = (char *)v92;
                v60 = v79;
                v53 = v73;
              }
            }
            else if ( *((_QWORD *)&v92 + 1) < (unsigned __int64)v56 )
            {
              v76 = v53;
              v73 = (void **)v60;
              v59 = (void *)sub_29E60(&v91, v91, v23 + 1, 8);
              v91 = v59;
              v23 = (char *)v92;
              v53 = v76;
              v60 = (const char *)v73;
            }
            *((_QWORD *)v59 + (_QWORD)v23) = v60;
            v54 += 3;
            v23 = (char *)(v92 + 1);
            *(_QWORD *)&v92 = v92 + 1;
          }
          while ( v55 != v54 );
        }
        v57 = sub_B760(
                v70[0],
                (int)v23,
                (int)v91,
                (int)&qword_78D20,
                v74,
                (int)v53,
                v70[0],
                (int)v73,
                v74,
                (int)v76,
                v78,
                v79,
                (__int64)v80,
                v81[0],
                v81[2],
                v82,
                (__int64)v83,
                v84[0],
                *(void **)&v84[2],
                v85,
                (int)v86,
                v87[0],
                (__int64)v87[1],
                v88,
                (int)v89,
                v90[0],
                *(__int64 *)&v90[2]);
        if ( v57 )
        {
          if ( v57 == 9 )
          {
            sub_1D2A0((unsigned int)"Exiting...\n", (_DWORD)v23, v58, v31, v32, (_DWORD)v33, v70[0]);
            sub_2A3F0(0);
          }
          LODWORD(v23) = v70[0];
          sub_E390(v57, *(_QWORD *)v70, &v93);
          if ( v91 )
          {
            *(_QWORD *)&v92 = 0;
            j__free(v91);
          }
          sub_C600(&v89);
          if ( v86 )
          {
            v87[0] = nullptr;
            j__free(v86);
          }
          goto LABEL_35;
        }
        if ( v91 )
        {
          *(_QWORD *)&v92 = 0;
          j__free(v91);
        }
        v30 = (char *)v89;
        if ( v89 )
        {
          v48 = *(_QWORD *)v90;
          if ( *(_QWORD *)v90 )
          {
            v49 = 0;
            do
            {
              v50 = &v30[24 * v49];
              v51 = *(void **)v50;
              if ( *(_QWORD *)v50 )
              {
                *((_QWORD *)v50 + 1) = 0;
                j__free(v51);
                v30 = (char *)v89;
              }
              ++v49;
            }
            while ( v48 != v49 );
          }
LABEL_70:
          *(_QWORD *)v90 = 0;
          j__free(v30);
        }
      }
      else
      {
        v30 = (char *)v89;
        if ( v89 )
          goto LABEL_70;
      }
    }
LABEL_51:
    if ( !v86 )
      goto LABEL_35;
    v87[0] = nullptr;
    j__free(v86);
    v36 = v122;
    if ( (_QWORD)v122 )
    {
      v37 = v122 - 1;
      if ( (_QWORD)v122 != 1 )
        continue;
    }
    goto LABEL_37;
  }
  sub_A2E0(&v120);
LABEL_21:
  if ( v83 )
  {
    *(_QWORD *)v84 = 0;
    j__free(v83);
  }
  v16 = 0;
  v93 = &off_79B28;
  sub_B690(&v93);
LABEL_9:
  if ( v80 )
  {
    *(_QWORD *)v81 = 0;
    j__free(v80);
  }
  sub_A2E0(*(_QWORD *)v70);
  return v16;
}

