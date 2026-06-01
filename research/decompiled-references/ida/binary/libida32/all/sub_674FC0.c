__int64 __fastcall sub_674FC0(_QWORD *a1, int a2, unsigned int a3, const char *a4, const char *a5)
{
  int v8; // r14d
  unsigned int i; // ebp
  unsigned int j; // ebx
  _BYTE *v12; // rax
  unsigned int v13; // ebp
  int v14; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v8 = sub_3B90A0(a1, a2);
  if ( !a4 || !*a4 )
  {
    v14 = v8;
    for ( i = a3; (unsigned __int8)sub_79B4D0(&v14, *a1, i, 83); i += 2 )
      ;
    v14 = v8;
    for ( j = a3 + 1; (unsigned __int8)sub_79B4D0(&v14, *a1, j, 83); j += 2 )
      ;
    return 1;
  }
  v12 = (_BYTE *)resolve_typedef(a1[1], a4);
  if ( v12 && (*v12 & 0x3F) == 1 )
    return 0;
  if ( (unsigned __int8)sub_674ED0(a1, v8, a3, a4) )
  {
    v13 = a3 + 1;
    if ( (unsigned __int8)sub_674ED0(a1, v8, a3 + 1, a5) )
      return 1;
    v14 = v8;
    while ( (unsigned __int8)sub_79B4D0(&v14, *a1, a3, 83) )
      a3 += 2;
    v14 = v8;
    while ( (unsigned __int8)sub_79B4D0(&v14, *a1, v13, 83) )
      v13 += 2;
    return 0;
  }
  v14 = v8;
  while ( (unsigned __int8)sub_79B4D0(&v14, *a1, a3, 83) )
    a3 += 2;
  return 0;
}

