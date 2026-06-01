__int64 __fastcall sub_839510(__int64 *a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int8 *v6; // r12
  __int16 v7; // ax
  unsigned __int8 v8; // dl
  unsigned __int16 v9; // bx
  __int16 v10; // dx
  unsigned __int8 v11; // cl
  unsigned __int16 v12; // ax
  char v13; // al
  void *v14; // rdi
  __int16 v15; // bx
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int8 v19; // al
  __int64 v20; // rax
  const void *v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rax
  void *v26; // rdi
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v28; // [rsp+18h] [rbp-60h]
  _WORD v29[2]; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v3 = (unsigned __int64)&a2[a3];
  if ( a2 >= &a2[a3] )
    return 0;
  v6 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v15 = *v6;
      if ( (v15 & 0x80u) != 0 )
        break;
      v16 = a1[1];
      v17 = *a1;
      if ( a1[2] < (unsigned __int64)(v16 + 1) )
      {
        v20 = qvector_reserve(a1, v17, v16 + 1, 1);
        *a1 = v20;
        v17 = v20;
        v16 = a1[1];
      }
      ++v6;
      *(_BYTE *)(v17 + v16) = v15;
      ++a1[1];
      if ( (unsigned __int64)v6 >= v3 )
        return v6 - a2;
    }
    if ( (v15 & 0xE0) != 0xC0 )
      break;
    if ( (__int64)(v3 - (_QWORD)v6) <= 1 )
      goto LABEL_36;
    v19 = v6[1];
    if ( (_BYTE)v15 == 0xC0 )
    {
      if ( v19 != 0x80 )
        goto LABEL_34;
      v22 = a1[1];
      v23 = a1[2];
      LOBYTE(ptr) = 0;
      v24 = *a1;
      if ( v23 < v22 + 1 )
      {
        v25 = qvector_reserve(a1, v24, v22 + 1, 1);
        *a1 = v25;
        v24 = v25;
        v22 = a1[1];
      }
      *(_BYTE *)(v24 + v22) = 0;
      ++a1[1];
    }
    else
    {
      if ( (unsigned __int8)(v19 + 0x80) > 0x3Fu || (v19 & 0x3F | (v15 << 6) & 0x7C0) <= 127 )
        goto LABEL_34;
      sub_838E80(a1, v6, 2u);
    }
    v6 += 2;
LABEL_20:
    if ( (unsigned __int64)v6 >= v3 )
      return v6 - a2;
  }
  if ( (v15 & 0xF0) != 0xE0 )
    goto LABEL_34;
  if ( (__int64)(v3 - (_QWORD)v6) <= 2 )
  {
LABEL_36:
    *__errno_location() = 22;
    return -1;
  }
  v7 = v6[1];
  v8 = v6[2];
  if ( (unsigned __int8)(v7 + 0x80) > 0x3Fu )
    goto LABEL_34;
  if ( (unsigned __int8)(v8 + 0x80) > 0x3Fu )
    goto LABEL_34;
  v9 = (v7 << 6) & 0xFC0 | v8 & 0x3F | (v15 << 12);
  if ( v9 <= 0x7FFu )
    goto LABEL_34;
  if ( (unsigned __int16)(v9 + 10240) > 0x3FFu )
  {
    v21 = v6;
    v6 += 3;
    sub_838E80(a1, v21, 3u);
    goto LABEL_20;
  }
  v29[0] = v9;
  if ( (__int64)(v3 - (_QWORD)(v6 + 3)) <= 2 )
    goto LABEL_36;
  v10 = v6[4];
  v11 = v6[5];
  if ( (unsigned __int8)(v10 + 0x80) > 0x3Fu
    || (unsigned __int8)(v11 + 0x80) > 0x3Fu
    || (v12 = (v10 << 6) & 0xFC0 | v11 & 0x3F | (v6[3] << 12), v12 <= 0x7FFu)
    || (unsigned __int16)(v12 + 9216) > 0x3FFu )
  {
LABEL_34:
    *__errno_location() = 84;
    return -1;
  }
  v29[1] = (v10 << 6) & 0xFC0 | v11 & 0x3F | (v6[3] << 12);
  ptr = nullptr;
  v28 = 0;
  v13 = utf16_utf8(&ptr, v29, 2);
  v14 = ptr;
  if ( v13 )
  {
    if ( (unsigned __int64)v28 >= 2 )
    {
      sub_838E80(a1, ptr, v28 - 1);
      v14 = ptr;
    }
    v6 += 6;
    if ( v14 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v14);
    }
    goto LABEL_20;
  }
  v26 = ptr;
  *__errno_location() = 84;
  if ( v26 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v26);
  }
  return -1;
}
