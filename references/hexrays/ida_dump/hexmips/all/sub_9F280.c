__int64 __fastcall sub_9F280(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  _QWORD v5[5]; // [rsp+0h] [rbp-58h] BYREF
  char v6; // [rsp+28h] [rbp-30h]
  unsigned __int64 v7; // [rsp+38h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v5[0] = &off_4BC630;
  v2 = *(_QWORD *)(a1 + 64);
  memset(&v5[2], 0, 24);
  v6 = 0;
  v5[1] = v2;
  ((void (__fastcall *)(__int64, _QWORD *))sub_11A700)(a2, v5);
  v3 = sub_9F1C0(a1, a2);
  if ( a2 )
  {
    sub_118BA0(a2 + 64);
    sub_118BA0(a2 + 48);
    sub_118BA0(a2 + 32);
    j__qfree(a2);
  }
  return v3;
}
