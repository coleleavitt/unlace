__int64 __fastcall sub_20E0980(__int64 a1)
{
  char *v1; // rax
  char *v2; // rbp
  __int64 result; // rax
  char *v4; // r12
  size_t v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rdx
  signed __int64 v9; // r12
  char *v10; // rax
  char v11; // cl
  size_t v12; // rax
  char *v13; // rdx
  __int64 v14; // rsi
  size_t v15; // rax
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // rax
  size_t v19; // rax
  size_t v20; // rax
  size_t v21; // rax
  size_t v22; // rax
  size_t v23; // rax
  size_t v24; // rax
  size_t v25; // rax
  char *v26; // r12
  char v27; // dl
  char *v28; // rcx
  char v29; // dl
  char v30; // dl
  char v31; // dl
  char v32; // dl
  char v33; // dl
  char v34; // dl
  char v35; // dl
  char v36; // dl
  char *v37; // r12
  char v38; // dl
  char *v39; // rdi
  _BYTE *v40; // rdx
  char *v41; // r12
  char v42; // dl
  char *v43; // rcx
  char v44; // dl
  char v45; // dl
  char v46; // dl
  char v47; // dl
  char v48; // dl
  char v49; // dl
  char v50; // dl
  char v51; // dl
  char v52; // dl
  char v53; // dl
  char v54; // dl
  char v55; // dl
  char v56; // dl
  char v57; // dl
  char v58; // dl
  char v59; // dl
  size_t v60; // rdi
  size_t v61; // rbp
  bool v62; // dl
  char *v63; // rdx
  __int64 v64; // rbp
  char *v65; // rax
  char v66; // dl
  size_t v67; // r14
  bool v68; // dl
  char *v69; // r12
  char *v70; // rax
  __int64 v71; // rbp
  char *v72; // rax
  char v73; // dl
  size_t v74; // rdi
  size_t v75; // rbp
  size_t v76; // rbp
  bool v77; // dl
  size_t v78; // rax
  size_t v79; // rax
  char v80; // dl
  __int64 v81; // [rsp+8h] [rbp-30h]

  v1 = *(char **)a1;
  v2 = *(char **)(a1 + 8);
  if ( v2 != *(char **)a1 && *v1 == 76 )
  {
    v4 = v1 + 1;
    *(_QWORD *)a1 = v1 + 1;
    if ( v1 + 1 == v2 )
    {
LABEL_7:
      v7 = sub_20D8F30(a1);
      if ( v7 )
      {
        v9 = sub_20CEB80((char **)a1, 1);
        if ( v9 )
        {
          v10 = *(char **)a1;
          if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v10 == 69 )
          {
            v81 = v8;
            *(_QWORD *)a1 = v10 + 1;
            result = sub_20CF970(a1 + 816, 40);
            v11 = *(_BYTE *)(result + 10);
            *(_WORD *)(result + 8) = 16460;
            *(_QWORD *)(result + 16) = v7;
            *(_QWORD *)(result + 24) = v9;
            *(_QWORD *)(result + 32) = v81;
            *(_BYTE *)(result + 10) = v11 & 0xF0 | 5;
            *(_QWORD *)result = off_2BE8400;
            return result;
          }
        }
      }
    }
    else
    {
      v6 = v2 - v4;
      switch ( v1[1] )
      {
        case 'A':
          v71 = sub_20D8F30(a1);
          if ( !v71 )
            return 0;
          v72 = *(char **)a1;
          if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v72 != 69 )
            return 0;
          *(_QWORD *)a1 = v72 + 1;
          result = sub_20CF970(a1 + 816, 24);
          v73 = *(_BYTE *)(result + 10);
          *(_WORD *)(result + 8) = 16458;
          *(_QWORD *)(result + 16) = v71;
          *(_BYTE *)(result + 10) = v73 & 0xF0 | 5;
          *(_QWORD *)result = off_2BE8340;
          return result;
        case 'D':
          v67 = j__strlen("Dn");
          v68 = sub_20D1BF0(v2 - v4, v4, v67, "Dn");
          result = 0;
          if ( !v68 )
            return result;
          v69 = &v4[v67];
          *(_QWORD *)a1 = v69;
          if ( v2 != v69 && *v69 == 48 )
            *(_QWORD *)a1 = v69 + 1;
          v70 = *(char **)a1;
          if ( v2 == *(char **)a1 || *v70 != 69 )
            return 0;
          *(_QWORD *)a1 = v70 + 1;
          return sub_20D1380(a1 + 816, "nullptr");
        case 'T':
          return 0;
        case 'U':
          if ( v6 == 1 )
            return 0;
          if ( v1[2] != 108 )
            return 0;
          v64 = sub_20DE740((char **)a1, 0);
          if ( !v64 )
            return 0;
          v65 = *(char **)a1;
          if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v65 != 69 )
            return 0;
          *(_QWORD *)a1 = v65 + 1;
          result = sub_20CF970(a1 + 816, 24);
          v66 = *(_BYTE *)(result + 10);
          *(_WORD *)(result + 8) = 16459;
          *(_QWORD *)(result + 16) = v64;
          *(_BYTE *)(result + 10) = v66 & 0xF0 | 5;
          *(_QWORD *)result = off_2BE83A0;
          return result;
        case '_':
          v60 = v2 - v4;
          v61 = j__strlen("_Z");
          v62 = sub_20D1BF0(v60, v4, v61, "_Z");
          result = 0;
          if ( !v62 )
            return result;
          *(_QWORD *)a1 = &v4[v61];
          result = sub_20DF440((char **)a1, 1);
          if ( !result )
            return 0;
          v63 = *(char **)a1;
          if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v63 != 69 )
            return 0;
          *(_QWORD *)a1 = v63 + 1;
          return result;
        case 'a':
          *(_QWORD *)a1 = v1 + 2;
          v78 = j__strlen("signed char");
          v13 = (char *)"signed char";
          v14 = v78;
          return sub_20CFA20(a1, v14, (__int64)v13);
        case 'b':
          v74 = v2 - v4;
          v75 = j__strlen("b0E");
          if ( sub_20D1BF0(v74, v4, v75, "b0E") )
          {
            *(_QWORD *)a1 = &v4[v75];
            result = sub_20CF970(a1 + 816, 16);
            *(_QWORD *)result = off_2BE82E0;
            *(_DWORD *)(result + 8) = *(_DWORD *)(result + 8) & 0xF00000 | 0x54049;
          }
          else
          {
            v76 = j__strlen("b1E");
            v77 = sub_20D1BF0(v6, v4, v76, "b1E");
            result = 0;
            if ( v77 )
            {
              *(_QWORD *)a1 = &v4[v76];
              result = sub_20CF970(a1 + 816, 16);
              *(_QWORD *)result = off_2BE82E0;
              *(_DWORD *)(result + 8) = *(_DWORD *)(result + 8) & 0xF00000 | 0x1054049;
            }
          }
          return result;
        case 'c':
          *(_QWORD *)a1 = v1 + 2;
          v79 = j__strlen("char");
          v13 = (char *)"char";
          v14 = v79;
          return sub_20CFA20(a1, v14, (__int64)v13);
        case 'd':
          v41 = v1 + 2;
          *(_QWORD *)a1 = v1 + 2;
          if ( (unsigned __int64)(v2 - (v1 + 2)) <= 0x10 )
            return 0;
          v42 = v1[2];
          v43 = v1 + 18;
          if ( (unsigned __int8)(v42 - 97) > 5u && (unsigned __int8)(v42 - 48) > 9u )
            return 0;
          v44 = v1[3];
          if ( (unsigned __int8)(v44 - 48) > 9u && (unsigned __int8)(v44 - 97) > 5u )
            return 0;
          v45 = v1[4];
          if ( (unsigned __int8)(v45 - 97) > 5u && (unsigned __int8)(v45 - 48) > 9u )
            return 0;
          v46 = v1[5];
          if ( (unsigned __int8)(v46 - 97) > 5u && (unsigned __int8)(v46 - 48) > 9u )
            return 0;
          v47 = v1[6];
          if ( (unsigned __int8)(v47 - 97) > 5u && (unsigned __int8)(v47 - 48) > 9u )
            return 0;
          v48 = v1[7];
          if ( (unsigned __int8)(v48 - 48) > 9u && (unsigned __int8)(v48 - 97) > 5u )
            return 0;
          v49 = v1[8];
          if ( (unsigned __int8)(v49 - 48) > 9u && (unsigned __int8)(v49 - 97) > 5u )
            return 0;
          v50 = v1[9];
          if ( (unsigned __int8)(v50 - 48) > 9u && (unsigned __int8)(v50 - 97) > 5u )
            return 0;
          v51 = v1[10];
          if ( (unsigned __int8)(v51 - 48) > 9u && (unsigned __int8)(v51 - 97) > 5u )
            return 0;
          v52 = v1[11];
          if ( (unsigned __int8)(v52 - 48) > 9u && (unsigned __int8)(v52 - 97) > 5u )
            return 0;
          v53 = v1[12];
          if ( (unsigned __int8)(v53 - 48) > 9u && (unsigned __int8)(v53 - 97) > 5u )
            return 0;
          v54 = v1[13];
          if ( (unsigned __int8)(v54 - 48) > 9u && (unsigned __int8)(v54 - 97) > 5u )
            return 0;
          v55 = v1[14];
          if ( (unsigned __int8)(v55 - 48) > 9u && (unsigned __int8)(v55 - 97) > 5u )
            return 0;
          v56 = v1[15];
          if ( (unsigned __int8)(v56 - 48) > 9u && (unsigned __int8)(v56 - 97) > 5u )
            return 0;
          v57 = v1[16];
          if ( (unsigned __int8)(v57 - 48) > 9u && (unsigned __int8)(v57 - 97) > 5u )
            return 0;
          v58 = v1[17];
          if ( (unsigned __int8)(v58 - 48) > 9u && (unsigned __int8)(v58 - 97) > 5u )
            return 0;
          *(_QWORD *)a1 = v43;
          if ( v2 == v43 || v1[18] != 69 )
            return 0;
          *(_QWORD *)a1 = v1 + 19;
          result = sub_20CF970(a1 + 816, 32);
          v59 = *(_BYTE *)(result + 10);
          *(_WORD *)(result + 8) = 16463;
          *(_QWORD *)(result + 16) = 16;
          *(_QWORD *)(result + 24) = v41;
          *(_BYTE *)(result + 10) = v59 & 0xF0 | 5;
          *(_QWORD *)result = off_2BE86A0;
          return result;
        case 'e':
          v37 = v1 + 2;
          *(_QWORD *)a1 = v1 + 2;
          if ( (unsigned __int64)(v2 - (v1 + 2)) <= 0x14 )
            return 0;
          v38 = v1[2];
          v39 = v1 + 22;
          if ( (unsigned __int8)(v38 - 97) > 5u && (unsigned __int8)(v38 - 48) > 9u )
            return 0;
          v40 = v1 + 2;
          break;
        case 'f':
          v26 = v1 + 2;
          *(_QWORD *)a1 = v1 + 2;
          if ( (unsigned __int64)(v2 - (v1 + 2)) <= 8 )
            return 0;
          v27 = v1[2];
          v28 = v1 + 10;
          if ( (unsigned __int8)(v27 - 97) > 5u && (unsigned __int8)(v27 - 48) > 9u )
            return 0;
          v29 = v1[3];
          if ( (unsigned __int8)(v29 - 48) > 9u && (unsigned __int8)(v29 - 97) > 5u )
            return 0;
          v30 = v1[4];
          if ( (unsigned __int8)(v30 - 48) > 9u && (unsigned __int8)(v30 - 97) > 5u )
            return 0;
          v31 = v1[5];
          if ( (unsigned __int8)(v31 - 48) > 9u && (unsigned __int8)(v31 - 97) > 5u )
            return 0;
          v32 = v1[6];
          if ( (unsigned __int8)(v32 - 48) > 9u && (unsigned __int8)(v32 - 97) > 5u )
            return 0;
          v33 = v1[7];
          if ( (unsigned __int8)(v33 - 48) > 9u && (unsigned __int8)(v33 - 97) > 5u )
            return 0;
          v34 = v1[8];
          if ( (unsigned __int8)(v34 - 48) > 9u && (unsigned __int8)(v34 - 97) > 5u )
            return 0;
          v35 = v1[9];
          if ( (unsigned __int8)(v35 - 48) > 9u && (unsigned __int8)(v35 - 97) > 5u )
            return 0;
          *(_QWORD *)a1 = v28;
          if ( v2 == v28 || v1[10] != 69 )
            return 0;
          *(_QWORD *)a1 = v1 + 11;
          result = sub_20CF970(a1 + 816, 32);
          v36 = *(_BYTE *)(result + 10);
          *(_WORD *)(result + 8) = 16462;
          *(_QWORD *)(result + 16) = 8;
          *(_QWORD *)(result + 24) = v26;
          *(_BYTE *)(result + 10) = v36 & 0xF0 | 5;
          *(_QWORD *)result = off_2BE8640;
          return result;
        case 'h':
          *(_QWORD *)a1 = v1 + 2;
          v25 = j__strlen("unsigned char");
          v13 = "unsigned char";
          v14 = v25;
          return sub_20CFA20(a1, v14, (__int64)v13);
        case 'i':
          *(_QWORD *)a1 = v1 + 2;
          v24 = j__strlen(&byte_22F0C30);
          v13 = (char *)&byte_22F0C30;
          v14 = v24;
          return sub_20CFA20(a1, v14, (__int64)v13);
        case 'j':
          *(_QWORD *)a1 = v1 + 2;
          v23 = j__strlen("u");
          v13 = "u";
          v14 = v23;
          return sub_20CFA20(a1, v14, (__int64)v13);
        case 'l':
          *(_QWORD *)a1 = v1 + 2;
          v22 = j__strlen("l");
          v13 = (char *)"l";
          v14 = v22;
          return sub_20CFA20(a1, v14, (__int64)v13);
        case 'm':
          *(_QWORD *)a1 = v1 + 2;
          v21 = j__strlen("ul");
          v13 = "ul";
          v14 = v21;
          return sub_20CFA20(a1, v14, (__int64)v13);
        case 'n':
          *(_QWORD *)a1 = v1 + 2;
          v20 = j__strlen("__int128");
          v13 = (char *)"__int128";
          v14 = v20;
          return sub_20CFA20(a1, v14, (__int64)v13);
        case 'o':
          *(_QWORD *)a1 = v1 + 2;
          v19 = j__strlen("unsigned __int128");
          v13 = "unsigned __int128";
          v14 = v19;
          return sub_20CFA20(a1, v14, (__int64)v13);
        case 's':
          *(_QWORD *)a1 = v1 + 2;
          v18 = j__strlen("short");
          v13 = (char *)"short";
          v14 = v18;
          return sub_20CFA20(a1, v14, (__int64)v13);
        case 't':
          *(_QWORD *)a1 = v1 + 2;
          v17 = j__strlen("unsigned short");
          v13 = "unsigned short";
          v14 = v17;
          return sub_20CFA20(a1, v14, (__int64)v13);
        case 'w':
          *(_QWORD *)a1 = v1 + 2;
          v16 = j__strlen("wchar_t");
          v13 = "wchar_t";
          v14 = v16;
          return sub_20CFA20(a1, v14, (__int64)v13);
        case 'x':
          *(_QWORD *)a1 = v1 + 2;
          v15 = j__strlen("ll");
          v13 = "ll";
          v14 = v15;
          return sub_20CFA20(a1, v14, (__int64)v13);
        case 'y':
          *(_QWORD *)a1 = v1 + 2;
          v12 = j__strlen("ull");
          v13 = "ull";
          v14 = v12;
          return sub_20CFA20(a1, v14, (__int64)v13);
        default:
          goto LABEL_7;
      }
      while ( v39 != ++v40 )
      {
        if ( (unsigned __int8)(*v40 - 48) > 9u && (unsigned __int8)(*v40 - 97) > 5u )
          return 0;
      }
      *(_QWORD *)a1 = v39;
      if ( v2 != v39 && v1[22] == 69 )
      {
        *(_QWORD *)a1 = v1 + 23;
        result = sub_20CF970(a1 + 816, 32);
        v80 = *(_BYTE *)(result + 10);
        *(_WORD *)(result + 8) = 16464;
        *(_QWORD *)(result + 16) = 20;
        *(_QWORD *)(result + 24) = v37;
        *(_BYTE *)(result + 10) = v80 & 0xF0 | 5;
        *(_QWORD *)result = off_2BE8700;
        return result;
      }
    }
  }
  return 0;
}
