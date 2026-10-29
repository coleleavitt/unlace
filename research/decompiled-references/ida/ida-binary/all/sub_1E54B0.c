unsigned __int64 __fastcall sub_1E54B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // [rsp+0h] [rbp-108h] BYREF
  __int64 v5; // [rsp+8h] [rbp-100h]
  __int64 v6; // [rsp+10h] [rbp-F8h]
  _BYTE v7[48]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v8[136]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v9; // [rsp+D8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 216LL) & 1) != 0 && dbg && (unsigned __int8)sub_1E51E0(a1, (int *)(a2 + 40)) )
  {
    sub_532F10(v8, a1);
    sub_531CA0(v7, v8, 0, 1);
    sub_5399B0(v8, unk_8CA2A0, 0, 1);
    sub_5399B0(v8, unk_8CA2A8, 0, 1);
    sub_5399B0(v8, unk_8CA2B0, 0, 1);
    sub_5399B0(v8, unk_8CA298, 0, 1);
    v2 = *QT::QCoreApplication::self;
    v4 = 1;
    v5 = a2;
    v6 = 0;
    (*(void (__fastcall **)(_QWORD *, _BYTE *, int *))(v2 + 184))(QT::QCoreApplication::self, v8, &v4);
    sub_531D60(v7);
    sub_531E50(v8);
  }
  return v9 - __readfsqword(0x28u);
}
