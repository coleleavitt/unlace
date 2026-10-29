__int64 __fastcall sub_1837ED0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax

  result = sub_18C1B30(*a1, a2, a4);
  if ( result != 1 )
    return sub_191AF90(*a1, a3, (unsigned int)a2, result & 0xFFFFFFFFFFFFFFFELL, (unsigned int)a2);
  return result;
}
