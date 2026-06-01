__int64 __fastcall sub_2123210(__int64 a1)
{
  __int64 (*v1)(); // rax
  __int64 result; // rax

  v1 = *(__int64 (**)())(*(_QWORD *)a1 + 64LL);
  if ( v1 == sub_21231B0 )
    return 0;
  result = ((__int64 (__fastcall *)(__int64, _QWORD))v1)(a1, 0);
  if ( !BYTE4(result) )
    return 0;
  return result;
}
