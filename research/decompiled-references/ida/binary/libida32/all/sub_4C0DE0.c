__int64 __fastcall sub_4C0DE0(
        __int64 *a1,
        __int64 a2,
        _BYTE *src,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void *ptr,
        __int64 a13,
        int a14,
        int a15,
        void *a16,
        __int64 a17,
        int a18,
        int a19,
        int a20,
        int a21,
        __int64 a22,
        int a23,
        int a24,
        __int64 a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        __int64 a35)
{
  unsigned int v35; // eax
  unsigned int v38; // ebx
  unsigned int v39; // r13d
  unsigned int v40; // eax
  int v41; // ecx
  unsigned int v43; // r15d
  int v44; // eax
  size_t v45; // rax
  size_t v46; // r15
  size_t v47; // r14
  unsigned int v48; // eax
  char *v49; // r14
  __int64 v50; // rcx
  unsigned __int64 v51; // r12
  __int64 v52; // rax
  __int64 v53; // rcx
  unsigned __int64 v54; // rax
  __int64 *v55; // rdi
  int v56; // ecx
  int v57; // r8d
  int v58; // r9d
  int v59; // r13d
  _QWORD *v60; // rax
  const char *v61; // rax
  size_t v62; // rax
  const char *v63; // r9
  size_t v64; // r8
  unsigned __int64 v65; // rax
  unsigned int v66; // eax
  __int64 v67; // rdx
  unsigned __int64 v68; // rax
  int v69; // ecx
  int v70; // r8d
  int v71; // r9d
  void *v72; // rax
  unsigned int v73; // eax
  bool v74; // zf
  __int64 v75; // rcx
  unsigned int v76; // eax
  int v77; // ecx
  int v78; // r8d
  int v79; // r9d
  void *v80; // rdi
  void *v81; // rdx
  int v82; // eax
  unsigned int v83; // eax
  char *v84; // rsi
  const char *v85; // rdi
  __int64 v86; // rcx
  __int64 v87; // rax
  unsigned __int64 p_s2; // [rsp+0h] [rbp-D8h]
  __int64 v89; // [rsp+8h] [rbp-D0h]
  const char *srca; // [rsp+18h] [rbp-C0h]
  void *srcb; // [rsp+18h] [rbp-C0h]
  _BYTE *srcd; // [rsp+18h] [rbp-C0h]
  void *srcc; // [rsp+18h] [rbp-C0h]
  const char *v94; // [rsp+20h] [rbp-B8h]
  unsigned int v95; // [rsp+20h] [rbp-B8h]
  size_t v96; // [rsp+28h] [rbp-B0h]
  char *s2; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v98; // [rsp+38h] [rbp-A0h]
  void *dest; // [rsp+50h] [rbp-88h] BYREF
  __int128 v100; // [rsp+58h] [rbp-80h]
  __int128 v101; // [rsp+70h] [rbp-68h] BYREF
  void (__fastcall *v102)(__int128 *, __int128 *, __int64); // [rsp+80h] [rbp-58h]
  __int64 v103; // [rsp+88h] [rbp-50h]
  unsigned __int64 v104; // [rsp+98h] [rbp-40h]

  v35 = a4;
  v38 = a2;
  v104 = __readfsqword(0x28u);
  v39 = a4;
  if ( (a4 & 0x400) != 0 )
  {
    BYTE1(v35) = BYTE1(a4) | 0x10;
    v39 = v35;
  }
  v40 = sub_3B76C0((__int64)a1, a2, src);
  if ( !(_BYTE)v40 )
    return 0;
  if ( (v39 & 0x4000) != 0 )
    return sub_4C1BD0(
             (int)a1,
             (unsigned int)a2,
             src,
             a7,
             a8,
             a9,
             a10,
             a11,
             (int)ptr,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19,
             a20,
             a21,
             a22,
             a23,
             a24,
             a25,
             a26,
             a27,
             a28,
             a29,
             a30,
             a31,
             a32,
             a33,
             a34,
             a35);
  if ( (v39 & 0x800) != 0 )
  {
    v41 = v39;
    BYTE1(v41) = BYTE1(v39) & 0xF7;
    return sub_4C0690(a1, a2, src, v41);
  }
  v43 = v40;
  v44 = sub_375980(0x1Eu, (unsigned int)a2, src, v39);
  if ( !*src )
  {
LABEL_13:
    s2 = nullptr;
    v98 = 0;
    if ( src )
    {
      v45 = strlen(src);
      v46 = v45 + 1;
      p_s2 = (unsigned __int64)&s2;
      v47 = v45;
      s2 = (char *)qvector_reserve(&s2, 0, v45 + 1, 1);
      *(_QWORD *)&v98 = v46;
      memmove(s2, src, v47);
      s2[v47] = 0;
    }
    else
    {
      p_s2 = (unsigned __int64)&s2;
    }
    LOBYTE(v48) = sub_4B5770(*a1, (const void **)&s2, a2, v39);
    v43 = v48;
    if ( !(_BYTE)v48 )
      goto LABEL_23;
    v49 = (char *)haystack;
    if ( (_QWORD)v98 )
      v49 = s2;
    v51 = sub_3B9AA0((__int64)a1, a2, 0);
    if ( (v51 & 0x600) == 0x200 && (unsigned __int64)v98 > 1 )
    {
      if ( (v39 & 0x2000) == 0 )
      {
        if ( (v39 & 0x100) == 0 )
          sub_3840D0(1264, (unsigned int)a2, (__int64)v49, v50);
LABEL_23:
        v43 = 0;
LABEL_24:
        if ( s2 )
        {
          *(_QWORD *)&v98 = 0;
          qfree(s2);
        }
        return v43;
      }
      v101 = 0;
      v102 = nullptr;
      v103 = 0;
      sub_3CC010((_DWORD)a1, a2, 0);
      if ( v102 )
        v102(&v101, &v101, 3);
      v51 = sub_3B9AA0((__int64)a1, a2, 0);
    }
    v52 = sub_5AFCE0(a1);
    v89 = v52;
    v100 = 0;
    dest = nullptr;
    if ( (v39 & 0x200) != 0 )
    {
      if ( !v52 )
      {
        v43 = 0;
        if ( (v39 & 0x100) == 0 )
          sub_375400();
        goto LABEL_24;
      }
      v61 = (const char *)sub_622440(a1, v52, (unsigned int)a2);
      if ( v61 && (srca = v61, v62 = strlen(v61), v63 = srca, (v64 = v62) != 0) )
      {
        v80 = dest;
        v81 = (void *)(v62 + 1);
        if ( *((_QWORD *)&v100 + 1) < v62 + 1 )
        {
          v96 = v62;
          v94 = srca;
          srcc = (void *)(v62 + 1);
          dest = (void *)qvector_reserve(&dest, dest, v81, 1);
          v64 = v96;
          v80 = dest;
          v63 = v94;
          v81 = srcc;
        }
        *(_QWORD *)&v100 = v81;
        srcd = (_BYTE *)v64;
        memmove(v80, v63, v64);
        srcd[(_QWORD)dest] = 0;
      }
      else
      {
        *(_QWORD *)&v100 = 0;
      }
      if ( (unsigned __int64)v98 > 1 )
      {
        if ( (unsigned __int8)sub_622540(a1, v89, (unsigned int)a2, v49) )
        {
          if ( (v51 & 0xC000) != 0x8000 || (unsigned __int8)has_external_refs(v89, (unsigned int)a2) )
          {
            p_s2 = v51;
          }
          else
          {
            p_s2 = v51 & 0xFFFFFFFFFFFF7FFFLL;
            if ( (_DWORD)a2 != -1 )
              sub_4B11A0((__int64)a1, (unsigned int)a2);
          }
          LOWORD(v51) = p_s2 | 0x4000;
          set_abits((unsigned int)a2, 0x4000);
          a2 = (unsigned int)a2;
          v55 = a1;
          sub_3CAF70(a1, a2, p_s2 | 0x4000);
          goto LABEL_57;
        }
        if ( (v39 & 0x100) == 0 )
          sub_375400();
LABEL_74:
        v43 = 0;
LABEL_64:
        if ( dest )
        {
          *(_QWORD *)&v100 = 0;
          qfree(dest);
        }
        goto LABEL_24;
      }
      sub_622540(a1, v89, (unsigned int)a2, 0);
      if ( (unsigned __int8)sub_4B4620((unsigned int)a2, 0) )
      {
        v75 = v51;
        BYTE1(v75) = BYTE1(v51) & 0xBF;
        v54 = v51 & 0x600;
        v51 = v75;
        if ( v54 == 512 )
        {
          a2 = (unsigned int)a2;
          v55 = a1;
          LODWORD(p_s2) = v75;
          sub_3CAF70(a1, a2, v75);
          LOWORD(v51) = p_s2;
          goto LABEL_57;
        }
      }
      else
      {
        v54 = v51 & 0x600;
        if ( v54 == 512 )
        {
          a2 = (unsigned int)a2;
          v55 = a1;
          sub_3CAF70(a1, a2, v51);
          goto LABEL_57;
        }
      }
    }
    else
    {
      if ( (v51 & 0x4000) == 0 )
      {
        if ( (unsigned __int64)v98 > 1 )
          goto LABEL_32;
        v72 = (void *)v51;
        if ( (v51 & 0xC000) != 0x8000 )
        {
          v65 = v51 & 0x600;
          if ( v65 != 512 )
          {
            if ( (v51 & 0x1000) != 0 )
            {
LABEL_82:
              v51 |= 0x8000u;
              sub_4B4410(a1, a2);
              sub_4B60F0(a1, (__int64 *)&s2, a2, v51, 0);
              v49 = s2;
              LOWORD(v39) = v39 & 0xFDFF;
              goto LABEL_83;
            }
            if ( v65 == 1536 )
            {
LABEL_80:
              if ( (v51 & 0x10000000) == 0 )
                goto LABEL_40;
              goto LABEL_81;
            }
          }
          goto LABEL_83;
        }
        BYTE1(v72) = BYTE1(v51) & 0x7F;
        srcb = v72;
        if ( (_DWORD)a2 == -1 )
        {
          v54 = v51 & 0x600;
          if ( v54 != 512 )
            goto LABEL_96;
          sub_3CAF70(a1, 0xFFFFFFFF, (__int64)srcb);
        }
        else
        {
          v73 = netnode_altval(*((unsigned int *)a1 + 583), (unsigned int)a2, 321);
          if ( v73 )
          {
            v95 = v73;
            netnode_supdel(*((unsigned int *)a1 + 583), (unsigned int)a2, 321);
            netnode_supdel(*((unsigned int *)a1 + 582), v95, 65);
          }
          v54 = v51 & 0x600;
          if ( v54 != 512 )
          {
LABEL_96:
            v74 = (v51 & 0x1000) == 0;
            v51 = (unsigned __int64)srcb;
            if ( !v74 )
              goto LABEL_82;
LABEL_39:
            if ( v54 != 1536 )
              goto LABEL_40;
            goto LABEL_80;
          }
          sub_3CAF70(a1, a2, (__int64)srcb);
        }
        LOWORD(v51) = (_WORD)srcb;
        goto LABEL_41;
      }
      get_ea_name(&dest, (unsigned int)a2, 0, 0);
      if ( (unsigned __int64)v98 > 1 )
      {
LABEL_32:
        if ( sub_4B54B0((__int64)v49) )
        {
          if ( (v39 & 0x100) == 0 )
            sub_384000(1265, (unsigned int)a2, (__int64)v49, v53);
          if ( (v51 & 0x4000) != 0 )
          {
            v76 = sub_3B90A0(a1, a2);
            netnode_rename(v76, &byte_22CD811, 0);
            sub_4C8EF0(*a1, (unsigned int)a2);
            sub_514A50(2, 0, a2, v77, v78, v79);
            mark_builtin_widgets(4, 0, 1);
            if ( sub_622440(a1, v89, (unsigned int)a2) )
            {
LABEL_36:
              v51 |= 0x8000u;
              sub_4B4410(a1, a2);
LABEL_37:
              sub_4B60F0(a1, (__int64 *)&s2, a2, v51, 0);
              v49 = s2;
              v54 = v51 & 0x600;
              if ( v54 != 512 )
                goto LABEL_38;
LABEL_83:
              sub_3CAF70(a1, a2, v51);
              goto LABEL_41;
            }
            v51 &= ~0x4000uLL;
          }
          if ( (v51 & 0xC000) == 0x8000 )
            goto LABEL_37;
          goto LABEL_36;
        }
        if ( sub_4BD270((__int64)a1, v89, (__int64)v49, 4, 0xFFFFFFFF, 0xFFFFFFFF) )
        {
          if ( (v39 & 0x100) == 0 )
            sub_375400();
          goto LABEL_74;
        }
        v83 = sub_3B90A0(a1, a2);
        if ( (unsigned __int8)netnode_rename(v83, v49, 0) )
        {
LABEL_135:
          if ( (v51 & 0xC000) == 0x8000 && v38 != -1 )
            sub_4B11A0((__int64)a1, v38);
          v87 = v51;
          BYTE1(v87) = BYTE1(v51) & 0x3F | 0x40;
          LODWORD(p_s2) = v87;
          sub_3CAF70(a1, v38, v87);
          LOWORD(v51) = p_s2;
          goto LABEL_41;
        }
        if ( (_QWORD)v98 )
        {
          v84 = s2;
          v85 = haystack;
          if ( !(_QWORD)v100 )
            goto LABEL_128;
        }
        else
        {
          v84 = (char *)haystack;
          if ( !(_QWORD)v100 )
            goto LABEL_135;
        }
        v85 = (const char *)dest;
LABEL_128:
        if ( strcmp(v85, v84) )
        {
          if ( (v39 & 0x100) == 0 )
            sub_384000(1263, v38, (__int64)v49, v86);
          goto LABEL_74;
        }
        goto LABEL_135;
      }
      v66 = sub_3B90A0(a1, a2);
      netnode_rename(v66, &byte_22CD811, 0);
      v51 &= 0xFFFFFFFFFFFF3FFFLL;
      v67 = sub_622440(a1, v89, (unsigned int)a2);
      v68 = v51;
      if ( v67 )
      {
        BYTE1(v68) = BYTE1(v51) | 0x40;
        v51 = v68;
      }
      sub_3CAE70(a1, a2, v51);
      sub_4C8EF0(*a1, (unsigned int)a2);
      sub_514A50(2, 0, a2, v69, v70, v71);
      mark_builtin_widgets(4, 0, 1);
      sub_4B7460(a1, a2);
      sub_4B74D0(a1, a2);
      v54 = v51 & 0x600;
      if ( v54 == 512 )
        goto LABEL_83;
    }
LABEL_38:
    if ( (v51 & 0x1000) != 0 )
    {
LABEL_81:
      if ( (v51 & 0xC000) == 0 )
        goto LABEL_82;
LABEL_40:
      a2 = (unsigned int)a2;
      v55 = a1;
      sub_3CAF70(a1, a2, v51);
      if ( (v39 & 0x200) == 0 )
      {
LABEL_41:
        if ( (v39 & 0x80u) == 0 )
        {
          if ( (unsigned __int8)sub_7366B0(v49) )
            LOBYTE(v39) = v39 | 0x80;
          else
            sub_4B4590(a1, v38);
        }
        if ( (v39 & 4) != 0 )
          sub_4B7460(a1, v38);
        if ( (v39 & 0x10) != 0 )
          sub_4B74D0(a1, v38);
        if ( (v39 & 0x40) != 0 )
          sub_4B7640(a1, v38);
        if ( (v39 & 2) != 0 )
          sub_4B7850(a1, v38);
        if ( (v39 & 8) != 0 )
          sub_4B78E0(a1, v38);
        if ( (v39 & 0x20) != 0 )
          sub_4B7790(a1, v38);
        if ( (v39 & 0x80u) != 0 )
        {
          sub_4C8EF0(*a1, v38);
          sub_514A50(2, 0, v38, v56, v57, v58);
          mark_builtin_widgets(4, 0, 1);
        }
        v55 = a1;
        a2 = 0x4000000000040004LL;
        sub_635350(a1, 0x4000000000040004LL, 0, 1);
      }
LABEL_57:
      if ( (get_merge_state(v55, a2) & 2) == 0 )
      {
        v59 = v39 & 0x200;
        if ( (v51 & 0x4000) != 0 && !v59 )
        {
          v82 = sub_3C0CC0((__int64)a1, v38);
          if ( (v82 & 0x800) == 0 || (v82 & 0xC2000000) == 0x80000000 || (v82 & 0x42000000) == 0x40000000 )
            sub_5FD630((int)a1, v38);
        }
        sub_4BE170((_DWORD)a1, p_s2, v89);
      }
      if ( v89 )
      {
        v60 = (_QWORD *)sub_41FEF0((__int64)a1, 1u);
        if ( v60 )
          sub_42BC30(v60, v38, v49);
      }
      goto LABEL_64;
    }
    goto LABEL_39;
  }
  if ( v44 >= 0 )
  {
    if ( v44 != 2 )
      goto LABEL_13;
  }
  else
  {
    return 0;
  }
  return v43;
}

