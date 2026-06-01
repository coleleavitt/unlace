unsigned __int64 __fastcall sub_625230(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+10h] [rbp-98h]
  void *v10; // [rsp+20h] [rbp-88h]
  __int128 v11; // [rsp+28h] [rbp-80h]
  __int64 v12; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-68h]
  __int128 v14; // [rsp+48h] [rbp-60h]
  __int64 v15; // [rsp+58h] [rbp-50h]
  int v16; // [rsp+60h] [rbp-48h]
  __int64 v17; // [rsp+68h] [rbp-40h]
  __int64 v18; // [rsp+70h] [rbp-38h]
  unsigned __int64 v19; // [rsp+78h] [rbp-30h]

  v5 = *(_QWORD *)(a2 + 1672);
  v19 = __readfsqword(0x28u);
  sub_7BF040(v5 + 2328, a2, "$ imports", 0);
  v8[1] = a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  v10 = nullptr;
  v12 = -1;
  ptr = nullptr;
  v15 = 0;
  v16 = 0;
  v8[0] = off_2B32A18;
  v17 = a3;
  v18 = a4;
  v11 = 0;
  v14 = 0;
  sub_624FA0((__int64)v8, 1);
  v8[0] = off_2B329D8;
  if ( ptr )
  {
    *(_QWORD *)&v14 = 0;
    qfree(ptr);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return v19 - __readfsqword(0x28u);
}
