unsigned __int64 __fastcall sub_6CA7E0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v8; // [rsp+8h] [rbp-30h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v3 = *a1;
  v10 = __readfsqword(0x28u);
  v5 = sub_3BDD60(*(_QWORD **)(v3 + 1672), a2);
  v6 = *a1;
  v8 = v5;
  if ( a3 <= 0 )
  {
    sub_7BE850(&v8, v6, -8, 65);
  }
  else
  {
    v9 = a3 + 1;
    sub_7BE7C0(&v8, v6, -8, &v9, 8, 65);
  }
  return v10 - __readfsqword(0x28u);
}
