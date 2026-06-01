void __fastcall sub_1EACE50(
        __int64 a1,
        int a2,
        _BYTE *a3,
        signed __int64 a4,
        _BYTE *a5,
        signed __int64 a6,
        _BYTE *a7,
        __int64 a8)
{
  unsigned __int8 *v12[17]; // [rsp+10h] [rbp-88h] BYREF

  sub_FC70B0((__int64)v12, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), a2);
  sub_AEC220(v12, a3, a4);
  sub_AEC220(v12, a5, a6);
  sub_AEC220(v12, a7, a8);
  sub_AEA040((__int64)v12);
}
