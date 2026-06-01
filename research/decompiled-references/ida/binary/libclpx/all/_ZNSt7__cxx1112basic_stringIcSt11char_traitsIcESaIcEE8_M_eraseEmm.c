__int64 __fastcall std::string::_M_erase(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  size_t v7; // rdx
  _BYTE *v8; // rax
  _BYTE *v9; // rdi
  __int64 result; // rax

  v5 = a1[1];
  v6 = *a1;
  v7 = v5 - a2 - a3;
  if ( v7 && a3 )
  {
    v8 = (_BYTE *)(v6 + a2 + a3);
    v9 = (_BYTE *)(a2 + v6);
    if ( v7 == 1 )
      *v9 = *v8;
    else
      memmove(v9, v8, v7);
    v6 = *a1;
    v5 = a1[1];
  }
  result = v5 - a3;
  a1[1] = result;
  *(_BYTE *)(v6 + result) = 0;
  return result;
}

