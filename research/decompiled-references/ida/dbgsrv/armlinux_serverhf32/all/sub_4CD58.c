/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CD58
// Address: 0x0004CD58

//----- (0004CD58) --------------------------------------------------------
int *__fastcall sub_4CD58(int a1, int a2)
{
  _DWORD *v3; // r4
  int v4; // r2
  unsigned int v5; // r8
  unsigned int v6; // r3
  char *v7; // r6
  _DWORD *v8; // r0
  int v10; // r2
  char *v11; // r1
  const char *v12; // r2
  const char *v13; // r3
  unsigned int v14; // r1
  unsigned int v15; // r12
  char *v16; // r6
  unsigned int i; // r2
  unsigned int v18; // r3
  size_t v19; // r6
  const char *v20; // r2
  char *p_s; // r3
  void *v22; // r0
  _DWORD *v23; // r1
  _DWORD *v24; // r1
  _DWORD *v25; // r1
  char *v26; // [sp+0h] [bp-41Ch] BYREF
  int v27; // [sp+4h] [bp-418h]
  int v28; // [sp+8h] [bp-414h]
  char v29[8]; // [sp+Ch] [bp-410h] BYREF
  char s; // [sp+14h] [bp-408h] BYREF
  char v31; // [sp+15h] [bp-407h] BYREF

  v3 = (_DWORD *)a1;
  v4 = *(unsigned __int16 *)(a2 + 12);
  switch ( *(_WORD *)(a2 + 12) )
  {
    case 1:
      v23 = *(_DWORD **)a1;
      if ( *(_DWORD *)(a1 + 8) <= 5u )
      {
        v23 = sub_77EB0(a1, v23, 6u, 1u);
        *v3 = v23;
      }
      v3[1] = 6;
      qmemcpy(v23, "<END>", 5);
      *(_BYTE *)(*v3 + 5) = 0;
      goto LABEL_8;
    case 2:
      goto LABEL_2;
    case 3:
      sub_1873C(a1, "0x%a", *(_DWORD *)(a2 + 16));
      goto LABEL_8;
    case 4:
      v10 = *(_DWORD *)(a2 + 4);
      v26 = nullptr;
      v27 = 0;
      v28 = 0;
      if ( v10 )
      {
        v11 = *(char **)a2;
        --v10;
      }
      else
      {
        v11 = (char *)&dword_8DA5C;
      }
      sub_6B028((unsigned int)&v26, v11, v10);
      if ( *(_BYTE *)(a2 + 20) )
        v12 = "L";
      else
        v12 = &byte_8DEAC;
      if ( v27 )
        v13 = v26;
      else
        v13 = (const char *)&dword_8DA5C;
      sub_1873C((int)v3, "%s\"%s\"", v12, v13);
      if ( v26 )
      {
        v27 = 0;
        sub_77E08(v26);
      }
      goto LABEL_8;
    case 5:
      v14 = *(_DWORD *)(a2 + 16);
      if ( v14 )
      {
        if ( (v14 & 0xFFFFFF00) != 0 )
        {
          v15 = 4;
          a1 = 24;
        }
        else
        {
          v15 = 1;
        }
        if ( (v14 & 0xFFFFFF00) == 0 )
          a1 = 0;
        v16 = v29;
        for ( i = 1; i <= v15; ++i )
        {
          v18 = v14 >> a1;
          a1 -= 8;
          if ( (_BYTE)v18 )
            *v16++ = v18;
        }
        *v16 = 0;
        sub_6B03C(&s, v29, 1024);
        sub_1873C((int)v3, "'%s'", &s);
      }
      else
      {
        v25 = *(_DWORD **)a1;
        if ( *(_DWORD *)(a1 + 8) <= 4u )
        {
          v25 = sub_77EB0(a1, v25, 5u, 1u);
          *v3 = v25;
        }
        v3[1] = 5;
        *v25 = *(_DWORD *)"'\\0'";
        *(_BYTE *)(*v3 + 4) = 0;
      }
      goto LABEL_8;
    case 6:
      if ( *(_DWORD *)(a2 + 4) )
        v20 = *(const char **)a2;
      else
        v20 = (const char *)&dword_8DA5C;
      sub_1873C(a1, "@type %s", v20);
      goto LABEL_8;
    case 7:
      sub_72718(&s, 1024, (int *)(a2 + 24), 50);
      v19 = strlen(&s);
      if ( !v19 )
        goto LABEL_30;
      goto LABEL_42;
    case 8:
      sub_1873C(a1, "0x%llxi64", *(_QWORD *)(a2 + 24));
      goto LABEL_8;
    default:
      if ( (unsigned int)(v4 - 128) < 0x380 )
      {
LABEL_2:
        if ( a2 == a1 )
          goto LABEL_8;
        v5 = *(_DWORD *)(a2 + 4);
        if ( v5 >= 2 )
        {
          v6 = *(_DWORD *)(a1 + 8);
          v7 = *(char **)a2;
          v8 = *(_DWORD **)a1;
          if ( v5 > v6 )
          {
            v8 = sub_77EB0((int)v3, (void *)*v3, v5, 1u);
            *v3 = v8;
          }
          v3[1] = v5;
          memmove(v8, v7, v5 - 1);
          *(_BYTE *)(*v3 + v5 - 1) = 0;
          goto LABEL_8;
        }
        goto LABEL_30;
      }
      if ( v4 != 11868 )
      {
        if ( (v4 & 0xFF00) != 0 )
        {
          p_s = &v31;
          s = HIBYTE(*(_WORD *)(a2 + 12));
        }
        else
        {
          p_s = &s;
        }
        *p_s = v4;
        p_s[1] = 0;
        v19 = strlen(&s);
        if ( v19 )
        {
LABEL_42:
          v22 = (void *)*v3;
          if ( v19 + 1 > v3[2] )
          {
            v22 = sub_77EB0((int)v3, (void *)*v3, v19 + 1, 1u);
            *v3 = v22;
          }
          v3[1] = v19 + 1;
          memmove(v22, &s, v19);
          *(_BYTE *)(*v3 + v19) = 0;
          goto LABEL_8;
        }
LABEL_30:
        v3[1] = 0;
        return &dword_8DA5C;
      }
      v24 = *(_DWORD **)a1;
      if ( *(_DWORD *)(a1 + 8) <= 3u )
      {
        v24 = sub_77EB0(a1, v24, 4u, 1u);
        *v3 = v24;
      }
      v3[1] = 4;
      qmemcpy(v24, "...", 3);
      *(_BYTE *)(*v3 + 3) = 0;
LABEL_8:
      if ( v3[1] )
        return (int *)*v3;
      return &dword_8DA5C;
  }
}
// 8DA5C: using guessed type int dword_8DA5C;
// 8DEAC: using guessed type char byte_8DEAC;
