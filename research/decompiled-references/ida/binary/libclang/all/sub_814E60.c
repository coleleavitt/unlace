__int64 __fastcall sub_814E60(__int64 a1, unsigned __int16 *a2)
{
  __int64 result; // rax

  result = sub_8146E0(a2, *(_QWORD *)a1, *(unsigned __int8 *)(a1 + 8));
  if ( (_BYTE)result )
    *(_BYTE *)(a1 + 9) = 1;
  return result;
}

