__int64 __fastcall sub_5E60(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(int *)(a1 + 56);
  v5[3] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 48);
  v5[0] = a2;
  v5[1] = a2 + v2;
  rangeset_t_add(v3, v5);
  return 0;
}
