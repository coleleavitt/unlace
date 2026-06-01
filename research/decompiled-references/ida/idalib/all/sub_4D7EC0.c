__int64 __fastcall sub_4D7EC0(
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
  void *v38; // rbx
  unsigned int v39; // r13d
  unsigned int v40; // eax
  unsigned int v42; // r15d
  int v43; // eax
  size_t v44; // rax
  size_t v45; // r15
  size_t v46; // r14
  unsigned int v47; // eax
  char *v48; // r14
  __int64 v49; // rcx
  unsigned __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // rax
  __int64 *v54; // rdi
  int v55; // ecx
  int v56; // r8d
  int v57; // r9d
  int v58; // r13d
  _QWORD *v59; // rax
  const char *v60; // rax
  size_t v61; // rax
  const char *v62; // r9
  size_t v63; // r8
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // rdx
  unsigned __int64 v67; // rax
  int v68; // ecx
  int v69; // r8d
  int v70; // r9d
  void *v71; // rax
  __int64 v72; // rax
  bool v73; // zf
  __int64 v74; // rcx
  unsigned __int64 v75; // rax
  int v76; // ecx
  int v77; // r8d
  int v78; // r9d
  void *v79; // rdi
  void *v80; // rdx
  unsigned int v81; // eax
  unsigned __int64 v82; // rax
  char *v83; // rsi
  const char *v84; // rdi
  __int64 v85; // rcx
  __int64 v86; // rax
  unsigned __int64 p_s2; // [rsp+0h] [rbp-D8h]
  __int64 v88; // [rsp+8h] [rbp-D0h]
  const char *srca; // [rsp+18h] [rbp-C0h]
  void *srcb; // [rsp+18h] [rbp-C0h]
  _BYTE *srcd; // [rsp+18h] [rbp-C0h]
  void *srcc; // [rsp+18h] [rbp-C0h]
  const char *v93; // [rsp+20h] [rbp-B8h]
  __int64 v94; // [rsp+20h] [rbp-B8h]
  size_t v95; // [rsp+28h] [rbp-B0h]
  char *s2; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v97; // [rsp+38h] [rbp-A0h]
  void *dest; // [rsp+50h] [rbp-88h] BYREF
  __int128 v99; // [rsp+58h] [rbp-80h]
  __int128 v100; // [rsp+70h] [rbp-68h] BYREF
  void (__fastcall *v101)(__int128 *, __int128 *, __int64); // [rsp+80h] [rbp-58h]
  __int64 v102; // [rsp+88h] [rbp-50h]
  unsigned __int64 v103; // [rsp+98h] [rbp-40h]

  v35 = a4;
  v38 = (void *)a2;
  v103 = __readfsqword(0x28u);
  v39 = a4;
  if ( (a4 & 0x400) != 0 )
  {
    BYTE1(v35) = BYTE1(a4) | 0x10;
    v39 = v35;
  }
  v40 = sub_3BC240((__int64)a1, a2, src);
  if ( !(_BYTE)v40 )
    return 0;
  if ( (v39 & 0x4000) != 0 )
    return sub_4D8D10(
             (int)a1,
             a2,
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
    return sub_4D7750(a1, a2, src);
  v42 = v40;
  v43 = sub_3792E0(0x1Eu, a2, src, v39);
  if ( !*src )
  {
LABEL_13:
    s2 = nullptr;
    v97 = 0;
    if ( src )
    {
      v44 = strlen(src);
      v45 = v44 + 1;
      p_s2 = (unsigned __int64)&s2;
      v46 = v44;
      s2 = (char *)qvector_reserve(&s2, 0, v44 + 1, 1);
      *(_QWORD *)&v97 = v45;
      memmove(s2, src, v46);
      s2[v46] = 0;
    }
    else
    {
      p_s2 = (unsigned __int64)&s2;
    }
    LOBYTE(v47) = sub_4CC4A0(*a1, (const void **)&s2, a2, v39);
    v42 = v47;
    if ( !(_BYTE)v47 )
      goto LABEL_23;
    v48 = (char *)haystack;
    if ( (_QWORD)v97 )
      v48 = s2;
    v50 = sub_3BE900(a1, a2, 0);
    if ( (v50 & 0x600) == 0x200 && (unsigned __int64)v97 > 1 )
    {
      if ( (v39 & 0x2000) == 0 )
      {
        if ( (v39 & 0x100) == 0 )
          sub_387DF0(1264, a2, (__int64)v48, v49);
LABEL_23:
        v42 = 0;
LABEL_24:
        if ( s2 )
        {
          *(_QWORD *)&v97 = 0;
          qfree(s2);
        }
        return v42;
      }
      v100 = 0;
      v101 = nullptr;
      v102 = 0;
      sub_3D19E0((_DWORD)a1, a2);
      if ( v101 )
        v101(&v100, &v100, 3);
      v50 = sub_3BE900(a1, a2, 0);
    }
    v51 = sub_5CAA10(a1);
    v88 = v51;
    v99 = 0;
    dest = nullptr;
    if ( (v39 & 0x200) != 0 )
    {
      if ( !v51 )
      {
        v42 = 0;
        if ( (v39 & 0x100) == 0 )
          sub_378D50();
        goto LABEL_24;
      }
      v60 = (const char *)sub_63F640(a1, v51, a2);
      if ( v60 && (srca = v60, v61 = strlen(v60), v62 = srca, (v63 = v61) != 0) )
      {
        v79 = dest;
        v80 = (void *)(v61 + 1);
        if ( *((_QWORD *)&v99 + 1) < v61 + 1 )
        {
          v95 = v61;
          v93 = srca;
          srcc = (void *)(v61 + 1);
          dest = (void *)qvector_reserve(&dest, dest, v80, 1);
          v63 = v95;
          v79 = dest;
          v62 = v93;
          v80 = srcc;
        }
        *(_QWORD *)&v99 = v80;
        srcd = (_BYTE *)v63;
        memmove(v79, v62, v63);
        srcd[(_QWORD)dest] = 0;
      }
      else
      {
        *(_QWORD *)&v99 = 0;
      }
      if ( (unsigned __int64)v97 > 1 )
      {
        if ( (unsigned __int8)sub_63F740(a1, v88, a2, v48) )
        {
          if ( (v50 & 0xC000) != 0x8000 || (unsigned __int8)has_external_refs(v88, a2) )
          {
            p_s2 = v50;
          }
          else
          {
            p_s2 = v50 & 0xFFFFFFFFFFFF7FFFLL;
            if ( a2 != -1 )
              sub_4C7E30((__int64)a1, a2);
          }
          LOWORD(v50) = p_s2 | 0x4000;
          set_abits(a2, 0x4000);
          v54 = a1;
          sub_3D08D0(a1, (void *)a2, p_s2 | 0x4000);
          goto LABEL_57;
        }
        if ( (v39 & 0x100) == 0 )
          sub_378D50();
LABEL_74:
        v42 = 0;
LABEL_64:
        if ( dest )
        {
          *(_QWORD *)&v99 = 0;
          qfree(dest);
        }
        goto LABEL_24;
      }
      sub_63F740(a1, v88, a2, 0);
      if ( (unsigned __int8)sub_4CB340((void *)a2, 0) )
      {
        v74 = v50;
        BYTE1(v74) = BYTE1(v50) & 0xBF;
        v53 = v50 & 0x600;
        v50 = v74;
        if ( v53 == 512 )
        {
          v54 = a1;
          LODWORD(p_s2) = v74;
          sub_3D08D0(a1, (void *)a2, v74);
          LOWORD(v50) = p_s2;
          goto LABEL_57;
        }
      }
      else
      {
        v53 = v50 & 0x600;
        if ( v53 == 512 )
        {
          v54 = a1;
          sub_3D08D0(a1, (void *)a2, v50);
          goto LABEL_57;
        }
      }
    }
    else
    {
      if ( (v50 & 0x4000) == 0 )
      {
        if ( (unsigned __int64)v97 > 1 )
          goto LABEL_32;
        v71 = (void *)v50;
        if ( (v50 & 0xC000) != 0x8000 )
        {
          v64 = v50 & 0x600;
          if ( v64 != 512 )
          {
            if ( (v50 & 0x1000) != 0 )
            {
LABEL_82:
              v50 |= 0x8000u;
              sub_4CB130(a1, a2);
              sub_4CCE50(a1, (__int64 *)&s2, a2, v50, 0);
              v48 = s2;
              LOWORD(v39) = v39 & 0xFDFF;
              goto LABEL_83;
            }
            if ( v64 == 1536 )
            {
LABEL_80:
              if ( (v50 & 0x10000000) == 0 )
                goto LABEL_40;
              goto LABEL_81;
            }
          }
          goto LABEL_83;
        }
        BYTE1(v71) = BYTE1(v50) & 0x7F;
        srcb = v71;
        if ( a2 == -1 )
        {
          v53 = v50 & 0x600;
          if ( v53 != 512 )
            goto LABEL_96;
          sub_3D08D0(a1, (void *)0xFFFFFFFFFFFFFFFFLL, (__int64)srcb);
        }
        else
        {
          v72 = netnode_altval(a1[303], a2, 321);
          if ( v72 )
          {
            v94 = v72;
            netnode_supdel(a1[303], a2, 321);
            netnode_supdel(a1[302], v94, 65);
          }
          v53 = v50 & 0x600;
          if ( v53 != 512 )
          {
LABEL_96:
            v73 = (v50 & 0x1000) == 0;
            v50 = (unsigned __int64)srcb;
            if ( !v73 )
              goto LABEL_82;
LABEL_39:
            if ( v53 != 1536 )
              goto LABEL_40;
            goto LABEL_80;
          }
          sub_3D08D0(a1, (void *)a2, (__int64)srcb);
        }
        LOWORD(v50) = (_WORD)srcb;
        goto LABEL_41;
      }
      get_ea_name(&dest, a2, 0, 0);
      if ( (unsigned __int64)v97 > 1 )
      {
LABEL_32:
        if ( sub_4CC1E0((__int64)v48) )
        {
          if ( (v39 & 0x100) == 0 )
            sub_387D20(1265, a2, (__int64)v48, v52);
          if ( (v50 & 0x4000) != 0 )
          {
            v75 = sub_3BDD60(a1, a2);
            netnode_rename(v75, &byte_22F0C30, 0);
            sub_4E0050(*a1, a2);
            sub_52CCE0(2, 0, a2, v76, v77, v78);
            mark_builtin_widgets(4, 0, 1);
            if ( sub_63F640(a1, v88, a2) )
            {
LABEL_36:
              v50 |= 0x8000u;
              sub_4CB130(a1, a2);
LABEL_37:
              sub_4CCE50(a1, (__int64 *)&s2, a2, v50, 0);
              v48 = s2;
              v53 = v50 & 0x600;
              if ( v53 != 512 )
                goto LABEL_38;
LABEL_83:
              sub_3D08D0(a1, (void *)a2, v50);
              goto LABEL_41;
            }
            v50 &= ~0x4000uLL;
          }
          if ( (v50 & 0xC000) == 0x8000 )
            goto LABEL_37;
          goto LABEL_36;
        }
        if ( sub_4D42D0((__int64)a1, v88, (__int64)v48, 4, -1, -1) )
        {
          if ( (v39 & 0x100) == 0 )
            sub_378D50();
          goto LABEL_74;
        }
        v82 = sub_3BDD60(a1, a2);
        if ( (unsigned __int8)netnode_rename(v82, v48, 0) )
        {
LABEL_135:
          if ( (v50 & 0xC000) == 0x8000 && v38 != (void *)-1LL )
            sub_4C7E30((__int64)a1, (__int64)v38);
          v86 = v50;
          BYTE1(v86) = BYTE1(v50) & 0x3F | 0x40;
          LODWORD(p_s2) = v86;
          sub_3D08D0(a1, v38, v86);
          LOWORD(v50) = p_s2;
          goto LABEL_41;
        }
        if ( (_QWORD)v97 )
        {
          v83 = s2;
          v84 = haystack;
          if ( !(_QWORD)v99 )
            goto LABEL_128;
        }
        else
        {
          v83 = (char *)haystack;
          if ( !(_QWORD)v99 )
            goto LABEL_135;
        }
        v84 = (const char *)dest;
LABEL_128:
        if ( strcmp(v84, v83) )
        {
          if ( (v39 & 0x100) == 0 )
            sub_387D20(1263, (__int64)v38, (__int64)v48, v85);
          goto LABEL_74;
        }
        goto LABEL_135;
      }
      v65 = sub_3BDD60(a1, a2);
      netnode_rename(v65, &byte_22F0C30, 0);
      v50 &= 0xFFFFFFFFFFFF3FFFLL;
      v66 = sub_63F640(a1, v88, a2);
      v67 = v50;
      if ( v66 )
      {
        BYTE1(v67) = BYTE1(v50) | 0x40;
        v50 = v67;
      }
      sub_3D07C0(a1, (void *)a2, v50);
      sub_4E0050(*a1, a2);
      sub_52CCE0(2, 0, a2, v68, v69, v70);
      mark_builtin_widgets(4, 0, 1);
      sub_4CE200(a1, (void *)a2);
      sub_4CE280(a1, (void *)a2);
      v53 = v50 & 0x600;
      if ( v53 == 512 )
        goto LABEL_83;
    }
LABEL_38:
    if ( (v50 & 0x1000) != 0 )
    {
LABEL_81:
      if ( (v50 & 0xC000) == 0 )
        goto LABEL_82;
LABEL_40:
      v54 = a1;
      sub_3D08D0(a1, (void *)a2, v50);
      if ( (v39 & 0x200) == 0 )
      {
LABEL_41:
        if ( (v39 & 0x80u) == 0 )
        {
          if ( (unsigned __int8)sub_756B80(v48) )
            LOBYTE(v39) = v39 | 0x80;
          else
            sub_4CB2B0(a1, (__int64)v38);
        }
        if ( (v39 & 4) != 0 )
          sub_4CE200(a1, v38);
        if ( (v39 & 0x10) != 0 )
          sub_4CE280(a1, v38);
        if ( (v39 & 0x40) != 0 )
          sub_4CE400(a1, v38);
        if ( (v39 & 2) != 0 )
          sub_4CE620(a1, (unsigned __int64)v38);
        if ( (v39 & 8) != 0 )
          sub_4CE6B0(a1, (unsigned __int64)v38);
        if ( (v39 & 0x20) != 0 )
          sub_4CE550(a1, v38);
        if ( (v39 & 0x80u) != 0 )
        {
          sub_4E0050(*a1, v38);
          sub_52CCE0(2, 0, (_DWORD)v38, v55, v56, v57);
          mark_builtin_widgets(4, 0, 1);
        }
        v54 = a1;
        a2 = 0x4000000000040004LL;
        sub_652960(a1, 0x4000000000040004LL, 0, 1);
      }
LABEL_57:
      if ( (get_merge_state(v54, a2) & 2) == 0 )
      {
        v58 = v39 & 0x200;
        if ( (v50 & 0x4000) != 0 && !v58 )
        {
          v81 = (unsigned int)sub_3C5DC0((__int64)a1, (unsigned __int64)v38);
          if ( (v81 & 0x800) == 0 || (v81 & 0xC2000000) == 0x80000000 || (v81 & 0x42000000) == 0x40000000 )
            sub_619740((int)a1, (__int64)v38);
        }
        sub_4D5210((_DWORD)a1, p_s2, v88);
      }
      if ( v88 )
      {
        v59 = (_QWORD *)sub_433DB0((__int64)a1, 1u);
        if ( v59 )
          sub_43F9C0(v59, (__int64)v38, v48);
      }
      goto LABEL_64;
    }
    goto LABEL_39;
  }
  if ( v43 >= 0 )
  {
    if ( v43 != 2 )
      goto LABEL_13;
  }
  else
  {
    return 0;
  }
  return v42;
}
