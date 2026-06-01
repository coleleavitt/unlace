__int64 __fastcall enable_flags(__int64 a1, void *a2, int a3)
{
  int v4[2]; // [rsp+0h] [rbp-28h] BYREF
  void *v5; // [rsp+8h] [rbp-20h]
  int v6[2]; // [rsp+18h] [rbp-10h]

  *(_QWORD *)v6 = __readfsqword(0x28u);
  *(_QWORD *)v4 = a1;
  v5 = a2;
  return sub_3C0380(*(_QWORD *)(qword_2CCB598 + 1672), (unsigned __int64 *)v4, a3, 0);
}
