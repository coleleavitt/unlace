__int64 __fastcall sub_1E861A0(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v5; // dl

  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 11200);
  *(_BYTE *)(a1 + 12) = *(_BYTE *)(a2 + 12592);
  *(_BYTE *)(a1 + 13) = *(_BYTE *)(a2 + 11248);
  result = *(unsigned int *)(*(_QWORD *)(a2 + 264) + 204LL);
  *(_BYTE *)(a1 + 14) = (_DWORD)result == 0;
  if ( a3 || (result = sub_1DBADC0(a2), !v5) )
  {
    *(_BYTE *)(a2 + 11248) = a3;
    *(_BYTE *)(a2 + 12592) = 1;
  }
  else
  {
    *(_BYTE *)(a2 + 11248) = 0;
  }
  return result;
}
