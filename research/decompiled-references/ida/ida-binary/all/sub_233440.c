__int64 __fastcall sub_233440(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        const char *a10)
{
  void *v10; // rbx
  __int64 result; // rax

  v10 = qword_8CC600;
  if ( qword_8CC600 && !byte_8CC5F7 )
  {
    byte_8CC5F7 = 1;
    sub_233310((__int64)qword_8CC600, a10, a1, a2, a3, a4, a5, a6, a7, a8);
    operator delete(v10, 0x118u);
    byte_8CC5F7 = 0;
    qword_8CC600 = nullptr;
  }
  result = sub_20CEA0(dbg, 1);
  byte_8CC5F6 = 0;
  byte_8CC55A = 0;
  dword_8CC5F0 = 0;
  return result;
}
