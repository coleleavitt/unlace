void __fastcall __noreturn sub_2A430(
        const __m128i *a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  if ( a1 )
  {
    if ( off_7A600 )
    {
      off_7A600(0x18u, (__int64 (__fastcall ***)(_QWORD))((char *)&dword_0 + 3), a1, a2, (__int64)off_7A600, a6);
    }
    else
    {
      sub_2BDB0();
      sub_29C30(10, stderr);
    }
  }
  ++*(_DWORD *)byte_7BCA8;
  sub_2A3F0(1);
}

