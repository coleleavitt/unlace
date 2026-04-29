__int64 __fastcall sub_288830(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  int v4; // r13d
  int v5; // eax

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  if ( *(_BYTE *)(v2 + 13) )
    return v3;
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8) + 8LL);
  LOBYTE(v3) = v4 == 50 || (unsigned int)(v4 - 19) <= 2;
  if ( (_BYTE)v3
    && (!(unsigned __int8)is_numop(*(_QWORD *)(v2 + 40), (unsigned int)*(char *)(v2 + 12))
     || (unsigned int)get_radix(*(_QWORD *)(v2 + 40), (unsigned int)*(char *)(v2 + 12)) != 16) )
  {
    sub_3243C0(*(_QWORD *)(a2 + 24) + 8LL, 0x11111101100000LL);
    if ( (unsigned int)(v4 - 1) > 0x2C )
      goto LABEL_4;
    return v3;
  }
  v5 = v4 - 1;
  LOBYTE(v3) = (unsigned int)(v4 - 1) <= 0x2C;
  LOBYTE(v5) = v4 == 58;
  v3 |= v5;
  LOBYTE(v3) = (v4 != 16) & v3;
  if ( !(_BYTE)v3 )
  {
LABEL_4:
    if ( !**(_QWORD **)(a2 + 24) && (unsigned int)get_tinfo_property(*(_QWORD *)(a2 + 48), 3) == 2 )
    {
      sub_27C6C0(a2, *(_QWORD *)(a1 + 72), 1u, 0);
      if ( (unsigned __int8)sub_27E740(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
        *(_DWORD *)(a1 + 8) |= 8u;
      return 1;
    }
    return v3;
  }
  return 0;
}
