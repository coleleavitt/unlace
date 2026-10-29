__int64 __fastcall sub_2C02A0(__int64 *a1)
{
  int v1; // eax
  __int64 index; // rax

  sub_26B5C0(a1, 2);
  sub_26B5C0(a1, 1);
  v1 = sub_26B5C0(a1, 0);
  index = Z3_mk_seq_last_index(v1);
  return sub_26B3D0(a1, index);
}

