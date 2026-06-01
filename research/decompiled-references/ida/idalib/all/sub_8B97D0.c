unsigned __int64 __fastcall sub_8B97D0(__int64 **a1, unsigned __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // rax
  void (*v6)(); // rax
  _QWORD v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v8[3] = __readfsqword(0x28u);
  v8[0] = off_2B3DF28;
  v5 = *a4;
  v8[1] = a4;
  v6 = *(void (**)())(v5 + 16);
  if ( v6 != nullsub_8 )
    ((void (__fastcall *)(__int64 *, unsigned __int64, _QWORD))v6)(a4, a2, 0);
  return sub_8B94D0(a1, a2, a3, (__int64)v8, 0, 0);
}
