__int64 __fastcall sub_3B8280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  _QWORD v12[5]; // [rsp+0h] [rbp-28h] BYREF

  v12[1] = __readfsqword(0x28u);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, v12, &callui, a4, a5, a6);
  v6 = v12[0];
  if ( get_func() )
  {
    if ( (unsigned int)sub_339AC0(
                         (unsigned int)"Extract function\n"
                                       "%/This command will delete ALL data in the database except the current function.\n"
                                       "Do you want to continue?\n"
                                       "<Destroy unused program ~b~ytes:C1>\n"
                                       "<..but keep first-level ~c~ross-references:C2>\n"
                                       "<..keep all non-~l~ibrary functions:C3>\n"
                                       "<Clean ~t~ype info:C4>\n"
                                       "<Delete stray ~n~etnodes:C5>\n"
                                       "<Delete ~u~nused types:C6>\n"
                                       "<#Delete original metadata that was present before using Lumina##Delete original "
                                       "~m~etadata:C7>\n"
                                       "<#Delete MSCV C++ metadata##Delete x64 C++ e~x~ception data:C8>>\n",
                         (unsigned int)sub_3B4450,
                         (unsigned int)v12,
                         v8,
                         v9,
                         v10,
                         115) )
      sub_323600(v6, LOWORD(v12[0]));
  }
  else
  {
    sub_2B1D90(
      (unsigned int)"This option can be used only inside a function",
      (unsigned int)v12,
      v7,
      v8,
      v9,
      v10,
      v12[0]);
  }
  return 1;
}
