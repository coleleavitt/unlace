_BYTE *__fastcall sub_BD4D30(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int8 v3; // al
  _BYTE *v4; // rax
  _BYTE *v5; // rax
  unsigned int v6; // r15d
  __int16 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // ebx
  _BYTE *v13; // rax
  const char *v14; // rsi
  size_t v15; // r8
  void *v16; // rdi
  _BYTE *result; // rax
  size_t v18; // rax
  unsigned int v19; // edi
  int v20; // eax
  _BYTE *v21; // rdx
  unsigned __int64 v22; // rsi
  size_t v23; // rax
  size_t v24; // rax
  size_t v25; // rax
  size_t v26; // rax
  size_t v27; // rax
  size_t v28; // rax
  size_t v29; // rax
  unsigned int v30; // eax
  int v31; // edx
  unsigned int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rsi
  _BYTE *v35; // rdx
  __int64 v36; // rsi
  _BYTE *v37; // rdx
  __int64 v38; // rsi
  _BYTE *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rsi
  _BYTE *v42; // rdx
  __int64 v43; // rsi
  _BYTE *v44; // rdx
  _BYTE *v45; // rdx
  __int64 v46; // rsi
  _BYTE *v47; // rdx
  int v48; // esi
  _BYTE *v49; // rdx
  int v50; // esi
  unsigned __int8 *v51; // rdx
  unsigned __int8 v52; // bl
  unsigned __int64 v53; // rax
  __int64 v54; // rdi
  int v55; // ecx
  int v56; // r14d
  __int64 v57; // rsi
  _BYTE *v58; // rax
  __int64 v59; // rsi
  _BYTE *v60; // rax
  __int64 v61; // rsi
  _BYTE *v62; // rax
  __int64 v63; // rsi
  _BYTE *v64; // rax
  __int64 v65; // rsi
  _BYTE *v66; // rax
  __int64 v67; // rsi
  _BYTE *v68; // rax
  __int64 v69; // rsi
  _BYTE *v70; // rax
  unsigned __int8 v71; // dl
  unsigned __int8 *v72; // rax
  _BYTE *v73; // rax
  size_t v74; // [rsp+8h] [rbp-50h]
  __int64 v75; // [rsp+8h] [rbp-50h]
  unsigned int v76; // [rsp+8h] [rbp-50h]
  __int64 v77; // [rsp+8h] [rbp-50h]
  __int64 v78; // [rsp+8h] [rbp-50h]
  __int64 v79; // [rsp+8h] [rbp-50h]
  __int64 v80; // [rsp+8h] [rbp-50h]
  __int64 v81; // [rsp+8h] [rbp-50h]
  __int64 v82; // [rsp+8h] [rbp-50h]
  __int64 v83; // [rsp+8h] [rbp-50h]
  int v84; // [rsp+10h] [rbp-48h]
  int v85; // [rsp+14h] [rbp-44h]
  __int64 v86; // [rsp+18h] [rbp-40h]
  __int64 v87; // [rsp+18h] [rbp-40h]
  __int64 v88; // [rsp+18h] [rbp-40h]
  __int64 v89; // [rsp+18h] [rbp-40h]
  __int64 v90; // [rsp+18h] [rbp-40h]
  __int64 v91; // [rsp+18h] [rbp-40h]
  __int64 v92; // [rsp+18h] [rbp-40h]
  __int64 v93; // [rsp+18h] [rbp-40h]

  v2 = a2;
  v3 = (*(_BYTE *)(a1 + 2) >> 3) & 7;
  if ( v3 == 2 )
  {
    sub_971800(a2, "u8");
  }
  else if ( v3 <= 2u )
  {
    if ( v3 == 1 )
    {
      v13 = *(_BYTE **)(a2 + 32);
      if ( *(_QWORD *)(a2 + 24) > (unsigned __int64)v13 )
      {
        *(_QWORD *)(a2 + 32) = v13 + 1;
        *v13 = 76;
        v5 = *(_BYTE **)(a2 + 32);
        if ( (unsigned __int64)v5 < *(_QWORD *)(a2 + 24) )
          goto LABEL_8;
        goto LABEL_18;
      }
      sub_2257CD0(a2, 76);
    }
  }
  else if ( v3 == 3 )
  {
    v73 = *(_BYTE **)(a2 + 32);
    if ( (unsigned __int64)v73 >= *(_QWORD *)(a2 + 24) )
    {
      sub_2257CD0(a2, 117);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v73 + 1;
      *v73 = 117;
    }
  }
  else if ( v3 == 4 )
  {
    v4 = *(_BYTE **)(a2 + 32);
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a2 + 24) )
    {
      sub_2257CD0(a2, 85);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v4 + 1;
      *v4 = 85;
    }
  }
  v5 = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)v5 < *(_QWORD *)(a2 + 24) )
  {
LABEL_8:
    *(_QWORD *)(a2 + 32) = v5 + 1;
    *v5 = 34;
    goto LABEL_9;
  }
