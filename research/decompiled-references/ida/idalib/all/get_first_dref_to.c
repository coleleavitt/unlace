__int64 __fastcall get_first_dref_to(unsigned __int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // [rsp+0h] [rbp-28h] BYREF
  char v4; // [rsp+8h] [rbp-20h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v3 = -1;
  v1 = qword_2CCB598;
  v4 = 0;
  sub_4108F0(*(_QWORD **)(qword_2CCB598 + 1672), (__int64)&v3, a1);
  result = v3;
  if ( v3 != -1 )
    *(_BYTE *)(*(_QWORD *)(v1 + 1672) + 2320LL) = v4;
  return result;
}
