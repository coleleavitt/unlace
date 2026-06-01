__int64 __fastcall sub_5F6DE0(
        __int64 *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 (*a8)(),
        __int64 a9,
        int a10)
{
  void *v10; // rax
  unsigned int v12; // ebx
  _QWORD v14[99]; // [rsp+0h] [rbp-318h] BYREF

  v10 = a2;
  v14[95] = __readfsqword(0x28u);
  if ( !a2 )
    v10 = (void *)a1[1];
  if ( a4 )
  {
    sub_5EE7B0(
      (__int64)v14,
      *a1,
      (__int64)&off_2B30460,
      (__int64)&off_2B305E0,
      (__int64)sub_5E8BB0,
      0,
      v10,
      a3,
      a5,
      a6,
      a7,
      a8,
      a9);
    v12 = sub_5F6A40((__int64)v14, a4, a10);
    sub_5E7D60((__int64)v14);
  }
  else
  {
    return (unsigned int)-5;
  }
  return v12;
}
