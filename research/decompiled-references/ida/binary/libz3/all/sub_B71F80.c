__int64 (__fastcall **__fastcall sub_B71F80(__int64 a1))()
{
  __int64 (__fastcall **result)(); // rax
  void *v3; // rdi
  void (__fastcall ***v4)(_QWORD); // rbx

  result = &off_1C57678;
  *(_QWORD *)a1 = &off_1C57678;
  if ( (*(_BYTE *)(a1 + 8) & 2) == 0 )
  {
    v3 = *(void **)(a1 + 32);
    if ( v3 )
      result = (__int64 (__fastcall **)())sub_186B220(v3);
    v4 = *(void (__fastcall ****)(_QWORD))(a1 + 16);
    if ( v4 )
    {
      (**v4)(v4);
      return (__int64 (__fastcall **)())sub_186B220(v4);
    }
  }
  return result;
}

