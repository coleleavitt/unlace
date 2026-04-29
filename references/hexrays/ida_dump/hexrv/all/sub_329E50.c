__int64 __fastcall sub_329E50(char *a1, __int64 a2)
{
  char v2; // al
  char *v4; // rax
  __int64 v5; // rbx
  int utf8_char; // eax
  __int64 v8; // rax
  __int64 v9; // rsi
  char v10; // [rsp+Fh] [rbp-39h] BYREF
  char *v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = *a1;
  v11[1] = (char *)__readfsqword(0x28u);
  if ( v2 != 10 )
  {
LABEL_2:
    if ( v2 == 3 )
    {
      v4 = *((char **)a1 + 1);
      v10 = 0;
      v5 = 0;
      v11[0] = v4;
      while ( 1 )
      {
        utf8_char = get_utf8_char(v11);
        if ( (unsigned int)(utf8_char - 1) > 0xFFFFFFFD || utf8_char == 92 && !(unsigned __int8)sub_3238B0(v11, &v10) )
          break;
        ++v5;
      }
      return a2 * (v5 + 1);
    }
    return -1;
  }
  v8 = *((_QWORD *)a1 + 1);
  if ( *(_BYTE *)v8 != 6 )
    return -1;
  if ( !(unsigned __int8)is_loaded(*(_QWORD *)(v8 + 8)) )
  {
    v2 = *a1;
    goto LABEL_2;
  }
  v9 = 0;
  if ( a2 != 1 )
    v9 = (unsigned int)(a2 != 2) + 1;
  return get_max_strlit_length(*(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL), v9, 3);
}
