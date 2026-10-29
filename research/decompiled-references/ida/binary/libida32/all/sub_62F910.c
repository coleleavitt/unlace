__int64 __fastcall sub_62F910(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  if ( !a2 )
    a2 = a1[1];
  if ( (int)a3 <= 0 )
    return 0;
  v3 = *(_QWORD *)(a2 + 64);
  if ( !v3 || (*(_BYTE *)(v3 + 8) & 2) == 0 )
    return 0;
  *(_DWORD *)(a2 + 32) |= 0x40u;
  return sub_62F600(a1, v3, a3);
}

