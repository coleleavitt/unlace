__int64 __fastcall sub_2C1C30(__int64 *a1)
{
  int v1; // eax
  __int64 updated; // rax

  sub_26B5C0(a1, 3);
  sub_26B5C0(a1, 2);
  sub_26B5C0(a1, 1);
  v1 = sub_26B5C0(a1, 0);
  updated = Z3_datatype_update_field(v1);
  return sub_26B3D0(a1, updated);
}

