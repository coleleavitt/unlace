__int64 __fastcall sub_39F0D0(__int64 a1, unsigned __int64 *a2, _BYTE *a3, char *a4, char a5)
{
  unsigned int v5; // ebx
  char *p_s; // rbx
  __int64 v11; // rax
  char *v12; // r15
  unsigned int v13; // edi
  const char *v14; // rsi
  char *v15; // rax
  unsigned __int64 v16; // rax
  char *v17; // rsi
  char *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  char *v21; // rdi
  char v22; // r14
  char *v23; // r9
  unsigned __int64 v24; // rdx
  char *v25; // rdi
  __int64 name_ea; // rax
  int v27; // r8d
  __int64 *v28; // rdi
  int v29; // eax
  unsigned int v30; // eax
  char *v31; // rdi
  size_t v32; // r14
  const char *v33; // rsi
  unsigned __int64 *v34; // rax
  char *v35; // rcx
  bool v36; // cc
  __int64 v37; // rdx
  __int64 v38; // rcx
  char *v39; // rbx
  int v40; // r8d
  int v41; // r9d
  int v42; // r14d
  int v43; // eax
  char *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  char *v48; // r14
  char *v49; // rax
  char *v50; // rdx
  signed __int64 v51; // r9
  char *v52; // r10
  char *v53; // rax
  int default_radix; // eax
  char *v55; // rcx
  __int64 v56; // rbp
  unsigned __int64 v57; // rbx
  char *v58; // rax
  __int64 v59; // rax
  char *v60; // rax
  char *v61; // rax
  __int64 v62; // rax
  char *v65; // [rsp+18h] [rbp-AE0h]
  const char *v66; // [rsp+18h] [rbp-AE0h]
  char *v67; // [rsp+18h] [rbp-AE0h]
  char *v68; // [rsp+20h] [rbp-AD8h]
  char *v69; // [rsp+20h] [rbp-AD8h]
  char *v70; // [rsp+20h] [rbp-AD8h]
  char *v71; // [rsp+20h] [rbp-AD8h]
  __int64 segm_para; // [rsp+28h] [rbp-AD0h]
  char *v73; // [rsp+30h] [rbp-AC8h]
  signed __int64 v74; // [rsp+30h] [rbp-AC8h]
  char *v75; // [rsp+38h] [rbp-AC0h]
  signed __int64 v76; // [rsp+38h] [rbp-AC0h]
  __int64 v77; // [rsp+48h] [rbp-AB0h] BYREF
  __int128 v78; // [rsp+50h] [rbp-AA8h] BYREF
  char *s1; // [rsp+70h] [rbp-A88h] BYREF
  __int128 v80; // [rsp+78h] [rbp-A80h]
  char *v81[4]; // [rsp+90h] [rbp-A68h] BYREF
  char v82[512]; // [rsp+B0h] [rbp-A48h] BYREF
  char s; // [rsp+2B0h] [rbp-848h] BYREF
  char v84[1023]; // [rsp+2B1h] [rbp-847h] BYREF
  char s2[1032]; // [rsp+6B0h] [rbp-448h] BYREF
  unsigned __int64 v86; // [rsp+AB8h] [rbp-40h]

  v86 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v5 = 0;
  if ( *a3 )
  {
    p_s = &s;
    v11 = skip_spaces(a3);
    qstrncpy(&s, v11, 1024);
    v12 = &v84[strlen(&s) - 1];
    if ( &s < v12 )
    {
      do
      {
        v13 = *(v12 - 1);
        if ( v13 > 0x7F )
          break;
        if ( !isspace(v13) )
          break;
        --v12;
      }
      while ( v12 != &s );
    }
    *v12 = 0;
    v14 = *(const char **)(*(_QWORD *)(a1 + 32) + 184LL);
    if ( v14 && !strcmp(&s, v14) )
    {
      v5 = 1;
      *a2 = (unsigned __int64)a4;
      return v5;
    }
    v65 = (char *)sub_505D70(a1 + 1624, a4);
    segm_para = get_segm_para(v65);
    s1 = nullptr;
    v80 = 0;
    sub_510BD0(a1, &s1, v65, 0);
    s2[0] = 0;
    v15 = strrchr(&s, 58);
    v68 = v15;
    if ( v15 )
    {
      v16 = v15 - &s;
      v17 = &s;
      v18 = s2;
      if ( v16 > 0x3FF )
        v16 = 1023;
      if ( (unsigned int)v16 >= 8 )
      {
        v19 = (unsigned int)v16 >> 3;
        qmemcpy(s2, &s, 8 * v19);
        v17 = &v84[8 * v19 - 1];
        v18 = &s2[8 * v19];
      }
      v20 = 0;
      if ( (v16 & 4) != 0 )
      {
        *(_DWORD *)v18 = *(_DWORD *)v17;
        v20 = 4;
      }
      if ( (v16 & 2) != 0 )
      {
        *(_WORD *)&v18[v20] = *(_WORD *)&v17[v20];
        v20 += 2;
      }
      if ( (v16 & 1) != 0 )
        v18[v20] = v17[v20];
      s2[v16] = 0;
      if ( v65 )
      {
        v21 = (char *)haystack;
        if ( (_QWORD)v80 )
          v21 = s1;
        if ( !strcmp(v21, s2) )
          goto LABEL_23;
      }
      v43 = sub_50CB90(a1, v81, s2, v20);
      v22 = (v43 == 1) & (*(_BYTE *)(*(_QWORD *)(a1 + 32) + 328LL) >> 5);
      if ( !v22 )
      {
        if ( !v43 )
        {
          v66 = v84;
          v44 = v84;
          v23 = strchr(v84, 43);
          if ( v23 )
            goto LABEL_24;
          goto LABEL_61;
        }
        segm_para = sub_510110(a1, v81[0]);
LABEL_23:
        v22 = 0;
        p_s = v68 + 1;
        v66 = v68 + 2;
        v23 = strchr(v68 + 2, 43);
        if ( v23 )
        {
LABEL_24:
          v75 = v23;
          v24 = v23 - p_s + 1;
          if ( v24 > 0x200 )
            v24 = 512;
          qstrncpy(v82, p_s, v24);
          v25 = a4;
          name_ea = get_name_ea(a4, v82);
          *a2 = name_ea;
          if ( name_ea == -1 )
          {
LABEL_27:
            if ( v68 )
              goto LABEL_28;
            goto LABEL_53;
          }
          v23 = v75;
LABEL_80:
          v73 = v23;
          default_radix = get_default_radix(v25);
          if ( sub_39E440(v73 + 1, (__int64)v12, (__int64 *)v81, default_radix) )
          {
            v55 = (char *)(*a2 - (unsigned __int64)v81[0]);
            if ( !v22 )
              v55 = &v81[0][*a2];
            *a2 = (unsigned __int64)v55;
            v56 = *(_QWORD *)(a1 + 24);
            v57 = (unsigned __int64)v55;
            if ( *(_DWORD *)(v56 + 24) == 8 )
              goto LABEL_88;
            v78 = 0;
            getinf_buf(26, &v78, 16);
            v58 = *((char **)&v78 + 1);
            if ( v57 < (unsigned __int64)v78 )
              goto LABEL_86;
LABEL_85:
            if ( v57 < (unsigned __int64)v58 )
            {
LABEL_88:
              *a2 = v57;
LABEL_89:
              v5 = 1;
              goto LABEL_33;
            }
LABEL_86:
            v59 = *(_QWORD *)(v56 + 16);
            v57 &= v59;
            if ( v59 == v57 )
              v57 = -1;
            goto LABEL_88;
          }
          goto LABEL_27;
        }
        v44 = v68 + 2;
LABEL_61:
        v22 = 1;
        v23 = strchr(v44, 45);
        if ( !v23 )
        {
          v45 = get_name_ea(a4, p_s);
          *a2 = v45;
          if ( v45 != -1 )
          {
            v46 = sub_505D70(a1 + 1624, v45);
            if ( v46 )
            {
              if ( get_segm_para(v46) == segm_para )
                goto LABEL_89;
            }
          }
          goto LABEL_28;
        }
        goto LABEL_24;
      }
      *v68 = 0;
      v12 = v68;
    }
    if ( v65 )
    {
      v31 = (char *)haystack;
      if ( (_QWORD)v80 )
        v31 = s1;
      if ( !strcmp(v31, &s) )
      {
        *a2 = *(_QWORD *)v65;
        goto LABEL_89;
      }
    }
    memset(v81, 0, 24);
    v32 = strlen(&s);
    v81[0] = (char *)qvector_reserve(v81, 0, v32 + 1, 1);
    v81[1] = (char *)(v32 + 1);
    memmove(v81[0], &s, v32);
    v81[0][v32] = 0;
    if ( !v81[1] )
      goto LABEL_44;
    v48 = v81[0];
    v69 = v81[1];
    v67 = v81[0];
    v49 = strchr(v81[0], 43);
    v50 = v69;
    if ( v49 && (v51 = v49 - v48, v49 - v48 != -1)
      || (v60 = strchr(v48, 45), v50 = v69, v60) && (v51 = v60 - v48, v60 - v48 != -1) )
    {
      if ( v51 )
      {
        v52 = (char *)(v51 + 1);
        if ( (unsigned __int64)v50 < v51 + 1 )
        {
          if ( v81[2] < v52 )
          {
            v76 = v51;
            v71 = (char *)(v51 + 1);
            v61 = (char *)qvector_reserve(v81, v48, v51 + 1, 1);
            v51 = v76;
            v52 = v71;
            v67 = v61;
            v81[0] = v61;
            v50 = v81[1];
          }
          v74 = v51;
          v70 = v52;
          memset(&v67[(_QWORD)v50], 0, v52 - v50);
          v51 = v74;
          v81[1] = v70;
          v67 = v81[0];
        }
        else if ( v50 != (char *)(v51 + 1) )
        {
          v81[1] = (char *)(v51 + 1);
        }
        v67[v51] = 0;
        v53 = v81[1];
      }
      else
      {
        if ( !v48 )
          goto LABEL_76;
        v81[1] = nullptr;
        qfree(v48);
        v81[0] = nullptr;
        v53 = v81[1];
        v81[2] = nullptr;
      }
      v48 = v81[0];
      if ( !v53 )
      {
LABEL_44:
        v33 = haystack;
LABEL_45:
        v34 = (unsigned __int64 *)sub_511C40(a1, v33, 0);
        v22 = 0;
        if ( v34 )
        {
          v22 = 1;
          v35 = &v82[(unsigned __int64)v81[1] + 510];
          v36 = v81[1] <= (_BYTE *)&dword_0 + 1;
          *a2 = *v34;
          if ( !v36 )
            p_s = v35;
        }
        if ( v81[0] )
        {
          v81[1] = nullptr;
          qfree(v81[0]);
        }
        v25 = p_s + 1;
        v66 = p_s + 1;
        v23 = strchr(p_s + 1, 43);
        if ( v23 )
        {
          if ( !v22 )
          {
            v68 = nullptr;
            goto LABEL_24;
          }
          if ( *a2 != -1 )
          {
            v68 = nullptr;
            v22 = 0;
            goto LABEL_80;
          }
        }
        else
        {
          v25 = p_s + 1;
          v23 = strchr(v66, 45);
          if ( !v23 )
          {
            if ( v22 )
            {
              if ( *a2 != -1 )
                goto LABEL_89;
            }
            else
            {
              v62 = get_name_ea(a4, p_s);
              *a2 = v62;
              if ( v62 != -1 )
                goto LABEL_89;
            }
            goto LABEL_53;
          }
          if ( !v22 )
          {
            v22 = 1;
            v68 = nullptr;
            goto LABEL_24;
          }
          if ( *a2 != -1 )
          {
            v68 = nullptr;
            goto LABEL_80;
          }
        }
LABEL_53:
        if ( *p_s == 43 )
        {
          v28 = (__int64 *)v66;
          v39 = (char *)skip_spaces(v66);
          v42 = 1;
LABEL_29:
          if ( (unsigned __int8)(*v39 - 48) > 9u && (v28 = &v77, (unsigned __int8)atob64(&v77, v39, v37, v38, v40, v41))
            || (v29 = get_default_radix(v28),
                LOBYTE(v30) = sub_39E440(v39, (__int64)v12, &v77, v29),
                v5 = v30,
                (_BYTE)v30) )
          {
            v47 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
            if ( v42 == -1 )
              *a2 = (unsigned __int64)&a4[-v77] & v47;
            else
              *a2 = v47 & (unsigned __int64)&a4[v77];
            goto LABEL_89;
          }
          if ( (a5 & 1) != 0 || !(unsigned __int8)eval_expr_long(a2, a4, a3, 0) )
          {
LABEL_33:
            if ( s1 )
            {
              *(_QWORD *)&v80 = 0;
              qfree(s1);
            }
            return v5;
          }
          v56 = *(_QWORD *)(a1 + 24);
          v57 = *a2;
          if ( *(_DWORD *)(v56 + 24) == 8 )
            goto LABEL_88;
          *(_OWORD *)v81 = 0;
          getinf_buf(26, v81, 16);
          v58 = v81[1];
          if ( (char *)v57 < v81[0] )
            goto LABEL_86;
          goto LABEL_85;
        }
        if ( *p_s == 45 )
        {
          v28 = (__int64 *)v66;
          v39 = (char *)skip_spaces(v66);
          v42 = -1;
          goto LABEL_29;
        }
LABEL_28:
        callui(1197, (int)p_s, (int)v81, (int)&callui, v27, (int)v23);
      }
    }
LABEL_76:
    v33 = v48;
    goto LABEL_45;
  }
  return v5;
}
