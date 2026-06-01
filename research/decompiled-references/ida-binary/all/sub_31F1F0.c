__int64 __fastcall sub_31F1F0(_QWORD *a1, unsigned int a2)
{
  _QWORD **v2; // rsi
  _QWORD *v3; // rbp
  _QWORD v5[133]; // [rsp+0h] [rbp-428h] BYREF

  v2 = (_QWORD **)(a1[1068] + 16LL * a2);
  v5[129] = __readfsqword(0x28u);
  v3 = *v2;
  qstrftime64(v5, 1024, "%Y-%m-%d %H:%M:%S", **v2);
  if ( (unsigned int)sub_1698A0(
                       1,
                       (int)"AUTOHIDE REGISTRY\nHIDECANCEL\nAre you sure you want to delete this snapshot?\n%s - %s\n",
                       v5,
                       (char *)v3 + 10) == 1 )
  {
    qunlink((char *)v3 + 138);
    sub_31E550(a1, "AUTOHIDE REGISTRY\nHIDECANCEL\nAre you sure you want to delete this snapshot?\n%s - %s\n");
  }
  return 1;
}
