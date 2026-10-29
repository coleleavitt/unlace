__int64 (*__fastcall sub_4196E0(__int64 a1))(void)
{
  __int64 (__fastcall **v2)(); // rbx
  __int64 (*result)(void); // rax
  __int64 v4; // rdi

  v2 = &off_2BCFF48;
  do
  {
    while ( 1 )
    {
      result = *v2;
      if ( *v2 )
      {
        v4 = result();
        result = *(__int64 (**)(void))(*(_QWORD *)v4 + 24LL);
        if ( (char *)result != (char *)nullsub_5 )
          break;
      }
      v2 += 2;
      if ( v2 == (__int64 (__fastcall **)())&unk_2BD02E8 )
        return result;
    }
    v2 += 2;
    result = (__int64 (*)(void))((__int64 (__fastcall *)(__int64, __int64))result)(v4, a1);
  }
  while ( v2 != (__int64 (__fastcall **)())&unk_2BD02E8 );
  return result;
}

