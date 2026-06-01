bool __fastcall is_type_choosable(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rbx
  int v3; // eax
  int v4; // eax
  __int64 v5; // rsi
  int v7; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v2 = *(__int64 **)(qword_2CA1698 + 1480);
  v3 = sub_69AA70(v2, a1, a2);
  v4 = sub_3B90A0(v2, v3);
  v5 = *v2;
  v7 = v4;
  return (unsigned __int8)sub_79B3A0(&v7, v5, 0, 4161) == 0;
}

