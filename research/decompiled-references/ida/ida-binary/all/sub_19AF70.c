__int64 __fastcall sub_19AF70(__int64 a1)
{
  __int64 v1; // rax
  _QWORD v3[5]; // [rsp+0h] [rbp-28h] BYREF

  v3[3] = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 88);
  v3[1] = 0;
  v3[0] = v1;
  return (unsigned __int8)sub_19AC00(v3);
}
