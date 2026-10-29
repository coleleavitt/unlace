/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003EA00
// Address: 0x000000014003EA00

//----- (000000014003EA00) ----------------------------------------------------
const char *__fastcall sub_14003EA00(_QWORD *a1, __int64 a2, double a3)
{
  int v5; // edx
  const char *v6; // r8
  __int64 v7; // rax
  int v8; // r8d
  const char *v9; // rdx
  const char *v10; // r9
  const char *v11; // r8
  unsigned __int64 v12; // r11
  int v13; // r8d
  unsigned __int64 v14; // r10
  char *v15; // r9
  char v16; // cl
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  size_t v19; // r8
  struct __crt_locale_pointers *v20; // rax
  __int64 *v21; // rax
  size_t v22; // rax
  const char *result; // rax
  void *Block; // [rsp+20h] [rbp-448h] BYREF
  __int64 v25; // [rsp+28h] [rbp-440h]
  __int64 v26; // [rsp+30h] [rbp-438h]
  char v27[24]; // [rsp+38h] [rbp-430h] BYREF
  struct __crt_locale_pointers Str[63]; // [rsp+50h] [rbp-418h] BYREF
  char v29; // [rsp+44Fh] [rbp-19h] BYREF
  __int64 v30; // [rsp+450h] [rbp-18h] BYREF

  v5 = *(unsigned __int16 *)(a2 + 24);
  switch ( v5 )
  {
    case 1:
      sub_140001810((__int64)a1, "<END>", 5u);
      goto LABEL_46;
    case 2:
      goto LABEL_31;
    case 3:
      sub_140002FB0((__int64)a1, "0x%a", a3);
      goto LABEL_46;
    case 4:
      Block = nullptr;
      v25 = 0;
      v26 = 0;
      v7 = *(_QWORD *)(a2 + 8);
      v8 = v7 - 1;
      if ( !v7 )
        v8 = 0;
      v9 = Str1;
      if ( v7 )
        v9 = *(const char **)a2;
      sub_140059C70((__int64)&Block, v9, v8);
      v10 = Str1;
      if ( v25 )
        v10 = (const char *)Block;
      v11 = pNodeName;
      if ( *(_BYTE *)(a2 + 40) )
        v11 = "L";
      sub_140002FB0((__int64)a1, "%s\"%s\"", v11, v10);
      if ( Block )
      {
        v25 = 0;
        j_free(Block);
      }
      goto LABEL_46;
    case 5:
      v12 = *(_QWORD *)(a2 + 32);
      if ( v12 )
      {
        v13 = 1;
        v14 = 1;
        if ( (char)v12 != v12 )
          v14 = 8;
        v15 = v27;
        v16 = 1;
        do
        {
          v17 = v12 >> (8 * ((unsigned __int8)v14 - v16));
          if ( (_BYTE)v17 )
            *v15++ = v17;
          v16 = ++v13;
        }
        while ( v13 <= v14 );
        *v15 = 0;
        sub_140059C90(Str, v27, 1024);
        sub_140002FB0((__int64)a1, "'%s'", (const char *)Str);
      }
      else
      {
        sub_140001810((__int64)a1, "'\\0'", 4u);
      }
      goto LABEL_46;
    case 6:
      v6 = Str1;
      if ( *(_QWORD *)(a2 + 8) )
        v6 = *(const char **)a2;
      sub_140002FB0((__int64)a1, "@type %s", v6);
      goto LABEL_46;
    case 7:
      sub_1400675A0(Str, 1024, (__m128i *)(a2 + 48), 50);
      goto LABEL_43;
    case 8:
      sub_140002FB0((__int64)a1, "0x%I64xi64", *(_QWORD *)(a2 + 48));
      goto LABEL_46;
    default:
      if ( (unsigned __int16)v5 >= 0x400u )
      {
        if ( (_WORD)v5 == 11868 )
        {
          sub_140001810((__int64)a1, "...", 3u);
          goto LABEL_46;
        }
      }
      else if ( (unsigned __int16)v5 >= 0x80u )
      {
LABEL_31:
        if ( a1 == (_QWORD *)a2 )
          goto LABEL_46;
        v18 = *(_QWORD *)(a2 + 8);
        v19 = v18 - 1;
        if ( !v18 )
          v19 = 0;
        if ( v19 )
        {
          sub_140001810((__int64)a1, *(const void **)a2, v19);
          goto LABEL_46;
        }
        goto LABEL_45;
      }
      v20 = Str;
      if ( (v5 & 0xFF00) != 0 )
      {
        LOBYTE(Str[0].locinfo) = BYTE1(v5);
        v20 = (struct __crt_locale_pointers *)((char *)&Str[0].locinfo + 1);
      }
      LOBYTE(v20->locinfo) = v5;
      v21 = (__int64 *)((char *)&v20->locinfo + 1);
      if ( v21 >= &v30 )
      {
        v21 = (__int64 *)&v29;
        v29 = 0;
      }
      *(_BYTE *)v21 = 0;
LABEL_43:
      v22 = strlen((const char *)Str);
      if ( v22 )
      {
        sub_140001810((__int64)a1, Str, v22);
        goto LABEL_46;
      }
LABEL_45:
      a1[1] = 0;
LABEL_46:
      result = Str1;
      if ( a1[1] )
        return (const char *)*a1;
      return result;
  }
}
