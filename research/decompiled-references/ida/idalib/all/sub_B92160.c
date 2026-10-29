__int64 __fastcall sub_B92160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned int v8; // r12d
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9

  v6 = a2;
  v7 = *(_BYTE *)(a1 + 8) & 0x7F;
  LOBYTE(a4) = (_DWORD)v7 == 24 || (*(_BYTE *)(a1 + 8) & 0x7F) == 0;
  v8 = a4;
  if ( (_BYTE)a4 )
  {
    while ( 1 )
    {
      v9 = sub_B91570(v6, a2, v7, a4, a5, a6);
      if ( v9 == sub_B91570(a1, a2, v10, v11, v12, v13) )
        break;
      if ( (*(_BYTE *)(v6 + 8) & 0x7F) != 0x18 || v6 == 48 || (*(_BYTE *)(v6 + 9) & 0x20) == 0 )
        return 0;
      v14 = *(_QWORD *)(sub_B8C1B0(v6) + 16);
      if ( (v14 & 4) != 0 )
      {
        v6 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v6 )
          return 0;
      }
      else
      {
        v6 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v6 )
          return 0;
      }
    }
    return v8;
  }
  else
  {
    v16 = sub_B91570(a2, a2, v7, a4, a5, a6);
    LOBYTE(v8) = v16 == sub_B91570(a1, a2, v17, v18, v19, v20);
    return v8;
  }
}