LABEL_18:
  sub_2257CD0(a2, 34);
LABEL_9:
  v84 = *(_DWORD *)(a1 + 16);
  v85 = v84;
  if ( !v84 )
    goto LABEL_25;
  v6 = 0;
  while ( 2 )
  {
    v9 = (*(_WORD *)(a1 + 2) >> 6) & 7;
    if ( ((*(_WORD *)(a1 + 2) >> 6) & 7) == 2 )
    {
      v10 = *(unsigned int *)(a1 + 4);
      v11 = a1 + 20;
      v12 = *(unsigned __int16 *)(a1 + 20 + 2LL * v6 + 4 * v10);
    }
    else
    {
      v10 = *(unsigned int *)(a1 + 4);
      v11 = a1 + 20;
      if ( (_BYTE)v9 == 4 )
        v12 = *(_DWORD *)(a1 + 20 + 4 * (v10 + v6));
      else
        v12 = *(unsigned __int8 *)(a1 + 20 + 4 * v10 + v6);
    }
    switch ( v12 )
    {
      case 7u:
        v93 = v11;
        v83 = v10;
        v29 = j__strlen("\\a");
        v10 = v83;
        v11 = v93;
        v14 = "\\a";
        v15 = v29;
        goto LABEL_28;
      case 8u:
        v92 = v11;
        v82 = v10;
        v28 = j__strlen("\\b");
        v10 = v82;
        v11 = v92;
        v14 = "\\b";
        v15 = v28;
        goto LABEL_28;
      case 9u:
        v91 = v11;
        v81 = v10;
        v27 = j__strlen("\\t");
        v11 = v91;
        v10 = v81;
        v14 = "\\t";
        v15 = v27;
        goto LABEL_28;
      case 0xAu:
        v86 = v11;
        v75 = v10;
        v18 = j__strlen("\\n");
        v10 = v75;
        v11 = v86;
        v14 = "\\n";
        v15 = v18;
        goto LABEL_28;
      case 0xBu:
        v14 = "\\v";
        v15 = 2;
        goto LABEL_20;
      case 0xCu:
        v90 = v11;
        v80 = v10;
        v26 = j__strlen("\\f");
        v10 = v80;
        v11 = v90;
        v14 = "\\f";
        v15 = v26;
        goto LABEL_28;
      case 0xDu:
        v89 = v11;
        v79 = v10;
        v25 = j__strlen("\\r");
        v10 = v79;
        v11 = v89;
        v14 = "\\r";
        v15 = v25;
        goto LABEL_28;
      case 0x22u:
        v88 = v11;
        v78 = v10;
        v24 = j__strlen("\\\"");
        v10 = v78;
        v11 = v88;
        v14 = "\\\"";
        v15 = v24;
        goto LABEL_28;
      case 0x5Cu:
        v87 = v11;
        v77 = v10;
        v23 = j__strlen("\\\\");
        v10 = v77;
        v11 = v87;
        v14 = "\\\\";
        v15 = v23;
LABEL_28:
        if ( !v15 )
          goto LABEL_29;
LABEL_20:
        v16 = *(void **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v16 < v15 )
        {
          sub_22581D0(a2, v14, v15);
        }
        else
        {
          v74 = v15;
          memcpy(v16, v14, v15);
          *(_QWORD *)(a2 + 32) += v74;
        }
        ++v6;
        goto LABEL_23;
      default:
LABEL_29:
        v19 = v6 + 1;
        v76 = v6 + 1;
        v20 = (*(_BYTE *)(a1 + 2) >> 3) & 7;
        if ( v20 != 3 )
        {
          if ( v12 <= 0xFF )
          {
            if ( v85 + 1 == v6 )
              goto LABEL_82;
            goto LABEL_32;
          }
          if ( v20 != 1 )
          {
LABEL_57:
            if ( v12 <= 0x10FFFF && v12 - 55296 > 0x7FF )
              goto LABEL_59;
          }
          sub_971800(a2, "\\x");
          v85 = v6++;
          if ( v12 >> 28 )
          {
            v56 = 28;
LABEL_92:
            v57 = (unsigned __int8)a0123456789abcd_2[(v12 >> v56) & 0xF];
            v58 = *(_BYTE **)(a2 + 32);
            if ( *(_QWORD *)(a2 + 24) <= (unsigned __int64)v58 )
            {
              sub_2257CD0(a2, v57);
            }
            else
            {
              *(_QWORD *)(a2 + 32) = v58 + 1;
              *v58 = v57;
            }
            if ( v56 - 4 >= 0 )
            {
              v59 = (unsigned __int8)a0123456789abcd_2[(v12 >> (v56 - 4)) & 0xF];
              v60 = *(_BYTE **)(a2 + 32);
              if ( *(_QWORD *)(a2 + 24) <= (unsigned __int64)v60 )
              {
                sub_2257CD0(a2, v59);
              }
              else
              {
                *(_QWORD *)(a2 + 32) = v60 + 1;
                *v60 = v59;
              }
              if ( v56 - 8 >= 0 )
              {
                v61 = (unsigned __int8)a0123456789abcd_2[(v12 >> (v56 - 8)) & 0xF];
                v62 = *(_BYTE **)(a2 + 32);
                if ( *(_QWORD *)(a2 + 24) <= (unsigned __int64)v62 )
                {
                  sub_2257CD0(a2, v61);
                }
                else
                {
                  *(_QWORD *)(a2 + 32) = v62 + 1;
                  *v62 = v61;
                }
                if ( v56 - 12 >= 0 )
                {
                  v63 = (unsigned __int8)a0123456789abcd_2[(v12 >> (v56 - 12)) & 0xF];
                  v64 = *(_BYTE **)(a2 + 32);
                  if ( *(_QWORD *)(a2 + 24) <= (unsigned __int64)v64 )
                  {
                    sub_2257CD0(a2, v63);
                  }
                  else
                  {
                    *(_QWORD *)(a2 + 32) = v64 + 1;
                    *v64 = v63;
                  }
                  if ( v56 - 16 >= 0 )
                  {
                    v65 = (unsigned __int8)a0123456789abcd_2[(v12 >> (v56 - 16)) & 0xF];
                    v66 = *(_BYTE **)(a2 + 32);
                    if ( *(_QWORD *)(a2 + 24) <= (unsigned __int64)v66 )
                    {
                      sub_2257CD0(a2, v65);
                    }
                    else
                    {
                      *(_QWORD *)(a2 + 32) = v66 + 1;
                      *v66 = v65;
                    }
                    if ( v56 - 20 >= 0 )
                    {
                      v67 = (unsigned __int8)a0123456789abcd_2[(v12 >> (v56 - 20)) & 0xF];
                      v68 = *(_BYTE **)(a2 + 32);
                      if ( *(_QWORD *)(a2 + 24) <= (unsigned __int64)v68 )
                      {
                        sub_2257CD0(a2, v67);
                      }
                      else
                      {
                        *(_QWORD *)(a2 + 32) = v68 + 1;
                        *v68 = v67;
                      }
                      if ( v56 - 24 >= 0 )
                      {
                        v69 = (unsigned __int8)a0123456789abcd_2[(v12 >> (v56 - 24)) & 0xF];
                        v70 = *(_BYTE **)(a2 + 32);
                        if ( *(_QWORD *)(a2 + 24) <= (unsigned __int64)v70 )
                        {
                          sub_2257CD0(a2, v69);
                        }
                        else
                        {
                          *(_QWORD *)(a2 + 32) = v70 + 1;
                          *v70 = v69;
                        }
                        if ( v56 == 28 )
                        {
                          v71 = a0123456789abcd_2[v12 & 0xF];
                          v72 = *(unsigned __int8 **)(a2 + 32);
                          if ( (unsigned __int64)v72 >= *(_QWORD *)(a2 + 24) )
                          {
                            sub_2257CD0(a2, v71);
                          }
                          else
                          {
                            *(_QWORD *)(a2 + 32) = v72 + 1;
                            *v72 = v71;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_23;
          }
LABEL_89:
          v55 = 28;
          do
            v55 -= 4;
          while ( !(v12 >> v55) );
          v56 = v55;
          if ( v55 < 0 )
            goto LABEL_23;
          goto LABEL_92;
        }
        if ( v84 - 1 != v6 )
        {
          v30 = v12 - 55296;
          if ( v12 - 55296 <= 0x3FF )
          {
            if ( (_BYTE)v9 != 2 )
            {
              if ( (_BYTE)v9 == 4 )
              {
                v31 = *(_DWORD *)(v11 + 4 * (v19 + v10));
LABEL_50:
                if ( (unsigned int)(v31 - 56320) <= 0x3FF )
                {
                  v12 = v31 + (v30 << 10) + 9216;
                  v32 = v6 + 2;
                  ++v6;
                  v76 = v32;
                  v30 = v12 - 55296;
                }
              }
              if ( v12 <= 0x10FFFF && v30 > 0x7FF )
              {
LABEL_59:
                if ( v12 <= 0xFFFF )
                {
                  sub_971800(a2, "\\u");
                }
                else
                {
                  v33 = sub_971800(a2, "\\U00");
                  v34 = (unsigned __int8)a0123456789abcd_2[v12 >> 20];
                  v35 = *(_BYTE **)(v33 + 32);
                  if ( (unsigned __int64)v35 >= *(_QWORD *)(v33 + 24) )
                  {
                    v33 = sub_2257CD0(v33, v34);
                  }
                  else
                  {
                    *(_QWORD *)(v33 + 32) = v35 + 1;
                    *v35 = v34;
                  }
                  v36 = (unsigned __int8)a0123456789abcd_2[HIWORD(v12) & 0xF];
                  v37 = *(_BYTE **)(v33 + 32);
                  if ( (unsigned __int64)v37 >= *(_QWORD *)(v33 + 24) )
                  {
                    sub_2257CD0(v33, v36);
                  }
                  else
                  {
                    *(_QWORD *)(v33 + 32) = v37 + 1;
                    *v37 = v36;
                  }
                }
                v38 = (unsigned __int8)a0123456789abcd_2[(unsigned __int16)v12 >> 12];
                v39 = *(_BYTE **)(a2 + 32);
                if ( (unsigned __int64)v39 >= *(_QWORD *)(a2 + 24) )
                {
                  v40 = sub_2257CD0(a2, v38);
                }
                else
                {
                  *(_QWORD *)(a2 + 32) = v39 + 1;
                  *v39 = v38;
                  v40 = a2;
                }
                v41 = (unsigned __int8)a0123456789abcd_2[(v12 >> 8) & 0xF];
                v42 = *(_BYTE **)(v40 + 32);
                if ( (unsigned __int64)v42 >= *(_QWORD *)(v40 + 24) )
                {
                  v40 = sub_2257CD0(v40, v41);
                }
                else
                {
                  *(_QWORD *)(v40 + 32) = v42 + 1;
                  *v42 = v41;
                }
                v43 = (unsigned __int8)a0123456789abcd_2[(unsigned __int8)v12 >> 4];
                v44 = *(_BYTE **)(v40 + 32);
                if ( (unsigned __int64)v44 >= *(_QWORD *)(v40 + 24) )
                {
                  v40 = sub_2257CD0(v40, v43);
                }
                else
                {
                  *(_QWORD *)(v40 + 32) = v44 + 1;
                  *v44 = v43;
                }
                v45 = *(_BYTE **)(v40 + 32);
                v46 = (unsigned __int8)a0123456789abcd_2[v12 & 0xF];
                if ( (unsigned __int64)v45 < *(_QWORD *)(v40 + 24) )
                {
                  v6 = v76;
                  *(_QWORD *)(v40 + 32) = v45 + 1;
                  *v45 = v46;
                  goto LABEL_23;
                }
LABEL_86:
                sub_2257CD0(v40, v46);
                v6 = v76;
                goto LABEL_23;
              }
              sub_971800(a2, "\\x");
              v85 = v6;
              v6 = v76;
              goto LABEL_89;
            }
            v31 = *(unsigned __int16 *)(v11 + 2LL * v19 + 4 * v10);
            goto LABEL_50;
          }
        }
        if ( v12 > 0xFF )
          goto LABEL_57;
        if ( v85 + 1 == v6 )
        {
LABEL_82:
          v53 = v12 - 48;
          if ( (unsigned int)v53 <= 0x36 )
          {
            v54 = 0x7E0000007E03FFLL;
            if ( _bittest64(&v54, v53) )
              sub_971800(a2, "\"\"");
          }
        }
LABEL_32:
        v21 = *(_BYTE **)(a2 + 32);
        v22 = *(_QWORD *)(a2 + 24);
        if ( (*(_WORD *)&byte_23ED5E0[2 * v12] & 0x3EC) == 0 )
        {
          if ( v22 <= (unsigned __int64)v21 )
          {
            v40 = sub_2257CD0(a2, 92);
          }
          else
          {
            *(_QWORD *)(a2 + 32) = v21 + 1;
            v40 = a2;
            *v21 = 92;
          }
          v47 = *(_BYTE **)(v40 + 32);
          v48 = (v12 >> 6) + 48;
          if ( (unsigned __int64)v47 >= *(_QWORD *)(v40 + 24) )
          {
            v40 = sub_2257CD0(v40, (unsigned __int8)v48);
          }
          else
          {
            *(_QWORD *)(v40 + 32) = v47 + 1;
            *v47 = v48;
          }
          v49 = *(_BYTE **)(v40 + 32);
          v50 = ((v12 >> 3) & 7) + 48;
          if ( (unsigned __int64)v49 >= *(_QWORD *)(v40 + 24) )
          {
            v40 = sub_2257CD0(v40, (unsigned __int8)v50);
          }
          else
          {
            *(_QWORD *)(v40 + 32) = v49 + 1;
            *v49 = v50;
          }
          v51 = *(unsigned __int8 **)(v40 + 32);
          v52 = (v12 & 7) + 48;
          if ( (unsigned __int64)v51 < *(_QWORD *)(v40 + 24) )
          {
            *(_QWORD *)(v40 + 32) = v51 + 1;
            *v51 = v52;
            ++v6;
            goto LABEL_23;
          }
          v46 = v52;
          goto LABEL_86;
        }
        if ( v22 <= (unsigned __int64)v21 )
        {
          sub_2257CD0(a2, v12);
        }
        else
        {
          *(_QWORD *)(a2 + 32) = v21 + 1;
          *v21 = v12;
        }
        ++v6;
LABEL_23:
        if ( v84 != v6 )
          continue;
        v2 = a2;
LABEL_25:
        result = *(_BYTE **)(v2 + 32);
        if ( (unsigned __int64)result >= *(_QWORD *)(v2 + 24) )
          return (_BYTE *)sub_2257CD0(v2, 34);
        *(_QWORD *)(v2 + 32) = result + 1;
        *result = 34;
        return result;
    }
  }
}

