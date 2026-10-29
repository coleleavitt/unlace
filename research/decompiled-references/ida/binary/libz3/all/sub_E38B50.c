_DWORD *__fastcall sub_E38B50(__int64 a1, _DWORD **a2)
{
  _DWORD *v2; // r12
  _DWORD *result; // rax
  bool v4; // zf

  v2 = *a2;
  if ( *(_DWORD *)(a1 + 52) == -1 )
  {
    if ( v2 && (v4 = v2[4] == 1, --v2[4], v4) )
    {
      (**(void (__fastcall ***)(_DWORD *))v2)(v2);
      sub_186B220(v2);
      result = nullptr;
    }
    else
    {
      result = nullptr;
    }
    *a2 = nullptr;
  }
  else
  {
    result = *(_DWORD **)(a1 + 88);
    if ( result )
      ++result[4];
    if ( v2 && (v4 = v2[4] == 1, --v2[4], v4) )
    {
      (**(void (__fastcall ***)(_DWORD *))v2)(v2);
      sub_186B220(v2);
      result = *(_DWORD **)(a1 + 88);
      *a2 = result;
    }
    else
    {
      *a2 = result;
    }
  }
  return result;
}

