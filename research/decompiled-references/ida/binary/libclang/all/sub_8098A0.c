_BYTE *__fastcall sub_8098A0(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int8 v6; // al
  unsigned int v7; // r10d
  unsigned int v8; // ebp
  __int64 v9; // rcx
  __int16 v10; // ax
  unsigned int v11; // ebx
  unsigned int v12; // r12d
  _BYTE *result; // rax
  __int16 v14; // dx
  const char *v15; // rsi
  int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // esi
  _WORD *v19; // rdx
  _BYTE *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rsi
  _BYTE *v24; // rax
  __int64 v25; // rsi
  _BYTE *v26; // rax
  _BYTE *v27; // rax
  __int64 v28; // rsi
  __int16 *v29; // rcx
  _WORD *v30; // rdx
  unsigned __int64 v31; // rcx
  int v32; // eax
  _DWORD *v33; // rdx
  __int64 v34; // rdi
  _BYTE *v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rsi
  _BYTE *v38; // rax
  __int64 v39; // rdi
  _BYTE *v40; // rax
  int v41; // esi
  _BYTE *v42; // rax
  int v43; // esi
  unsigned __int8 *v44; // rax
  unsigned __int8 v45; // bl
  _WORD *v46; // rdx
  int v47; // r14d
  __int64 v48; // rsi
  _BYTE *v49; // rax
  __int64 v50; // rsi
  _BYTE *v51; // rax
  __int64 v52; // rsi
  _BYTE *v53; // rax
  __int64 v54; // rsi
  _BYTE *v55; // rax
  __int64 v56; // rsi
  _BYTE *v57; // rax
  __int64 v58; // rsi
  _BYTE *v59; // rax
  unsigned __int8 v60; // dl
  unsigned __int8 *v61; // rax
  unsigned __int8 v62; // dl
  unsigned __int8 *v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // rcx
  unsigned int v66; // [rsp+Ch] [rbp-3Ch]
  unsigned int v67; // [rsp+Ch] [rbp-3Ch]
  unsigned int v68; // [rsp+Ch] [rbp-3Ch]
  unsigned int v69; // [rsp+Ch] [rbp-3Ch]
  unsigned int v70; // [rsp+Ch] [rbp-3Ch]
  unsigned int v71; // [rsp+Ch] [rbp-3Ch]
  unsigned int v72; // [rsp+Ch] [rbp-3Ch]
  unsigned int v73; // [rsp+Ch] [rbp-3Ch]
  unsigned int v74; // [rsp+Ch] [rbp-3Ch]
  unsigned int v75; // [rsp+Ch] [rbp-3Ch]

  v4 = *(_BYTE **)(a2 + 32);
  v5 = *(_QWORD *)(a2 + 24);
  v6 = (*(_BYTE *)(a1 + 2) >> 3) & 7;
  if ( v6 == 3 )
  {
    if ( (unsigned __int64)v4 >= v5 )
    {
      sub_26239D0(a2, 117);
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v4 + 1;
      *v4 = 117;
    }
    v4 = *(_BYTE **)(a2 + 32);
    goto LABEL_7;
  }
  if ( v6 > 3u )
  {
    if ( v6 == 4 )
    {
      if ( (unsigned __int64)v4 >= v5 )
      {
        sub_26239D0(a2, 85);
      }
      else
      {
        *(_QWORD *)(a2 + 32) = v4 + 1;
        *v4 = 85;
      }
      v4 = *(_BYTE **)(a2 + 32);
    }
LABEL_7:
    if ( (unsigned __int64)v4 < *(_QWORD *)(a2 + 24) )
      goto LABEL_8;
    goto LABEL_17;
  }
  if ( v6 != 1 )
  {
    if ( v6 == 2 )
    {
      if ( v5 - (unsigned __int64)v4 <= 1 )
      {
        sub_26240F0(a2, "u8", 2);
        v4 = *(_BYTE **)(a2 + 32);
      }
      else
      {
        *(_WORD *)v4 = 14453;
        v4 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 2LL);
        *(_QWORD *)(a2 + 32) = v4;
      }
    }
    goto LABEL_7;
  }
  if ( (unsigned __int64)v4 >= v5 )
  {
    sub_26239D0(a2, 76);
    v4 = *(_BYTE **)(a2 + 32);
    goto LABEL_7;
  }
  *(_QWORD *)(a2 + 32) = v4 + 1;
  *v4 = 76;
  v4 = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(a2 + 24) )
  {
LABEL_17:
    sub_26239D0(a2, 34);
    v8 = *(_DWORD *)(a1 + 16);
    v7 = 0;
    v66 = v8;
    if ( !v8 )
      goto LABEL_18;
    while ( 1 )
    {
LABEL_9:
      v9 = *(unsigned int *)(a1 + 4);
      v10 = (*(_WORD *)(a1 + 2) >> 6) & 7;
      if ( ((*(_WORD *)(a1 + 2) >> 6) & 7) == 2 )
      {
        v11 = *(unsigned __int16 *)(a1 + 2LL * v7 + 4 * v9 + 20);
      }
      else if ( (_BYTE)v10 == 4 )
      {
        v11 = *(_DWORD *)(a1 + 4 * (v9 + v7) + 20);
      }
      else
      {
        v11 = *(unsigned __int8 *)(v7 + a1 + 4 * v9 + 20);
      }
      v12 = v7 + 1;
      if ( v11 > 0x22 )
      {
        v14 = 23644;
        v15 = "\\\\";
        if ( v11 == 92 )
        {
LABEL_40:
          v29 = *(__int16 **)(a2 + 32);
          if ( *(_QWORD *)(a2 + 24) - (_QWORD)v29 <= 1u )
          {
            sub_26240F0(a2, v15, 2);
          }
          else
          {
            *v29 = v14;
            *(_QWORD *)(a2 + 32) += 2LL;
          }
          goto LABEL_42;
        }
LABEL_21:
        v16 = (*(_BYTE *)(a1 + 2) >> 3) & 7;
        if ( v16 == 3 )
        {
          if ( v8 - 1 == v7 )
          {
            v18 = v11 - 55296;
            if ( v11 > 0xFF )
              goto LABEL_26;
          }
          else
          {
            v17 = v11 - 55296;
            v18 = v11 - 55296;
            if ( v11 - 55296 <= 0x3FF )
            {
              if ( (_BYTE)v10 == 2 )
              {
                v32 = *(unsigned __int16 *)(a1 + 4 * v9 + 2LL * v12 + 20);
LABEL_64:
                if ( (unsigned int)(v32 - 56320) > 0x3FF )
                  goto LABEL_81;
                v12 = v7 + 2;
                v11 = v32 + (v17 << 10) + 9216;
              }
              else
              {
                if ( (_BYTE)v10 == 4 )
                {
                  v32 = *(_DWORD *)(a1 + 4 * (v12 + v9) + 20);
                  goto LABEL_64;
                }
LABEL_25:
                v18 = v17;
LABEL_26:
                if ( v18 <= 0x7FF || v11 > 0x10FFFF )
                {
LABEL_81:
                  v46 = *(_WORD **)(a2 + 32);
                  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v46 <= 1u )
                  {
                    v67 = v7;
                    sub_26240F0(a2, "\\x", 2);
                    v7 = v67;
                  }
                  else
                  {
                    *v46 = 30812;
                    *(_QWORD *)(a2 + 32) += 2LL;
                  }
                  v47 = 28;
                  if ( v11 >> 28 )
                    goto LABEL_86;
                  do
                    v47 -= 4;
                  while ( !(v11 >> v47) );
                  if ( v47 >= 0 )
                  {
LABEL_86:
                    v48 = (unsigned __int8)a0123456789abcd[(v11 >> v47) & 0xF];
                    v49 = *(_BYTE **)(a2 + 32);
                    if ( (unsigned __int64)v49 >= *(_QWORD *)(a2 + 24) )
                    {
                      v68 = v7;
                      sub_26239D0(a2, v48);
                      v7 = v68;
                    }
                    else
                    {
                      *(_QWORD *)(a2 + 32) = v49 + 1;
                      *v49 = v48;
                    }
                    if ( v47 - 4 >= 0 )
                    {
                      v50 = (unsigned __int8)a0123456789abcd[(v11 >> (v47 - 4)) & 0xF];
                      v51 = *(_BYTE **)(a2 + 32);
                      if ( (unsigned __int64)v51 >= *(_QWORD *)(a2 + 24) )
                      {
                        v69 = v7;
                        sub_26239D0(a2, v50);
                        v7 = v69;
                      }
                      else
                      {
                        *(_QWORD *)(a2 + 32) = v51 + 1;
                        *v51 = v50;
                      }
                      if ( v47 - 8 >= 0 )
                      {
                        v52 = (unsigned __int8)a0123456789abcd[(v11 >> (v47 - 8)) & 0xF];
                        v53 = *(_BYTE **)(a2 + 32);
                        if ( (unsigned __int64)v53 >= *(_QWORD *)(a2 + 24) )
                        {
                          v70 = v7;
                          sub_26239D0(a2, v52);
                          v7 = v70;
                        }
                        else
                        {
                          *(_QWORD *)(a2 + 32) = v53 + 1;
                          *v53 = v52;
                        }
                        if ( v47 - 12 >= 0 )
                        {
                          v54 = (unsigned __int8)a0123456789abcd[(v11 >> (v47 - 12)) & 0xF];
                          v55 = *(_BYTE **)(a2 + 32);
                          if ( (unsigned __int64)v55 >= *(_QWORD *)(a2 + 24) )
                          {
                            v71 = v7;
                            sub_26239D0(a2, v54);
                            v7 = v71;
                          }
                          else
                          {
                            *(_QWORD *)(a2 + 32) = v55 + 1;
                            *v55 = v54;
                          }
                          if ( v47 - 16 >= 0 )
                          {
                            v56 = (unsigned __int8)a0123456789abcd[(v11 >> (v47 - 16)) & 0xF];
                            v57 = *(_BYTE **)(a2 + 32);
                            if ( (unsigned __int64)v57 >= *(_QWORD *)(a2 + 24) )
                            {
                              v72 = v7;
                              sub_26239D0(a2, v56);
                              v7 = v72;
                            }
                            else
                            {
                              *(_QWORD *)(a2 + 32) = v57 + 1;
                              *v57 = v56;
                            }
                            if ( v47 - 20 >= 0 )
                            {
                              v58 = (unsigned __int8)a0123456789abcd[(v11 >> (v47 - 20)) & 0xF];
                              v59 = *(_BYTE **)(a2 + 32);
                              if ( (unsigned __int64)v59 >= *(_QWORD *)(a2 + 24) )
                              {
                                v73 = v7;
                                sub_26239D0(a2, v58);
                                v7 = v73;
                              }
                              else
                              {
                                *(_QWORD *)(a2 + 32) = v59 + 1;
                                *v59 = v58;
                              }
                              if ( v47 - 24 >= 0 )
                              {
                                v60 = a0123456789abcd[(v11 >> (v47 - 24)) & 0xF];
                                v61 = *(unsigned __int8 **)(a2 + 32);
                                if ( (unsigned __int64)v61 >= *(_QWORD *)(a2 + 24) )
                                {
                                  v74 = v7;
                                  sub_26239D0(a2, v60);
                                  v7 = v74;
                                }
                                else
                                {
                                  *(_QWORD *)(a2 + 32) = v61 + 1;
                                  *v61 = v60;
                                }
                                if ( v47 != 24 )
                                {
                                  v62 = a0123456789abcd[v11 & 0xF];
                                  v63 = *(unsigned __int8 **)(a2 + 32);
                                  if ( (unsigned __int64)v63 >= *(_QWORD *)(a2 + 24) )
                                  {
                                    v75 = v7;
                                    sub_26239D0(a2, v62);
                                    v7 = v75;
                                  }
                                  else
                                  {
                                    *(_QWORD *)(a2 + 32) = v63 + 1;
                                    *v63 = v62;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  v66 = v7;
                  v7 = v12;
                  goto LABEL_43;
                }
                if ( v11 <= 0xFFFF )
                {
                  v19 = *(_WORD **)(a2 + 32);
                  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v19 <= 1u )
                  {
                    sub_26240F0(a2, "\\u", 2);
                    v20 = *(_BYTE **)(a2 + 32);
                  }
                  else
                  {
                    *v19 = 30044;
                    v20 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 2LL);
                    *(_QWORD *)(a2 + 32) = v20;
                  }
LABEL_31:
                  v21 = (unsigned __int8)a0123456789abcd[(unsigned __int16)v11 >> 12];
                  if ( (unsigned __int64)v20 >= *(_QWORD *)(a2 + 24) )
                  {
                    v22 = sub_26239D0(a2, v21);
                  }
                  else
                  {
                    v22 = a2;
                    *(_QWORD *)(a2 + 32) = v20 + 1;
                    *v20 = v21;
                  }
                  v23 = (unsigned __int8)a0123456789abcd[(v11 >> 8) & 0xF];
                  v24 = *(_BYTE **)(v22 + 32);
                  if ( (unsigned __int64)v24 >= *(_QWORD *)(v22 + 24) )
                  {
                    v22 = sub_26239D0(v22, v23);
                  }
                  else
                  {
                    *(_QWORD *)(v22 + 32) = v24 + 1;
                    *v24 = v23;
                  }
                  v25 = (unsigned __int8)a0123456789abcd[(unsigned __int8)v11 >> 4];
                  v26 = *(_BYTE **)(v22 + 32);
                  if ( (unsigned __int64)v26 >= *(_QWORD *)(v22 + 24) )
                  {
                    v22 = sub_26239D0(v22, v25);
                  }
                  else
                  {
                    *(_QWORD *)(v22 + 32) = v26 + 1;
                    *v26 = v25;
                  }
                  v27 = *(_BYTE **)(v22 + 32);
                  v28 = (unsigned __int8)a0123456789abcd[v11 & 0xF];
                  if ( (unsigned __int64)v27 >= *(_QWORD *)(v22 + 24) )
                    goto LABEL_111;
                  *(_QWORD *)(v22 + 32) = v27 + 1;
                  *v27 = v28;
                  goto LABEL_42;
                }
              }
              v33 = *(_DWORD **)(a2 + 32);
              if ( *(_QWORD *)(a2 + 24) - (_QWORD)v33 <= 3u )
              {
                v34 = sub_26240F0(a2, "\\U00", 4);
                v35 = *(_BYTE **)(v34 + 32);
              }
              else
              {
                *v33 = 808473948;
                v34 = a2;
                v35 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 4LL);
                *(_QWORD *)(a2 + 32) = v35;
              }
              v36 = (unsigned __int8)a0123456789abcd[v11 >> 20];
              if ( (unsigned __int64)v35 >= *(_QWORD *)(v34 + 24) )
              {
                v34 = sub_26239D0(v34, v36);
              }
              else
              {
                *(_QWORD *)(v34 + 32) = v35 + 1;
                *v35 = v36;
              }
              v37 = (unsigned __int8)a0123456789abcd[HIWORD(v11) & 0xF];
              v38 = *(_BYTE **)(v34 + 32);
              if ( (unsigned __int64)v38 >= *(_QWORD *)(v34 + 24) )
              {
                sub_26239D0(v34, v37);
              }
              else
              {
                *(_QWORD *)(v34 + 32) = v38 + 1;
                *v38 = v37;
              }
              v20 = *(_BYTE **)(a2 + 32);
              goto LABEL_31;
            }
            if ( v11 > 0xFF )
              goto LABEL_26;
          }
        }
        else if ( v11 > 0xFF )
        {
          if ( v16 == 1 )
            goto LABEL_81;
          v17 = v11 - 55296;
          goto LABEL_25;
        }
        v30 = *(_WORD **)(a2 + 32);
        if ( v66 + 1 == v7 )
        {
          v64 = v11 - 48;
          if ( (unsigned int)v64 <= 0x36 )
          {
            v65 = 0x7E0000007E03FFLL;
            if ( _bittest64(&v65, v64) )
            {
              if ( *(_QWORD *)(a2 + 24) - (_QWORD)v30 <= 1u )
              {
                sub_26240F0(a2, "\"\"", 2);
                v30 = *(_WORD **)(a2 + 32);
              }
              else
              {
                *v30 = 8738;
                v30 = (_WORD *)(*(_QWORD *)(a2 + 32) + 2LL);
                *(_QWORD *)(a2 + 32) = v30;
              }
            }
          }
        }
      }
      else
      {
        if ( v11 > 6 )
        {
          switch ( v11 )
          {
            case 7u:
              v14 = 24924;
              v15 = "\\a";
              goto LABEL_40;
            case 8u:
              v14 = 25180;
              v15 = "\\b";
              goto LABEL_40;
            case 9u:
              v14 = 29788;
              v15 = "\\t";
              goto LABEL_40;
            case 0xAu:
              v14 = 28252;
              v15 = "\\n";
              goto LABEL_40;
            case 0xBu:
              v14 = 30300;
              v15 = "\\v";
              goto LABEL_40;
            case 0xCu:
              v14 = 26204;
              v15 = "\\f";
              goto LABEL_40;
            case 0xDu:
              v14 = 29276;
              v15 = "\\r";
              goto LABEL_40;
            case 0x22u:
              v14 = 8796;
              v15 = "\\\"";
              goto LABEL_40;
            default:
              goto LABEL_21;
          }
        }
        v30 = *(_WORD **)(a2 + 32);
      }
      v31 = *(_QWORD *)(a2 + 24);
      if ( (*((_WORD *)qword_3CAF3E0 + (int)v11) & 0x3EC) == 0 )
      {
        if ( (unsigned __int64)v30 >= v31 )
        {
          v39 = sub_26239D0(a2, 92);
        }
        else
        {
          v39 = a2;
          *(_QWORD *)(a2 + 32) = (char *)v30 + 1;
          *(_BYTE *)v30 = 92;
        }
        v40 = *(_BYTE **)(v39 + 32);
        v41 = (v11 >> 6) + 48;
        if ( (unsigned __int64)v40 >= *(_QWORD *)(v39 + 24) )
        {
          v39 = sub_26239D0(v39, (unsigned __int8)v41);
        }
        else
        {
          *(_QWORD *)(v39 + 32) = v40 + 1;
          *v40 = v41;
        }
        v42 = *(_BYTE **)(v39 + 32);
        v43 = ((v11 >> 3) & 7) + 48;
        if ( (unsigned __int64)v42 >= *(_QWORD *)(v39 + 24) )
        {
          v39 = sub_26239D0(v39, (unsigned __int8)v43);
        }
        else
        {
          *(_QWORD *)(v39 + 32) = v42 + 1;
          *v42 = v43;
        }
        v44 = *(unsigned __int8 **)(v39 + 32);
        v45 = (v11 & 7) + 48;
        if ( (unsigned __int64)v44 >= *(_QWORD *)(v39 + 24) )
        {
          sub_26239D0(v39, v45);
        }
        else
        {
          *(_QWORD *)(v39 + 32) = v44 + 1;
          *v44 = v45;
        }
        goto LABEL_42;
      }
      if ( (unsigned __int64)v30 >= v31 )
      {
        v28 = v11;
        v22 = a2;
LABEL_111:
        sub_26239D0(v22, v28);
        goto LABEL_42;
      }
      *(_QWORD *)(a2 + 32) = (char *)v30 + 1;
      *(_BYTE *)v30 = v11;
LABEL_42:
      v7 = v12;
LABEL_43:
      if ( v8 == v12 )
        goto LABEL_18;
    }
  }
LABEL_8:
  v7 = 0;
  *(_QWORD *)(a2 + 32) = v4 + 1;
  *v4 = 34;
  v8 = *(_DWORD *)(a1 + 16);
  v66 = v8;
  if ( v8 )
    goto LABEL_9;
LABEL_18:
  result = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(a2 + 24) )
    return (_BYTE *)sub_26239D0(a2, 34);
  *(_QWORD *)(a2 + 32) = result + 1;
  *result = 34;
  return result;
}

