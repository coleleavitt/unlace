__int64 __fastcall sub_548CC0(char **a1, _QWORD *a2)
{
  char *v3; // rax
  __int64 result; // rax
  char *v5; // rdi
  char v6; // cl
  _BYTE *v7; // rdx
  char *v8; // rdx
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *a1;
  v9[1] = __readfsqword(0x28u);
  v9[0] = v3;
  result = extract_argloc(0, v9, 0);
  v5 = (char *)v9[0];
  if ( !(_BYTE)result )
    return 0;
  while ( 1 )
  {
    v8 = *a1;
    if ( *a1 == v5 )
      break;
    *a1 = v8 + 1;
    v6 = *v8;
    v7 = (_BYTE *)(*a2)++;
    if ( v6 != *v7 )
      return 0;
  }
  return result;
}

