__int64 __fastcall sub_AE4E30(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v5; // al
  int v6; // eax
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 result; // rax
  const char *v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r15
  size_t v18; // rax
  __int64 v19; // r15
  size_t v20; // rax
  __int64 v21; // r15
  size_t v22; // rax
  __int64 v23; // r15
  size_t v24; // rax
  char v25; // [rsp+7h] [rbp-71h] BYREF
  __int64 v26; // [rsp+8h] [rbp-70h] BYREF
  _BYTE v27[32]; // [rsp+10h] [rbp-68h] BYREF
  __int16 v28; // [rsp+30h] [rbp-48h]

  v5 = *(_BYTE *)(a1 + 34);
  v25 = 1;
  if ( (v5 & 0xF0) == 0xF0 )
    v6 = sub_F83A90(a1);
  else
    v6 = v5 >> 4;
  switch ( v6 )
  {
    case 0:
      sub_971800(a2, "__attribute__((aligned");
      if ( *(_QWORD *)(a1 + 40) )
      {
        sub_AD7BA0(a2, &v25);
        sub_971800(a2, &byte_22CD811);
        if ( !*(_BYTE *)(a1 + 39)
          || (v21 = *(_QWORD *)(a1 + 40)) != 0
          && (v22 = j__strlen("\n"), sub_EE3EC0(v21, a2, 0, a3, 0, 0, (__int64)"\n", v22), !*(_BYTE *)(a1 + 39)) )
        {
          v15 = *(__int64 **)(a1 + 40);
          if ( v15 )
          {
            v16 = *v15;
            v28 = 257;
            v26 = v16;
            sub_F50AF0(&v26, a2, a3, v27, 0);
          }
        }
        sub_971800(a2, &byte_22CD811);
      }
      if ( !v25 )
        sub_971800(a2, ")");
      result = sub_971800(a2, "))");
      break;
    case 1:
    case 2:
      sub_971800(a2, "[[gnu::aligned");
      if ( *(_QWORD *)(a1 + 40) )
      {
        sub_AD7BA0(a2, &v25);
        sub_971800(a2, &byte_22CD811);
        if ( !*(_BYTE *)(a1 + 39)
          || (v17 = *(_QWORD *)(a1 + 40)) != 0
          && (v18 = j__strlen("\n"), sub_EE3EC0(v17, a2, 0, a3, 0, 0, (__int64)"\n", v18), !*(_BYTE *)(a1 + 39)) )
        {
          v7 = *(__int64 **)(a1 + 40);
          if ( v7 )
          {
            v8 = *v7;
            v28 = 257;
            v26 = v8;
            sub_F50AF0(&v26, a2, a3, v27, 0);
          }
        }
        sub_971800(a2, &byte_22CD811);
      }
      if ( !v25 )
        sub_971800(a2, ")");
      result = sub_971800(a2, "]]");
      break;
    case 3:
      sub_971800(a2, "__declspec(align");
      if ( *(_QWORD *)(a1 + 40) )
      {
        sub_AD7BA0(a2, &v25);
        sub_971800(a2, &byte_22CD811);
        if ( !*(_BYTE *)(a1 + 39)
          || (v23 = *(_QWORD *)(a1 + 40)) != 0
          && (v24 = j__strlen("\n"), sub_EE3EC0(v23, a2, 0, a3, 0, 0, (__int64)"\n", v24), !*(_BYTE *)(a1 + 39)) )
        {
          v13 = *(__int64 **)(a1 + 40);
          if ( v13 )
          {
            v14 = *v13;
            v28 = 257;
            v26 = v14;
            sub_F50AF0(&v26, a2, a3, v27, 0);
          }
        }
        sub_971800(a2, &byte_22CD811);
      }
      if ( !v25 )
        sub_971800(a2, ")");
      result = sub_971800(a2, ")");
      break;
    case 4:
      v10 = "alignas";
      goto LABEL_14;
    case 5:
      v10 = "_Alignas";
LABEL_14:
      sub_971800(a2, v10);
      if ( *(_QWORD *)(a1 + 40) )
      {
        sub_AD7BA0(a2, &v25);
        sub_971800(a2, &byte_22CD811);
        if ( !*(_BYTE *)(a1 + 39)
          || (v19 = *(_QWORD *)(a1 + 40)) != 0
          && (v20 = j__strlen("\n"), sub_EE3EC0(v19, a2, 0, a3, 0, 0, (__int64)"\n", v20), !*(_BYTE *)(a1 + 39)) )
        {
          v11 = *(__int64 **)(a1 + 40);
          if ( v11 )
          {
            v12 = *v11;
            v28 = 257;
            v26 = v12;
            sub_F50AF0(&v26, a2, a3, v27, 0);
          }
        }
        sub_971800(a2, &byte_22CD811);
      }
      if ( !v25 )
        sub_971800(a2, ")");
      result = sub_971800(a2, &byte_22CD811);
      break;
  }
  return result;
}

