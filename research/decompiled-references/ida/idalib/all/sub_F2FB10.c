size_t __fastcall sub_F2FB10(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _BYTE *v4; // rax
  size_t result; // rax
  char *v6; // rsi

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = *(_BYTE **)(v3 + 32);
  if ( (unsigned __int64)v4 < *(_QWORD *)(v3 + 24) )
  {
    *(_QWORD *)(v3 + 32) = v4 + 1;
    *v4 = 32;
    result = (*(_BYTE *)(a2 + 29) >> 5) & 3;
    if ( (_BYTE)result != 1 )
      goto LABEL_3;
LABEL_9:
    result = j__strlen("protected");
    v6 = "protected";
    if ( !result )
      return result;
    return sub_9954E0(*(_QWORD *)(a1 + 1096), v6, result);
  }
  sub_227BA10(v3, 32);
  result = (*(_BYTE *)(a2 + 29) >> 5) & 3;
  if ( (_BYTE)result == 1 )
    goto LABEL_9;
LABEL_3:
  if ( !(_BYTE)result )
  {
    result = j__strlen("public");
    v6 = (char *)"public";
    if ( !result )
      return result;
    return sub_9954E0(*(_QWORD *)(a1 + 1096), v6, result);
  }
  if ( (_BYTE)result == 2 )
  {
    result = j__strlen("private");
    v6 = "private";
    if ( result )
      return sub_9954E0(*(_QWORD *)(a1 + 1096), v6, result);
  }
  return result;
}
