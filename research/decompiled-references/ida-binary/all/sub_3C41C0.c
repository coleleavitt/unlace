__int64 __fastcall ltl_chooser_t__::vfunc_10(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v10; // rdi
  unsigned int v11; // ebx
  __int64 v13; // [rsp+8h] [rbp-40h] BYREF
  const char *v14; // [rsp+10h] [rbp-38h] BYREF
  __int128 v15; // [rsp+18h] [rbp-30h]
  unsigned __int64 v16; // [rsp+28h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  sub_3B8B40(a1, (const char *)a2, a3, a4, a5, a6, a7, a8, a9, a10);
  v14 = nullptr;
  v15 = 0;
  if ( (unsigned __int8)sub_3C3F50((__int64 *)&v14) )
  {
    v10 = &s1;
    if ( (_QWORD)v15 )
      v10 = v14;
    a2 = 0;
    if ( (unsigned int)add_til(v10, 0) == 2 )
    {
      sub_17D780(&v13, 0);
      a2 = 0xFFFFFFFFLL;
      sub_3B90B0(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
      sub_17D800(&v13);
    }
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14, (const char *)a2);
  }
  return v11;
}
