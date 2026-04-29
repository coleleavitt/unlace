__int64 __fastcall sub_C8D0(__int64 a1, double a2)
{
  __int64 v3; // rdx
  int v4; // eax

  **(_QWORD **)(a1 + 40) = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)sub_3FC90(*(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 32)) )
  {
    v3 = *(_QWORD *)(a1 + 16);
    ++*(_DWORD *)(a1 + 48);
    v4 = *(_DWORD *)(v3 + 24);
    BYTE1(v4) &= ~2u;
    LOBYTE(v4) = v4 | 0x80;
    *(_DWORD *)(v3 + 24) = v4;
    sub_C7F0(*(_QWORD *)(a1 + 8), 1, (__int64)"vd_mba success %a", a2);
  }
  return 0;
}
