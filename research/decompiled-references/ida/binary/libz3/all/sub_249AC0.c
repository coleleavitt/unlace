__int64 (__fastcall **__fastcall sub_249AC0(_QWORD *a1))()
{
  _DWORD *v1; // rbx
  __int64 (__fastcall **result)(); // rax

  v1 = (_DWORD *)a1[3];
  result = &off_1C4C8E0;
  *a1 = &off_1C4C8E0;
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

