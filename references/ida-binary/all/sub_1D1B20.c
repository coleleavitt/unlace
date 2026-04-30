__int64 __fastcall sub_1D1B20(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  const char *v9; // rsi
  char v10; // al
  const char *v11; // rbp
  __int64 v12; // rbx
  const char *v13; // r12
  const char *v14; // r13
  __int64 v15; // rax
  char *v16; // rdx
  const char *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  const char *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  int v30; // ebp
  __int64 v31; // r15
  const char *v32; // rsi
  char *v33; // rdx
  char *v34; // rdx
  __int64 v35; // r12
  __int64 v36; // rbp
  char *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // r12
  __int64 v40; // rbx
  const char *v41; // rax
  __int64 v42; // rdi
  const char *v43; // rsi
  __int64 v44; // rbx
  __int64 v45; // r15
  _BYTE *v46; // r8
  void *v47; // r9
  void *v48; // r9
  const char *v49; // rdx
  const char *v50; // rbp
  char v51; // al
  char *v52; // r13
  char *v53; // rax
  char *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rbp
  __int64 v57; // rbx
  __int64 *v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rax
  size_t v62; // rdx
  unsigned __int64 v63; // rax
  __int64 v64; // r8
  const char *v65; // r12
  size_t v66; // rax
  __int64 v67; // r15
  size_t v68; // rbp
  char *v69; // rdi
  void *v70; // rdx
  __int64 v71; // rax
  __int64 *v72; // [rsp+0h] [rbp-D8h]
  char v73; // [rsp+0h] [rbp-D8h]
  __int64 v74; // [rsp+8h] [rbp-D0h]
  char *v75; // [rsp+8h] [rbp-D0h]
  _BYTE *v76; // [rsp+8h] [rbp-D0h]
  void *v77; // [rsp+8h] [rbp-D0h]
  void *v78; // [rsp+10h] [rbp-C8h]
  _BYTE *v79; // [rsp+10h] [rbp-C8h]
  void *v80; // [rsp+10h] [rbp-C8h]
  __int64 v81; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v82; // [rsp+28h] [rbp-B0h]
  const char *v83; // [rsp+40h] [rbp-98h] BYREF
  __int128 v84; // [rsp+48h] [rbp-90h]
  const char *v85; // [rsp+60h] [rbp-78h] BYREF
  __int128 v86; // [rsp+68h] [rbp-70h]
  char *s1; // [rsp+80h] [rbp-58h] BYREF
  __int128 v88; // [rsp+88h] [rbp-50h]
  unsigned __int64 v89; // [rsp+98h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  if ( (int)reg_int_op("RegistryVersion", 0, 0, 0) > 669 )
    return v89 - __readfsqword(0x28u);
  v83 = nullptr;
  v9 = (const char *)&unk_5C2F25;
  v72 = (__int64 *)&v83;
  v84 = 0;
  v10 = reg_subkey_children(&v83, &unk_5C2F25, 1);
  v11 = v83;
  if ( !v10 )
  {
LABEL_32:
    if ( !v11 )
      goto LABEL_39;
    v39 = v84;
    if ( (_QWORD)v84 )
    {
      v40 = 0;
      do
      {
        v41 = &v11[24 * v40];
        v42 = *(_QWORD *)v41;
        if ( *(_QWORD *)v41 )
        {
          *((_QWORD *)v41 + 1) = 0;
          qfree(v42, v9);
          v11 = v83;
        }
        ++v40;
      }
      while ( v39 != v40 );
    }
    goto LABEL_38;
  }
  v74 = v84;
  if ( (_QWORD)v84 )
  {
    v12 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = &v11[24 * v12];
        if ( *((_QWORD *)v13 + 1) )
        {
          v14 = *(const char **)v13;
          v9 = "History_";
          if ( !strncmp(*(const char **)v13, "History_", 8u) )
            break;
        }
        if ( v74 == ++v12 )
          goto LABEL_32;
      }
      v85 = nullptr;
      v86 = 0;
      v15 = *((_QWORD *)v13 + 1);
      if ( v15 )
      {
        v63 = v15 - 1;
        v64 = 8;
        v65 = *(const char **)v13;
        s1 = nullptr;
        v88 = 0;
        if ( v63 <= 8 )
          v64 = v63;
        v66 = v63 - v64;
        v67 = v64;
        v68 = v66;
        if ( v66 )
        {
          v69 = nullptr;
          v70 = (void *)(v66 + 1);
          if ( v66 != -1 )
          {
            v80 = (void *)(v66 + 1);
            s1 = (char *)qvector_reserve(&s1, 0, v70, 1);
            v70 = v80;
            v69 = s1;
          }
          *(_QWORD *)&v88 = v70;
          memmove(v69, &v65[v67], v68);
          s1[v68] = 0;
          if ( (_QWORD)v88 )
          {
            v16 = s1;
            goto LABEL_12;
          }
        }
      }
      else
      {
        s1 = nullptr;
        v88 = 0;
      }
      v16 = (char *)&::s1;
LABEL_12:
      sub_169A50((__int64 *)&v85, (__int64)"History\\%s", v16);
      if ( s1 )
      {
        *(_QWORD *)&v88 = 0;
        qfree(s1, "History\\%s", v17);
      }
      v23 = &::s1;
      if ( (_QWORD)v86 )
        v23 = v85;
      sub_169700(
        (int)"Registry: importing '%s' -> '%s' ... ",
        (__int64)v14,
        (__int64)v23,
        v18,
        v19,
        v20,
        (__m128)0LL,
        a2,
        a3,
        a4,
        v21,
        v22,
        a7,
        a8,
        (char)v72);
      s1 = nullptr;
      v88 = 0;
      reg_read_strlist(&s1, v14);
      reg_int_op("probe", 1, 0, v23);
      reg_delete("probe", v23);
      v30 = v88;
      if ( (int)v88 > 128 )
        v30 = 128;
      v31 = 0;
      if ( v30 )
      {
        do
        {
          v32 = &::s1;
          v33 = &s1[24 * v31];
          if ( *((_QWORD *)v33 + 1) )
            v32 = *(const char **)v33;
          reg_update_strlist(v23, v32, 128, 0, 0);
          ++v31;
        }
        while ( v30 != v31 );
      }
      v9 = v14;
      sub_169700(
        (int)"ok. Deleting key '%s'.\n",
        (__int64)v14,
        v24,
        v25,
        v26,
        v27,
        (__m128)0LL,
        a2,
        a3,
        a4,
        v28,
        v29,
        a7,
        a8,
        v73);
      reg_delete_subkey(v14);
      v34 = s1;
      if ( s1 )
      {
        v35 = v88;
        if ( (_QWORD)v88 )
        {
          v36 = 0;
          do
          {
            v37 = &v34[24 * v36];
            v38 = *(_QWORD *)v37;
            if ( *(_QWORD *)v37 )
            {
              *((_QWORD *)v37 + 1) = 0;
              qfree(v38, v14);
              v34 = s1;
            }
            ++v36;
          }
          while ( v35 != v36 );
        }
        *(_QWORD *)&v88 = 0;
        qfree(v34, v14);
      }
      if ( v85 )
      {
        *(_QWORD *)&v86 = 0;
        qfree(v85, v14);
      }
      v11 = v83;
      if ( v74 == ++v12 )
        goto LABEL_32;
    }
  }
  if ( v83 )
  {
LABEL_38:
    *(_QWORD *)&v84 = 0;
    qfree(v11, v9);
  }
