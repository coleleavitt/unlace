unsigned __int64 __fastcall set_custom_data_type_ids(__int64 a1, unsigned __int16 *a2)
{
  _QWORD *v2; // r13
  _BYTE *v3; // rbp
  unsigned __int64 v5; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v6[40]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( a2 )
  {
    v2 = *(_QWORD **)(qword_2CCB598 + 1672);
    v3 = sub_3E98A0((__int64)v6, 26, a2);
    v5 = sub_3BDD60(v2, a1);
    sub_7BE7C0(&v5, *v2, 28, v6, v3, 83);
  }
  return v7 - __readfsqword(0x28u);
}
