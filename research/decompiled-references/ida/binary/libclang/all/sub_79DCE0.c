__int64 __fastcall sub_79DCE0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // r13d
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 *v7; // rdx
  unsigned __int64 v9; // rbx

  v3 = a2;
  LOBYTE(a3) = (*(_BYTE *)(a1 + 8) & 0x7F) == 0 || (*(_BYTE *)(a1 + 8) & 0x7F) == 22;
  v4 = a3;
  if ( (_BYTE)a3 )
  {
    while ( 1 )
    {
      v5 = sub_79CC40(v3);
      if ( v5 == sub_79CC40(a1) )
        break;
      if ( (*(_BYTE *)(v3 + 8) & 0x7F) != 0x16 || (*(_BYTE *)(v3 + 9) & 0x20) == 0 )
        return 0;
      v6 = *(_QWORD *)(sub_79A2E0(v3) + 16);
      v7 = (unsigned __int64 *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      v3 = v6 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v6 & 4) != 0 )
      {
        v3 = *v7;
        if ( !*v7 )
          return 0;
      }
      else if ( !v7 )
      {
        return 0;
      }
    }
    return v4;
  }
  else
  {
    v9 = sub_79CC40(a2);
    LOBYTE(v4) = v9 == sub_79CC40(a1);
    return v4;
  }
}

