__int64 __fastcall sub_BF3560(__int64 a1, __int64 a2)
{
  bool v4; // cc
  __int64 v5; // rdi
  unsigned int v6; // eax
  unsigned int v7; // eax
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx

  if ( *(_DWORD *)a2 != 6 )
  {
    v4 = *(_DWORD *)(a1 + 16) <= 0x40u;
    *(_BYTE *)a1 = 1;
    v5 = a1 + 8;
    if ( v4 && (v6 = *(_DWORD *)(a2 + 16), v6 <= 0x40) )
    {
      v15 = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 16) = v6;
      *(_QWORD *)(a1 + 8) = v15;
    }
    else
    {
      sub_21E1960(v5, a2 + 8);
    }
    v4 = *(_DWORD *)(a1 + 32) <= 0x40u;
    *(_BYTE *)(a1 + 20) = *(_BYTE *)(a2 + 20);
    if ( v4 && (v7 = *(_DWORD *)(a2 + 32), v7 <= 0x40) )
    {
      v16 = *(_QWORD *)(a2 + 24);
      *(_DWORD *)(a1 + 32) = v7;
      *(_QWORD *)(a1 + 24) = v16;
    }
    else
    {
      sub_21E1960(a1 + 24, a2 + 24);
    }
    result = *(unsigned __int8 *)(a2 + 36);
    *(_BYTE *)(a1 + 36) = result;
    return result;
  }
  *(_BYTE *)a1 = 0;
  v9 = a1 + 40;
  v10 = sub_21D5390();
  v11 = v10;
  if ( *(_QWORD *)(a1 + 40) == v10 )
  {
    if ( v10 == *(_QWORD *)(a2 + 8) )
    {
      sub_21DC1B0(a1 + 40, a2 + 8);
      goto LABEL_13;
    }
LABEL_17:
    if ( v9 != a2 + 8 )
    {
      sub_971860((_QWORD *)(a1 + 40));
      v12 = a2 + 8;
      if ( v11 == *(_QWORD *)(a2 + 8) )
        sub_21DC120(v9, v12);
      else
        sub_21D5A60(v9, v12);
    }
    goto LABEL_13;
  }
  if ( v10 == *(_QWORD *)(a2 + 8) )
    goto LABEL_17;
  sub_21D5810(a1 + 40, a2 + 8);
LABEL_13:
  result = *(_QWORD *)(a2 + 32);
  if ( *(_QWORD *)(a1 + 64) == v11 )
  {
    if ( v11 == result )
      return sub_21DC1B0(a1 + 64, a2 + 32);
  }
  else if ( v11 != result )
  {
    return sub_21D5810(a1 + 64, a2 + 32);
  }
  if ( a1 + 64 != a2 + 32 )
  {
    sub_971860((_QWORD *)(a1 + 64));
    v13 = a2 + 32;
    v14 = a1 + 64;
    if ( v11 == *(_QWORD *)(a2 + 32) )
      return sub_21DC120(v14, v13);
    else
      return sub_21D5A60(v14, v13);
  }
  return result;
}

