__int64 __fastcall sub_5DAF40(
        __int64 *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 (*a8)(),
        __int64 a9,
        __int32 a10)
{
  void *v10; // rax
  unsigned int v12; // ebx
  __m128i v14[46]; // [rsp+0h] [rbp-308h] BYREF
  unsigned __int64 v15; // [rsp+2E8h] [rbp-20h]

  v10 = a2;
  v15 = __readfsqword(0x28u);
  if ( !a2 )
    v10 = (void *)a1[1];
  if ( a4 )
  {
    sub_5D2990(
      (__int64)v14,
      *a1,
      (__int64)&off_2B064A0,
      (__int64)&off_2B06620,
      (__int64)sub_5CCDC0,
      0,
      v10,
      a3,
      a5,
      a6,
      a7,
      a8,
      a9);
    v12 = sub_5DABA0(v14, a4, a10);
    sub_5CBF80((__int64)v14);
  }
  else
  {
    return (unsigned int)-5;
  }
  return v12;
}

