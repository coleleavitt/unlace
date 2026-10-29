__int64 __fastcall sub_838F40(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // rbp
  unsigned __int8 *v6; // r14
  _BYTE *i; // rsi
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // r15
  __int16 v11; // ax
  unsigned __int8 *v12; // rdx
  unsigned __int16 v13; // bx
  unsigned __int8 *v14; // rdi
  __int64 v15; // rbx
  const char *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  void *ptr; // [rsp+18h] [rbp-58h] BYREF
  __int128 v24; // [rsp+20h] [rbp-50h]
  unsigned __int64 v25; // [rsp+30h] [rbp-40h]

  v5 = (unsigned __int64)&a3[a4];
  v25 = __readfsqword(0x28u);
  v24 = 0;
  ptr = nullptr;
  if ( a3 >= &a3[a4] )
    goto LABEL_31;
  v6 = a3;
  for ( i = nullptr; ; i = ptr )
  {
    v11 = *v6;
    v12 = v6 + 1;
    if ( (v11 & 0x80u) != 0 )
    {
      if ( (v11 & 0xE0) == 0xC0 )
      {
        if ( (unsigned __int64)v12 >= v5 )
          goto LABEL_30;
        v14 = v6 + 2;
        if ( (v6[1] & 0xC0) != 0x80 || (v13 = v6[1] & 0x3F | (v11 << 6) & 0x7C0, (unsigned __int16)(v13 - 1) <= 0x7Eu) )
        {
LABEL_22:
          *__errno_location() = 84;
LABEL_23:
          v15 = -1;
          goto LABEL_24;
        }
      }
      else
      {
        if ( (v11 & 0xF0) != 0xE0 )
          goto LABEL_22;
        if ( (unsigned __int64)v12 >= v5 )
          goto LABEL_30;
        if ( (v6[1] & 0xC0) != 0x80 )
          goto LABEL_22;
        if ( (unsigned __int64)(v6 + 2) >= v5 )
        {
LABEL_30:
          *__errno_location() = 22;
          goto LABEL_23;
        }
        v14 = v6 + 3;
        if ( (v6[2] & 0xC0) != 0x80 )
          goto LABEL_22;
        v13 = (v6[1] << 6) & 0xFC0 | v6[2] & 0x3F | (v11 << 12);
        if ( v13 <= 0x7FFu )
          goto LABEL_22;
      }
      v6 = v14;
    }
    else
    {
      v13 = (unsigned __int8)v11;
      ++v6;
    }
    v10 = v24;
    if ( (_QWORD)v24 )
    {
      v8 = v24 + 1;
      v9 = v24 + 2;
      v10 = v24 - 1;
      if ( *((_QWORD *)&v24 + 1) >= (unsigned __int64)(v24 + 2) )
        goto LABEL_4;
    }
    else
    {
      v9 = 3;
      v8 = 2;
      if ( *((_QWORD *)&v24 + 1) >= 3u )
        goto LABEL_4;
    }
    ptr = (void *)qvector_reserve(&ptr, i, v9, 1);
    i = ptr;
LABEL_4:
    *(_QWORD *)&v24 = v9;
    i[v8] = 0;
    *(_WORD *)((char *)ptr + v10) = v13;
    if ( (unsigned __int64)v6 >= v5 )
      break;
  }
  if ( !(_QWORD)v24 )
  {
LABEL_31:
    v18 = 0;
    v17 = haystack;
    goto LABEL_29;
  }
  v17 = (const char *)ptr;
  v18 = v24 - 1;
LABEL_29:
  v19 = convert_encoding(a1, "UTF-16LE", a2, v17, v18, a5);
  i = ptr;
  v15 = v19;
LABEL_24:
  if ( i )
  {
    *(_QWORD *)&v24 = 0;
    qfree(i);
  }
  return v15;
}
