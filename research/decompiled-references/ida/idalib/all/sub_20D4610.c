_QWORD *__fastcall sub_20D4610(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  _QWORD *result; // rax
  unsigned __int64 v4; // rcx
  _BYTE *v5; // rdi
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  _BYTE v9[35]; // [rsp+15h] [rbp-23h] BYREF

  v2 = *(_DWORD *)(a1 + 12);
  switch ( v2 )
  {
    case 1:
      v8 = j__strlen("$N");
      sub_20D1ED0(a2, v8, "$N");
      break;
    case 2:
      v7 = j__strlen("$TT");
      sub_20D1ED0(a2, v7, "$TT");
      break;
    case 0:
      v6 = j__strlen("$T");
      sub_20D1ED0(a2, v6, "$T");
      break;
  }
  result = (_QWORD *)*(unsigned int *)(a1 + 16);
  if ( (_DWORD)result )
  {
    v4 = (unsigned int)((_DWORD)result - 1);
    v5 = v9;
    while ( 1 )
    {
      *--v5 = v4 % 0xA + 48;
      if ( v4 <= 9 )
        break;
      v4 /= 0xAu;
    }
    return sub_20D1ED0(a2, v9 - v5, v5);
  }
  return result;
}
