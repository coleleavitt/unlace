__int64 __fastcall unpack_idcobj_from_bv(_BYTE *a1, _QWORD *a2, __int64 a3, int a4)
{
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[3] = __readfsqword(0x28u);
  v5[1] = a3;
  v5[0] = &off_2B04D48;
  return sub_572620(a1, a2, (__int64)v5, 0, a4);
}

