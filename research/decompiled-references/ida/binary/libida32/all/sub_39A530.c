char __fastcall sub_39A530(__int64 a1, int *a2, _BYTE *a3, unsigned int a4, char a5)
{
  char result; // al
  char *p_s; // rbx
  __int64 v10; // rax
  char *v11; // r15
  unsigned int v12; // edi
  const char *v13; // rsi
  char *v14; // rax
  unsigned __int64 v15; // rax
  char *v16; // rsi
  char *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  char *v20; // rdi
  char v21; // r14
  char *v22; // r12
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  int v25; // eax
  int v26; // r8d
  int v27; // r9d
  char **v28; // rdi
  int v29; // eax
  char *v30; // rdi
  size_t v31; // r14
  const char *v32; // rsi
  int *v33; // rax
  char *v34; // rcx
  bool v35; // cc
  _BYTE *v36; // rbx
  int v37; // r12d
  int default_radix; // eax
  int v39; // eax
  int v40; // eax
  char *v41; // rdi
  unsigned int name_ea; // eax
  __int64 v43; // rax
  char *v44; // r14
  char *v45; // rax
  unsigned __int64 v46; // rdx
  signed __int64 v47; // r9
  unsigned __int64 v48; // r10
  __int64 v49; // rax
  char *v50; // rax
  char *v51; // rax
  char *v52; // rax
  int v53; // eax
  char v55; // [rsp+4h] [rbp-AB4h]
  char *v56; // [rsp+8h] [rbp-AB0h]
  const char *v57; // [rsp+8h] [rbp-AB0h]
  char *v58; // [rsp+8h] [rbp-AB0h]
  char *v59; // [rsp+10h] [rbp-AA8h]
  unsigned __int64 v60; // [rsp+10h] [rbp-AA8h]
  unsigned __int64 v61; // [rsp+10h] [rbp-AA8h]
  signed __int64 v62; // [rsp+10h] [rbp-AA8h]
  int segm_para; // [rsp+1Ch] [rbp-A9Ch]
  __int64 v65; // [rsp+20h] [rbp-A98h]
  signed __int64 v66; // [rsp+20h] [rbp-A98h]
  signed __int64 v67; // [rsp+28h] [rbp-A90h]
  char *s1; // [rsp+30h] [rbp-A88h] BYREF
  __int128 v69; // [rsp+38h] [rbp-A80h]
  char *v70; // [rsp+50h] [rbp-A68h] BYREF
  __int128 v71; // [rsp+58h] [rbp-A60h]
  char v72[512]; // [rsp+70h] [rbp-A48h] BYREF
  char s; // [rsp+270h] [rbp-848h] BYREF
  char v74[1023]; // [rsp+271h] [rbp-847h] BYREF
  char s2[1032]; // [rsp+670h] [rbp-448h] BYREF
  unsigned __int64 v76; // [rsp+A78h] [rbp-40h]

  v76 = __readfsqword(0x28u);
  result = 0;
  if ( !a3 )
    return 0;
  if ( *a3 )
  {
    p_s = &s;
    v10 = skip_spaces(a3);
    qstrncpy(&s, v10, 1024);
    v11 = &v74[strlen(&s) - 1];
    if ( &s < v11 )
    {
      do
      {
        v12 = *(v11 - 1);
        if ( v12 > 0x7F )
          break;
        if ( !isspace(v12) )
          break;
        --v11;
      }
      while ( v11 != &s );
    }
    *v11 = 0;
    v13 = *(const char **)(*(_QWORD *)(a1 + 32) + 184LL);
    if ( v13 && !strcmp(&s, v13) )
    {
      *a2 = a4;
      return 1;
    }
    v65 = a1 + 1552;
    v56 = (char *)sub_4EE820(a1 + 1552, a4);
    segm_para = get_segm_para(v56);
    s1 = nullptr;
    v69 = 0;
    sub_4F9200(a1, &s1, v56, 0);
    s2[0] = 0;
    v14 = strrchr(&s, 58);
    v59 = v14;
    if ( v14 )
    {
      v15 = v14 - &s;
      v16 = &s;
      v17 = s2;
      if ( v15 > 0x3FF )
        v15 = 1023;
      if ( (unsigned int)v15 >= 8 )
      {
        v18 = (unsigned int)v15 >> 3;
        qmemcpy(s2, &s, 8 * v18);
        v16 = &v74[8 * v18 - 1];
        v17 = &s2[8 * v18];
      }
      v19 = 0;
      if ( (v15 & 4) != 0 )
      {
        *(_DWORD *)v17 = *(_DWORD *)v16;
        v19 = 4;
      }
      if ( (v15 & 2) != 0 )
      {
        *(_WORD *)&v17[v19] = *(_WORD *)&v16[v19];
        v19 += 2;
      }
      if ( (v15 & 1) != 0 )
        v17[v19] = v16[v19];
      s2[v15] = 0;
      if ( v56 )
      {
        v20 = (char *)haystack;
        if ( (_QWORD)v69 )
          v20 = s1;
        if ( !strcmp(v20, s2) )
          goto LABEL_23;
      }
      v40 = sub_4F54B0(a1, &v70, s2, v19);
      v21 = (v40 == 1) & (*(_BYTE *)(*(_QWORD *)(a1 + 32) + 328LL) >> 5);
      if ( !v21 )
      {
        if ( !v40 )
        {
          v57 = v74;
          v41 = v74;
          v22 = strchr(v74, 43);
          if ( v22 )
            goto LABEL_24;
          goto LABEL_67;
        }
        segm_para = sub_4F8800(a1, (unsigned int)v70);
LABEL_23:
        v21 = 0;
        p_s = v59 + 1;
        v57 = v59 + 2;
        v22 = strchr(v59 + 2, 43);
        if ( v22 )
          goto LABEL_24;
        v41 = v59 + 2;
LABEL_67:
        v21 = 1;
        v22 = strchr(v41, 45);
        if ( !v22 )
        {
          name_ea = get_name_ea(a4, p_s);
          *a2 = name_ea;
          if ( name_ea != -1 )
          {
            v43 = sub_4EE820(v65, name_ea);
            if ( v43 )
            {
              if ( segm_para == (unsigned int)get_segm_para(v43) )
                goto LABEL_83;
            }
          }
          goto LABEL_28;
        }
LABEL_24:
        v23 = v22 - p_s + 1;
        if ( v23 > 0x200 )
          v23 = 512;
        qstrncpy(v72, p_s, v23);
        v24 = a4;
        v25 = get_name_ea(a4, v72);
        *a2 = v25;
        if ( v25 == -1 )
        {
LABEL_27:
          if ( v59 )
            goto LABEL_28;
          goto LABEL_54;
        }
LABEL_58:
        default_radix = get_default_radix(v24);
        if ( sub_3998A0(v22 + 1, v11, (int *)&v70, default_radix) )
        {
          v39 = *a2 + (_DWORD)v70;
          if ( v21 )
            v39 = *a2 - (_DWORD)v70;
          *a2 = v39;
          goto LABEL_83;
        }
        goto LABEL_27;
      }
      *v59 = 0;
      v11 = v59;
    }
    if ( v56 )
    {
      v30 = (char *)haystack;
      if ( (_QWORD)v69 )
        v30 = s1;
      if ( !strcmp(v30, &s) )
      {
        *a2 = *(_DWORD *)v56;
        goto LABEL_83;
      }
    }
    v70 = nullptr;
    v71 = 0;
    v31 = strlen(&s);
    v70 = (char *)qvector_reserve(&v70, 0, v31 + 1, 1);
    *(_QWORD *)&v71 = v31 + 1;
    memmove(v70, &s, v31);
    v70[v31] = 0;
    if ( !(_QWORD)v71 )
      goto LABEL_45;
    v44 = v70;
    v60 = v71;
    v58 = v70;
    v45 = strchr(v70, 43);
    v46 = v60;
    if ( v45 && (v47 = v45 - v44, v45 - v44 != -1)
      || (v51 = strchr(v44, 45), v46 = v60, v51) && (v47 = v51 - v44, v51 - v44 != -1) )
    {
      if ( v47 )
      {
        v48 = v47 + 1;
        if ( v46 < v47 + 1 )
        {
          if ( *((_QWORD *)&v71 + 1) < v48 )
          {
            v67 = v47;
            v62 = v47 + 1;
            v52 = (char *)qvector_reserve(&v70, v44, v47 + 1, 1);
            v46 = v71;
            v47 = v67;
            v58 = v52;
            v70 = v52;
            v48 = v62;
          }
          v66 = v47;
          v61 = v48;
          memset(&v58[v46], 0, v48 - v46);
          v47 = v66;
          *(_QWORD *)&v71 = v61;
          v58 = v70;
        }
        else if ( v46 != v47 + 1 )
        {
          *(_QWORD *)&v71 = v47 + 1;
        }
        v58[v47] = 0;
        v49 = v71;
      }
      else
      {
        if ( !v44 )
          goto LABEL_80;
        *(_QWORD *)&v71 = 0;
        qfree(v44);
        v70 = nullptr;
        v49 = v71;
        *((_QWORD *)&v71 + 1) = 0;
      }
      v44 = v70;
      if ( !v49 )
      {
LABEL_45:
        v32 = haystack;
LABEL_46:
        v33 = (int *)sub_4FA170(a1, v32, 0);
        v21 = 0;
        if ( v33 )
        {
          v21 = 1;
          v34 = &v72[v71 + 510];
          v35 = (unsigned __int64)v71 <= 1;
          *a2 = *v33;
          if ( !v35 )
            p_s = v34;
        }
        if ( v70 )
        {
          *(_QWORD *)&v71 = 0;
          qfree(v70);
        }
        v24 = (unsigned __int64)(p_s + 1);
        v57 = p_s + 1;
        v22 = strchr(p_s + 1, 43);
        if ( v22 )
        {
          if ( !v21 )
          {
            v59 = nullptr;
            goto LABEL_24;
          }
          if ( *a2 != -1 )
          {
            v59 = nullptr;
            v21 = 0;
            goto LABEL_58;
          }
        }
        else
        {
          v24 = (unsigned __int64)(p_s + 1);
          v50 = strchr(v57, 45);
          if ( !v50 )
          {
            if ( v21 )
            {
              if ( *a2 != -1 )
                goto LABEL_83;
            }
            else
            {
              v53 = get_name_ea(a4, p_s);
              *a2 = v53;
              if ( v53 != -1 )
                goto LABEL_83;
            }
            goto LABEL_54;
          }
          if ( !v21 )
          {
            v22 = v50;
            v21 = 1;
            v59 = nullptr;
            goto LABEL_24;
          }
          if ( *a2 != -1 )
          {
            v59 = nullptr;
            v22 = v50;
            goto LABEL_58;
          }
        }
LABEL_54:
        if ( *p_s == 43 )
        {
          v28 = (char **)v57;
          v36 = (_BYTE *)skip_spaces(v57);
          v37 = 1;
          goto LABEL_29;
        }
        if ( *p_s == 45 )
        {
          v28 = (char **)v57;
          v36 = (_BYTE *)skip_spaces(v57);
          v37 = -1;
LABEL_29:
          if ( (unsigned __int8)(*v36 - 48) <= 9u || (v28 = &v70, !(unsigned __int8)atob32(&v70, v36)) )
          {
            v29 = get_default_radix(v28);
            result = sub_3998A0(v36, v11, (int *)&v70, v29);
            if ( !result )
            {
              if ( (a5 & 1) == 0 )
                result = eval_expr_long(a2, a4, a3, 0);
              goto LABEL_34;
            }
          }
          if ( v37 == -1 )
            *a2 = a4 - (_DWORD)v70;
          else
            *a2 = (_DWORD)v70 + a4;
LABEL_83:
          result = 1;
LABEL_34:
          if ( s1 )
          {
            v55 = result;
            *(_QWORD *)&v69 = 0;
            qfree(s1);
            return v55;
          }
          return result;
        }
LABEL_28:
        callui(1197, (int)p_s, (int)&v70, (int)&callui, v26, v27);
      }
    }
LABEL_80:
    v32 = v44;
    goto LABEL_46;
  }
  return result;
}

