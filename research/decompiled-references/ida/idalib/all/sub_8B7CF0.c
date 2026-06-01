__int64 __fastcall sub_8B7CF0(__int64 a1, void *a2, _DWORD *a3)
{
  __int64 *v4; // rdi
  __int64 v6; // rsi
  signed __int64 v7; // r12
  int *v8; // rax
  bool v9; // dl
  unsigned __int16 v10; // r12
  int v11; // eax
  __int64 (__fastcall *v12)(__int64); // rax
  unsigned __int64 v13; // rax
  char *v14; // r15
  size_t v15; // r15
  int utf8_char; // r12d
  __int64 result; // rax
  int v18; // r12d
  unsigned __int16 v19; // di
  int v20; // eax
  unsigned int v21; // [rsp+4h] [rbp-94h]
  void *dest; // [rsp+8h] [rbp-90h] BYREF
  char *v23; // [rsp+18h] [rbp-80h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+28h] [rbp-70h]
  char src[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v4 = *(__int64 **)a1;
  dest = a2;
  v27 = __readfsqword(0x28u);
  v23 = src;
  if ( !(unsigned __int8)sub_8B7B20(v4, (__int64 *)&v23) )
    return 1;
  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 )
  {
    *(_BYTE *)dest = src[0];
    *((_BYTE *)dest + 1) = 0;
    if ( a3 )
      *a3 = -1;
    return 2;
  }
  if ( *(_BYTE *)(a1 + 25) )
  {
    if ( src[0] < 0 )
    {
      if ( (src[0] & 0xE0) == 0xC0 )
      {
        v18 = 1;
        goto LABEL_31;
      }
      if ( (src[0] & 0xF0) == 0xE0 )
      {
        v18 = 2;
LABEL_31:
        while ( 1 )
        {
          v14 = v23;
          if ( --v18 == -1 )
            break;
          if ( v23 - src > 15 || !(unsigned __int8)sub_8B7B20(*(__int64 **)a1, (__int64 *)&v23) )
            return 1;
        }
LABEL_25:
        *v14 = 0;
        v15 = v14 - src;
        ptr = src;
        utf8_char = get_utf8_char(&ptr);
        memcpy(dest, src, v15);
        *((_BYTE *)dest + v15) = 0;
        if ( a3 )
          *a3 = utf8_char;
        result = 2;
        if ( utf8_char != -1 )
        {
          *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
          return 0;
        }
        return result;
      }
      if ( (src[0] & 0xF8) == 0xF0 )
      {
        v18 = 3;
        goto LABEL_31;
      }
    }
    v14 = v23;
    goto LABEL_25;
  }
  ptr = nullptr;
  *(_OWORD *)n = 0;
  while ( 1 )
  {
    v7 = v23 - src;
    if ( convert_encoding(&ptr, v6, "UTF-8", src, v23 - src, 1) != -1 )
      break;
    v8 = __errno_location();
    v9 = v7 == 2;
    if ( *v8 == 22 )
    {
      if ( !*(_BYTE *)(a1 + 26) || v7 != 2 )
      {
        if ( v7 > 15 )
          goto LABEL_51;
        goto LABEL_18;
      }
      v19 = *(_WORD *)src;
      if ( *(_BYTE *)(a1 + 24) )
        v19 = __ROL2__(*(_WORD *)src, 8);
      v20 = sub_8B6A20(v19);
      v9 = 1;
      if ( BYTE2(v20) != 5 )
        goto LABEL_18;
    }
    if ( !*(_BYTE *)(a1 + 26) || !v9 )
      goto LABEL_39;
    v10 = *(_WORD *)src;
    if ( *(_BYTE *)(a1 + 24) )
      v10 = __ROL2__(*(_WORD *)src, 8);
    v11 = sub_8B6A20(v10);
    if ( (unsigned __int16)(v10 + 10240) > 0x3FFu
      || BYTE2(v11) != 5
      || ((v12 = *(__int64 (__fastcall **)(__int64))(**(_QWORD **)a1 + 24LL), v12 != sub_8B79D0)
        ? (v13 = ((__int64 (*)(void))v12)())
        : (v13 = *(_QWORD *)(*(_QWORD *)a1 + 24LL) - *(_QWORD *)(*(_QWORD *)a1 + 32LL)),
          v13 <= 1) )
    {
      v7 = 2;
LABEL_39:
      memcpy(dest, src, v7);
      *((_BYTE *)dest + v7) = 0;
      if ( a3 )
        *a3 = -1;
      result = 2;
      goto LABEL_42;
    }
    if ( !(unsigned __int8)sub_8B7B20(*(__int64 **)a1, (__int64 *)&v23) || v23 - src > 15 )
    {
LABEL_51:
      result = 1;
      goto LABEL_42;
    }
LABEL_18:
    if ( !(unsigned __int8)sub_8B7B20(*(__int64 **)a1, (__int64 *)&v23) )
      goto LABEL_51;
    v6 = *(_QWORD *)(a1 + 8);
  }
  memcpy(dest, ptr, n[0]);
  *((_BYTE *)dest + n[0]) = 0;
  if ( a3 )
    *a3 = get_utf8_char(&dest);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  result = 0;
LABEL_42:
  if ( ptr )
  {
    v21 = result;
    n[0] = 0;
    qfree(ptr);
    return v21;
  }
  return result;
}
