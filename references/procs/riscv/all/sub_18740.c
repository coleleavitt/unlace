unsigned __int64 __fastcall sub_18740(__int64 a1)
{
  _QWORD v2[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v2[2] = a1;
  v2[0] = off_315A0;
  v2[1] = 0;
  ((void (__fastcall *)(_QWORD *))gen_use_arg_tinfos)(v2);
  return v3 - __readfsqword(0x28u);
}
