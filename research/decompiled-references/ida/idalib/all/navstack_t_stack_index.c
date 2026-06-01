__int64 __fastcall navstack_t_stack_index(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[3]; // [rsp+0h] [rbp-18h] BYREF

  v2[1] = __readfsqword(0x28u);
  result = 0;
  if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
  {
    v2[0] = *(_QWORD *)a1;
    return sub_7BE710(v2, qword_2CCB598, 0, 65);
  }
  return result;
}
