__int64 (__fastcall **__fastcall sub_E1B9E0(_QWORD *a1))()
{
  _DWORD *v1; // rbx
  __int64 (__fastcall **result)(); // rax

  v1 = (_DWORD *)a1[4];
  result = &off_1C5CAC0;
  *a1 = &off_1C5CAC0;
  if ( v1[2]-- == 1 )
  {
    (**(void (__fastcall ***)(_DWORD *))v1)(v1);
    return (__int64 (__fastcall **)())sub_186B220(v1);
  }
  return result;
}

