unsigned __int64 __fastcall sub_892B20(__int64 *a1, const char *a2, signed __int64 a3, __int64 a4)
{
  signed __int64 v4; // r8
  __int64 *v6; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  const char *v10; // r15
  unsigned int utf8_char; // eax
  const char *v12; // rax
  char v13; // dl
  char v14; // al
  int v15; // r9d
  size_t v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rax
  size_t v19; // r10
  unsigned __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE *v25; // r8
  const char *v26; // rbp
  int v27; // ecx
  const char **v28; // [rsp+0h] [rbp-88h]
  signed __int64 v29; // [rsp+0h] [rbp-88h]
  signed __int64 v30; // [rsp+8h] [rbp-80h]
  unsigned __int64 v31; // [rsp+10h] [rbp-78h]
  __int64 *v32; // [rsp+10h] [rbp-78h]
  size_t v33; // [rsp+18h] [rbp-70h]
  const char *v34; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v35[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-40h]

  v4 = a3;
  v6 = a1;
  v36 = __readfsqword(0x28u);
  if ( a3 == -1 )
    v4 = strlen(a2);
  v8 = a4;
  if ( v4 >= a4 )
    v8 = v4;
  v9 = v8 + 16;
  if ( a1[2] < v9 )
  {
    v29 = v4;
    v24 = qvector_reserve(a1, *a1, v9, 1);
    v4 = v29;
    *a1 = v24;
  }
  v34 = a2;
  if ( v4 > 0 )
  {
    v30 = v4;
    v10 = a2;
    v28 = &v34;
    do
    {
      utf8_char = get_utf8_char(v28);
      if ( utf8_char - 1 > 0xFFFFFFFD )
      {
        v12 = v34++;
        utf8_char = *(unsigned __int8 *)v12;
      }
      if ( utf8_char > 0x22 )
      {
        v13 = 92;
        if ( utf8_char == 92 )
        {
LABEL_25:
          v35[1] = v13;
          v16 = 2;
          v10 = v35;
          v35[0] = 92;
          if ( a4 > 0 )
          {
LABEL_17:
            v17 = v6[1];
            v18 = v17;
            if ( v17 )
              goto LABEL_18;
            if ( v16 >= a4 )
              return v36 - __readfsqword(0x28u);
            goto LABEL_34;
          }
          goto LABEL_26;
        }
      }
      else if ( utf8_char > 6 )
      {
        switch ( utf8_char )
        {
          case 7u:
            v13 = 97;
            goto LABEL_25;
          case 8u:
            v13 = 98;
            goto LABEL_25;
          case 9u:
            v13 = 116;
            goto LABEL_25;
          case 0xAu:
            v13 = 110;
            goto LABEL_25;
          case 0xBu:
            v13 = 118;
            goto LABEL_25;
          case 0xCu:
            v13 = 102;
            goto LABEL_25;
          case 0xDu:
            v13 = 114;
            goto LABEL_25;
          case 0x22u:
            v13 = 34;
            goto LABEL_25;
          default:
            break;
        }
      }
      v14 = is_cp_graphical(utf8_char);
      v16 = v34 - v10;
      if ( !v14 )
      {
        v16 = 0;
        v25 = v35;
        if ( v10 >= v34 )
        {
          if ( a4 > 0 )
          {
            v17 = v6[1];
            v18 = v17;
            if ( v17 )
            {
              v16 = 0;
              v10 = v35;
LABEL_18:
              if ( v16 + v18 - 1 >= a4 )
                return v36 - __readfsqword(0x28u);
              v17 = v18;
LABEL_20:
              --v17;
              v19 = v16 + v17;
              v20 = v16 + v17 + 1;
            }
            else
            {
              v19 = 0;
              v16 = 0;
              v20 = 1;
              v10 = v35;
            }
            v21 = *v6;
            if ( v6[2] < v20 )
              goto LABEL_35;
            goto LABEL_22;
          }
          v16 = 0;
          v10 = v35;
          goto LABEL_26;
        }
        v32 = v6;
        v26 = v10;
        v10 = v35;
        do
        {
          v27 = *(unsigned __int8 *)v26++;
          v16 += (int)qsnprintf(
                        (unsigned int)v35 + (unsigned int)v16,
                        16 - (int)v16,
                        (int)"\\x%02X",
                        v27,
                        (int)v25,
                        v15,
                        (char)v28);
        }
        while ( v26 < v34 );
        v6 = v32;
      }
      if ( a4 > 0 )
        goto LABEL_17;
LABEL_26:
      v17 = v6[1];
      if ( v17 )
        goto LABEL_20;
LABEL_34:
      v21 = *v6;
      v20 = v16 + 1;
      v19 = v16;
      if ( v6[2] < v16 + 1 )
      {
LABEL_35:
        v33 = v19;
        v31 = v20;
        v23 = qvector_reserve(v6, v21, v20, 1);
        v19 = v33;
        v20 = v31;
        *v6 = v23;
        v21 = v23;
      }
LABEL_22:
      v6[1] = v20;
      *(_BYTE *)(v21 + v19) = 0;
      memmove((void *)(*v6 + v17), v10, v16);
      v10 = v34;
    }
    while ( v30 > v34 - a2 );
  }
  return v36 - __readfsqword(0x28u);
}

