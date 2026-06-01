__int64 __fastcall sub_1C369E0(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)((*a2 & 0x200) != 0) + 1;
  *(_QWORD *)&a2[4 * result + 12] = a3;
  return result;
}
