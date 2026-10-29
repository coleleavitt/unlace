__int64 __fastcall sub_101F50(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // [rsp+28h] [rbp-38h] BYREF
  __int128 v4; // [rsp+30h] [rbp-30h]
  unsigned __int64 v5; // [rsp+40h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( (unsigned int)get_utf8_char() != -1 )
  {
    v1 = *(_QWORD *)(a1 + 760);
    v3 = 0;
    v4 = 0;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 40LL))(v1, &v3);
    convert_encoding();
    if ( v3 )
    {
      *(_QWORD *)&v4 = 0;
      qfree();
    }
  }
  return 0;
}

