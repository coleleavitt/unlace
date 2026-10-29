__int64 __fastcall hex_display_watch_ah_t__::vfunc_4(__int64 a1, QT::QWidget *a2)
{
  __int64 v3; // rax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v8; // esi
  char v9; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v3 = sub_534430("watch:HexDisplay");
  if ( v3 && (unsigned __int8)sub_533460(v3, 7, (unsigned int)&v9, v4, v5, v6) )
  {
    v8 = 10;
    if ( v9 )
      v8 = 16;
    sub_3E0080(a2, v8);
  }
  return 0;
}
