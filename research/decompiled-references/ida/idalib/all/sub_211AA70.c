void __fastcall sub_211AA70(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  void (*v5)(); // rax
  __int16 v6; // [rsp+28h] [rbp-20h] BYREF
  int v7; // [rsp+2Ah] [rbp-1Eh]

  v4 = *a1;
  v7 = a4;
  v5 = *(void (**)())(v4 + 752);
  v6 = 4418;
  if ( v5 != nullsub_1435 )
    ((void (__fastcall *)(__int64 *, __int64, __int64, __int16 *, __int64))v5)(a1, a2, a3, &v6, 6);
}
