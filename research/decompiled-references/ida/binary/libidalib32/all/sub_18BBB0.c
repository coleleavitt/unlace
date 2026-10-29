__int64 __fastcall sub_18BBB0(const char *a1, const char *a2, char *a3, int a4, char *a5, const __m128i *a6)
{
  const char *v6; // rax
  unsigned int v7; // ebx
  _QWORD v9[25]; // [rsp+20h] [rbp-C8h] BYREF

  v6 = a1;
  v9[23] = __readfsqword(0x28u);
  if ( !a1 )
    v6 = "";
  if ( !a2 )
    a2 = "";
  if ( !a3 )
    a3 = "";
  sub_17D9C0((__int64)v9, "Please confirm", 2, 0, v6, a2, a3, a4, a5, a6);
  v7 = sub_175450((__int64)v9, 2, 0);
  v9[0] = &off_234BF8;
  if ( v9[15] )
  {
    v9[16] = 0;
    qfree();
  }
  if ( v9[12] )
  {
    v9[13] = 0;
    qfree();
  }
  if ( v9[9] )
  {
    v9[10] = 0;
    qfree();
  }
  if ( v9[6] )
  {
    v9[7] = 0;
    qfree();
  }
  if ( v9[3] )
  {
    v9[4] = 0;
    qfree();
  }
  v9[0] = &off_235C80;
  qsem_free();
  return v7;
}

