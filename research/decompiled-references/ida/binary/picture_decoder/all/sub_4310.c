void __fastcall __noreturn sub_4310(
        const __m128i *a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  if ( a1 )
  {
    if ( off_7008 )
    {
      ((void (__fastcall *)(unsigned int, __int64 (__fastcall ***)(_QWORD), const __m128i *, const __m128i *, __int64, __int64))off_7008)(
        0x18u,
        (__int64 (__fastcall ***)(_QWORD))((char *)&dword_0 + 3),
        a1,
        a2,
        (__int64)off_7008,
        a6);
    }
    else
    {
      sub_4C70();
      sub_3F40(10, stderr);
    }
  }
  ++dword_7024;
  sub_42D0(1);
}

