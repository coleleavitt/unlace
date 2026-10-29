__int64 __fastcall get_next_cref_to(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  char v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v6 = a2;
  v3 = qword_2CCB598;
  v4 = *(_QWORD *)(qword_2CCB598 + 1672);
  v7 = *(_BYTE *)(v4 + 2320);
  sub_3E3390((_QWORD *)v4, (__int64)&v6, a1);
  result = v6;
  if ( v6 != -1 )
    *(_BYTE *)(*(_QWORD *)(v3 + 1672) + 2320LL) = v7;
  return result;
}
