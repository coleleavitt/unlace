__int64 __fastcall sub_3EFAF0(
        __int64 a1,
        const char *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned __int8 a6,
        double a7,
        __m128 a8)
{
  int dtype_size; // eax
  unsigned __int8 *v12; // rcx
  __int64 v13; // rbx
  unsigned int v15; // [rsp+Ch] [rbp-5Ch]
  unsigned __int64 v16; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v16 = 0xFFFFFFFF00000000LL;
  v17 = 0;
  if ( a4 == -1 )
  {
    v12 = nullptr;
  }
  else
  {
    v15 = a5;
    dtype_size = get_dtype_size(a6);
    LOBYTE(v16) = 1;
    a5 = v15;
    v12 = (unsigned __int8 *)&v16;
    LODWORD(v17) = a4;
    HIDWORD(v16) = dtype_size;
  }
  v13 = sub_3EF590(a1, a2, a3, v12, a5, a6, a7, a8);
  sub_11C7E0((__int64)&v16);
  return v13;
}
