__int64 __fastcall sub_895D00(__int64 **a1, unsigned int a2, int a3, __int64 *a4)
{
  __int64 v5; // rax
  void (*v6)(); // rax
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[3] = __readfsqword(0x28u);
  v8[0] = off_2B13F60;
  v5 = *a4;
  v8[1] = a4;
  v6 = *(void (**)())(v5 + 16);
  if ( v6 != nullsub_8 )
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v6)(a4, a2 + a3, 1);
  return sub_895AA0(a1, a2, a3, (__int64)v8, 0, 1);
}

