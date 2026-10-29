__int64 __fastcall sub_BF84C0(unsigned int a1, int a2, __int64 a3)
{
  unsigned int v4; // ebp
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rax
  const char *v9; // rdx
  __int64 v10; // rax
  _BYTE *v12; // rax
  const char *v13; // r13
  size_t v14; // rbx
  __int64 v15; // rax
  void *v16; // rdi
  __int64 v17; // rbp
  _BYTE *v18; // rdx
  const char *v19; // [rsp+8h] [rbp-50h] BYREF
  __m128 v20; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+20h] [rbp-38h]

  v4 = a1;
  if ( a2 == 2 )
  {
    sub_995540(a3, "u8");
  }
  else if ( a2 <= 2 )
  {
    if ( a2 == 1 )
    {
      v6 = *(_BYTE **)(a3 + 32);
      if ( (unsigned __int64)v6 >= *(_QWORD *)(a3 + 24) )
      {
        sub_227BA10(a3, 76);
      }
      else
      {
        *(_QWORD *)(a3 + 32) = v6 + 1;
        *v6 = 76;
      }
    }
  }
  else if ( a2 == 3 )
  {
    v12 = *(_BYTE **)(a3 + 32);
    if ( (unsigned __int64)v12 >= *(_QWORD *)(a3 + 24) )
    {
      sub_227BA10(a3, 117);
    }
    else
    {
      *(_QWORD *)(a3 + 32) = v12 + 1;
      *v12 = 117;
    }
  }
  else if ( a2 == 4 )
  {
    v5 = *(_BYTE **)(a3 + 32);
    if ( (unsigned __int64)v5 >= *(_QWORD *)(a3 + 24) )
    {
      sub_227BA10(a3, 85);
    }
    else
    {
      *(_QWORD *)(a3 + 32) = v5 + 1;
      *v5 = 85;
    }
  }
  switch ( a1 )
  {
    case 7u:
      v13 = "\\a";
      v14 = j__strlen("\\a");
      goto LABEL_26;
    case 8u:
      v13 = "\\b";
      v14 = j__strlen("\\b");
      goto LABEL_26;
    case 9u:
      v13 = "\\t";
      v14 = j__strlen("\\t");
      goto LABEL_26;
    case 0xAu:
      v13 = "\\n";
      v14 = j__strlen("\\n");
      goto LABEL_26;
    case 0xBu:
      v13 = "\\v";
      v14 = j__strlen("\\v");
      goto LABEL_26;
    case 0xCu:
      v13 = "\\f";
      v14 = j__strlen("\\f");
      goto LABEL_26;
    case 0xDu:
      v13 = "\\r";
      v14 = j__strlen("\\r");
      goto LABEL_26;
    case 0x27u:
      v13 = "\\'";
      v14 = j__strlen("\\'");
      goto LABEL_26;
    case 0x5Cu:
      v13 = "\\\\";
      v14 = j__strlen("\\\\");
LABEL_26:
      if ( !v14 )
        goto LABEL_14;
      v15 = sub_995540(a3, "'");
      v16 = *(void **)(v15 + 32);
      v17 = v15;
      if ( v14 > *(_QWORD *)(v15 + 24) - (_QWORD)v16 )
      {
        v17 = sub_227BF10(v15, v13, v14);
      }
      else
      {
        memcpy(v16, v13, v14);
        *(_QWORD *)(v17 + 32) += v14;
      }
      return sub_995540(v17, "'");
    default:
      v7 = a1;
      LOBYTE(v7) = 0;
      if ( v7 == -256 )
      {
        if ( !a2 )
        {
          v4 = (unsigned __int8)a1;
          goto LABEL_14;
        }
LABEL_24:
        v8 = sub_995540(a3, "'\\U");
        v9 = "%08x";
        goto LABEL_16;
      }
      if ( a1 > 0xFF )
      {
        if ( a1 <= 0xFFFF )
        {
          v8 = sub_995540(a3, "'\\u");
          v9 = "%04x";
          goto LABEL_16;
        }
        goto LABEL_24;
      }
LABEL_14:
      if ( (*(_WORD *)&byte_2411740[2 * v4] & 0x3EC) == 0 )
      {
        v8 = sub_995540(a3, "'\\x");
        v9 = "%02x";
LABEL_16:
        v21 = v4;
        v19 = v9;
        v20 = _mm_loadh_ps((const double *)&v19);
        v10 = sub_227C560(v8, &v20);
        return sub_995540(v10, "'");
      }
      v10 = sub_995540(a3, "'");
      v18 = *(_BYTE **)(v10 + 32);
      if ( (unsigned __int64)v18 >= *(_QWORD *)(v10 + 24) )
      {
        v10 = sub_227BA10(v10, v4);
      }
      else
      {
        *(_QWORD *)(v10 + 32) = v18 + 1;
        *v18 = a1;
      }
      return sub_995540(v10, "'");
  }
}
