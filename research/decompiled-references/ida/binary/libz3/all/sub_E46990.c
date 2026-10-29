__int64 (__fastcall **__fastcall sub_E46990(_QWORD *a1))()
{
  _DWORD *v1; // rbx
  __int64 (__fastcall **result)(); // rax

  v1 = (_DWORD *)a1[1];
  result = &off_1C5CDC8;
  *a1 = &off_1C5CDC8;
  if ( v1 )
  {
    if ( v1[2]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v1)(v1);
      return (__int64 (__fastcall **)())sub_186B220(v1);
    }
  }
  return result;
}

