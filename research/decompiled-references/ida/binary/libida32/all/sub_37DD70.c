__int64 __fastcall sub_37DD70(__int64 a1)
{
  unsigned __int8 v1; // al
  unsigned __int8 v3; // bp
  __int64 v4; // r12
  int v5; // eax
  unsigned __int64 v6; // r13
  signed int v7; // edx
  signed int v8; // ebp
  int v9; // eax
  bool v10; // r12
  int v11; // eax

  v1 = getinf(30);
  if ( !v1 )
  {
LABEL_2:
    if ( (*(_DWORD *)(a1 + 144) & 0x20) == 0 )
      *(_DWORD *)(a1 + 144) |= 0x40u;
    return 0;
  }
  v3 = v1;
  v4 = *(_QWORD *)(a1 + 528);
  v5 = getinf(25);
  v6 = v5;
  v7 = 0x7FFFFFFF;
  if ( v3 != 0xFF )
    v7 = v3;
  v8 = v7;
  v9 = sub_37D350(a1, *(_DWORD *)(a1 + 16), 0, " CODE XREF:", 0xEu, v7, v5, 1);
  if ( v9 >= 0 )
  {
    if ( v9 )
    {
      *(_DWORD *)(a1 + 144) |= 0x20u;
      v8 -= v9;
      if ( v8 < 0 )
        return 0;
      v10 = 1;
    }
    else
    {
      v10 = (v4 & 0x1000) == 0;
    }
    v11 = sub_37D350(a1, *(_DWORD *)(a1 + 16), 1, " DATA XREF:", 0xFu, v8, v6, 1);
    if ( v11 >= 0 )
    {
      if ( !v11 )
      {
        if ( !v10 )
          remember_problem(5, *(unsigned int *)(a1 + 16), 0);
        goto LABEL_2;
      }
      *(_DWORD *)(a1 + 144) |= 0x20u;
      return 0;
    }
  }
  return 1;
}

