__int64 __fastcall navstack_t_stack_index(int *a1)
{
  __int64 result; // rax
  int v2; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  result = 0;
  if ( (a1[1] & 1) == 0 )
  {
    v2 = *a1;
    return sub_79B3A0(&v2, qword_2CA1698, 0, 65);
  }
  return result;
}

