__int64 __fastcall get_type_ordinal(__int64 a1, const char *a2)
{
  unsigned int v3; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v3 = 0;
  sub_64F830(*(_QWORD *)(qword_2CCB598 + 1672), a1, a2, 3, nullptr, 0, 0, 0, 0, &v3);
  return v3;
}
