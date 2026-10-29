/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95B00
// Address: 0x00095B00

//----- (00095B00) --------------------------------------------------------
unsigned __int8 *__fastcall sub_95B00(unsigned __int8 **a1, int a2, int a3, _DWORD *a4)
{
  __int64 v5; // kr08_8
  unsigned __int8 *result; // r0
  int v7; // r1
  unsigned __int8 **v8; // r2
  __int64 v9; // kr10_8
  unsigned __int8 *v10; // r0
  unsigned __int8 *v11; // r5
  int v12; // r6
  __int64 v13; // r0
  unsigned __int8 *v14; // r9
  unsigned __int8 *v15; // r10
  const char *v16; // r1
  char *v17; // r2
  unsigned __int8 *v18; // r0
  int v19; // r9
  unsigned __int8 *v20; // r10
  int v21; // r4
  int v22; // r0
  int v23; // r1
  int v24; // r4
  int v25; // r0
  int v26; // r1
  int v27; // r4
  int v28; // r0
  int v29; // r1
  int *v30; // r1
  unsigned __int8 *v31[2]; // [sp+0h] [bp-28h] BYREF

  v5 = *(_QWORD *)a1;
  if ( (_DWORD)v5 == HIDWORD(v5) || *(_BYTE *)v5 != 76 )
    return nullptr;
  *a1 = (unsigned __int8 *)(v5 + 1);
  if ( HIDWORD(v5) == (_DWORD)v5 + 1 )
  {
LABEL_10:
    v10 = sub_92B28((__int64 *)a1, a2, a3, a4);
    if ( v10 )
    {
      v11 = v10;
      v12 = 0;
      sub_92AAC(v31, a1, 0);
      v13 = *(_QWORD *)a1;
      v15 = v31[0];
      v14 = v31[1];
      if ( (_DWORD)v13 != HIDWORD(v13) )
      {
        if ( *(_BYTE *)v13 == 69 )
        {
          v12 = 1;
          *a1 = (unsigned __int8 *)(v13 + 1);
        }
        else
        {
          v12 = 0;
        }
      }
      if ( v15 == v14 )
      {
        if ( !v12 )
          return nullptr;
        return v11;
      }
      if ( v12 )
      {
        result = (unsigned __int8 *)sub_93AC6((int)(a1 + 92), 20);
        *(_DWORD *)result = &off_DBE04;
        *((_DWORD *)result + 1) = 16843050;
        *((_DWORD *)result + 2) = v11;
        *((_DWORD *)result + 3) = v15;
        *((_DWORD *)result + 4) = v14;
        return result;
      }
    }
    return nullptr;
  }
  a2 = *(unsigned __int8 *)(v5 + 1) - 84;
  result = nullptr;
  switch ( *(_BYTE *)(v5 + 1) )
  {
    case 'T':
      return result;
    case '_':
      if ( !sub_924C8((__int64 *)a1, "_Z", (unsigned __int8 *)"") )
        return nullptr;
      result = (unsigned __int8 *)sub_9251C((int)a1, v7, v8);
      if ( !result )
        return nullptr;
      v9 = *(_QWORD *)a1;
      if ( (_DWORD)v9 == HIDWORD(v9) || *(_BYTE *)v9 != 69 )
        return nullptr;
      *a1 = (unsigned __int8 *)(v9 + 1);
      return result;
    case 'a':
      *a1 = (unsigned __int8 *)(v5 + 2);
      v16 = "signed char";
      v17 = "";
      return (unsigned __int8 *)sub_96454(a1, (int)v16, (int)v17);
    case 'b':
      if ( sub_924C8((__int64 *)a1, "b0E", (unsigned __int8 *)"") )
      {
        v18 = nullptr;
      }
      else
      {
        if ( !sub_924C8((__int64 *)a1, "b1E", (unsigned __int8 *)"") )
          return nullptr;
        v18 = (_BYTE *)(&dword_0 + 1);
      }
      v31[0] = v18;
      return (unsigned __int8 *)sub_964D8((int)a1, (int *)v31);
    case 'c':
      *a1 = (unsigned __int8 *)(v5 + 2);
      v16 = "char";
      v17 = "";
      return (unsigned __int8 *)sub_96454(a1, (int)v16, (int)v17);
    case 'd':
      v19 = v5 + 2;
      *a1 = (unsigned __int8 *)(v5 + 2);
      if ( (unsigned int)(HIDWORD(v5) - (v5 + 2)) < 0x11 )
        return nullptr;
      v20 = (unsigned __int8 *)(v5 + 18);
      v21 = 0;
      while ( v21 != 16 )
      {
        v22 = isxdigit(*(unsigned __int8 *)(v19 + v21++));
        v23 = v22;
        result = nullptr;
        if ( !v23 )
          return result;
      }
      *a1 = v20;
      if ( v20 == (unsigned __int8 *)HIDWORD(v5) || *v20 != 69 )
        return nullptr;
      *a1 = (unsigned __int8 *)(v5 + 19);
      result = (unsigned __int8 *)sub_93AC6((int)(a1 + 92), 16);
      v30 = &`vtable for'`anonymous namespace'::FloatExpr<double>;
      goto LABEL_68;
    case 'e':
      v19 = v5 + 2;
      *a1 = (unsigned __int8 *)(v5 + 2);
      if ( (unsigned int)(HIDWORD(v5) - (v5 + 2)) < 0x11 )
        return nullptr;
      v20 = (unsigned __int8 *)(v5 + 18);
      v24 = 0;
      while ( v24 != 16 )
      {
        v25 = isxdigit(*(unsigned __int8 *)(v19 + v24++));
        v26 = v25;
        result = nullptr;
        if ( !v26 )
          return result;
      }
      *a1 = v20;
      if ( v20 == (unsigned __int8 *)HIDWORD(v5) || *v20 != 69 )
        return nullptr;
      *a1 = (unsigned __int8 *)(v5 + 19);
      result = (unsigned __int8 *)sub_93AC6((int)(a1 + 92), 16);
      v30 = &`vtable for'`anonymous namespace'::FloatExpr<long double>;
      goto LABEL_68;
    case 'f':
      v19 = v5 + 2;
      *a1 = (unsigned __int8 *)(v5 + 2);
      if ( (unsigned int)(HIDWORD(v5) - (v5 + 2)) < 9 )
        return nullptr;
      v20 = (unsigned __int8 *)(v5 + 10);
      v27 = 0;
      break;
    case 'h':
      *a1 = (unsigned __int8 *)(v5 + 2);
      v16 = "unsigned char";
      v17 = "";
      return (unsigned __int8 *)sub_96454(a1, (int)v16, (int)v17);
    case 'i':
      *a1 = (unsigned __int8 *)(v5 + 2);
      return (unsigned __int8 *)sub_96454(a1, (int)&byte_A0742, (int)&byte_A0742);
    case 'j':
      *a1 = (unsigned __int8 *)(v5 + 2);
      v16 = "u";
      goto LABEL_44;
    case 'l':
      *a1 = (unsigned __int8 *)(v5 + 2);
      v16 = "l";
LABEL_44:
      v17 = (char *)(v16 + 1);
      return (unsigned __int8 *)sub_96454(a1, (int)v16, (int)v17);
    case 'm':
      *a1 = (unsigned __int8 *)(v5 + 2);
      v16 = "ul";
      goto LABEL_52;
    case 'n':
      *a1 = (unsigned __int8 *)(v5 + 2);
      v16 = "__int128";
      v17 = "";
      return (unsigned __int8 *)sub_96454(a1, (int)v16, (int)v17);
    case 'o':
      *a1 = (unsigned __int8 *)(v5 + 2);
      v16 = "unsigned __int128";
      v17 = "";
      return (unsigned __int8 *)sub_96454(a1, (int)v16, (int)v17);
    case 's':
      *a1 = (unsigned __int8 *)(v5 + 2);
      v16 = "short";
      v17 = "";
      return (unsigned __int8 *)sub_96454(a1, (int)v16, (int)v17);
    case 't':
      *a1 = (unsigned __int8 *)(v5 + 2);
      v16 = "unsigned short";
      v17 = "";
      return (unsigned __int8 *)sub_96454(a1, (int)v16, (int)v17);
    case 'w':
      *a1 = (unsigned __int8 *)(v5 + 2);
      v16 = "wchar_t";
      v17 = "";
      return (unsigned __int8 *)sub_96454(a1, (int)v16, (int)v17);
    case 'x':
      *a1 = (unsigned __int8 *)(v5 + 2);
      v16 = "ll";
LABEL_52:
      v17 = (char *)(v16 + 2);
      return (unsigned __int8 *)sub_96454(a1, (int)v16, (int)v17);
    case 'y':
      *a1 = (unsigned __int8 *)(v5 + 2);
      v16 = "ull";
      v17 = "";
      return (unsigned __int8 *)sub_96454(a1, (int)v16, (int)v17);
    default:
      goto LABEL_10;
  }
  while ( v27 != 8 )
  {
    v28 = isxdigit(*(unsigned __int8 *)(v19 + v27++));
    v29 = v28;
    result = nullptr;
    if ( !v29 )
      return result;
  }
  *a1 = v20;
  if ( v20 == (unsigned __int8 *)HIDWORD(v5) || *v20 != 69 )
    return nullptr;
  *a1 = (unsigned __int8 *)(v5 + 11);
  result = (unsigned __int8 *)sub_93AC6((int)(a1 + 92), 16);
  v30 = &`vtable for'`anonymous namespace'::FloatExpr<float>;
LABEL_68:
  *(_DWORD *)result = v30 + 2;
  *((_DWORD *)result + 1) = 16843050;
  *((_DWORD *)result + 2) = v19;
  *((_DWORD *)result + 3) = v20;
  return result;
}
// 95BA4: variable 'v7' is possibly undefined
// 95BA4: variable 'v8' is possibly undefined
// 0: using guessed type int dword_0;
// A0742: using guessed type char byte_A0742;
// DBD60: using guessed type int `vtable for'`anonymous namespace'::FloatExpr<float>;
// DBD94: using guessed type int `vtable for'`anonymous namespace'::FloatExpr<double>;
// DBDC8: using guessed type int `vtable for'`anonymous namespace'::FloatExpr<long double>;
// DBE04: using guessed type _UNKNOWN *off_DBE04;
