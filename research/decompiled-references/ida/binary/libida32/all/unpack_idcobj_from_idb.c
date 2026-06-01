__int64 __fastcall unpack_idcobj_from_idb(_BYTE *a1, _QWORD *a2, unsigned int a3, __int64 a4, int a5)
{
  _QWORD v6[2]; // [rsp+0h] [rbp-28h] BYREF
  bool v7; // [rsp+10h] [rbp-18h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v6[1] = a4;
  v7 = a4 == 0;
  v6[0] = &off_2B04CE8;
  return sub_572620(a1, a2, (__int64)v6, a3, a5);
}

