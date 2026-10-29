__int64 __fastcall insn_get_next_byte(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  unsigned __int8 v3; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v1 = *(unsigned __int16 *)(a1 + 14);
  v4 = __readfsqword(0x28u);
  sub_3B9CB0(*(_QWORD *)(qword_2CA1698 + 1480), &v3, *(_DWORD *)(a1 + 8) + v1);
  result = v3;
  ++*(_WORD *)(a1 + 14);
  return result;
}

