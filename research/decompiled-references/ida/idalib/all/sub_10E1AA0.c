__int64 __fastcall sub_10E1AA0(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, _BYTE *a6)
{
  int v10; // eax
  bool v11; // zf
  int v12; // eax
  int v13; // eax
  _QWORD *v14; // r12
  _QWORD *v15; // rbp
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // r8
  __int64 v19; // r13
  _QWORD *v20; // rbx
  signed __int64 v21; // rbp
  __int64 v22; // rdi
  void *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  int v28; // r12d
  unsigned __int8 v29; // al
  _BYTE *v30; // rdi
  _QWORD *v31; // r12
  _QWORD *v32; // rbx
  __int64 v33; // r13
  __int64 v34; // rax
  size_t v35; // r12
  _BYTE *v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // eax
  int v43; // r15d
  int v44; // r15d
  _QWORD *v45; // r12
  size_t v47; // rax
  __int64 v48; // rdi
  int v49; // edx
  unsigned __int8 *v50; // rbp
  __int64 v51; // r13
  _QWORD *v52; // rdx
  __int64 v53; // rax
  size_t v54; // rdx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // r12
  __int64 v58; // rdx
  __int64 v59; // r12
  __int64 v60; // rbx
  void *v61; // rdi
  __int64 v62; // [rsp-10h] [rbp-1B8h]
  signed __int64 v64; // [rsp+8h] [rbp-1A0h]
  __int64 v65; // [rsp+8h] [rbp-1A0h]
  unsigned int v66; // [rsp+10h] [rbp-198h]
  unsigned int v67; // [rsp+10h] [rbp-198h]
  int v68; // [rsp+14h] [rbp-194h]
  _QWORD *v69; // [rsp+20h] [rbp-188h]
  _QWORD *v70; // [rsp+20h] [rbp-188h]
  __int64 *v72; // [rsp+38h] [rbp-170h]
  unsigned int v73; // [rsp+68h] [rbp-140h] BYREF
  unsigned int v74; // [rsp+6Ch] [rbp-13Ch] BYREF
  _QWORD v75[4]; // [rsp+70h] [rbp-138h] BYREF
  void *v76; // [rsp+90h] [rbp-118h] BYREF
  size_t v77; // [rsp+98h] [rbp-110h]
  _BYTE v78[16]; // [rsp+A0h] [rbp-108h] BYREF
  void *v79; // [rsp+B0h] [rbp-F8h] BYREF
  signed __int64 v80; // [rsp+B8h] [rbp-F0h]
  _BYTE v81[16]; // [rsp+C0h] [rbp-E8h] BYREF
  void *v82; // [rsp+D0h] [rbp-D8h] BYREF
  signed __int64 v83; // [rsp+D8h] [rbp-D0h]
  _BYTE v84[16]; // [rsp+E0h] [rbp-C8h] BYREF
  void *v85; // [rsp+F0h] [rbp-B8h] BYREF
  signed __int64 v86; // [rsp+F8h] [rbp-B0h]
  unsigned int v87; // [rsp+100h] [rbp-A8h] BYREF
  _QWORD *v88; // [rsp+108h] [rbp-A0h]
  void *v89; // [rsp+120h] [rbp-88h] BYREF
  size_t v90; // [rsp+128h] [rbp-80h]
  _BYTE v91[120]; // [rsp+130h] [rbp-78h] BYREF

  sub_2233820(v75);
  *a6 = 0;
  v68 = 1;
  v75[0] = &off_2BEB1D8;
  v75[2] = "Command line argument parsing";
  if ( a5 )
  {
    v10 = *(_DWORD *)(a2 + 16);
    v68 = 2;
    if ( v10 != 3 )
    {
      v68 = 64;
      if ( v10 != 5 )
      {
        v11 = v10 == 4;
        v12 = 1;
        if ( v11 )
          v12 = 16;
        v68 = v12;
      }
    }
  }
  v13 = ((__int64 (*)(void))sub_1105E80)();
  sub_21BCF70(a1, v13, a3, a4, (unsigned int)&v73, (unsigned int)&v74, v68);
  if ( v74 )
  {
    sub_FC70B0((__int64)&v89, *(_QWORD *)a2, 0, 418);
    sub_10D8830((unsigned __int8 **)&v89, *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL * v73));
    v50 = (unsigned __int8 *)v89;
    v51 = v74;
    if ( !v89 )
    {
      v54 = v90;
      v55 = *(_DWORD *)(v90 + 14976);
      if ( v55 )
      {
        v56 = (unsigned int)(v55 - 1);
        *(_DWORD *)(v90 + 14976) = v56;
        v50 = *(unsigned __int8 **)(v54 + 8 * v56 + 14848);
        v57 = *((unsigned int *)v50 + 134);
        *v50 = 0;
        v58 = *((_QWORD *)v50 + 66);
        *((_DWORD *)v50 + 106) = 0;
        v59 = v58 + (v57 << 6);
        if ( v58 != v59 )
        {
          v60 = v58;
          do
          {
            while ( 1 )
            {
              v59 -= 64;
              v61 = *(void **)(v59 + 24);
              if ( v61 == (void *)(v59 + 40) )
                break;
              operator delete(v61);
              if ( v60 == v59 )
                goto LABEL_97;
            }
          }
          while ( v60 != v59 );
        }
LABEL_97:
        *((_DWORD *)v50 + 134) = 0;
      }
      else
      {
        v50 = (unsigned __int8 *)operator new(0x3A0u);
        *v50 = 0;
        *((_QWORD *)v50 + 12) = v50 + 112;
        *((_QWORD *)v50 + 16) = v50 + 144;
        *((_QWORD *)v50 + 20) = v50 + 176;
        *((_QWORD *)v50 + 24) = v50 + 208;
        *((_QWORD *)v50 + 28) = v50 + 240;
        *((_QWORD *)v50 + 32) = v50 + 272;
        *((_QWORD *)v50 + 36) = v50 + 304;
        *((_QWORD *)v50 + 40) = v50 + 336;
        *((_QWORD *)v50 + 44) = v50 + 368;
        *((_QWORD *)v50 + 48) = v50 + 400;
        *((_QWORD *)v50 + 52) = v50 + 432;
        *((_QWORD *)v50 + 13) = 0;
        v50[112] = 0;
        *((_QWORD *)v50 + 17) = 0;
        v50[144] = 0;
        *((_QWORD *)v50 + 21) = 0;
        v50[176] = 0;
        *((_QWORD *)v50 + 25) = 0;
        v50[208] = 0;
        *((_QWORD *)v50 + 29) = 0;
        v50[240] = 0;
        *((_QWORD *)v50 + 33) = 0;
        v50[272] = 0;
        *((_QWORD *)v50 + 37) = 0;
        v50[304] = 0;
        *((_QWORD *)v50 + 41) = 0;
        v50[336] = 0;
        *((_QWORD *)v50 + 45) = 0;
        v50[368] = 0;
        *((_QWORD *)v50 + 49) = 0;
        v50[400] = 0;
        *((_QWORD *)v50 + 53) = 0x800000000LL;
        *((_QWORD *)v50 + 66) = v50 + 544;
        *((_QWORD *)v50 + 67) = 0x600000000LL;
      }
      v89 = v50;
    }
    v50[*v50 + 1] = 3;
    v52 = v89;
    v53 = *(unsigned __int8 *)v89;
    *(_BYTE *)v89 = v53 + 1;
    v52[v53 + 2] = v51;
    sub_AEA040((__int64)&v89);
    *a6 |= (unsigned __int8)sub_FD3E40(*(_QWORD *)(*(_QWORD *)a2 + 32LL), 0x1A2u, 0, *(_QWORD *)a2) > 3u;
  }
  v14 = *(_QWORD **)(a1 + 8);
  v15 = &v14[*(unsigned int *)(a1 + 16)];
  if ( v14 != v15 )
  {
    v16 = v14 + 1;
    if ( *v14 )
      goto LABEL_15;
    while ( 1 )
    {
      v14 = v16;
      if ( v15 == v16 )
        break;
      if ( *v16++ )
      {
        while ( 1 )
        {
LABEL_15:
          v19 = *v14;
          if ( *(char *)(*(_QWORD *)*v14 + 48LL) >= 0 )
          {
            if ( (unsigned __int8)sub_21B9810(*v14, 2323) )
            {
              v47 = j__strlen(&byte_22F0C30);
              v89 = (void *)&byte_22F0C30;
              v90 = v47;
              v48 = *(_QWORD *)(v19 + 48);
              v65 = v48 + 8LL * *(unsigned int *)(v19 + 56);
              if ( v65 != sub_10D9AA0(v48, v65, (__int64)&v89) )
              {
                sub_FC70B0((__int64)&v89, *(_QWORD *)a2, 0, 552);
                sub_21B5FF0(&v85, v19, a1);
                sub_AEC220((unsigned __int8 **)&v89, v85, v86);
                if ( v85 != &v87 )
                  operator delete(v85);
                sub_AEA040((__int64)&v89);
                *a6 |= (unsigned __int8)sub_FD3E40(*(_QWORD *)(*(_QWORD *)a2 + 32LL), 0x228u, 0, *(_QWORD *)a2) > 3u;
              }
            }
            v17 = v14 + 1;
            if ( v15 == v14 + 1 )
              goto LABEL_19;
          }
          else
          {
            sub_FC70B0((__int64)&v89, *(_QWORD *)a2, 0, 493);
            sub_21B5FF0(&v85, v19, a1);
            sub_AEC220((unsigned __int8 **)&v89, v85, v86);
            if ( v85 != &v87 )
              operator delete(v85);
            sub_AEA040((__int64)&v89);
            *a6 |= (unsigned __int8)sub_FD3E40(*(_QWORD *)(*(_QWORD *)a2 + 32LL), 0x1EDu, 0, *(_QWORD *)a2) > 3u;
            v17 = v14 + 1;
            if ( v15 == v14 + 1 )
              goto LABEL_19;
          }
          v18 = v14 + 2;
          if ( !v14[1] )
            break;
LABEL_14:
          v14 = v17;
        }
        while ( 1 )
        {
          v17 = v18;
          if ( v15 == v18 )
            goto LABEL_19;
          if ( *v18++ )
            goto LABEL_14;
        }
      }
    }
  }
