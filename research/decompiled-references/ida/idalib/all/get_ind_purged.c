__int64 __fastcall get_ind_purged(unsigned __int64 a1)
{
  _QWORD *v1; // rbx
  char v2; // dl
  __int64 result; // rax
  __int64 v4; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  v1 = *(_QWORD **)(qword_2CCB598 + 1672);
  if ( a1 != -1 )
    a1 = sub_3B9DC0(*(_QWORD **)(qword_2CCB598 + 1672), a1);
  v5[0] = a1;
  v2 = sub_7BEFD0(v5, *v1, &v4, 15, 65);
  result = -1;
  if ( v2 )
    return v4 - 1;
  return result;
}
