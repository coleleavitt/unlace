__int64 __fastcall sub_21A33F0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // rax
  unsigned int v7; // eax
  __int64 v8; // rdx

  v3 = *(_QWORD *)(a2 + 560) + 144 * HIDWORD(a3);
  if ( (*(_BYTE *)(v3 + 20) & 0x10) != 0 )
  {
    v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 360LL);
    if ( v4 == sub_21A2910 )
    {
      v5 = -858993459 * (unsigned int)((__int64)(*(_QWORD *)(a2 + 80) - *(_QWORD *)(a2 + 72)) >> 4);
    }
    else
    {
      v5 = v4(a2);
      a2 = v8;
    }
    *(_QWORD *)a1 = v5;
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)(a1 + 8) = a2;
    return a1;
  }
  else
  {
    switch ( *(_BYTE *)(v3 + 16) )
    {
      case 0:
        v7 = *(_DWORD *)(a2 + 688);
        break;
      case 1:
        v7 = *(_DWORD *)(a2 + 692);
        break;
      case 2:
        v7 = *(_DWORD *)(a2 + 700);
        break;
      case 3:
        v7 = *(_DWORD *)(v3 + 96);
        break;
      case 4:
        v7 = *(_DWORD *)(a2 + 696);
        break;
      case 5:
        v7 = *(_DWORD *)(a2 + 704);
        break;
    }
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = a2;
    return a1;
  }
}
