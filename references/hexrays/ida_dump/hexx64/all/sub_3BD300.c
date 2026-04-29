__int64 __fastcall sub_3BD300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbp
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, v8, &callui, a4, a5, a6);
  v6 = v8[0];
  if ( get_func(v8[0]) )
  {
    LOWORD(v8[0]) = 115;
    if ( (unsigned int)sub_33CF00(
                         (__int64)"Extract function\n"
                                  "%/This command will delete ALL data in the database except the current function.\n"
                                  "Do you want to continue?\n"
                                  "<Destroy unused program ~b~ytes:C1>\n"
                                  "<..but keep first-level ~c~ross-references:C2>\n"
                                  "<..keep all non-~l~ibrary functions:C3>\n"
                                  "<Clean ~t~ype info:C4>\n"
                                  "<Delete stray ~n~etnodes:C5>\n"
                                  "<Delete ~u~nused types:C6>\n"
                                  "<#Delete original metadata that was present before using Lumina##Delete original ~m~et"
                                  "adata:C7>\n"
                                  "<#Delete MSCV C++ metadata##Delete x64 C++ e~x~ception data:C8>>\n",
                         sub_3B93D0,
                         v8) )
      sub_326B80(v6, LOWORD(v8[0]));
  }
  else
  {
    sub_2B4E70((__int64)"This option can be used only inside a function");
  }
  return 1;
}
