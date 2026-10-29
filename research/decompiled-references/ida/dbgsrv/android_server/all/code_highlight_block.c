/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: code_highlight_block
// Address: 0x000000000006D0C8

//----- (000000000006D0C8) ----------------------------------------------------
unsigned __int8 *__fastcall code_highlight_block(unsigned __int8 *result, __int64 a2, __int64 a3)
{
  __int64 v3; // x29
  unsigned __int8 *v4; // x20
  char **v5; // x27
  int v6; // w0
  char v7; // w24
  unsigned int *v8; // x28
  char *v9; // x24
  char *v10; // x24
  _DWORD *v11; // x21
  unsigned __int8 *v12; // x19
  unsigned int utf8_char; // w0
  unsigned int v14; // w25
  char *v15; // x24
  unsigned __int64 v16; // x23
  __int64 v17; // x26
  unsigned __int64 v18; // x25
  __int64 v19; // x21
  unsigned __int64 v20; // x8
  _QWORD *v21; // x21
  unsigned __int64 v22; // t1
  char *v23; // x8
  __int64 v24; // x8
  char *v25; // x25
  char *v26; // x23
  char *v27; // x24
  unsigned __int8 *v28; // x8
  int v29; // w0
  int v30; // w0
  char *v31; // x2
  unsigned __int64 v32; // x8
  char *v33; // x25
  int v34; // w0
  __int64 v35; // x21
  __int64 align; // x19
  int v37; // w0
  unsigned int v38; // w3
  __int64 v39; // x8
  _QWORD *v40; // x23
  __int64 v41; // x21
  int v42; // w0
  _BOOL4 v43; // w8
  unsigned int v44; // w8
  unsigned __int64 v45; // x27
  __int64 v46; // x29
  unsigned __int64 v47; // x28
  const char *v48; // x26
  const char ***v49; // x8
  __int64 v50; // x9
  const char **v51; // x25
  __int64 v52; // x19
  __int64 v53; // x23
  const char **v54; // x21
  int v55; // w21
  void *v56; // x0
  char *v57; // x28
  int v58; // w0
  int v59; // w26
  __int64 v60; // x19
  unsigned __int8 *v61; // x0
  __int64 v62; // x27
  __int64 v63; // x25
  int v64; // w0
  char *v65; // x24
  int v66; // w8
  int v67; // w0
  unsigned __int64 v68; // x23
  int v69; // w0
  char v70; // w29
  unsigned __int64 v71; // x27
  int v72; // w0
  int v73; // w0
  __int64 v74; // x26
  int v75; // w0
  int v76; // w0
  __int64 v77; // x23
  _QWORD *v78; // x26
  __int64 v79; // x0
  __int64 v80; // x25
  int v81; // w0
  int v82; // w0
  int v83; // w0
  bool v84; // cf
  char *v85; // x8
  int v86; // w0
  unsigned int v87; // [xsp+0h] [xbp-E0h]
  unsigned int v88; // [xsp+4h] [xbp-DCh]
  char v89; // [xsp+4h] [xbp-DCh]
  size_t v90; // [xsp+8h] [xbp-D8h]
  char **v91; // [xsp+18h] [xbp-C8h]
  __int64 v92; // [xsp+20h] [xbp-C0h]
  bool v93; // [xsp+20h] [xbp-C0h]
  char *v94; // [xsp+28h] [xbp-B8h]
  unsigned int *v95; // [xsp+30h] [xbp-B0h]
  __int64 v96; // [xsp+38h] [xbp-A8h]
  int v97; // [xsp+38h] [xbp-A8h]
  char *s; // [xsp+50h] [xbp-90h] BYREF
  pthread_mutex_t ptr; // [xsp+58h] [xbp-88h] BYREF

  ptr.__list.__next = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  s = *(char **)a3;
  v94 = s;
  if ( !s )
    return result;
  v3 = a2;
  v4 = result;
  v5 = (char **)a3;
  v90 = *(_QWORD *)(a3 + 8);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, 0);
  *((_QWORD *)v4 + 20) = s;
  *((_QWORD *)v4 + 21) = v94;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  if ( v6 < 1 )
  {
    *((_DWORD *)v4 + 44) = 0;
    v8 = (unsigned int *)(v4 + 176);
  }
  else
  {
    v7 = v6;
    if ( (v6 & 0xF) != 0 )
      sub_6CF64((__int64)v4, v3, (v6 & 0xF) - 1, (const char **)&s);
    if ( (v7 & 0x10) != 0 )
    {
      v9 = s;
      v10 = &v9[strlen(s)];
      s = v10;
      v11 = v4 + 128;
      sub_6CCE4(v4, v3, (unsigned __int64)v10, *((_DWORD *)v4 + 32));
      if ( (unsigned __int8)*(v10 - 1) == v4[184] )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 40LL))(v3, 16);
      else
        v11 = v4 + 116;
      *((_DWORD *)v4 + 44) = *v11;
      v8 = (unsigned int *)(v4 + 176);
    }
    else
    {
      v8 = (unsigned int *)(v4 + 176);
    }
  }
  v12 = v4 + 116;
  v91 = v5;
  v95 = v8;
