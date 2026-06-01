__int64 __fastcall sub_3DEE10(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  const void *v3; // r13
  int v4; // esi
  _BYTE *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int8 *v7; // rbx
  bool v8; // cc
  unsigned __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rbp
  size_t v13; // r14
  char v14; // dl
  __int64 v15; // [rsp+8h] [rbp-50h]
  char *v16; // [rsp+10h] [rbp-48h] BYREF
  __int128 v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v2 = (_BYTE *)skip_spaces(a2);
  if ( *v2 != 40 )
    return 0;
  v3 = v2 + 1;
  v4 = 1;
  v5 = v2 + 1;
  v6 = (unsigned __int8)v2[1];
  v7 = v2 + 2;
  v8 = (char)v6 <= 40;
  if ( (_BYTE)v6 == 40 )
    goto LABEL_11;
  while ( 1 )
  {
    if ( v8 )
    {
      if ( (unsigned __int8)v6 > 0x27u )
        goto LABEL_10;
      v9 = 0xFFFFFF7BFFFFFFFELL;
      if ( _bittest64((const __int64 *)&v9, v6) )
        goto LABEL_10;
      return 0;
    }
    if ( (_BYTE)v6 == 41 && --v4 <= 0 )
      break;
LABEL_10:
    while ( 1 )
    {
      v5 = v7;
      v6 = *v7++;
      v8 = (char)v6 <= 40;
      if ( (_BYTE)v6 != 40 )
        break;
LABEL_11:
      if ( ++v4 <= 0 )
        goto LABEL_12;
    }
  }
LABEL_12:
  v11 = v5 - v2;
  v12 = v11;
  if ( v11 <= 1 )
    return 0;
  v13 = v11 - 1;
  v17 = 0;
  v16 = nullptr;
  v16 = (char *)qvector_reserve(&v16, 0, v11, 1);
  *(_QWORD *)&v17 = v12;
  memmove(v16, v3, v13);
  v16[v12 - 1] = 0;
  v14 = parse_decl(a1 + 72, 0, 0, v16, 49157);
  result = 0;
  if ( v14 )
    result = skip_spaces(v7);
  if ( v16 )
  {
    v15 = result;
    *(_QWORD *)&v17 = 0;
    qfree(v16, nullptr);
    return v15;
  }
  return result;
}
