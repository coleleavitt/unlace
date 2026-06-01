__int64 __fastcall get_byte(unsigned __int64 a1)
{
  unsigned __int8 v2; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  sub_3BEB30(*(_QWORD **)(qword_2CCB598 + 1672), &v2, a1);
  return v2;
}
