__int64 __fastcall udt_type_data_t__find_member(__int64 a1, unsigned __int64 *a2, int a3)
{
  int v4; // [rsp+Ch] [rbp-1Ch] BYREF
  unsigned __int64 v5; // [rsp+10h] [rbp-18h] BYREF
  int v6[2]; // [rsp+18h] [rbp-10h]

  v4 = a3;
  *(_QWORD *)v6 = __readfsqword(0x28u);
  return (int)sub_552F80(*(_QWORD *)(qword_2CCB598 + 1672), a2, &v5, &v4, a1);
}
