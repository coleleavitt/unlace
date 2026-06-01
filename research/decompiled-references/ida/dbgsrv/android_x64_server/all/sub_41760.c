/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41760
// Address: 0x0000000000041760

//----- (0000000000041760) ----------------------------------------------------
unsigned __int64 __fastcall sub_41760(__int64 a1, __int64 a2)
{
  char *v3; // rdi
  const char *v4; // rax
  __int64 v5; // r14
  const char *v6; // rdi
  const char *v7; // rdx
  _QWORD *v8; // r15
  const char *elf_debug_file_directory; // rax
  const char *v10; // rdx
  const char *v11; // rcx
  const char *v12; // r8
  const char *v13; // rdi
  __int64 v14; // rbp
  const char *v15; // rdi
  const char *v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rbx
  unsigned __int64 v19; // rbp
  __int64 v20; // r14
  _BYTE *v21; // rax
  unsigned __int64 v22; // r13
  char *v23; // rbx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int128 v31; // xmm1
  __int128 v32; // xmm1
  __int128 v33; // xmm1
  __int128 v34; // xmm1
  unsigned __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int128 v39; // xmm1
  unsigned __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // rbx
  unsigned __int64 v44; // rbp
  __int64 v45; // r15
  _BYTE *v46; // rax
  unsigned __int64 v47; // r13
  char *v48; // rbx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rcx
  __int128 v56; // xmm1
  __int128 v57; // xmm1
  __int128 v58; // xmm1
  __int128 v59; // xmm1
  unsigned __int64 v60; // rcx
  __int64 v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rdi
  __int128 v64; // xmm1
  unsigned __int64 v65; // r13
  __int64 v66; // rax
  int v67; // ebp
  unsigned __int64 v68; // rbx
  const char *v70; // [rsp+10h] [rbp-588h]
  __int64 v71; // [rsp+10h] [rbp-588h]
  __int64 v72; // [rsp+10h] [rbp-588h]
  _BYTE *v73; // [rsp+18h] [rbp-580h]
  _BYTE *v74; // [rsp+18h] [rbp-580h]
  void *ptr[3]; // [rsp+20h] [rbp-578h] BYREF
  void *v76; // [rsp+38h] [rbp-560h] BYREF
  __int64 v77; // [rsp+40h] [rbp-558h]
  __int64 v78; // [rsp+48h] [rbp-550h]
  _QWORD *v79; // [rsp+50h] [rbp-548h]
  __int64 v80; // [rsp+58h] [rbp-540h]
  _QWORD v81[2]; // [rsp+60h] [rbp-538h] BYREF
  const char *v82; // [rsp+70h] [rbp-528h]
  __int64 v83; // [rsp+78h] [rbp-520h]
  __int64 (__fastcall **v84)(); // [rsp+F0h] [rbp-4A8h] BYREF
  char s2[8]; // [rsp+F8h] [rbp-4A0h] BYREF
  __int64 v86; // [rsp+100h] [rbp-498h]
  __int64 v87; // [rsp+108h] [rbp-490h]
  __int64 v88; // [rsp+110h] [rbp-488h]
  unsigned __int64 v89; // [rsp+560h] [rbp-38h]

  v89 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 48) )
    v3 = *(char **)(a2 + 40);
  else
    v3 = (char *)s1;
  v4 = stristr(v3, "libpthread");
  v5 = a1 + 936;
  if ( v4 )
    *(_QWORD *)(a1 + 1280) = *(_QWORD *)a2;
  else
    v5 = a1 + 888;
  v70 = v4;
  if ( *(_QWORD *)a2 == -1 )
  {
    if ( *(_QWORD *)(a2 + 24) )
      v7 = *(const char **)(a2 + 16);
    else
      v7 = s1;
    v8 = (_QWORD *)(a2 + 24);
    sub_9FDA0(a1, "Can't import symbols from %s: no imagebase\n", v7);
  }
  else
  {
    *(_DWORD *)s2 = 49;
    v84 = off_146DB0;
    v86 = a1;
    v87 = a2;
    v88 = v5;
    if ( *(_QWORD *)(a2 + 24) )
      v6 = *(const char **)(a2 + 16);
    else
      v6 = s1;
    v8 = (_QWORD *)(a2 + 24);
    sub_5B480(v6, &v84, 0);
  }
  elf_debug_file_directory = get_elf_debug_file_directory();
  v10 = s1;
  v11 = s1;
  if ( *(_QWORD *)(a2 + 24) )
    v11 = *(const char **)(a2 + 16);
  v12 = s1;
  if ( *(_QWORD *)(a2 + 120) )
    v12 = *(const char **)(a2 + 112);
  if ( *(_QWORD *)(a2 + 96) )
    v10 = *(const char **)(a2 + 88);
  sub_41F60((__int64)&v84, (__int64)elf_debug_file_directory, 1, v11, v12, *(_DWORD *)(a2 + 136), v10);
  if ( (unsigned int)sub_421F0((__int64)&v84) )
  {
    v13 = *v8 ? *(const char **)(a2 + 16) : s1;
    if ( strcmp(v13, s2) )
    {
      sub_9FDA0(a1, "load separate debug info '%s'\n", s2);
      v14 = *(_QWORD *)a2;
      sub_37F60((__int64)&v76, s2);
      sub_37F60((__int64)ptr, &byte_EB522);
      sub_414E0((__int64)v81, v14, 0, (__int64)&v76, (__int64)ptr);
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        ptr[2] = nullptr;
      }
      if ( v76 )
      {
        v77 = 0;
        qfree(v76);
        v76 = nullptr;
        v78 = 0;
      }
      if ( v81[0] == -1 )
      {
        if ( v83 )
          v16 = v82;
        else
          v16 = s1;
        sub_9FDA0(a1, "Can't import symbols from %s: no imagebase\n", v16);
      }
      else
      {
        LODWORD(v77) = 49;
        v76 = off_146DB0;
        v78 = a1;
        v79 = v81;
        v80 = v5;
        if ( v83 )
          v15 = v82;
        else
          v15 = s1;
        sub_5B480(v15, &v76, 0);
      }
      sub_415E0((__int64)v81);
    }
  }
  if ( v70 )
  {
    v17 = *(_QWORD *)(a1 + 944);
    if ( !(8 * v17) )
      goto LABEL_62;
    v18 = *(_QWORD *)(a1 + 896);
    v19 = *(_QWORD *)(a1 + 936);
    v20 = (8 * v17) >> 3;
    v21 = *(_BYTE **)(a1 + 888);
    if ( *(_QWORD *)(a1 + 904) < (unsigned __int64)(v20 + v18) )
    {
      v21 = qvector_reserve(a1 + 888, *(char **)(a1 + 888), v20 + v18, 8u);
      *(_QWORD *)(a1 + 888) = v21;
    }
    v22 = v19 + 8 * v17;
    v71 = v18;
    v23 = &v21[8 * ((8 * v18) >> 3)];
    v73 = v21;
    memmove(&v23[8 * v20], v23, &v21[8 * *(_QWORD *)(a1 + 896)] - v23);
    if ( v19 == v22 )
      goto LABEL_61;
    v24 = (unsigned __int64)(8 * v17 - 8) >> 3;
    v25 = v24 + 1;
    if ( v24 + 1 < 4 || (unsigned __int64)v23 < v22 && v19 < (unsigned __int64)&v73[8 * v71 + 8 + 8 * v24] )
      goto LABEL_59;
    v26 = v25 & 0xFFFFFFFFFFFFFFFCLL;
    v27 = ((unsigned __int8)(((v25 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3;
    if ( (v25 & 0xFFFFFFFFFFFFFFFCLL) - 4 >= 0xC )
    {
      v29 = (__int64)&v73[8 * v71 + 112];
      v30 = v27 - ((((v25 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1);
      v28 = 0;
      do
      {
        v31 = *(_OWORD *)(v19 + 8 * v28 + 16);
        *(_OWORD *)&v73[8 * v71 + 8 * v28] = *(_OWORD *)(v19 + 8 * v28);
        *(_OWORD *)(v29 + 8 * v28 - 96) = v31;
        v32 = *(_OWORD *)(v19 + 8 * v28 + 48);
        *(_OWORD *)(v29 + 8 * v28 - 80) = *(_OWORD *)(v19 + 8 * v28 + 32);
        *(_OWORD *)(v29 + 8 * v28 - 64) = v32;
        v33 = *(_OWORD *)(v19 + 8 * v28 + 80);
        *(_OWORD *)(v29 + 8 * v28 - 48) = *(_OWORD *)(v19 + 8 * v28 + 64);
        *(_OWORD *)(v29 + 8 * v28 - 32) = v33;
        v34 = *(_OWORD *)(v19 + 8 * v28 + 112);
        *(_OWORD *)(v29 + 8 * v28 - 16) = *(_OWORD *)(v19 + 8 * v28 + 96);
        *(_OWORD *)(v29 + 8 * v28) = v34;
        v28 += 16;
        v30 += 4;
      }
      while ( v30 );
      if ( (((unsigned __int8)(((v25 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3) == 0 )
      {
LABEL_57:
        if ( v25 != v26 )
        {
          v23 += 8 * v26;
          v19 += 8 * v26;
LABEL_59:
          v40 = v22 - v19;
          v41 = 0;
          do
          {
            *(_QWORD *)&v23[v41] = *(_QWORD *)(v19 + v41);
            v41 += 8;
          }
          while ( v40 != v41 );
        }
LABEL_61:
        *(_QWORD *)(a1 + 896) += v20;
LABEL_62:
        v42 = *(_QWORD *)(a1 + 968);
        if ( !(8 * v42) )
          goto LABEL_82;
        v43 = *(_QWORD *)(a1 + 920);
        v44 = *(_QWORD *)(a1 + 960);
        v45 = (8 * v42) >> 3;
        v46 = *(_BYTE **)(a1 + 912);
        if ( *(_QWORD *)(a1 + 928) < (unsigned __int64)(v45 + v43) )
        {
          v46 = qvector_reserve(a1 + 912, *(char **)(a1 + 912), v45 + v43, 8u);
          *(_QWORD *)(a1 + 912) = v46;
        }
        v47 = v44 + 8 * v42;
        v72 = v43;
        v48 = &v46[8 * ((8 * v43) >> 3)];
        v74 = v46;
        memmove(&v48[8 * v45], v48, &v46[8 * *(_QWORD *)(a1 + 920)] - v48);
        if ( v44 == v47 )
          goto LABEL_81;
        v49 = (unsigned __int64)(8 * v42 - 8) >> 3;
        v50 = v49 + 1;
        if ( v49 + 1 < 4 || (unsigned __int64)v48 < v47 && v44 < (unsigned __int64)&v74[8 * v72 + 8 + 8 * v49] )
          goto LABEL_79;
        v51 = v50 & 0xFFFFFFFFFFFFFFFCLL;
        v52 = ((unsigned __int8)(((v50 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3;
        if ( (v50 & 0xFFFFFFFFFFFFFFFCLL) - 4 >= 0xC )
        {
          v54 = (__int64)&v74[8 * v72 + 112];
          v55 = v52 - ((((v50 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1);
          v53 = 0;
          do
          {
            v56 = *(_OWORD *)(v44 + 8 * v53 + 16);
            *(_OWORD *)&v74[8 * v72 + 8 * v53] = *(_OWORD *)(v44 + 8 * v53);
            *(_OWORD *)(v54 + 8 * v53 - 96) = v56;
            v57 = *(_OWORD *)(v44 + 8 * v53 + 48);
            *(_OWORD *)(v54 + 8 * v53 - 80) = *(_OWORD *)(v44 + 8 * v53 + 32);
            *(_OWORD *)(v54 + 8 * v53 - 64) = v57;
            v58 = *(_OWORD *)(v44 + 8 * v53 + 80);
            *(_OWORD *)(v54 + 8 * v53 - 48) = *(_OWORD *)(v44 + 8 * v53 + 64);
            *(_OWORD *)(v54 + 8 * v53 - 32) = v58;
            v59 = *(_OWORD *)(v44 + 8 * v53 + 112);
            *(_OWORD *)(v54 + 8 * v53 - 16) = *(_OWORD *)(v44 + 8 * v53 + 96);
            *(_OWORD *)(v54 + 8 * v53) = v59;
            v53 += 16;
            v55 += 4;
          }
          while ( v55 );
          if ( (((unsigned __int8)(((v50 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3) == 0 )
          {
LABEL_77:
            if ( v50 != v51 )
            {
              v48 += 8 * v51;
              v44 += 8 * v51;
LABEL_79:
              v65 = v47 - v44;
              v66 = 0;
              do
              {
                *(_QWORD *)&v48[v66] = *(_QWORD *)(v44 + v66);
                v66 += 8;
              }
              while ( v65 != v66 );
            }
LABEL_81:
            *(_QWORD *)(a1 + 920) += v45;
            v42 = *(_QWORD *)(a1 + 968);
LABEL_82:
            if ( v42 )
            {
              v67 = 1;
              v68 = 0;
              do
              {
                *(_QWORD *)(*(_QWORD *)(a1 + 960) + 8 * v68) = qstrdup(*(const char **)(*(_QWORD *)(a1 + 960) + 8 * v68));
                v68 = v67++;
              }
              while ( *(_QWORD *)(a1 + 968) > v68 );
            }
            goto LABEL_85;
          }
        }
        else
        {
          v53 = 0;
          if ( (((unsigned __int8)(((v50 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3) == 0 )
            goto LABEL_77;
        }
        v60 = v44 + 8 * v53 + 16;
        v61 = (__int64)&v74[8 * v53 + 16 + 8 * v72];
        v62 = -v52;
        v63 = 0;
        do
        {
          v64 = *(_OWORD *)(v60 + v63);
          *(_OWORD *)(v61 + v63 - 16) = *(_OWORD *)(v60 + v63 - 16);
          *(_OWORD *)(v61 + v63) = v64;
          v63 += 32;
          ++v62;
        }
        while ( v62 );
        goto LABEL_77;
      }
    }
    else
    {
      v28 = 0;
      if ( (((unsigned __int8)(((v25 & 0xFFFFFFFFFFFFFFFCLL) - 4) >> 2) + 1) & 3) == 0 )
        goto LABEL_57;
    }
    v35 = v19 + 8 * v28 + 16;
    v36 = (__int64)&v73[8 * v28 + 16 + 8 * v71];
    v37 = -v27;
    v38 = 0;
    do
    {
      v39 = *(_OWORD *)(v35 + v38);
      *(_OWORD *)(v36 + v38 - 16) = *(_OWORD *)(v35 + v38 - 16);
      *(_OWORD *)(v36 + v38) = v39;
      v38 += 32;
      ++v37;
    }
    while ( v37 );
    goto LABEL_57;
  }
LABEL_85:
  sub_426E0((__int64)&v84);
  return __readfsqword(0x28u);
}
// 146DB0: using guessed type __int64 (__fastcall *off_146DB0[4])();
