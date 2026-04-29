char __fastcall sub_385890(__int64 a1, const char *a2, int a3, char a4, _DWORD *a5, __int64 a6, double a7, __int64 a8)
{
  char *v9; // rax
  _BYTE *v10; // rbx
  const char *v11; // r14
  __int64 v12; // r13
  int v13; // ebp
  char *v14; // r15
  char v15; // bl
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // edi
  char v20; // bp
  const char *v21; // rdi
  int v22; // eax
  unsigned __int8 v24; // al
  char *v25; // rax
  char *v26; // rax
  char *v27; // rax
  char *v28; // rax
  __int64 v29; // rax
  _DWORD *v30; // r14
  _DWORD *v31; // r14
  __int64 v32; // rdx
  _QWORD *v33; // rbx
  char v34; // al
  _BYTE *v35; // rax
  const char *v36; // rbp
  int v37; // r13d
  char *v38; // rdi
  size_t v39; // r14
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // rax
  unsigned int v42; // edi
  char *haystack; // [rsp+28h] [rbp-90h]
  _DWORD *v47; // [rsp+38h] [rbp-80h]
  __int64 v48; // [rsp+38h] [rbp-80h]
  unsigned __int8 v49; // [rsp+42h] [rbp-76h]
  int v51; // [rsp+44h] [rbp-74h]
  __int64 v52; // [rsp+48h] [rbp-70h]
  __int64 v53; // [rsp+48h] [rbp-70h]
  const char *v54; // [rsp+58h] [rbp-60h] BYREF
  __int64 v55; // [rsp+60h] [rbp-58h] BYREF
  __int128 v56; // [rsp+68h] [rbp-50h]
  unsigned __int64 v57; // [rsp+78h] [rbp-40h]

  haystack = (char *)a2;
  v47 = a5;
  v57 = __readfsqword(0x28u);
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *(_DWORD *)a6 = 0;
  if ( a8 )
    *(_DWORD *)a8 = 0;
  if ( !a2 )
    return 0;
  v9 = (char *)tag_skipcodes(a2);
  v10 = v9;
  if ( !a4 )
  {
    v19 = *v9;
    v20 = *v9;
    if ( v19 <= 0x7F )
    {
      if ( isalnum(v19) || v20 == 95 )
        goto LABEL_30;
      if ( v20 == 47 )
      {
        if ( v10[1] == 47 )
        {
LABEL_30:
          if ( v47 )
          {
            *v47 = 3;
            *((_QWORD *)v47 + 1) = a1;
          }
          if ( a6 )
          {
            v55 = 0;
            v56 = 0;
            tag_remove(&v55, v10, 0);
            sub_368820(&v54, *(_QWORD *)(a1 + 8), 0);
            if ( *v10 == 47 )
              goto LABEL_38;
            v21 = s1;
            if ( (_QWORD)v56 )
              v21 = (const char *)v55;
            v22 = sub_385240(v21, a3, &v54);
            if ( v22 < 0 || v22 >= *(_DWORD *)(*(_QWORD *)(a1 + 8) + 464LL) )
            {
LABEL_38:
              *(_DWORD *)a6 = 3;
              *(_QWORD *)(a6 + 8) = a1;
            }
            else
            {
              *(_DWORD *)a6 = 2;
              *(_QWORD *)(a6 + 8) = sub_139080(*(_QWORD **)(a1 + 8), v22);
            }
            clear_tinfo_t(&v54);
            if ( v55 )
            {
              *(_QWORD *)&v56 = 0;
              qfree(v55);
            }
          }
          if ( a8 )
          {
            *(_DWORD *)a8 = 3;
            *(_QWORD *)(a8 + 8) = a1;
          }
          return 1;
        }
      }
      else if ( v20 == 35 )
      {
        goto LABEL_30;
      }
    }
  }
  v11 = a2;
  v49 = 1;
  v51 = 0;
  v12 = -1;
  v54 = a2;
  v13 = 0;
  v14 = nullptr;
  v15 = 0;
  while ( 1 )
  {
    v16 = *(unsigned __int8 *)v11;
    v17 = (unsigned int)(v16 - 1);
    if ( (unsigned __int8)(v16 - 1) > 1u )
      break;
LABEL_23:
    if ( (_BYTE)v16 == 1 )
    {
      v24 = v11[1];
      if ( v24 == 40 )
      {
        a2 = v11;
        v55 = -1;
        addr_from_tag(&v55, v11);
        v17 = v55;
        if ( (v55 & 0xC0000000) == 0x40000000 )
        {
          if ( v47 )
          {
            v31 = v47;
            a2 = (const char *)v55;
            v48 = v55;
            *v31 = 2;
            v12 = v48;
            v47 = nullptr;
            *((_QWORD *)v31 + 1) = sub_385810(a1, (__int64)a2, a7);
            v11 = v54;
          }
          else
          {
            v11 = v54;
            v12 = v55;
          }
        }
        else if ( (v55 & 0xC0000000) != 0 )
        {
          if ( (int)v55 >= 0 )
          {
            if ( !under_debugger )
              sub_37E160(0xC775u, (__int64)v11, a7);
            BUG();
          }
          v11 = v54;
          v51 = v55 & 0x7FFFFFFF;
        }
        else if ( !v47
               || !a4
               || (v52 = v55, v25 = strstr(haystack, &byte_40EE98), v17 = v52, v25)
               && (a2 = &byte_40EEA8, v26 = strstr(haystack, &byte_40EEA8), v17 = v52, !v26)
               || (a2 = &byte_40EE88, v53 = v17, v27 = strstr(haystack, &byte_40EE88), v17 = v53, v27)
               || (a2 = &byte_40EE70, v28 = strstr(haystack, &byte_40EE70), v17 = v53, v28)
               || (v29 = sub_385570(a1, v53, a7), v17 = v53, (a2 = (const char *)v29) == nullptr)
               || *(_DWORD *)(v29 + 8) == 75 && *(_DWORD *)(*(_QWORD *)(v29 + 24) + 8LL) == 61 )
        {
          v47 = nullptr;
          v11 = v54;
          v12 = v17;
        }
        else
        {
          v30 = v47;
          *v47 = 4;
          a2 = nullptr;
          v12 = v53;
          v47 = nullptr;
          *((_QWORD *)v30 + 1) = *sub_252A70(a1, (_QWORD *)v29);
          v30[4] = 75 - v49;
          v11 = v54;
        }
      }
      else
      {
        v15 |= v24 == 12;
      }
    }
LABEL_24:
    v54 = (const char *)tag_skipcode(v11, a2, v17);
    v11 = v54;
  }
  while ( 1 )
  {
    if ( (_BYTE)v16 == 4 )
    {
      LOBYTE(v17) = v14 == nullptr;
      v49 &= v14 != nullptr || v11[1] != 4;
      goto LABEL_24;
    }
    v15 |= (_BYTE)v16 == 0;
    if ( v15 )
      break;
    if ( (_BYTE)v16 == 32 )
      v11 = v14;
    if ( v12 != -1 && v13 == a3 && a6 )
    {
      if ( (v12 & 0xC0000000) != 0 )
      {
        *(_DWORD *)a6 = 2;
        *(_QWORD *)(a6 + 8) = sub_385810(a1, v12, a7);
      }
      else
      {
        v18 = sub_385570(a1, v12, a7);
        *(_QWORD *)(a6 + 8) = v18;
        if ( v18 )
          *(_DWORD *)a6 = 1;
      }
      a2 = *(const char **)(a1 + 8);
      sub_3850F0((unsigned int *)a6, (__int64)a2, a7);
      if ( !a8 )
        return *(_DWORD *)a6 != 0;
    }
    if ( (unsigned int)get_utf8_char(&v54) - 1 > 0xFFFFFFFD )
      goto LABEL_52;
    v14 = (char *)v11;
    v11 = v54;
    ++v13;
    v16 = *(unsigned __int8 *)v54;
    v17 = (unsigned int)(v16 - 1);
    if ( (unsigned __int8)(v16 - 1) <= 1u )
      goto LABEL_23;
  }
  if ( a8 )
  {
    if ( (v12 & 0xE0000000) == 0 )
    {
      if ( a4 )
      {
        v33 = (_QWORD *)sub_385570(a1, v12, a7);
        if ( v33 )
        {
          *(_DWORD *)a8 = 4;
          if ( !v51 && v14 )
          {
            v34 = *v14;
            if ( *v14 == 46 )
            {
              if ( *(v14 - 1) == 46 && *(v14 - 2) == 46 )
                v51 = sub_25E810((__int64)v33);
            }
            else if ( v34 > 59 )
            {
              switch ( v34 )
              {
                case 'e':
                  v36 = "else";
                  v37 = 67;
                  goto LABEL_98;
                case 'm':
                  v36 = "__asm";
                  v37 = 66;
                  goto LABEL_98;
                case 'o':
                  v36 = "do";
                  v37 = 68;
LABEL_98:
                  v38 = haystack;
                  v39 = strlen(v36);
                  if ( &haystack[v39] < v14 )
                  {
                    v40 = (unsigned __int64)&v14[-v39];
                    if ( (unsigned __int64)haystack < v40 )
                    {
                      do
                      {
                        v41 = tag_skipcodes(v38);
                        v38 = (char *)v41;
                        if ( v41 >= v40 )
                          break;
                        v38 = (char *)(v41 + 1);
                      }
                      while ( v41 + 1 < v40 );
                      haystack = v38;
                    }
                    if ( v40 < (unsigned __int64)haystack || (v42 = *haystack, v42 > 0x7F) || !isalnum(v42) )
                    {
                      if ( memcmp((const void *)(v40 + 1), v36, v39) )
                        v37 = 0;
                      v51 = v37;
                    }
                  }
                  break;
                case '{':
                  v51 = 70;
                  break;
                case '}':
                  v51 = 71;
                  break;
                default:
                  break;
              }
            }
            else if ( v34 > 39 )
            {
              switch ( v34 )
              {
                case '(':
                  v51 = 65;
                  break;
                case ')':
                  v51 = 72;
                  goto LABEL_87;
                case ',':
                  goto LABEL_87;
                case ':':
                  v51 = 73;
LABEL_87:
                  v35 = (_BYTE *)tag_skipcode(v14 + 1, v12, v32);
                  if ( *v35 == 1 && v35[1] == 40 )
                  {
                    v55 = -1;
                    addr_from_tag(&v55, v35);
                    if ( (int)v55 < 0 )
                      v51 = v55 & 0x7FFFFFFF;
                  }
                  break;
                case ';':
                  v51 = 69;
                  break;
                default:
                  break;
              }
            }
          }
          *(_DWORD *)(a8 + 16) = v51;
          *(_QWORD *)(a8 + 8) = *v33;
        }
      }
    }
  }
LABEL_52:
  if ( !a6 )
    return 0;
  return *(_DWORD *)a6 != 0;
}
