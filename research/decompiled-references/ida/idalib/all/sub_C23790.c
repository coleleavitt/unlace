__int64 __fastcall sub_C23790(__int64 a1, __int64 *a2)
{
  unsigned int v2; // eax
  char v3; // al
  unsigned int v5; // eax
  __int64 v6; // rdx

  if ( *(_BYTE *)(a1 + 16) )
  {
    if ( *(_DWORD *)(a1 + 8) <= 0x40u && (v5 = *((_DWORD *)a2 + 2), v5 <= 0x40) )
    {
      v6 = *a2;
      *(_DWORD *)(a1 + 8) = v5;
      *(_QWORD *)a1 = v6;
    }
    else
    {
      sub_22056A0(a1, a2);
    }
    *(_BYTE *)(a1 + 12) = *((_BYTE *)a2 + 12);
    return a1;
  }
  else
  {
    v2 = *((_DWORD *)a2 + 2);
    *(_DWORD *)(a1 + 8) = v2;
    if ( v2 > 0x40 )
      sub_2205510(a1);
    else
      *(_QWORD *)a1 = *a2;
    v3 = *((_BYTE *)a2 + 12);
    *(_BYTE *)(a1 + 16) = 1;
    *(_BYTE *)(a1 + 12) = v3;
    return a1;
  }
}
