__int64 __fastcall sub_BFCC40(__int64 a1, __int64 *a2)
{
  unsigned int v2; // eax
  __int64 v4; // rdx

  if ( *(_DWORD *)(a1 + 8) <= 0x40u && (v2 = *((_DWORD *)a2 + 2), v2 <= 0x40) )
  {
    v4 = *a2;
    *(_DWORD *)(a1 + 8) = v2;
    *(_QWORD *)a1 = v4;
  }
  else
  {
    sub_21E1960(a1, a2);
  }
  *(_BYTE *)(a1 + 12) = *((_BYTE *)a2 + 12);
  return a1;
}

