_DWORD *__fastcall sub_303DC0(__int64 a1, _DWORD **a2)
{
  _DWORD *result; // rax
  _DWORD *v3; // r12
  bool v4; // zf

  result = *(_DWORD **)(a1 + 24);
  if ( result )
    ++result[4];
  v3 = *a2;
  if ( *a2 && (v4 = v3[4] == 1, --v3[4], v4) )
  {
    (**(void (__fastcall ***)(_DWORD *))v3)(v3);
    sub_186B220(v3);
    result = *(_DWORD **)(a1 + 24);
    *a2 = result;
  }
  else
  {
    *a2 = result;
  }
  return result;
}

