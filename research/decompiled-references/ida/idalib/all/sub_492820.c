unsigned __int64 __fastcall sub_492820(__int64 a1)
{
  _QWORD *v1; // rbp
  unsigned __int64 v2; // rax
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v4 = 0;
  v1 = *(_QWORD **)(qword_2CCB598 + 1672);
  copy_tinfo_t(&v4);
  v2 = sub_3BDD60(v1, *(_QWORD *)(a1 + 64));
  sub_53E720(v1, &v4, v2);
  sub_5B6F10(v1, &v4, 0, 2);
  clear_tinfo_t(&v4);
  return v5 - __readfsqword(0x28u);
}
