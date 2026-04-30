__int64 __fastcall sub_379940(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  sub_2B24B0(a1, a2, a3);
  result = (unsigned int)*a2;
  *a2 = *a3;
  *a3 = result;
  return result;
}
