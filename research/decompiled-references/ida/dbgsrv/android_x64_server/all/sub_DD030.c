/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DD030
// Address: 0x00000000000DD030

//----- (00000000000DD030) ----------------------------------------------------
_QWORD *__fastcall sub_DD030(_QWORD *a1)
{
  _BYTE *v1; // rcx
  _BYTE *v2; // rdx
  char v3; // r15
  _QWORD *result; // rax
  char v5; // r12
  char *v6; // rax
  char v7; // dl
  __m128i v8; // xmm0
  const char *v9; // rax
  char v10; // dl
  char v11; // dl
  char v12; // dl
  char v13; // dl
  char v14; // dl
  char v15; // dl
  char v16; // dl
  char *v17; // rax
  char *v18; // r14
  char *v19; // rax
  char *v20; // r15
  char *v21; // rax
  _QWORD *v22; // rbp
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  __m128i si128; // xmm0
  __m128i v27[4]; // [rsp+0h] [rbp-48h] BYREF

  v1 = (_BYTE *)*a1;
  v2 = (_BYTE *)a1[1];
  if ( (_BYTE *)*a1 == v2 )
    return nullptr;
  if ( *v1 != 102 )
    return nullptr;
  *a1 = v1 + 1;
  if ( v2 == v1 + 1 )
    return nullptr;
  v3 = v1[1];
  result = nullptr;
  v5 = 1;
  switch ( v3 )
  {
    case 'L':
    case 'l':
      goto LABEL_6;
    case 'R':
    case 'r':
      v5 = 0;
LABEL_6:
      v6 = v1 + 2;
      *a1 = v1 + 2;
      if ( (unsigned __int64)(v2 - (v1 + 2)) < 2 )
        return nullptr;
      v7 = *v6;
      if ( *v6 != 97 )
        goto LABEL_20;
      if ( v1[3] == 97 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "&&";
        goto LABEL_108;
      }
      v7 = *v6;
      if ( *v6 != 97 )
        goto LABEL_20;
      if ( v1[3] == 110 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "&";
        goto LABEL_108;
      }
      v7 = *v6;
      if ( *v6 != 97 )
        goto LABEL_20;
      if ( v1[3] == 78 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "&=";
        goto LABEL_108;
      }
      v7 = *v6;
      if ( *v6 != 97 )
        goto LABEL_20;
      if ( v1[3] == 83 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "=";
        goto LABEL_108;
      }
      v7 = *v6;
LABEL_20:
      if ( v7 == 99 && v1[3] == 109 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = ",";
        goto LABEL_108;
      }
      if ( *v6 != 100 )
        goto LABEL_32;
      if ( v1[3] == 115 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = ".*";
        goto LABEL_108;
      }
      if ( *v6 != 100 )
        goto LABEL_32;
      if ( v1[3] == 118 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "/";
        goto LABEL_108;
      }
      v10 = *v6;
      if ( *v6 != 100 )
        goto LABEL_33;
      if ( v1[3] == 86 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "/=";
        goto LABEL_108;
      }
LABEL_32:
      v10 = *v6;
LABEL_33:
      if ( v10 == 101 && v1[3] == 111 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "^";
        goto LABEL_108;
      }
      v11 = *v6;
      if ( *v6 != 101 )
        goto LABEL_43;
      if ( v1[3] == 79 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "^=";
        goto LABEL_108;
      }
      v11 = *v6;
      if ( *v6 != 101 )
        goto LABEL_43;
      if ( v1[3] == 113 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "==";
        goto LABEL_108;
      }
      v11 = *v6;
LABEL_43:
      if ( v11 == 103 && v1[3] == 101 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = ">=";
        goto LABEL_108;
      }
      v12 = *v6;
      if ( *v6 != 103 )
        goto LABEL_50;
      if ( v1[3] == 116 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = ">";
        goto LABEL_108;
      }
      v12 = *v6;
LABEL_50:
      if ( v12 == 108 && v1[3] == 101 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "<=";
        goto LABEL_108;
      }
      if ( *v6 != 108 )
        goto LABEL_62;
      if ( v1[3] == 115 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "<<";
        goto LABEL_108;
      }
      if ( *v6 != 108 )
        goto LABEL_62;
      if ( v1[3] == 83 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "<<=";
        goto LABEL_108;
      }
      v13 = *v6;
      if ( *v6 != 108 )
        goto LABEL_63;
      if ( v1[3] == 116 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "<";
        goto LABEL_108;
      }
LABEL_62:
      v13 = *v6;
LABEL_63:
      if ( v13 == 109 && v1[3] == 105 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "-";
        goto LABEL_108;
      }
      if ( *v6 != 109 )
        goto LABEL_75;
      if ( v1[3] == 73 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "-=";
        goto LABEL_108;
      }
      if ( *v6 != 109 )
        goto LABEL_75;
      if ( v1[3] == 108 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "*";
        goto LABEL_108;
      }
      v14 = *v6;
      if ( *v6 != 109 )
        goto LABEL_76;
      if ( v1[3] == 76 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "*=";
        goto LABEL_108;
      }
LABEL_75:
      v14 = *v6;
LABEL_76:
      if ( v14 == 110 && v1[3] == 101 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "!=";
        goto LABEL_108;
      }
      if ( *v6 != 111 )
        goto LABEL_88;
      if ( v1[3] == 111 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "||";
        goto LABEL_108;
      }
      if ( *v6 != 111 )
        goto LABEL_88;
      if ( v1[3] == 114 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "|";
        goto LABEL_108;
      }
      v15 = *v6;
      if ( *v6 != 111 )
        goto LABEL_89;
      if ( v1[3] == 82 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "|=";
        goto LABEL_108;
      }
LABEL_88:
      v15 = *v6;
LABEL_89:
      if ( v15 == 112 && v1[3] == 108 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "+";
        goto LABEL_108;
      }
      v16 = *v6;
      if ( *v6 != 112 )
        goto LABEL_96;
      if ( v1[3] == 76 )
      {
        v8 = (__m128i)(unsigned __int64)"";
        v9 = "+=";
      }
      else
      {
        v16 = *v6;
LABEL_96:
        if ( v16 == 114 && v1[3] == 109 )
        {
          v8 = (__m128i)(unsigned __int64)"";
          v9 = "%";
        }
        else
        {
          if ( *v6 != 114 )
            return nullptr;
          if ( v1[3] == 77 )
          {
            v8 = (__m128i)(unsigned __int64)"";
            v9 = "%=";
          }
          else
          {
            if ( *v6 != 114 )
              return nullptr;
            if ( v1[3] == 115 )
            {
              v8 = (__m128i)(unsigned __int64)"";
              v9 = ">>";
            }
            else
            {
              if ( *v6 != 114 || v1[3] != 83 )
                return nullptr;
              v8 = (__m128i)(unsigned __int64)"";
              v9 = ">>=";
            }
          }
        }
      }
LABEL_108:
      v27[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, v8);
      *a1 = v1 + 4;
      v17 = sub_D97A0((__int64)a1);
      if ( !v17 )
        return nullptr;
      v18 = v17;
      if ( v3 == 82 || v3 == 76 )
      {
        v19 = sub_D97A0((__int64)a1);
        if ( !v19 )
          return nullptr;
        v20 = v19;
        v21 = v18;
        if ( v5 )
        {
          v21 = v20;
          v20 = v18;
        }
        v18 = v21;
      }
      else
      {
        v20 = nullptr;
      }
      v22 = (_QWORD *)a1[604];
      v23 = v22[1];
      if ( (unsigned __int64)(v23 + 64) < 0xFF0 )
      {
        v25 = v22 + 1;
      }
      else
      {
        v24 = (_QWORD *)operator new[](0x1000u);
        *v24 = v22;
        v24[1] = 0;
        a1[604] = v24;
        v23 = 0;
        v25 = v24 + 1;
        v22 = v24;
      }
      si128 = _mm_load_si128(v27);
      *v25 = v23 + 64;
      result = (_QWORD *)((char *)v22 + v23 + 16);
      *(_DWORD *)((char *)v22 + v23 + 24) = 16843050;
      *result = off_151E38;
      *(_QWORD *)((char *)v22 + v23 + 32) = v18;
      *(_QWORD *)((char *)v22 + v23 + 40) = v20;
      *(__m128i *)((char *)v22 + v23 + 48) = si128;
      *((_BYTE *)v22 + v23 + 64) = v5;
      break;
    default:
      return result;
  }
  return result;
}
// 151E38: using guessed type __int64 (__fastcall *off_151E38[7])();
