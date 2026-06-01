unsigned __int64 __fastcall sub_625490(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [rsp+0h] [rbp-98h] BYREF
  __m128i si128; // [rsp+10h] [rbp-88h]
  void *v6; // [rsp+20h] [rbp-78h]
  __int128 v7; // [rsp+28h] [rbp-70h]
  __int64 v8; // [rsp+38h] [rbp-60h]
  void *ptr; // [rsp+40h] [rbp-58h]
  __int128 v10; // [rsp+48h] [rbp-50h]
  __int64 v11; // [rsp+58h] [rbp-40h]
  int v12; // [rsp+60h] [rbp-38h]
  __int64 v13; // [rsp+68h] [rbp-30h]
  unsigned __int64 v14; // [rsp+78h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v4[1] = a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  v6 = nullptr;
  v8 = -1;
  ptr = nullptr;
  v11 = 0;
  v12 = 0;
  v4[0] = off_2B32AC8;
  v13 = a3;
  v7 = 0;
  v10 = 0;
  sub_624FA0((__int64)v4, 0);
  v4[0] = off_2B329D8;
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    qfree(ptr);
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  return v14 - __readfsqword(0x28u);
}
