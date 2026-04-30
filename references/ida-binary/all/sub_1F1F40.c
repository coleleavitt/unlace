unsigned __int64 __fastcall sub_1F1F40(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        const char *a5,
        unsigned __int64 a6,
        char a7)
{
  __int64 v7; // r15
  __int64 v9; // r13
  unsigned int utf8_char; // ebx
  const char *v11; // rdi
  int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  char v16; // bp
  char valid; // al
  const char *v18; // rdi
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // rax
  __int64 v31; // [rsp+30h] [rbp-68h]
  const char *v33; // [rsp+48h] [rbp-50h] BYREF
  const char *v34; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v7 = 0;
  v9 = (__int64)a5;
  utf8_char = -1;
  v11 = a5;
  v35 = __readfsqword(0x28u);
  v33 = a5;
  if ( a5 )
  {
    while ( 1 )
    {
      if ( !*v11 )
        return v35 - __readfsqword(0x28u);
      if ( (unsigned __int8)(*v11 - 1) <= 3u )
        break;
      if ( a7 || v9 + 3 < (unsigned __int64)v11 || *(_BYTE *)(v9 + 1) != 19 )
      {
        v12 = a2[18];
        if ( (v12 & 2) != 0
          || (v12 & 1) == 0
          || (v16 = *(_BYTE *)(a1 + 741), valid = is_valid_cp(utf8_char, 2, 0), utf8_char == 32)
          || !valid
          || utf8_char == 46 && !v16 )
        {
          v13 = sub_1F18D0(a1, (__int64)a2, v9, v33, a3);
          if ( v13 > 0 )
          {
            v18 = v33;
            v31 = v9;
            v19 = 0;
            v20 = v13;
            v34 = v33;
            while ( (unsigned __int64)v18 < a6 )
            {
              if ( (unsigned __int8)(*v18 - 1) > 3u )
              {
                utf8_char = get_utf8_char(&v34);
                if ( utf8_char == -1 )
                  ++v34;
                if ( ++v19 >= v20 )
                  break;
              }
              else
              {
                v34 = (const char *)tag_skipcode(v18);
                if ( v19 >= v20 )
                  break;
              }
              v18 = v34;
            }
            v21 = v19;
            v9 = v31;
            v22 = a4[21];
            v23 = a4[20];
            if ( a4[22] < (unsigned __int64)(v22 + 1) )
            {
              v27 = qvector_reserve(a4 + 20, v23, v22 + 1, 16);
              v22 = a4[21];
              a4[20] = v27;
              v23 = v27;
            }
            v24 = v23 + 16 * v22;
            *(_QWORD *)v24 = -1;
            *(_DWORD *)(v24 + 8) = -1;
            *(_BYTE *)(v24 + 12) = 0;
            ++a4[21];
            *(_DWORD *)v24 = v7;
            *(_DWORD *)(v24 + 4) = v21;
            v25 = (unsigned int)(*a2 - 2129403287);
            if ( !*a2 )
              v25 = 2165563981LL;
            v7 += v21;
            v26 = sub_524F80(a1 + 40, v25, 0);
            v11 = v34;
            *(_BYTE *)(v24 + 12) = 1;
            *(_DWORD *)(v24 + 8) = v26;
            v33 = v11;
            goto LABEL_12;
          }
        }
      }
      v14 = get_utf8_char(&v33);
      v11 = v33;
      utf8_char = v14;
      if ( v14 == -1 )
      {
        v11 = v33 + 1;
        ++v7;
        ++v33;
      }
      else
      {
        ++v7;
LABEL_12:
        if ( !v11 )
          return v35 - __readfsqword(0x28u);
      }
    }
    v33 = (const char *)tag_skipcode(v11);
    v11 = v33;
    goto LABEL_12;
  }
  return v35 - __readfsqword(0x28u);
}
