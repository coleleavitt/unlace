char __fastcall sub_ACF620(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax
  char result; // al
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int *v8; // rsi
  _DWORD *v9; // rdi
  size_t v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax

  v3 = *a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v3 == 0) != ((*a3 & 0xFFFFFFFFFFFFFFF8LL) == 0) )
    return 0;
  if ( v3 && !sub_ACF470(a1, v3, *a3 & 0xFFFFFFFFFFFFFFF8LL) )
    return 0;
  v6 = a3[1];
  v7 = a2[1];
  if ( (unsigned __int64)(v6 - 1) > 0xFFFFFFFFFFFFFFD1LL || (unsigned __int64)(v7 - 1) > 0xFFFFFFFFFFFFFFD1LL )
  {
    v11 = -v7;
    if ( v11 >= 0x2E )
      LODWORD(v11) = 0;
    v12 = -v6;
    if ( v12 >= 0x2E )
      LODWORD(v12) = 0;
    return (_DWORD)v11 == (_DWORD)v12;
  }
  else
  {
    v8 = *(unsigned int **)(v6 + 16);
    v9 = *(_DWORD **)(v7 + 16);
    v10 = *v8;
    if ( v10 != *v9 )
      return 0;
    result = 1;
    if ( *v8 )
      return memcmp(v9 + 4, v8 + 4, v10) == 0;
  }
  return result;
}