LABEL_14:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        ptr.__align = (__int64)s;
        utf8_char = get_utf8_char((unsigned __int8 **)&ptr);
        if ( utf8_char < 0x80 )
        {
          v14 = utf8_char;
          result = (unsigned __int8 *)isspace((unsigned __int8)utf8_char);
          if ( (_DWORD)result )
            goto LABEL_16;
          v15 = s;
          if ( !v14 )
          {
            if ( s != *((char **)v4 + 21) )
              return (unsigned __int8 *)sub_6CCE4(v4, v3, (unsigned __int64)s, *((_DWORD *)v4 + 44));
            return result;
          }
          v16 = *((_QWORD *)v4 + 12);
          if ( v16 )
            goto LABEL_22;
LABEL_26:
          v23 = v15;
          goto LABEL_31;
        }
        v15 = s;
        v16 = *((_QWORD *)v4 + 12);
        if ( !v16 )
          goto LABEL_26;
LABEL_22:
        v17 = *((_QWORD *)v4 + 11);
        v18 = 0;
        while ( 1 )
        {
          v19 = v17 + 48 * v18;
          v22 = *(_QWORD *)(v19 + 8);
          v21 = (_QWORD *)(v19 + 8);
          v20 = v22;
          if ( v22 >= 2 && !strncmp(v15, *(const char **)(v17 + 48 * v18), v20 - 1) )
            break;
          v18 = (int)v18 + 1;
          if ( v16 <= v18 )
            goto LABEL_26;
        }
        sub_6CCE4(v4, v3, (unsigned __int64)v15, *((_DWORD *)v4 + 44));
        if ( *v21 )
          v24 = *v21 - 1LL;
        else
          v24 = 0;
        s += v24;
        sub_6CF64((__int64)v4, v3, v18, (const char **)&s);
        v23 = s;
