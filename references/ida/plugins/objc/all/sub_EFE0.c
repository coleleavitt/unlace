__int64 __fastcall sub_EFE0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0;
  if ( *(_QWORD *)(a2 + 8) > 1u && *(_QWORD *)(a3 + 8) > 1u )
  {
    sub_D6A0(a1);
    return 1;
  }
  return result;
}