LABEL_19:
  sub_10DC500((__int64)&v85, a1, 0x47u);
  v20 = v85;
  v21 = v86;
  v66 = v87;
  v69 = v88;
  while ( v69 != v20 )
  {
    sub_21B5FF0(&v76, *v20, a1);
    v80 = 0;
    v81[0] = 0;
    v79 = v81;
    v22 = ((__int64 (*)(void))sub_1105E80)();
    v23 = v76;
    if ( (unsigned int)sub_21BBC30(v22, (_DWORD)v76, v77, (unsigned int)&v79, v68, 4, -1) <= 1 )
    {
      v49 = 482;
      if ( *(_DWORD *)(a2 + 16) == 3 )
        v49 = 598;
      v28 = v49;
      sub_FC70B0((__int64)&v89, *(_QWORD *)a2, 0, v49);
      sub_AEC220((unsigned __int8 **)&v89, v76, v77);
      sub_AEC220((unsigned __int8 **)&v89, v79, v80);
      sub_AEA040((__int64)&v89);
    }
    else
    {
      if ( *(_DWORD *)(a2 + 16) == 3 )
        goto LABEL_73;
      v27 = sub_1105E80(v22, v23, v24, v25, v26, v62);
      if ( (unsigned int)sub_21BBC30(v27, (_DWORD)v76, v77, (unsigned int)&v79, 4, 4, 0) )
      {
        if ( *(_DWORD *)(a2 + 16) == 3 )
LABEL_73:
          v28 = 597;
        else
          v28 = 481;
        sub_FC70B0((__int64)&v89, *(_QWORD *)a2, 0, v28);
        sub_AEC220((unsigned __int8 **)&v89, v76, v77);
        sub_AEA040((__int64)&v89);
        goto LABEL_27;
      }
      sub_FC70B0((__int64)&v89, *(_QWORD *)a2, 0, 482);
      sub_AEC220((unsigned __int8 **)&v89, v76, v77);
      sub_C05100((__int64)&v82, "-Xclang ", (__int64)&v79);
      sub_AEC220((unsigned __int8 **)&v89, v82, v83);
      if ( v82 != v84 )
        operator delete(v82);
      v28 = 482;
      sub_AEA040((__int64)&v89);
    }
LABEL_27:
    v29 = sub_FD3E40(*(_QWORD *)(*(_QWORD *)a2 + 32LL), v28, 0, *(_QWORD *)a2);
    v30 = v79;
    *a6 |= v29 > 3u;
    if ( v30 != v81 )
      operator delete(v30);
    if ( v76 != v78 )
      operator delete(v76);
    v31 = v20 + 1;
    if ( v20 + 1 == (_QWORD *)v21 )
    {
      v20 = (_QWORD *)v21;
    }
    else
    {
      if ( v66 )
      {
        while ( !*v31 || !(unsigned __int8)sub_21B9810(*v31, v66) )
        {
          if ( ++v31 == (_QWORD *)v21 )
            goto LABEL_36;
        }
        v20 = v31;
        continue;
      }
      v31 += ((unsigned __int64)(v21 - 16 - (_QWORD)v20) >> 3) + 1;
LABEL_36:
      v20 = v31;
    }
  }
  sub_10DC500((__int64)&v85, a1, 0xC2Cu);
  v72 = (__int64 *)a2;
  v32 = v85;
  v64 = v86;
  v67 = v87;
  v70 = v88;
  while ( v70 != v32 )
  {
    v33 = *v32;
    v34 = *(unsigned int *)(*v32 + 40LL);
    v35 = *(_QWORD *)(*v32 + 32LL);
    v36 = *(_BYTE **)(a3 + 8 * v34);
    if ( v36 )
    {
      if ( v35 == strlen(*(const char **)(a3 + 8 * v34)) && (!v35 || !memcmp(v36, *(const void **)(v33 + 24), v35)) )
        goto LABEL_53;
      v76 = v78;
      v37 = (__int64)&v36[strlen(v36)];
    }
    else
    {
      if ( !v35 )
        goto LABEL_53;
      v37 = -1;
      v76 = v78;
    }
    sub_10D8DB0(&v76, v36, v37);
    v80 = 0;
    v81[0] = 0;
    v79 = v81;
    v42 = sub_1105E80(&v76, v36, v38, v39, v40, v41);
    v89 = v91;
    v43 = v42;
    v90 = 0;
    v91[0] = 0;
    sub_995C30((__int64)&v89, v77 + 1);
    if ( v90 == 0x7FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    sub_9EE560(&v89, "-", 1u);
    sub_9EE560(&v89, v76, v77);
    v44 = sub_21BBC30(v43, (_DWORD)v89, v90, (unsigned int)&v79, v68, 4, 0);
    if ( v89 != v91 )
      operator delete(v89);
    if ( !v44 )
    {
      sub_FC70B0((__int64)&v89, *v72, 0, 591);
      sub_21B5FF0(&v82, v33, a1);
      sub_AEC220((unsigned __int8 **)&v89, v82, v83);
      sub_AEC220((unsigned __int8 **)&v89, v79, v80);
      if ( v82 != v84 )
        operator delete(v82);
      sub_AEA040((__int64)&v89);
    }
    if ( v79 != v81 )
      operator delete(v79);
    if ( v76 != v78 )
      operator delete(v76);
LABEL_53:
    v45 = v32 + 1;
    if ( (_QWORD *)v64 == v32 + 1 )
    {
      v32 = (_QWORD *)v64;
    }
    else
    {
      if ( v67 )
      {
        while ( !*v45 || !(unsigned __int8)sub_21B9810(*v45, v67) )
        {
          if ( (_QWORD *)v64 == ++v45 )
            goto LABEL_58;
        }
        v32 = v45;
        continue;
      }
      v45 += ((unsigned __int64)(v64 - 16 - (_QWORD)v32) >> 3) + 1;
LABEL_58:
      v32 = v45;
    }
  }
  v75[0] = &off_2BEB1D8;
  sub_22338A0(v75);
  return a1;
}
