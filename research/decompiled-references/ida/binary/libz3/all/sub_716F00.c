__int64 __fastcall sub_716F00(__int64 a1)
{
  void (__fastcall ***v1)(void *); // rbp
  bool v2; // zf
  _DWORD *v3; // rbp
  __int64 result; // rax

  v1 = *(void (__fastcall ****)(void *))(a1 + 80);
  *(_DWORD *)(a1 + 32) = 0;
  if ( v1 )
  {
    v2 = (*((_DWORD *)v1 + 12))-- == 1;
    if ( v2 )
    {
      (**v1)(v1);
      result = sub_186B220(v1);
    }
  }
  v3 = *(_DWORD **)(a1 + 120);
  *(_QWORD *)(a1 + 80) = 0;
  if ( v3 && (v2 = v3[12] == 1, --v3[12], v2) )
  {
    (**(void (__fastcall ***)(_DWORD *))v3)(v3);
    result = sub_186B220(v3);
    *(_QWORD *)(a1 + 120) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 120) = 0;
  }
  return result;
}

