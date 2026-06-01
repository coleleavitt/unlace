__int64 __fastcall strpath_chooser_t__::vfunc_9(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdx
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned __int64 v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  v6[0] = 0;
  v2 = sub_1AD5B0(v6, a1 + 27, a2);
  v4 = sub_1AD5B0(v6, a1 + 30, v3);
  result = -1;
  if ( v2 >= 0 )
    result = v2;
  if ( v4 >= 0 )
    return v4 + a1[28];
  return result;
}
