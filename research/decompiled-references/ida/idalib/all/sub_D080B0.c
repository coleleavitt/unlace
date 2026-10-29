__int64 __fastcall sub_D080B0(__int64 a1, char a2, __int64 *a3)
{
  __int64 v3; // rax

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = *a3;
    *(_BYTE *)(a1 + 820) = a2;
    *(_BYTE *)(a1 + 821) = 1;
    *(_QWORD *)(a1 + 1240) = v3;
  }
  return 1;
}
