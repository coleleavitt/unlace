__int64 __fastcall extract_frame_desc_from_metadata(__int64 a1, _BYTE *a2, __int64 a3)
{
  _BYTE *v4; // [rsp+8h] [rbp-10h] BYREF

  v4 = a2;
  return sub_7EEE50(a1, &v4, a3 - (_QWORD)a2);
}
