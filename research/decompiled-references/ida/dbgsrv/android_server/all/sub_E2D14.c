/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E2D14
// Address: 0x00000000000E2D14

//----- (00000000000E2D14) ----------------------------------------------------
char *__fastcall sub_E2D14(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // x8
  unsigned __int8 *v2; // x10
  int v4; // w22
  char *result; // x0
  int v6; // w21
  _BYTE *v7; // x9
  int v8; // w10
  char *v9; // x23
  char *v10; // x24
  int v11; // w10
  int v12; // w10
  int v13; // w10
  int v14; // w10
  int v15; // w10
  int v16; // w10
  int v17; // w10
  char *v18; // x20
  char *v19; // x8
  char *v20; // x22
  unsigned __int8 *v21; // x25
  _QWORD *v22; // x8
  __int64 v23; // x9
  unsigned __int8 **v24; // x0

  v1 = *a1;
  v2 = a1[1];
  if ( *a1 == v2 )
    return nullptr;
  if ( *v1 != 102 )
    return nullptr;
  *a1 = v1 + 1;
  if ( v2 == v1 + 1 )
    return nullptr;
  v4 = v1[1];
  result = nullptr;
  v6 = 1;
  switch ( v1[1] )
  {
    case 'L':
    case 'l':
      goto LABEL_6;
    case 'R':
    case 'r':
      v6 = 0;
LABEL_6:
      v7 = v1 + 2;
      *a1 = v1 + 2;
      if ( (unsigned __int64)(v2 - (v1 + 2)) < 2 )
        return nullptr;
      v8 = (unsigned __int8)*v7;
      if ( v8 != 97 )
        goto LABEL_22;
      if ( v1[3] == 97 )
      {
        v9 = "&&";
LABEL_108:
        v10 = v9 + 2;
        goto LABEL_109;
      }
      v8 = (unsigned __int8)*v7;
      if ( v8 == 97 )
      {
        if ( v1[3] == 110 )
        {
          v9 = "&";
          v10 = "";
          goto LABEL_109;
        }
        v8 = (unsigned __int8)*v7;
        if ( v8 == 97 )
        {
          if ( v1[3] == 78 )
          {
            v9 = "&=";
            goto LABEL_108;
          }
          v8 = (unsigned __int8)*v7;
          if ( v8 == 97 )
          {
            if ( v1[3] == 83 )
            {
              v9 = "=";
              v10 = "";
              goto LABEL_109;
            }
            v8 = (unsigned __int8)*v7;
          }
        }
      }
LABEL_22:
      if ( v8 == 99 && v1[3] == 109 )
      {
        v9 = ",";
        v10 = "";
        goto LABEL_109;
      }
      if ( *v7 != 100 )
        goto LABEL_34;
      if ( v1[3] == 115 )
      {
        v9 = ".*";
        goto LABEL_108;
      }
      if ( *v7 != 100 )
        goto LABEL_34;
      if ( v1[3] == 118 )
      {
        v9 = "/";
        v10 = "";
        goto LABEL_109;
      }
      v11 = (unsigned __int8)*v7;
      if ( v11 == 100 )
      {
        if ( v1[3] == 86 )
        {
          v9 = "/=";
          goto LABEL_108;
        }
LABEL_34:
        v11 = (unsigned __int8)*v7;
      }
      if ( v11 == 101 && v1[3] == 111 )
      {
        v9 = "^";
        v10 = "";
        goto LABEL_109;
      }
      v12 = (unsigned __int8)*v7;
      if ( v12 == 101 )
      {
        if ( v1[3] == 79 )
        {
          v9 = "^=";
          goto LABEL_108;
        }
        v12 = (unsigned __int8)*v7;
        if ( v12 == 101 )
        {
          if ( v1[3] == 113 )
          {
            v9 = "==";
            goto LABEL_108;
          }
          v12 = (unsigned __int8)*v7;
        }
      }
      if ( v12 == 103 && v1[3] == 101 )
      {
        v9 = ">=";
        goto LABEL_108;
      }
      v13 = (unsigned __int8)*v7;
      if ( v13 == 103 )
      {
        if ( v1[3] == 116 )
        {
          v9 = ">";
          v10 = "";
          goto LABEL_109;
        }
        v13 = (unsigned __int8)*v7;
      }
      if ( v13 == 108 && v1[3] == 101 )
      {
        v9 = "<=";
        goto LABEL_108;
      }
      if ( *v7 != 108 )
        goto LABEL_65;
      if ( v1[3] == 115 )
      {
        v9 = "<<";
        goto LABEL_108;
      }
      if ( *v7 != 108 )
        goto LABEL_65;
      if ( v1[3] == 83 )
      {
        v9 = "<<=";
        goto LABEL_61;
      }
      v14 = (unsigned __int8)*v7;
      if ( v14 != 108 )
        goto LABEL_66;
      if ( v1[3] == 116 )
      {
        v9 = "<";
        v10 = "";
        goto LABEL_109;
      }
LABEL_65:
      v14 = (unsigned __int8)*v7;
LABEL_66:
      if ( v14 == 109 && v1[3] == 105 )
      {
        v9 = &byte_121EC0;
        v10 = &byte_121EC1;
        goto LABEL_109;
      }
      if ( *v7 != 109 )
        goto LABEL_78;
      if ( v1[3] == 73 )
      {
        v9 = "-=";
        goto LABEL_108;
      }
      if ( *v7 != 109 )
        goto LABEL_78;
      if ( v1[3] == 108 )
      {
        v9 = "*";
        v10 = "";
        goto LABEL_109;
      }
      v15 = (unsigned __int8)*v7;
      if ( v15 == 109 )
      {
        if ( v1[3] == 76 )
        {
          v9 = "*=";
          goto LABEL_108;
        }
LABEL_78:
        v15 = (unsigned __int8)*v7;
      }
      if ( v15 == 110 && v1[3] == 101 )
      {
        v9 = "!=";
        goto LABEL_108;
      }
      if ( *v7 != 111 )
        goto LABEL_91;
      if ( v1[3] == 111 )
      {
        v9 = "||";
        goto LABEL_108;
      }
      if ( *v7 != 111 )
        goto LABEL_91;
      if ( v1[3] == 114 )
      {
        v9 = "|";
        v10 = "";
      }
      else
      {
        v16 = (unsigned __int8)*v7;
        if ( v16 == 111 )
        {
          if ( v1[3] == 82 )
          {
            v9 = "|=";
            goto LABEL_108;
          }
LABEL_91:
          v16 = (unsigned __int8)*v7;
        }
        if ( v16 == 112 && v1[3] == 108 )
        {
          v9 = "+";
          v10 = "";
        }
        else
        {
          v17 = (unsigned __int8)*v7;
          if ( v17 == 112 )
          {
            if ( v1[3] == 76 )
            {
              v9 = "+=";
              goto LABEL_108;
            }
            v17 = (unsigned __int8)*v7;
          }
          if ( v17 != 114 || v1[3] != 109 )
          {
            if ( *v7 != 114 )
              return nullptr;
            if ( v1[3] == 77 )
            {
              v9 = "%=";
              goto LABEL_108;
            }
            if ( *v7 != 114 )
              return nullptr;
            if ( v1[3] == 115 )
            {
              v9 = ">>";
              goto LABEL_108;
            }
            if ( *v7 != 114 || v1[3] != 83 )
              return nullptr;
            v9 = ">>=";
LABEL_61:
            v10 = v9 + 3;
            goto LABEL_109;
          }
          v9 = "%";
          v10 = "";
        }
      }
LABEL_109:
      *a1 = v1 + 4;
      result = sub_DFE94(a1);
      if ( !result )
        return result;
      v18 = result;
      if ( v4 == 82 || v4 == 76 )
      {
        result = sub_DFE94(a1);
        if ( !result )
          return result;
        if ( v6 )
          v19 = result;
        else
          v19 = v18;
        if ( v6 )
          v20 = v18;
        else
          v20 = result;
        v18 = v19;
      }
      else
      {
        v20 = nullptr;
      }
      v21 = a1[604];
      v22 = v21 + 8;
      v23 = *((_QWORD *)v21 + 1);
      if ( (unsigned __int64)(v23 + 64) >= 0xFF0 )
      {
        v24 = (unsigned __int8 **)operator new[](0x1000u);
        v23 = 0;
        *v24 = v21;
        v24[1] = nullptr;
        v22 = v24 + 1;
        v21 = (unsigned __int8 *)v24;
        a1[604] = (unsigned __int8 *)v24;
      }
      *v22 = v23 + 64;
      *(_QWORD *)&v21[v23 + 16] = off_161CB8;
      result = (char *)&v21[v23 + 16];
      *((_DWORD *)result + 2) = 16843050;
      *((_QWORD *)result + 2) = v18;
      *((_QWORD *)result + 3) = v20;
      *((_QWORD *)result + 4) = v9;
      *((_QWORD *)result + 5) = v10;
      result[48] = v6;
      return result;
    default:
      return result;
  }
}
// 121EC0: using guessed type char byte_121EC0;
// 121EC1: using guessed type char byte_121EC1;
// 161CB8: using guessed type __int64 (__fastcall *off_161CB8[7])();
