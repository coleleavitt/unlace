bool __fastcall sub_1A1A0(int a1, __int64 a2, unsigned __int64 a3)
{
  bool result; // al
  __int64 v5; // rax

  result = 1;
  if ( a1 )
    return a1 >= 0
        && a2 != -1
        && (unsigned __int8)is_mapped(a2)
        && (v5 = getseg(a2)) != 0
        && a1 <= (int)((*(_QWORD *)(v5 + 8) - a2) / a3);
  return result;
}
