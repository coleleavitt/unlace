__int64 __fastcall sub_4ADEB0(__int64 a1)
{
  __int64 result; // rax

  sub_4DEC50(a1 + 104);
  result = *(_QWORD *)(a1 + 2384);
  *(_BYTE *)(a1 + 2024) = 0;
  *(_QWORD *)(a1 + 1792) = -1;
  if ( result )
    *(_DWORD *)(result + 216) = 15;
  return result;
}
