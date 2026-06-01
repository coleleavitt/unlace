__int64 __fastcall sub_BDDA30(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  result = sub_BDD420(a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8), a4, a5);
  if ( (_BYTE)result )
    *(_BYTE *)(a1 + 9) = 1;
  return result;
}

