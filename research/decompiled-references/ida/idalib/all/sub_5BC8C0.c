__int64 __fastcall sub_5BC8C0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, char a6)
{
  unsigned int v7; // r13d
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r15
  int v21; // eax
  bool v22; // r15
  __int64 v23; // r14
  char i; // al
  int v25; // eax
  char v26; // al
  __int64 v27; // r15
  int v28; // eax
  bool v29; // r15
  __int64 v30; // r9
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  void *v34; // rdi
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rsi
  void *v38; // rdi
  int v39; // eax
  void *v40; // rdi
  char v41; // [rsp+8h] [rbp-1D0h]
  int v42; // [rsp+8h] [rbp-1D0h]
  __int64 v43; // [rsp+8h] [rbp-1D0h]
  bool v44; // [rsp+8h] [rbp-1D0h]
  __int64 v45; // [rsp+8h] [rbp-1D0h]
  __int64 v46; // [rsp+8h] [rbp-1D0h]
  unsigned __int64 v47; // [rsp+8h] [rbp-1D0h]
  unsigned __int64 v48; // [rsp+8h] [rbp-1D0h]
  __int64 v49; // [rsp+18h] [rbp-1C0h]
  __int64 v50; // [rsp+18h] [rbp-1C0h]
  int v51; // [rsp+20h] [rbp-1B8h]
  int v52; // [rsp+28h] [rbp-1B0h]
  __int64 v53; // [rsp+28h] [rbp-1B0h]
  int v54; // [rsp+28h] [rbp-1B0h]
  int v55; // [rsp+30h] [rbp-1A8h]
  __int64 v56; // [rsp+38h] [rbp-1A0h]
  unsigned __int64 v57; // [rsp+38h] [rbp-1A0h]
  char v58; // [rsp+4Bh] [rbp-18Dh]
  int tinfo_udt_member; // [rsp+4Ch] [rbp-18Ch]
  unsigned __int64 v60; // [rsp+58h] [rbp-180h] BYREF
  __int128 v61; // [rsp+60h] [rbp-178h] BYREF
  __int128 v62; // [rsp+70h] [rbp-168h] BYREF
  void *v63; // [rsp+80h] [rbp-158h]
  __int128 v64; // [rsp+88h] [rbp-150h]
  void *v65; // [rsp+98h] [rbp-140h]
  __int128 v66; // [rsp+A0h] [rbp-138h]
  __int128 v67[3]; // [rsp+B0h] [rbp-128h] BYREF
  char *v68; // [rsp+E0h] [rbp-F8h]
  int v69; // [rsp+E8h] [rbp-F0h]
  __int64 v70; // [rsp+F0h] [rbp-E8h]
  char v71; // [rsp+F8h] [rbp-E0h]
  __int128 v72; // [rsp+100h] [rbp-D8h] BYREF
  void *v73; // [rsp+110h] [rbp-C8h]
  __int128 v74; // [rsp+118h] [rbp-C0h]
  void *ptr; // [rsp+128h] [rbp-B0h]
  __int128 v76; // [rsp+130h] [rbp-A8h]
  _OWORD v77[3]; // [rsp+140h] [rbp-98h] BYREF
  char *v78; // [rsp+170h] [rbp-68h]
  int v79; // [rsp+178h] [rbp-60h]
  __int64 v80; // [rsp+180h] [rbp-58h]
  char v81; // [rsp+188h] [rbp-50h]
  unsigned __int64 v82; // [rsp+198h] [rbp-40h]

  v82 = __readfsqword(0x28u);
  if ( !a2 || *(char *)(a2 + 17) < 0 )
    return 0;
  if ( *(_DWORD *)(a1[3] + 24) == 8 )
  {
    v13 = a5;
    if ( a3 < 0 )
      return 0;
  }
  else
  {
    v13 = (int)a5;
    if ( (int)a3 < 0 )
      return 0;
  }
  if ( v13 >= 0 && (a4 & 0x8000u) == 0 )
  {
    v58 = 0;
    if ( *(_QWORD *)(a2 + 24) != -1 )
    {
LABEL_10:
      v14 = *(_QWORD *)a2;
      v41 = a6;
      v60 = 0;
      v15 = sub_3BDD60(a1, v14);
      if ( v15 == -1 || (v7 = sub_54BE00(a1, &v60, v15), !(_BYTE)v7) )
      {
        v7 = 0;
LABEL_46:
        clear_tinfo_t(&v60);
        return v7;
      }
      v16 = *(_DWORD *)(a1[2] + 8);
      v68 = (char *)&dword_0 + 1;
      v17 = *(_QWORD *)(a2 + 32);
      v62 = 0;
      v63 = nullptr;
      v51 = v16 & 0x8000;
      v65 = nullptr;
      v69 = -1;
      v70 = 0;
      v71 = 0;
      v64 = 0;
      v66 = 0;
      v67[0] = 0;
      if ( v17 == a3 )
      {
        v18 = *(unsigned __int16 *)(a2 + 40);
        if ( a4 == (_WORD)v18 )
        {
          v23 = *(_QWORD *)(a2 + 48);
          if ( a5 == v23 )
          {
            if ( !v41 )
              goto LABEL_42;
            goto LABEL_35;
          }
          goto LABEL_33;
        }
        goto LABEL_14;
      }
      v50 = v17;
      v53 = a3 - v17;
      v61 = 0;
      get_frame_part(&v61, a2, 3);
      if ( v53 >= 0 )
      {
        if ( v51 )
          v43 = 8LL * *((_QWORD *)&v61 + 1);
        else
          v43 = 8 * v61;
        goto LABEL_53;
      }
      if ( v51 )
        v30 = *((_QWORD *)&v61 + 1) + v53;
      else
        v30 = v61;
      v78 = (char *)&dword_0 + 1;
      v43 = 8 * v30;
      v72 = (unsigned __int64)(8 * v30);
      v73 = nullptr;
      ptr = nullptr;
      v79 = -1;
      v80 = 0;
      v81 = 0;
      v56 = v30;
      v74 = 0;
      v76 = 0;
      v77[0] = 0;
      tinfo_udt_member = find_tinfo_udt_member((int)&v72);
      if ( tinfo_udt_member == -1 || (v31 = v50 - a3 + v56, (unsigned __int64)v72 >= 8 * v31) )
      {
        clear_tinfo_t(v77);
        if ( ptr )
        {
          *(_QWORD *)&v76 = 0;
          qfree(ptr);
        }
        v34 = v73;
        if ( v73 )
          goto LABEL_88;
      }
      else
      {
        *(_QWORD *)&v72 = 8 * v31;
        v57 = 8 * v31;
        v32 = find_tinfo_udt_member((int)&v72);
        v33 = -1;
        if ( v32 != -1 )
        {
          if ( (unsigned __int64)v72 < v57 )
            ++v32;
          v33 = v32;
        }
        set_tinfo_property4(&v60, 10, tinfo_udt_member, v33, 0, 0);
        clear_tinfo_t(v77);
        if ( ptr )
        {
          *(_QWORD *)&v76 = 0;
          qfree(ptr);
        }
        v34 = v73;
        if ( v73 )
        {
LABEL_88:
          *(_QWORD *)&v74 = 0;
          qfree(v34);
        }
      }
LABEL_53:
      v78 = (char *)&dword_0 + 1;
      v73 = nullptr;
      ptr = nullptr;
      v79 = -1;
      v80 = 0;
      v81 = 0;
      v72 = (unsigned __int64)v43;
      v74 = 0;
      v76 = 0;
      v77[0] = 0;
      v25 = find_tinfo_udt_member((int)&v72);
      v44 = v7;
      if ( v25 != -1 )
        v44 = (unsigned int)set_tinfo_property4(&v60, 15, v25, v53, 0, 0) == 0;
      clear_tinfo_t(v77);
      if ( ptr )
      {
        *(_QWORD *)&v76 = 0;
        qfree(ptr);
      }
      if ( v73 )
      {
        *(_QWORD *)&v74 = 0;
        qfree(v73);
      }
      if ( !v44 )
        goto LABEL_72;
      v18 = *(unsigned __int16 *)(a2 + 40);
      *(_QWORD *)(a2 + 32) = a3;
      if ( a4 == (_WORD)v18 )
      {
LABEL_32:
        v23 = *(_QWORD *)(a2 + 48);
        if ( a5 == v23 )
          goto LABEL_35;
LABEL_33:
        if ( !v51 )
        {
LABEL_34:
          *(_QWORD *)(a2 + 48) = a5;
LABEL_35:
          if ( v58 )
            sub_5CC740(a1, a2, 0, -1, 0);
          else
            sub_5BAFE0((__int64)a1, a2);
          if ( (unsigned __int8)sub_5C77B0(a1, a2, 0) )
          {
            if ( a5 != v23 )
            {
              for ( i = xrefblk_t_first_to(&v72, *(_QWORD *)a2, 0); i; i = xrefblk_t_next_to(&v72) )
                sub_5CD8C0(a1, v72);
            }
            goto LABEL_42;
          }
          goto LABEL_72;
        }
        v72 = 0;
        get_frame_part(&v72, a2, 0);
        v45 = v72;
        v27 = 8 * v72;
        if ( a5 - v23 >= 0 )
          goto LABEL_65;
        v73 = nullptr;
        ptr = nullptr;
        v78 = (char *)&dword_0 + 1;
        v79 = -1;
        v80 = 0;
        v81 = 0;
        v72 = (unsigned __int64)v27;
        v74 = 0;
        v76 = 0;
        v77[0] = 0;
        v54 = find_tinfo_udt_member((int)&v72);
        if ( v54 == -1 || (unsigned __int64)v72 >= 8 * (v23 + v45 - a5) )
        {
          clear_tinfo_t(v77);
          if ( ptr )
          {
            *(_QWORD *)&v76 = 0;
            qfree(ptr);
          }
          v40 = v73;
          if ( v73 )
            goto LABEL_119;
        }
        else
        {
          *(_QWORD *)&v72 = 8 * (v23 + v45 - a5);
          v48 = v72;
          v39 = find_tinfo_udt_member((int)&v72);
          if ( v39 != -1 )
            v39 += (unsigned __int64)v72 < v48;
          set_tinfo_property4(&v60, 10, v54, v39, 0, 0);
          clear_tinfo_t(v77);
          if ( ptr )
          {
            *(_QWORD *)&v76 = 0;
            qfree(ptr);
          }
          v40 = v73;
          if ( v73 )
          {
LABEL_119:
            *(_QWORD *)&v74 = 0;
            qfree(v40);
          }
        }
LABEL_65:
        v73 = nullptr;
        ptr = nullptr;
        v78 = (char *)&dword_0 + 1;
        v79 = -1;
        v80 = 0;
        v81 = 0;
        v72 = (unsigned __int64)v27;
        v74 = 0;
        v76 = 0;
        v77[0] = 0;
        v28 = find_tinfo_udt_member((int)&v72);
        v29 = v7;
        if ( v28 != -1 )
          v29 = (unsigned int)set_tinfo_property4(&v60, 15, v28, a5 - v23, 0, 0) == 0;
        clear_tinfo_t(v77);
        if ( ptr )
        {
          *(_QWORD *)&v76 = 0;
          qfree(ptr);
        }
        if ( v73 )
        {
          *(_QWORD *)&v74 = 0;
          qfree(v73);
        }
        if ( v29 )
          goto LABEL_34;
LABEL_72:
        v7 = 0;
LABEL_42:
        clear_tinfo_t(v67);
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
        goto LABEL_46;
      }
LABEL_14:
      v61 = 0;
      v52 = a4 - v18;
      get_frame_part(&v61, a2, 2);
      if ( v52 >= 0 )
      {
        v19 = v61;
        if ( v51 )
          v19 = *((_QWORD *)&v61 + 1);
        v49 = v19;
        *(_QWORD *)&v62 = 8 * v61;
        v42 = find_tinfo_udt_member((int)&v62);
        v20 = 8 * v49;
        if ( v42 == -1 || (v70 & 0x200000000000LL) != 0 )
          goto LABEL_20;
        goto LABEL_19;
      }
      if ( v51 )
        v35 = *((_QWORD *)&v61 + 1) + v52;
      else
        v35 = v61;
      v20 = 8 * v35;
      v78 = (char *)&dword_0 + 1;
      v46 = v35;
      v73 = nullptr;
      ptr = nullptr;
      v79 = -1;
      v80 = 0;
      v81 = 0;
      v72 = (unsigned __int64)(8 * v35);
      v74 = 0;
      v76 = 0;
      v77[0] = 0;
      v55 = find_tinfo_udt_member((int)&v72);
      if ( v55 == -1 || (unsigned __int64)v72 >= 8 * (v46 - v52) )
      {
        clear_tinfo_t(v77);
        if ( ptr )
        {
          *(_QWORD *)&v76 = 0;
          qfree(ptr);
        }
        v38 = v73;
        if ( !v73 )
          goto LABEL_19;
      }
      else
      {
        *(_QWORD *)&v72 = 8 * (v46 - v52);
        v47 = v72;
        v36 = find_tinfo_udt_member((int)&v72);
        v37 = -1;
        if ( v36 != -1 )
        {
          if ( (unsigned __int64)v72 < v47 )
            ++v36;
          v37 = v36;
        }
        set_tinfo_property4(&v60, 10, v55, v37, 0, 0);
        clear_tinfo_t(v77);
        if ( ptr )
        {
          *(_QWORD *)&v76 = 0;
          qfree(ptr);
        }
        v38 = v73;
        if ( !v73 )
          goto LABEL_19;
      }
      *(_QWORD *)&v74 = 0;
      qfree(v38);
LABEL_19:
      v42 = -1;
LABEL_20:
      v73 = nullptr;
      ptr = nullptr;
      v78 = (char *)&dword_0 + 1;
      v79 = -1;
      v80 = 0;
      v81 = 0;
      v72 = (unsigned __int64)v20;
      v74 = 0;
      v76 = 0;
      v77[0] = 0;
      v21 = find_tinfo_udt_member((int)&v72);
      v22 = v7;
      if ( v21 != -1 )
        v22 = (unsigned int)set_tinfo_property4(&v60, 15, v21, v52, 0, 0) == 0;
      clear_tinfo_t(v77);
      if ( ptr )
      {
        *(_QWORD *)&v76 = 0;
        qfree(ptr);
      }
      if ( v73 )
      {
        *(_QWORD *)&v74 = 0;
        qfree(v73);
      }
      if ( !v22 )
        goto LABEL_72;
      if ( a4 )
      {
        if ( v42 != -1 )
          set_tinfo_property4(&v60, 10, v42, v42 + 1LL, 0, 0);
        sub_5B7410((__int64)a1, (__int64)&v60, v61, a4, 0x2000);
      }
      *(_WORD *)(a2 + 40) = a4;
      goto LABEL_32;
    }
    v26 = sub_5BC6E0(a1, a2, a3, a4);
    a6 = v26;
    if ( v26 )
    {
      v58 = v26;
      goto LABEL_10;
    }
  }
  return 0;
}
