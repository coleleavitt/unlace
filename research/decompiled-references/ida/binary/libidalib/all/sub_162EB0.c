unsigned __int64 __fastcall sub_162EB0(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        const char *a5,
        unsigned __int64 a6,
        char a7)
{
  __int64 v8; // rbp
  _BYTE *v10; // rdi
  __int64 v11; // r12
  int v12; // r15d
  int v13; // eax
  int v14; // eax
  char v16; // bl
  char valid; // al
  _BYTE *v18; // rdi
  int utf8_char; // r12d
  __int64 v20; // r15
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v30; // [rsp+38h] [rbp-60h]
  const char *v31; // [rsp+48h] [rbp-50h]
  __int64 v32; // [rsp+50h] [rbp-48h]
  unsigned __int64 v33; // [rsp+58h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v31 = a5;
  if ( a5 )
  {
    v8 = (__int64)a5;
    v10 = a5;
    v11 = 0;
    v12 = -1;
    while ( 1 )
    {
      if ( !*v10 )
        return v33 - __readfsqword(0x28u);
      if ( (unsigned __int8)(*v10 - 1) <= 3u )
        break;
      if ( a7 || v8 + 3 < (unsigned __int64)v10 || *(_BYTE *)(v8 + 1) != 19 )
      {
        v13 = *(_DWORD *)(a2 + 72);
        if ( (v13 & 2) != 0
          || (v13 & 1) == 0
          || (v16 = *(_BYTE *)(a1 + 773), valid = is_valid_cp(), v12 == 32)
          || !valid
          || v12 == 46 && !v16 )
        {
          v14 = sub_162840(a1, a2, v8, v31, a3);
          if ( v14 > 0 )
          {
            v18 = v31;
            v30 = v11;
            utf8_char = v12;
            v20 = v8;
            v21 = 0;
            v22 = v14;
            v32 = (__int64)v31;
            while ( (unsigned __int64)v18 < a6 )
            {
              if ( (unsigned __int8)(*v18 - 1) > 3u )
              {
                utf8_char = get_utf8_char();
                if ( utf8_char == -1 )
                  ++v32;
                if ( ++v21 >= v22 )
                  break;
              }
              else
              {
                v32 = tag_skipcode();
                if ( v21 >= v22 )
                  break;
              }
              v18 = (_BYTE *)v32;
            }
            v23 = v21;
            v8 = v20;
            v12 = utf8_char;
            v24 = a4[13];
            v25 = a4[12];
            if ( a4[14] < (unsigned __int64)(v24 + 1) )
            {
              v25 = qvector_reserve();
              a4[12] = v25;
              v24 = a4[13];
            }
            v26 = 16 * v24 + v25;
            *(_DWORD *)(v26 + 8) = -1;
            *(_QWORD *)v26 = -1;
            *(_BYTE *)(v26 + 12) = 0;
            ++a4[13];
            *(_DWORD *)v26 = v30;
            v11 = v23 + v30;
            *(_DWORD *)(v26 + 4) = v23;
            v10 = (_BYTE *)v32;
            *(_DWORD *)(v26 + 8) = 80;
            *(_BYTE *)(v26 + 12) = 1;
            v31 = (const char *)v32;
            goto LABEL_13;
          }
        }
      }
      v10 = v31;
      v12 = get_utf8_char();
      if ( v12 == -1 )
      {
        v10 = v31 + 1;
        ++v11;
        ++v31;
      }
      else
      {
        ++v11;
LABEL_13:
        if ( !v10 )
          return v33 - __readfsqword(0x28u);
      }
    }
    v31 = (const char *)tag_skipcode();
    v10 = v31;
    goto LABEL_13;
  }
  return v33 - __readfsqword(0x28u);
}