LABEL_31:
        ptr.__align = (__int64)v23;
        if ( (unsigned int)get_utf8_char((unsigned __int8 **)&ptr) == v4[185] )
        {
          v25 = *((char **)v4 + 21);
          v26 = s;
          if ( v25 == *v5 )
          {
LABEL_37:
            v25 = v26;
LABEL_38:
            sub_6CCE4(v4, v3, (unsigned __int64)v25, *((_DWORD *)v4 + 44));
            v27 = s;
            s = &v27[strlen(s)];
            sub_6CCE4(v4, v3, (unsigned __int64)s, *((_DWORD *)v4 + 32));
            v28 = v12;
            if ( (unsigned __int8)*(s - 1) == v4[184] )
            {
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 40LL))(v3, 16);
              v28 = v4 + 128;
            }
            *v8 = *(_DWORD *)v28;
            continue;
          }
          if ( v25 == s )
            goto LABEL_38;
          while ( (*v25 & 0x80000000) == 0 && isspace((unsigned __int8)*v25) )
          {
            if ( v26 == ++v25 )
              goto LABEL_37;
          }
        }
        else
        {
          v26 = s;
        }
        break;
      }
      ptr.__align = (__int64)v26;
      v29 = get_utf8_char((unsigned __int8 **)&ptr);
      if ( v29 != v4[182] && v29 != v4[180] )
      {
        v32 = *((_QWORD *)v4 + 9);
        v33 = s;
        if ( v32 >= 2 && !strncmp(s, *((const char **)v4 + 8), v32 - 1) )
        {
          sub_6CCE4(v4, v3, (unsigned __int64)v33, *((_DWORD *)v4 + 44));
          v65 = s;
          s = &v65[strlen(s)];
          sub_6CCE4(v4, v3, (unsigned __int64)s, *((_DWORD *)v4 + 30));
          *((_DWORD *)v4 + 44) = *((_DWORD *)v4 + 29);
          continue;
        }
        ptr.__align = (__int64)v33;
        v34 = get_utf8_char((unsigned __int8 **)&ptr);
        if ( v34 != 95 && (v34 & 0xFFFFFFDF) - 65 > 0x19 )
        {
          v35 = 0;
          goto LABEL_78;
        }
        do
        {
          do
          {
            align = ptr.__align;
            v37 = get_utf8_char((unsigned __int8 **)&ptr);
          }
          while ( (unsigned int)(v37 - 48) < 0xA );
        }
        while ( v37 == 95 || (v37 & 0xFFFFFFDF) - 65 < 0x1A );
        v35 = align - (_QWORD)v33;
        if ( (char *)align == v33 )
        {
LABEL_78:
          v12 = v4 + 116;
          v97 = 1;
          v57 = s;
          if ( !s )
            goto LABEL_148;
          goto LABEL_79;
        }
        v12 = v4 + 116;
        memset(&ptr, 0, 24);
        if ( v35 != -1 )
        {
          ptr.__align = (__int64)qvector_reserve(&ptr, nullptr, v35 + 1, 1u);
          memset((void *)(ptr.__align + *(&ptr.__align + 1)), 0, v35 + 1 - *(&ptr.__align + 1));
          *(&ptr.__align + 1) = v35 + 1;
        }
        *(_BYTE *)(ptr.__align + v35) = 0;
        qstrncpy((pthread_mutex_t *)ptr.__align, s, v35 + 1);
        v38 = *((_DWORD *)v4 + 44);
        v92 = v35;
        *((_DWORD *)&ptr.__align + 6) = v38;
        v39 = 8LL * *((_QWORD *)v4 + 18);
        if ( v39 )
        {
          v40 = *((_QWORD **)v4 + 17);
          v41 = v39 - 8;
          do
          {
            v42 = (*(__int64 (__fastcall **)(_QWORD, __pthread_list_t *, pthread_mutex_t *))(*(_QWORD *)*v40 + 24LL))(
                    *v40,
                    &ptr.__list,
                    &ptr);
            v43 = v41 == 0;
            ++v40;
            v41 -= 8;
          }
          while ( ((v42 | v43) & 1) == 0 );
          v38 = *v8;
          v44 = *((_DWORD *)&ptr.__align + 6);
          v35 = v92;
          if ( *v8 != *((_DWORD *)&ptr.__align + 6) )
          {
LABEL_75:
            if ( v38 != v44 )
              goto LABEL_93;
            goto LABEL_76;
          }
          v45 = *((_QWORD *)v4 + 6);
          if ( v45 )
            goto LABEL_63;
        }
        else
        {
          v44 = v38;
          v45 = *((_QWORD *)v4 + 6);
          if ( v45 )
          {
LABEL_63:
            v87 = v44;
            v88 = v38;
            v96 = v3;
            v46 = *((_QWORD *)v4 + 5);
            v47 = 0;
            if ( *(&ptr.__align + 1) )
              v48 = (const char *)ptr.__align;
            else
              v48 = &byte_F154B;
            while ( 1 )
            {
              v49 = (const char ***)(v46 + 32 * v47);
              v51 = *v49;
              v50 = (__int64)v49[1];
              v52 = v50;
              if ( 8 * v50 )
              {
                v53 = 8 * v50;
                v54 = *v49;
                while ( strcmp(v48, *v54) )
                {
                  v53 -= 8;
                  ++v54;
                  if ( !v53 )
                    goto LABEL_73;
                }
              }
              else
              {
                v54 = *v49;
              }
              if ( v54 != &v51[v52] )
                break;
LABEL_73:
              v47 = (int)v47 + 1;
              if ( v45 <= v47 )
              {
                v8 = v95;
                v3 = v96;
                v5 = v91;
                v35 = v92;
                v12 = v4 + 116;
                v44 = v87;
                v38 = v88;
                goto LABEL_75;
              }
            }
            v66 = *(_DWORD *)(v46 + 32 * v47 + 24);
            v8 = v95;
            v3 = v96;
            v5 = v91;
            v35 = v92;
            v12 = v4 + 116;
            v38 = v88;
            *((_DWORD *)&ptr.__align + 6) = v66;
            if ( v88 != v66 )
            {
LABEL_93:
              sub_6CCE4(v4, v3, (unsigned __int64)s, v38);
              s += v35;
              sub_6CCE4(v4, v3, (unsigned __int64)s, *((unsigned int *)&ptr.__align + 6));
              v55 = 2;
              v56 = (void *)ptr.__align;
              if ( !ptr.__align )
                goto LABEL_95;
              goto LABEL_94;
            }
LABEL_76:
            v55 = 0;
            v56 = (void *)ptr.__align;
            if ( !ptr.__align )
            {
LABEL_95:
              if ( v55 )
                continue;
              v35 = v92;
              v97 = 0;
              v57 = s;
              if ( !s )
                goto LABEL_148;
LABEL_79:
              ptr.__align = (__int64)v57;
              v58 = get_utf8_char((unsigned __int8 **)&ptr);
              if ( !v58 )
                goto LABEL_148;
              v59 = v58;
              v60 = v3;
              sub_4968C(&ptr, v94, v90);
              if ( *(&ptr.__align + 1) )
                v61 = (unsigned __int8 *)ptr.__align;
              else
                v61 = (unsigned __int8 *)&byte_F154B;
              v62 = qustrlen(v61);
              if ( (unsigned int)(v59 - 48) >= 0xA )
              {
                v63 = 0;
                switch ( v59 )
                {
                  case '+':
                  case '-':
                    if ( v57 != v94 )
                    {
                      ptr.__list.__prev = (struct __pthread_internal_list *)v57;
                      prev_utf8_char(nullptr, (unsigned __int8 **)&ptr.__list, (unsigned __int64)v94);
                      v64 = get_utf8_char((unsigned __int8 **)&ptr.__list);
                      v63 = 0;
                      if ( v64 == 46 || (unsigned int)(v64 - 48) < 0xA || (v64 & 0xFFFFFFDF) - 65 < 0x1A )
                        goto LABEL_144;
                    }
                    break;
                  case ',':
                  case '/':
                  case ':':
                  case ';':
                  case '<':
                  case '=':
                  case '>':
                  case '?':
                  case '@':
                  case 'A':
                  case 'B':
                  case 'C':
                  case 'D':
                    goto LABEL_144;
                  case '.':
                  case 'E':
                    break;
                  default:
                    if ( v59 == 101 )
                      break;
                    goto LABEL_144;
                }
              }
              ptr.__list.__prev = (struct __pthread_internal_list *)v57;
              skip_utf8((unsigned __int8 **)&ptr.__list, 1);
              v67 = get_utf8_char((unsigned __int8 **)&ptr.__list);
              v68 = v62 + 1;
              if ( v59 == 48 && (v67 | 0x20) == 0x78 )
              {
                ptr.__list.__prev = (struct __pthread_internal_list *)v57;
                skip_utf8((unsigned __int8 **)&ptr.__list, 2);
                v69 = get_utf8_char((unsigned __int8 **)&ptr.__list);
                v70 = 0;
                if ( v69 == 46 )
                {
                  v71 = 2;
                }
                else
                {
                  if ( (unsigned int)(v69 - 48) < 0xA )
                  {
                    v71 = 2;
                    if ( v68 <= 2 )
                    {
LABEL_143:
                      v63 = v71;
                      goto LABEL_144;
                    }
LABEL_116:
                    v93 = v59 == 46;
                    v89 = 1;
LABEL_117:
                    v63 = v71;
                    while ( 1 )
                    {
                      ptr.__list.__prev = (struct __pthread_internal_list *)v57;
                      if ( v63 < 1 )
                      {
                        if ( v63 < 0 )
                        {
                          if ( !under_debugger )
                          {
                            interr(1834);
LABEL_185:
                            if ( !under_debugger )
                            {
                              interr(1834);
LABEL_187:
                              if ( !under_debugger )
                                interr(1834);
                            }
                          }
                          __break(1u);
                        }
                      }
                      else
                      {
                        skip_utf8((unsigned __int8 **)&ptr.__list, v63);
                      }
                      v73 = get_utf8_char((unsigned __int8 **)&ptr.__list);
                      if ( v73 != 46 && (unsigned int)(v73 - 48) >= 0xA && (v73 & 0xFFFFFFDF) - 65 > 0x19 )
                        goto LABEL_144;
                      v74 = v63 - 1;
                      ptr.__list.__prev = (struct __pthread_internal_list *)v57;
                      if ( v63 >= 1 )
                        skip_utf8((unsigned __int8 **)&ptr.__list, v63);
                      v75 = get_utf8_char((unsigned __int8 **)&ptr.__list);
                      if ( v70 & 1 | ((unsigned int)(v75 - 48) < 0xA) )
                      {
                        if ( (unsigned int)(v75 - 48) > 9 )
                          goto LABEL_128;
LABEL_133:
                        if ( ++v63 >= v68 )
                          goto LABEL_144;
                      }
                      else
                      {
                        if ( (v75 & 0xFFFFFFDF) - 65 < 6 )
                          goto LABEL_133;
LABEL_128:
                        if ( v75 != 46 )
                        {
                          if ( (v75 | 0x20) == 101 && (v89 & 1) != 0 )
                          {
                            v71 = v63 + 1;
                            ptr.__list.__prev = (struct __pthread_internal_list *)v57;
                            if ( v63 + 1 < 1 )
                              goto LABEL_187;
                            skip_utf8((unsigned __int8 **)&ptr.__list, v63 + 1);
                            v76 = get_utf8_char((unsigned __int8 **)&ptr.__list);
                            if ( v76 == 43 || v76 == 45 )
                              v71 = v63 + 2;
                            v63 = v71;
                            v89 = 0;
                            if ( v71 >= v68 )
                              goto LABEL_144;
                            goto LABEL_117;
                          }
                          if ( !v63 || v75 != 76 )
                            goto LABEL_113;
                          if ( ++v63 >= v68 )
                            goto LABEL_166;
                          ptr.__list.__prev = (struct __pthread_internal_list *)v57;
                          if ( v63 < 1 )
                            goto LABEL_185;
                          skip_utf8((unsigned __int8 **)&ptr.__list, v63);
                          v82 = get_utf8_char((unsigned __int8 **)&ptr.__list);
                          if ( v82 == 46 || (unsigned int)(v82 - 48) < 0xA || (v82 & 0xFFFFFFDF) - 65 < 0x1A )
                            goto LABEL_113;
LABEL_166:
                          ptr.__list.__prev = (struct __pthread_internal_list *)v57;
                          if ( v74 >= 1 )
                            skip_utf8((unsigned __int8 **)&ptr.__list, v74);
                          v83 = get_utf8_char((unsigned __int8 **)&ptr.__list);
                          v84 = (unsigned int)(v83 - 48) >= 0xA;
                          if ( !(v70 & 1 | ((unsigned int)(v83 - 48) < 0xA)) )
                            v84 = (v83 & 0xFFFFFFDF) - 65 >= 6;
                          if ( v84 )
LABEL_113:
                            v63 = 0;
LABEL_144:
                          v3 = v60;
                          v5 = v91;
                          v12 = v4 + 116;
                          if ( ptr.__align )
                          {
                            *(&ptr.__align + 1) = 0;
                            qfree((void *)ptr.__align);
                            ptr.__align = 0;
                            *(&ptr.__align + 2) = 0;
                          }
                          if ( v63 )
                          {
                            sub_6CCE4(v4, v3, (unsigned __int64)s, *((_DWORD *)v4 + 44));
                            skip_utf8((unsigned __int8 **)&s, v63);
                            sub_6CCE4(v4, v3, (unsigned __int64)s, 7u);
                            v8 = v95;
                            goto LABEL_14;
                          }
LABEL_148:
                          v77 = 8LL * *((_QWORD *)v4 + 18);
                          if ( v77 )
                          {
                            v78 = *((_QWORD **)v4 + 17);
                            do
                            {
                              v79 = (*(__int64 (__fastcall **)(_QWORD, pthread_mutex_t *, char *))(*(_QWORD *)*v78 + 16LL))(
                                      *v78,
                                      &ptr,
                                      s);
                              if ( v79 >= 1 )
                              {
                                v80 = v79;
                                sub_6CCE4(v4, v3, (unsigned __int64)s, *((_DWORD *)v4 + 44));
                                skip_utf8((unsigned __int8 **)&s, v80);
                                sub_6CCE4(v4, v3, (unsigned __int64)s, ptr.__lock);
                                *((_DWORD *)v4 + 44) = *((_DWORD *)v4 + 29);
                              }
                              v77 -= 8;
                              ++v78;
                            }
                            while ( v77 );
                          }
                          if ( v97 )
                          {
                            ptr.__align = (__int64)s;
                            v81 = get_utf8_char((unsigned __int8 **)&ptr);
                            v8 = v95;
                            if ( v81 == 46 || (unsigned int)(v81 - 48) < 0xA || (v81 & 0xFFFFFFDF) - 65 <= 0x19 )
                            {
                              do
                              {
                                if ( (unsigned int)get_utf8_char((unsigned __int8 **)&s) == -1 )
                                  v85 = ++s;
                                else
                                  v85 = s;
                                ptr.__align = (__int64)v85;
                                v86 = get_utf8_char((unsigned __int8 **)&ptr);
                              }
                              while ( v86 == 46 || (unsigned int)(v86 - 48) < 0xA || (v86 & 0xFFFFFFDF) - 65 <= 0x19 );
                            }
                          }
                          else
                          {
                            v8 = v95;
                            s += v35;
                          }
                          if ( v15 == s )
                          {
LABEL_16:
                            if ( (unsigned int)get_utf8_char((unsigned __int8 **)&s) == -1 )
                              ++s;
                          }
                          goto LABEL_14;
                        }
                        if ( v93 )
                          goto LABEL_113;
                        ++v63;
                        v93 = 1;
                        if ( v63 >= v68 )
                          goto LABEL_144;
                      }
                    }
                  }
                  v71 = 2;
                  if ( (v69 & 0xFFFFFFDF) - 65 > 0x19 )
                    goto LABEL_113;
                }
              }
              else
              {
                v71 = 1;
                v70 = 1;
                if ( (unsigned int)(v59 - 43) <= 0x3A
                  && ((1LL << ((unsigned __int8)v59 - 43)) & 0x400000004000005LL) != 0 )
                {
                  if ( v68 < 2 )
                    goto LABEL_113;
                  ptr.__list.__prev = (struct __pthread_internal_list *)v57;
                  skip_utf8((unsigned __int8 **)&ptr.__list, 1);
                  v72 = get_utf8_char((unsigned __int8 **)&ptr.__list);
                  v71 = 1;
                  v70 = 1;
                  if ( v72 != 46 && (unsigned int)(v72 - 48) >= 0xA && (v72 & 0xFFFFFFDF) - 65 > 0x19 )
                    goto LABEL_113;
                }
              }
              if ( v71 >= v68 )
                goto LABEL_143;
              goto LABEL_116;
            }
LABEL_94:
            *(&ptr.__align + 1) = 0;
            qfree(v56);
            ptr.__align = 0;
            *(&ptr.__align + 2) = 0;
            goto LABEL_95;
          }
        }
        v5 = v91;
        if ( v38 != v44 )
          goto LABEL_93;
        goto LABEL_76;
      }
      break;
    }
    v4[112] = v29;
    sub_6CCE4(v4, v3, (unsigned __int64)s, *((_DWORD *)v4 + 44));
    v30 = get_utf8_char((unsigned __int8 **)&s);
    v31 = s;
    if ( v30 == -1 )
      v31 = ++s;
    result = sub_6CE6C((__int64)v4, v3, (unsigned __int8 *)v31, v4[112]);
    s = (char *)result;
    if ( result )
      continue;
    return result;
  }
}
// 6D6B8: the cases 48, 49, 50, 51, 52, 53, 54, 55, 56, 57 were optimized away because w26.4 is in (1..2F|>=3Au)
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
