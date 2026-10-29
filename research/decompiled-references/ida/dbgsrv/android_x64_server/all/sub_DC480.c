/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DC480
// Address: 0x00000000000DC480

//----- (00000000000DC480) ----------------------------------------------------
char *__fastcall sub_DC480(char **a1, __int64 a2)
{
  char *v2; // rbx
  char *v3; // r14
  unsigned __int64 v4; // rdx
  char v5; // cl
  char *result; // rax
  char *v7; // rcx
  char *v8; // rax
  char *v9; // r14
  char *v10; // r13
  char *v11; // rax
  char *v12; // rdx
  char *v13; // rcx
  unsigned int v14; // esi
  char *v15; // r12
  char v16; // cl
  char *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rdx
  const char *v21; // rsi
  char *v22; // rdx
  char *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rdx
  char *v27; // r12
  _BYTE *v28; // r13
  char *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rax
  _QWORD *v34; // rdx
  __int64 v35; // rax
  _QWORD *v36; // rdx
  char *v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rdx
  __int64 (__fastcall **v41)(); // rdx

  v2 = *a1;
  v3 = a1[1];
  if ( *a1 == v3 || *v2 != 76 )
    return nullptr;
  *a1 = v2 + 1;
  v4 = v3 - (v2 + 1);
  if ( v3 == v2 + 1 )
  {
LABEL_12:
    v8 = sub_D4260((__int64)a1);
    if ( !v8 )
      return nullptr;
    v9 = v8;
    v10 = *a1;
    v11 = a1[1];
    if ( v11 == *a1 || (unsigned int)(*v10 - 48) > 9 )
    {
      v15 = nullptr;
      v13 = *a1;
      v10 = nullptr;
      if ( *a1 == v11 )
        goto LABEL_26;
    }
    else
    {
      v12 = v10 + 1;
      do
      {
        v13 = v12;
        *a1 = v12;
        if ( v11 == v12 )
          break;
        v14 = *v12++ - 48;
      }
      while ( v14 < 0xA );
      v15 = v13;
      if ( v13 == v11 )
        goto LABEL_26;
    }
    if ( *v13 == 69 )
    {
      *a1 = v13 + 1;
      v16 = 1;
      if ( v10 != v15 )
        goto LABEL_27;
      goto LABEL_23;
    }
LABEL_26:
    v16 = 0;
    if ( v10 != v15 )
    {
LABEL_27:
      if ( v16 )
      {
        v17 = a1[604];
        v18 = *((_QWORD *)v17 + 1);
        if ( (unsigned __int64)(v18 + 48) < 0xFF0 )
        {
          v20 = v17 + 8;
        }
        else
        {
          v19 = operator new[](0x1000u);
          *(_QWORD *)v19 = v17;
          *(_QWORD *)(v19 + 8) = 0;
          a1[604] = (char *)v19;
          v18 = 0;
          v20 = (_QWORD *)(v19 + 8);
          v17 = (char *)v19;
        }
        *v20 = v18 + 48;
        result = &v17[v18 + 16];
        *(_DWORD *)&v17[v18 + 24] = 16843050;
        *(_QWORD *)result = off_151D58;
        *(_QWORD *)&v17[v18 + 32] = v9;
        *(_QWORD *)&v17[v18 + 40] = v10;
        *(_QWORD *)&v17[v18 + 48] = v15;
        return result;
      }
      return nullptr;
    }
LABEL_23:
    result = nullptr;
    if ( v16 )
      return v9;
    return result;
  }
  v5 = v2[1];
  result = nullptr;
  switch ( v5 )
  {
    case 'T':
      return result;
    case '_':
      result = nullptr;
      if ( v4 < 2 || v5 != 95 )
        return result;
      if ( v2[2] != 90 )
        return nullptr;
      *a1 = v2 + 3;
      result = sub_D3180((__int64)a1);
      if ( !result )
        return nullptr;
      v7 = *a1;
      if ( *a1 == a1[1] || *v7 != 69 )
        return nullptr;
      *a1 = v7 + 1;
      return result;
    case 'a':
      *a1 = v2 + 2;
      v21 = "signed char";
      v22 = "";
      return sub_DE080(a1, (__int64)v21, (__int64)v22);
    case 'b':
      result = nullptr;
      if ( v4 < 3 || v5 != 98 )
        return result;
      if ( v2[2] == 48 && v2[3] == 69 )
      {
        *a1 = v2 + 4;
        v23 = a1[604];
        v24 = *((_QWORD *)v23 + 1);
        if ( (unsigned __int64)(v24 + 16) <= 0xFEF )
        {
          v26 = v23 + 8;
        }
        else
        {
          v25 = operator new[](0x1000u);
          *(_QWORD *)v25 = v23;
          *(_QWORD *)(v25 + 8) = 0;
          a1[604] = (char *)v25;
          v24 = 0;
          v26 = (_QWORD *)(v25 + 8);
          v23 = (char *)v25;
        }
        *v26 = v24 + 16;
        result = &v23[v24 + 16];
        *(_DWORD *)&v23[v24 + 24] = 16843050;
        *(_QWORD *)result = off_151B98;
        v23[v24 + 28] = 0;
      }
      else
      {
        if ( v2[2] != 49 || v2[3] != 69 )
          return nullptr;
        *a1 = v2 + 4;
        v37 = a1[604];
        v38 = *((_QWORD *)v37 + 1);
        if ( (unsigned __int64)(v38 + 16) <= 0xFEF )
        {
          v40 = v37 + 8;
        }
        else
        {
          v39 = operator new[](0x1000u);
          *(_QWORD *)v39 = v37;
          *(_QWORD *)(v39 + 8) = 0;
          a1[604] = (char *)v39;
          v38 = 0;
          v40 = (_QWORD *)(v39 + 8);
          v37 = (char *)v39;
        }
        *v40 = v38 + 16;
        result = &v37[v38 + 16];
        *(_DWORD *)&v37[v38 + 24] = 16843050;
        *(_QWORD *)result = off_151B98;
        v37[v38 + 28] = 1;
      }
      break;
    case 'c':
      *a1 = v2 + 2;
      v21 = "char";
      v22 = "";
      return sub_DE080(a1, (__int64)v21, (__int64)v22);
    case 'd':
      v27 = v2 + 2;
      *a1 = v2 + 2;
      if ( (unsigned __int64)(v3 - (v2 + 2)) < 0x11 )
        return nullptr;
      if ( !isxdigit(v2[2]) )
        return nullptr;
      if ( !isxdigit(v2[3]) )
        return nullptr;
      if ( !isxdigit(v2[4]) )
        return nullptr;
      if ( !isxdigit(v2[5]) )
        return nullptr;
      if ( !isxdigit(v2[6]) )
        return nullptr;
      if ( !isxdigit(v2[7]) )
        return nullptr;
      if ( !isxdigit(v2[8]) )
        return nullptr;
      if ( !isxdigit(v2[9]) )
        return nullptr;
      if ( !isxdigit(v2[10]) )
        return nullptr;
      if ( !isxdigit(v2[11]) )
        return nullptr;
      if ( !isxdigit(v2[12]) )
        return nullptr;
      if ( !isxdigit(v2[13]) )
        return nullptr;
      if ( !isxdigit(v2[14]) )
        return nullptr;
      if ( !isxdigit(v2[15]) )
        return nullptr;
      if ( !isxdigit(v2[16]) )
        return nullptr;
      if ( !isxdigit(v2[17]) )
        return nullptr;
      v28 = v2 + 18;
      *a1 = v2 + 18;
      if ( v2 + 18 == v3 || *v28 != 69 )
        return nullptr;
      *a1 = v2 + 19;
      v29 = a1[604];
      v30 = *((_QWORD *)v29 + 1);
      if ( (unsigned __int64)(v30 + 32) < 0xFF0 )
      {
        v32 = v29 + 8;
      }
      else
      {
        v31 = operator new[](0x1000u);
        *(_QWORD *)v31 = v29;
        *(_QWORD *)(v31 + 8) = 0;
        a1[604] = (char *)v31;
        v30 = 0;
        v32 = (_QWORD *)(v31 + 8);
        v29 = (char *)v31;
      }
      *v32 = v30 + 32;
      result = &v29[v30 + 16];
      *(_DWORD *)&v29[v30 + 24] = 16843050;
      v41 = off_151C78;
      goto LABEL_124;
    case 'e':
      v27 = v2 + 2;
      *a1 = v2 + 2;
      if ( (unsigned __int64)(v3 - (v2 + 2)) < 0x15 )
        return nullptr;
      if ( !isxdigit(v2[2]) )
        return nullptr;
      if ( !isxdigit(v2[3]) )
        return nullptr;
      if ( !isxdigit(v2[4]) )
        return nullptr;
      if ( !isxdigit(v2[5]) )
        return nullptr;
      if ( !isxdigit(v2[6]) )
        return nullptr;
      if ( !isxdigit(v2[7]) )
        return nullptr;
      if ( !isxdigit(v2[8]) )
        return nullptr;
      if ( !isxdigit(v2[9]) )
        return nullptr;
      if ( !isxdigit(v2[10]) )
        return nullptr;
      if ( !isxdigit(v2[11]) )
        return nullptr;
      if ( !isxdigit(v2[12]) )
        return nullptr;
      if ( !isxdigit(v2[13]) )
        return nullptr;
      if ( !isxdigit(v2[14]) )
        return nullptr;
      if ( !isxdigit(v2[15]) )
        return nullptr;
      if ( !isxdigit(v2[16]) )
        return nullptr;
      if ( !isxdigit(v2[17]) )
        return nullptr;
      if ( !isxdigit(v2[18]) )
        return nullptr;
      if ( !isxdigit(v2[19]) )
        return nullptr;
      if ( !isxdigit(v2[20]) )
        return nullptr;
      if ( !isxdigit(v2[21]) )
        return nullptr;
      v28 = v2 + 22;
      *a1 = v2 + 22;
      if ( v2 + 22 == v3 || *v28 != 69 )
        return nullptr;
      *a1 = v2 + 23;
      v29 = a1[604];
      v30 = *((_QWORD *)v29 + 1);
      if ( (unsigned __int64)(v30 + 32) < 0xFF0 )
      {
        v34 = v29 + 8;
      }
      else
      {
        v33 = operator new[](0x1000u);
        *(_QWORD *)v33 = v29;
        *(_QWORD *)(v33 + 8) = 0;
        a1[604] = (char *)v33;
        v30 = 0;
        v34 = (_QWORD *)(v33 + 8);
        v29 = (char *)v33;
      }
      *v34 = v30 + 32;
      result = &v29[v30 + 16];
      *(_DWORD *)&v29[v30 + 24] = 16843050;
      v41 = off_151CE8;
      goto LABEL_124;
    case 'f':
      v27 = v2 + 2;
      *a1 = v2 + 2;
      if ( (unsigned __int64)(v3 - (v2 + 2)) < 9 )
        return nullptr;
      if ( !isxdigit(v2[2]) )
        return nullptr;
      if ( !isxdigit(v2[3]) )
        return nullptr;
      if ( !isxdigit(v2[4]) )
        return nullptr;
      if ( !isxdigit(v2[5]) )
        return nullptr;
      if ( !isxdigit(v2[6]) )
        return nullptr;
      if ( !isxdigit(v2[7]) )
        return nullptr;
      if ( !isxdigit(v2[8]) )
        return nullptr;
      if ( !isxdigit(v2[9]) )
        return nullptr;
      v28 = v2 + 10;
      *a1 = v2 + 10;
      if ( v2 + 10 == v3 || *v28 != 69 )
        return nullptr;
      *a1 = v2 + 11;
      v29 = a1[604];
      v30 = *((_QWORD *)v29 + 1);
      if ( (unsigned __int64)(v30 + 32) < 0xFF0 )
      {
        v36 = v29 + 8;
      }
      else
      {
        v35 = operator new[](0x1000u);
        *(_QWORD *)v35 = v29;
        *(_QWORD *)(v35 + 8) = 0;
        a1[604] = (char *)v35;
        v30 = 0;
        v36 = (_QWORD *)(v35 + 8);
        v29 = (char *)v35;
      }
      *v36 = v30 + 32;
      result = &v29[v30 + 16];
      *(_DWORD *)&v29[v30 + 24] = 16843050;
      v41 = off_151C08;
LABEL_124:
      *(_QWORD *)&v29[v30 + 16] = v41;
      *(_QWORD *)&v29[v30 + 32] = v27;
      *(_QWORD *)&v29[v30 + 40] = v28;
      return result;
    case 'h':
      *a1 = v2 + 2;
      v21 = "unsigned char";
      v22 = "";
      return sub_DE080(a1, (__int64)v21, (__int64)v22);
    case 'i':
      *a1 = v2 + 2;
      v21 = &byte_EB522;
      v22 = (char *)&byte_EB522;
      return sub_DE080(a1, (__int64)v21, (__int64)v22);
    case 'j':
      *a1 = v2 + 2;
      v21 = "u";
      v22 = "";
      return sub_DE080(a1, (__int64)v21, (__int64)v22);
    case 'l':
      *a1 = v2 + 2;
      v21 = "l";
      v22 = "";
      return sub_DE080(a1, (__int64)v21, (__int64)v22);
    case 'm':
      *a1 = v2 + 2;
      v21 = "ul";
      v22 = "";
      return sub_DE080(a1, (__int64)v21, (__int64)v22);
    case 'n':
      *a1 = v2 + 2;
      v21 = "__int128";
      v22 = "";
      return sub_DE080(a1, (__int64)v21, (__int64)v22);
    case 'o':
      *a1 = v2 + 2;
      v21 = "unsigned __int128";
      v22 = "";
      return sub_DE080(a1, (__int64)v21, (__int64)v22);
    case 's':
      *a1 = v2 + 2;
      v21 = "short";
      v22 = "";
      return sub_DE080(a1, (__int64)v21, (__int64)v22);
    case 't':
      *a1 = v2 + 2;
      v21 = "unsigned short";
      v22 = "";
      return sub_DE080(a1, (__int64)v21, (__int64)v22);
    case 'w':
      *a1 = v2 + 2;
      v21 = "wchar_t";
      v22 = "";
      return sub_DE080(a1, (__int64)v21, (__int64)v22);
    case 'x':
      *a1 = v2 + 2;
      v21 = "ll";
      v22 = "";
      return sub_DE080(a1, (__int64)v21, (__int64)v22);
    case 'y':
      *a1 = v2 + 2;
      v21 = "ull";
      v22 = "";
      return sub_DE080(a1, (__int64)v21, (__int64)v22);
    default:
      goto LABEL_12;
  }
  return result;
}
// 151B98: using guessed type __int64 (__fastcall *off_151B98[7])();
// 151C08: using guessed type __int64 (__fastcall *off_151C08[7])();
// 151C78: using guessed type __int64 (__fastcall *off_151C78[7])();
// 151CE8: using guessed type __int64 (__fastcall *off_151CE8[7])();
// 151D58: using guessed type __int64 (__fastcall *off_151D58[7])();
