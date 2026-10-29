unsigned __int64 __fastcall sub_47DD20(__int64 a1)
{
  _QWORD *v1; // rbp
  unsigned int v2; // eax
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v4 = 0;
  v1 = *(_QWORD **)(qword_2CA1698 + 1480);
  copy_tinfo_t(&v4);
  v2 = sub_3B90A0(v1, *(_DWORD *)(a1 + 64));
  sub_525A20(v1, &v4, v2);
  sub_59CD70(v1, &v4, 0, 2);
  clear_tinfo_t(&v4);
  return v5 - __readfsqword(0x28u);
}

