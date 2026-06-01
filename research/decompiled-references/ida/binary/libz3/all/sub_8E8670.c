__int64 __fastcall sub_8E8670(__int64 a1, __int64 *a2, int a3)
{
  __int64 result; // rax

  result = qword_1C7EC50;
  if ( *(_QWORD *)(a1 + 8984) == qword_1C7EC50 && !*(_BYTE *)(a1 + 2416) )
  {
    result = *a2;
    *(_DWORD *)(a1 + 8992) = a3;
    *(_QWORD *)(a1 + 8984) = result;
  }
  return result;
}