LABEL_39:
  v81 = 0;
  v43 = "QDesktop";
  v82 = 0;
  if ( (unsigned __int8)reg_subkey_children(&v81, "QDesktop", 1) && (int)v82 > 0 )
  {
    v44 = 0;
    v45 = 8 * (3LL * (unsigned int)(v82 - 1) + 3);
    do
    {
      v49 = &::s1;
      if ( *(_QWORD *)(v44 + v81 + 8) )
        v49 = *(const char **)(v44 + v81);
      v83 = nullptr;
      v84 = 0;
      sub_169A50(v72, (__int64)"QDesktop\\%s\\Database Windows", v49);
      v50 = &::s1;
      if ( (_QWORD)v84 )
        v50 = v83;
      v85 = nullptr;
      v86 = 0;
      if ( (unsigned __int8)reg_bin_op("Forms", 0, &v85, 0, v50, 2) )
      {
        v46 = (_BYTE *)v86;
        v47 = (void *)(v86 + 1);
        if ( (unsigned __int64)v86 < (__int64)v86 + 1 )
        {
          v60 = (__int64)v85;
          v61 = v86;
          v62 = 1;
          if ( *((_QWORD *)&v86 + 1) < (unsigned __int64)v47 )
          {
            v79 = (_BYTE *)v86;
            v77 = (void *)(v86 + 1);
            v71 = qvector_reserve(&v85, v85, v86 + 1, 1);
            v47 = v77;
            v85 = (const char *)v71;
            v60 = v71;
            v61 = v86;
            v46 = v79;
            v62 = (size_t)v77 - v86;
          }
          v78 = v47;
          v76 = v46;
          memset((void *)(v60 + v61), 0, v62);
          v46 = v76;
          v48 = v78;
        }
        else
        {
          v48 = nullptr;
        }
        *(_QWORD *)&v86 = v48;
        v43 = v50;
        v46[(_QWORD)v85] = 0;
        reg_str_set("Views", v50, v85);
      }
      else
      {
        v43 = "Forms";
        s1 = nullptr;
        v88 = 0;
        v51 = reg_str_get(&s1, "Forms", v50);
        v52 = s1;
        if ( v51 )
        {
          if ( (unsigned __int64)v88 > 0xA )
          {
            v43 = "@ByteArray";
            if ( !strncmp(s1, "@ByteArray", 0xAu) )
            {
              v43 = (const char *)&qword_28;
              v53 = strchr(v52, 40);
              if ( v53 )
              {
                v43 = (_BYTE *)(&qword_28 + 1);
                v75 = v53 + 1;
                v54 = strchr(v53 + 1, 41);
                if ( v54 )
                {
                  if ( v54 >= v75 )
                  {
                    *v54 = 0;
                    v43 = v50;
                    reg_str_set("Views", v50, v75);
                    v52 = s1;
                  }
                }
              }
            }
          }
        }
        if ( v52 )
        {
          *(_QWORD *)&v88 = 0;
          qfree(v52, v43);
        }
      }
      if ( v85 )
      {
        *(_QWORD *)&v86 = 0;
        qfree(v85, v43);
      }
      if ( v83 )
      {
        *(_QWORD *)&v84 = 0;
        qfree(v83, v43);
      }
      v44 += 24;
    }
    while ( v44 != v45 );
  }
  v55 = v81;
  if ( v81 )
  {
    v56 = v82;
    if ( (_QWORD)v82 )
    {
      v57 = 0;
      do
      {
        v58 = (__int64 *)(v55 + 24 * v57);
        v59 = *v58;
        if ( *v58 )
        {
          v58[1] = 0;
          qfree(v59, v43);
          v55 = v81;
        }
        ++v57;
      }
      while ( v56 != v57 );
    }
    *(_QWORD *)&v82 = 0;
    qfree(v55, v43);
  }
  sub_1A1F60((__int64)&s1, "QDesktop");
  sub_1D17F0((__int64)&s1);
  if ( s1 )
  {
    *(_QWORD *)&v88 = 0;
    qfree(s1, "QDesktop");
  }
  return reg_int_op("RegistryVersion", 1, 670, 0);
}
