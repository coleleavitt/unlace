__int64 (__fastcall *__fastcall sub_52CF80(__int64 a1))()
{
  __int64 (__fastcall **v1)(); // rbp
  __int64 (__fastcall *result)(); // rax
  _QWORD *v3; // rbx

  v1 = off_2B2E048;
  result = *(__int64 (__fastcall **)())(a1 + 1584);
  v3 = (_QWORD *)((char *)result + 8);
  do
  {
    while ( 1 )
    {
      if ( !*v3 )
      {
        result = *v1;
        if ( *v1 )
          break;
      }
      v1 += 4;
      ++v3;
      if ( v1 == (__int64 (__fastcall **)())&unk_2B2E128 )
        return result;
    }
    v1 += 4;
    ++v3;
    result = (__int64 (__fastcall *)())((__int64 (__fastcall *)(__int64))result)(a1);
    *(v3 - 1) = result;
  }
  while ( v1 != (__int64 (__fastcall **)())&unk_2B2E128 );
  return result;
}
