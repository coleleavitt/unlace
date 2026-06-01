__int64 __fastcall sub_FD4990(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // eax
  int v8; // eax
  __int64 *v9; // rsi
  __int64 *v10; // r15
  __int64 v11; // r15
  unsigned int v12; // r14d
  unsigned int v13; // eax
  int v15; // r15d
  unsigned int v16; // eax
  int v17; // eax
  __int64 *v18[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = sub_2220DF0(a2, a3);
  v8 = sub_2221120(a1, a2, a3, v7);
  if ( v8 == -1 )
    v9 = (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
  else
    v9 = (__int64 *)(*(_QWORD *)a1 + 8LL * v8);
  sub_FD40F0(v18, v9, 1);
  v10 = v18[0];
  sub_FD40F0(v18, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
  if ( v18[0] == v10
    || (v11 = *v10, v12 = *(unsigned __int8 *)(v11 + 24), !(_BYTE)v12)
    || (unsigned int)sub_FC6D50(a4) < *(_DWORD *)(v11 + 12) )
  {
LABEL_5:
    LOBYTE(v13) = sub_FD43E0(a1, a2, a3, a4);
    return v13;
  }
  v15 = *(_DWORD *)(v11 + 16);
  v16 = sub_FC6D50(a4);
  if ( v16 == 120 )
  {
    v17 = 4;
    goto LABEL_17;
  }
  if ( v16 > 0x78 )
  {
    if ( v16 == 200 )
    {
      v17 = 8;
    }
    else
    {
      if ( v16 != 300 )
        return sub_FD4AE0();
      v17 = 16;
    }
LABEL_17:
    if ( (v17 & v15) != 0 )
      return v12;
    goto LABEL_5;
  }
  if ( v16 == 100 )
  {
    v17 = 1;
    goto LABEL_17;
  }
  if ( v16 == 110 )
  {
    v17 = 2;
    goto LABEL_17;
  }
  return sub_FD4AE0();
}

