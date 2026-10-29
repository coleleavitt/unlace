__int64 __fastcall sub_815B80(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int8 *v5; // r14
  _BYTE *i; // rsi
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r15
  __int16 v10; // ax
  unsigned __int8 *v11; // rdx
  unsigned __int16 v12; // bx
  unsigned __int8 *v13; // rdi
  __int64 v14; // rbx
  __int64 v16; // rax
  void *ptr; // [rsp+18h] [rbp-58h] BYREF
  __int128 v18; // [rsp+20h] [rbp-50h]
  unsigned __int64 v19; // [rsp+30h] [rbp-40h]

  v4 = (unsigned __int64)&a3[a4];
  v19 = __readfsqword(0x28u);
  v18 = 0;
  ptr = nullptr;
  if ( a3 >= &a3[a4] )
  {
LABEL_27:
    v16 = convert_encoding();
    i = ptr;
    v14 = v16;
    goto LABEL_24;
  }
  v5 = a3;
  for ( i = nullptr; ; i = ptr )
  {
    v10 = *v5;
    v11 = v5 + 1;
    if ( (v10 & 0x80u) == 0 )
    {
      v12 = (unsigned __int8)v10;
      ++v5;
      goto LABEL_8;
    }
    if ( (v10 & 0xE0) == 0xC0 )
    {
      if ( (unsigned __int64)v11 >= v4 )
        break;
      v13 = v5 + 2;
      if ( (v5[1] & 0xC0) != 0x80 || (v12 = v5[1] & 0x3F | (v10 << 6) & 0x7C0, (unsigned __int16)(v12 - 1) <= 0x7Eu) )
      {
LABEL_22:
        *__errno_location() = 84;
        goto LABEL_23;
      }
      goto LABEL_18;
    }
    if ( (v10 & 0xF0) != 0xE0 )
      goto LABEL_22;
    if ( (unsigned __int64)v11 >= v4 )
      break;
    if ( (v5[1] & 0xC0) != 0x80 )
      goto LABEL_22;
    if ( (unsigned __int64)(v5 + 2) >= v4 )
      break;
    v13 = v5 + 3;
    if ( (v5[2] & 0xC0) != 0x80 )
      goto LABEL_22;
    v12 = (v5[1] << 6) & 0xFC0 | v5[2] & 0x3F | (v10 << 12);
    if ( v12 <= 0x7FFu )
      goto LABEL_22;
LABEL_18:
    v5 = v13;
LABEL_8:
    v9 = v18;
    if ( (_QWORD)v18 )
    {
      v7 = v18 + 1;
      v8 = v18 + 2;
      v9 = v18 - 1;
      if ( *((_QWORD *)&v18 + 1) >= (unsigned __int64)(v18 + 2) )
        goto LABEL_4;
    }
    else
    {
      v8 = 3;
      v7 = 2;
      if ( *((_QWORD *)&v18 + 1) >= 3u )
        goto LABEL_4;
    }
    ptr = (void *)qvector_reserve(&ptr, i, v8, 1);
    i = ptr;
LABEL_4:
    *(_QWORD *)&v18 = v8;
    i[v7] = 0;
    *(_WORD *)((char *)ptr + v9) = v12;
    if ( (unsigned __int64)v5 >= v4 )
      goto LABEL_27;
  }
  *__errno_location() = 22;
LABEL_23:
  v14 = -1;
LABEL_24:
  if ( i )
  {
    *(_QWORD *)&v18 = 0;
    qfree(i);
  }
  return v14;
}

