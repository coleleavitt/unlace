/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6A2C
// Address: 0x00000000000A6A2C

//----- (00000000000A6A2C) ----------------------------------------------------
__int64 __fastcall sub_A6A2C(__int64 a1, unsigned int a2)
{
  unsigned int v4; // w22
  __int64 v5; // x8
  unsigned __int64 v6; // x22
  __time_t v7; // x0
  unsigned __int64 v8; // x0
  bool v9; // zf
  unsigned __int64 v10; // x21
  char v11; // w28
  unsigned __int64 v12; // x0
  unsigned __int64 v13; // x8
  unsigned __int64 v14; // x9
  unsigned __int64 v15; // x23
  __int64 v16; // x8
  __int64 v17; // x0
  _DWORD *v18; // x0
  struct pollfd v20[2]; // [xsp+0h] [xbp-70h] BYREF

  v20[1] = *(struct pollfd *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1) & 1) != 0 )
  {
LABEL_2:
    v4 = -1;
    *(_QWORD *)(a1 + 88) = "select";
    return v4;
  }
  while ( 2 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    if ( v5 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32 * v5 - 16);
      if ( (a2 & 0x80000000) != 0 )
        goto LABEL_14;
    }
    else
    {
      v6 = 0;
      if ( (a2 & 0x80000000) != 0 )
        goto LABEL_14;
    }
    v7 = qtime64();
    v8 = sub_A48CC(v7, a2);
    if ( v8 )
    {
      v9 = v8 <= v6 || v6 == 0;
      v10 = v8;
      v11 = 0;
      if ( v9 )
        v6 = v8;
      goto LABEL_15;
    }
LABEL_14:
    v10 = 0;
    v11 = 1;
    if ( v6 )
    {
LABEL_15:
      v12 = qtime64();
      v13 = 1000000 * HIDWORD(v12) + (unsigned int)v12;
      v14 = 1000000 * HIDWORD(v6) + (unsigned int)v6;
      if ( v14 <= v13 )
        v14 = 1000000 * HIDWORD(v12) + (unsigned int)v12;
      v15 = (v14 - v13) / 0x3E8;
      goto LABEL_19;
    }
    LODWORD(v15) = -1;
LABEL_19:
    v16 = *(_QWORD *)(a1 + 56);
    v20[0].events = 1;
    v20[0].fd = v16;
    while ( 1 )
    {
      v17 = poll(v20, 1u, v15);
      v4 = v17;
      if ( (_DWORD)v17 != -1 )
        break;
      v18 = (_DWORD *)__errno(v17);
      if ( *v18 != 4 )
      {
        *(_QWORD *)(a1 + 88) = "poll";
LABEL_28:
        *(_DWORD *)(a1 + 96) = *v18;
        return v4;
      }
    }
    if ( !(_DWORD)v17 )
    {
      if ( (v11 & 1) == 0 && qtime64() >= v10 )
      {
        *(_QWORD *)(a1 + 88) = "poll";
        v4 = -1;
        *(_DWORD *)(a1 + 96) = 62;
        return v4;
      }
      if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1) & 1) == 0 )
        continue;
      goto LABEL_2;
    }
    break;
  }
  if ( (v17 & 0x80000000) != 0 )
  {
    *(_QWORD *)(a1 + 88) = "poll";
    v18 = (_DWORD *)__errno(v17);
    goto LABEL_28;
  }
  return v4;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
