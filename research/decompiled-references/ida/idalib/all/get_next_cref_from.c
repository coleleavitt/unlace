unsigned __int64 __fastcall get_next_cref_from(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  char v5; // al
  unsigned __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+10h] [rbp-38h] BYREF
  char v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v9 = a2;
  v3 = qword_2CCB598;
  v4 = *(_QWORD *)(qword_2CCB598 + 1672);
  v5 = *(_BYTE *)(v4 + 2320);
  v10 = v5;
  if ( a1 < a2 && a2 - a1 <= 0x3F && v5 == 21 && (v8 = a1, v7 = sub_3C1F00((_QWORD *)v4, a1), a1 = v8, a2 == v7) )
    sub_3E1CA0((_QWORD *)v4, (__int64)&v9, v8);
  else
    sub_3E1E80((_QWORD *)v4, &v9, a1);
  result = v9;
  if ( v9 != -1 )
    *(_BYTE *)(*(_QWORD *)(v3 + 1672) + 2320LL) = v10;
  return result;
}
