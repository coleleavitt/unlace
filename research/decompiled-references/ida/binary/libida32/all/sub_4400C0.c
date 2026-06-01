__int64 __fastcall sub_4400C0(__int64 a1, int a2, _DWORD *a3, unsigned __int8 a4)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(result + 12) & 1) != 0 )
    return sub_4F0F80((int)a1 + 2408, a2, *a3, a3[1] - *a3, a4, 0, 0);
  return result;
}

