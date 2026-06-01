__int64 __fastcall sub_F487E0(__int64 a1)
{
  __int64 result; // rax

  result = 1;
  if ( (a1 & 0xFFFFFFFFFFFFFFF0LL) != 0 && !(a1 & 7 | (a1 >> 3) & 1) )
    return byte_23DC1C0[*(unsigned __int8 *)(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
  return result;
}

