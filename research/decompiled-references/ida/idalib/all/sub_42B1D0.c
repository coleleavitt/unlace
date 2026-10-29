unsigned __int64 __fastcall sub_42B1D0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD v11[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v5 = *(_QWORD **)(a2 + 1672);
  v6 = *a3;
  v12 = __readfsqword(0x28u);
  v8 = v6 + sub_631AD0(*v5, 29);
  v9 = v8 + a3[1] - *a3;
  v11[0] = v8;
  v11[1] = v9;
  sub_7BA650(a2, v11, a4);
  return v12 - __readfsqword(0x28u);
}
