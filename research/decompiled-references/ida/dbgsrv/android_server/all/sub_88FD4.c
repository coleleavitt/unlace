/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88FD4
// Address: 0x0000000000088FD4

//----- (0000000000088FD4) ----------------------------------------------------
__int64 __fastcall sub_88FD4(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // x1
  unsigned __int64 v5; // x19
  __int64 v6; // x20
  __int64 v7; // x10
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x24
  __int64 v11; // x0
  __int64 v12; // x8
  _QWORD *v13; // x24
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x13
  __int64 v16; // x10
  __int64 v17; // x14
  __int64 v18; // x9
  __int64 *v19; // x8
  __int64 v20; // x11
  __int64 v21; // x12
  __int64 v22; // x8
  unsigned __int64 v23; // x20
  unsigned __int64 v24; // x29
  __int64 v25; // x28
  __int64 v26; // x23
  __int64 v27; // x27
  int v28; // w19
  __int64 v29; // x22
  int v30; // w26
  int v31; // w25
  _QWORD *v32; // x19
  __int64 v33; // x19
  unsigned __int64 v34; // x0
  unsigned __int64 v35; // x19
  __int64 v37; // [xsp+18h] [xbp-B8h]
  unsigned __int64 v38; // [xsp+20h] [xbp-B0h]
  _QWORD *v40; // [xsp+30h] [xbp-A0h]
  unsigned __int64 v42; // [xsp+40h] [xbp-90h]
  __int64 v43; // [xsp+48h] [xbp-88h]
  _QWORD v44[2]; // [xsp+50h] [xbp-80h] BYREF
  __int64 v45; // [xsp+60h] [xbp-70h]
  __int64 v46; // [xsp+68h] [xbp-68h]

  v4 = a2 & 0xFFFFFFFFFFFFF000LL;
  v46 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)(a1 + 4144) = v4;
  if ( v4 >= a3 )
    return 0xFFFFFFFFLL;
  v5 = a2 - v4;
  v6 = a1;
  v7 = 0;
  v8 = a1 + 48;
  v40 = (_QWORD *)(a1 + 4152);
  while ( 1 )
  {
    v37 = v7;
    if ( (*(_BYTE *)(v6 + 32) & 2) == 0 )
    {
      v44[1] = 0;
      v45 = 0;
      v44[0] = off_15DC38;
      ((void (*)(int, ...))callui)(86, v44, 0);
      v10 = v9;
      v44[0] = &off_15DC60;
      qsem_free(v45);
      if ( v10 )
        return 4294967289LL;
      v4 = *(_QWORD *)(v6 + 4144);
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _QWORD))(**(_QWORD **)(v6 + 16) + 288LL))(
            *(_QWORD *)(v6 + 16),
            v4,
            v8,
            4096,
            *(_QWORD *)(v6 + 40));
    v12 = *(_QWORD *)(v6 + 4144);
    if ( v11 != 4096 )
    {
      *(_QWORD *)(v6 + 4176) = v12;
      return 4294967289LL;
    }
    v13 = *(_QWORD **)(v6 + 4152);
    v38 = v5;
    v14 = a3 - v12;
    if ( v14 >= 0x1000 )
      v15 = 4096;
    else
      v15 = v14;
    *(_QWORD *)(v6 + 4240) = v15;
    if ( v40 != v13 )
    {
      while ( 1 )
      {
        v16 = v13[3];
        v17 = v13[4];
        v18 = **(_QWORD **)(v6 + 24);
        v19 = (__int64 *)(v18 + 80 * v16);
        v20 = v19[1];
        v21 = v19[4];
        v22 = *v19;
        v42 = v15;
        v43 = v17;
        v23 = v20 - v17;
        v24 = v20 - v17 >= v15 ? v15 : v20 - v17;
        if ( !v21 )
          break;
        v25 = *(_QWORD *)(v18 + 80 * v16 + 24) + v17;
        if ( v24 )
          goto LABEL_20;
LABEL_34:
        if ( v23 <= v42 )
        {
          **(_QWORD **)(a1 + 8) = v13[2];
          return 1;
        }
        if ( v42 == 4096 )
        {
          v6 = a1;
          v13[4] = v43 + 4096;
          v13 = (_QWORD *)*v13;
        }
        else
        {
LABEL_37:
          v32 = (_QWORD *)*v13;
          *(_QWORD *)v13[1] = *v13;
          *(_QWORD *)(*v13 + 8LL) = v13[1];
          qfree(v13);
          v6 = a1;
          v13 = v32;
          --*(_QWORD *)(a1 + 4168);
        }
        if ( v40 == v13 )
          goto LABEL_39;
        v15 = *(_QWORD *)(v6 + 4240);
      }
      v25 = 0;
      if ( !v24 )
        goto LABEL_34;
LABEL_20:
      v26 = 0;
      v27 = 0;
      v28 = *(_DWORD *)(a1 + 32);
      v29 = v22 + v17;
      while ( 1 )
      {
        v30 = *(unsigned __int8 *)(v8 + v26);
        v31 = *(unsigned __int8 *)(v29 + v26);
        if ( (v28 & 1) == 0 )
        {
          LOBYTE(v30) = toupper(v30);
          LOBYTE(v31) = toupper(v31);
        }
        if ( !v25 )
          break;
        if ( (v28 & 0x20) != 0 )
        {
          if ( (*(_BYTE *)(v25 + v27) & (unsigned __int8)(v30 ^ v31)) != 0 )
            goto LABEL_37;
        }
        else if ( v25 == 255 )
        {
          if ( (_BYTE)v31 != 0xFF )
            break;
        }
        else if ( (unsigned __int8)v30 != (unsigned __int8)v31 && *(_BYTE *)(v25 + v27) )
        {
          goto LABEL_37;
        }
LABEL_33:
        v27 = (int)++v26;
        if ( v24 <= (int)v26 )
          goto LABEL_34;
      }
      if ( (unsigned __int8)v30 != (unsigned __int8)v31 )
        goto LABEL_37;
      goto LABEL_33;
    }
LABEL_39:
    v33 = v38;
    if ( (sub_893BC(v6, v38) & 1) != 0 )
      return 1;
    if ( *(_QWORD *)(v6 + 4216) && v38 < *(_QWORD *)(v6 + 4240) )
      break;
LABEL_46:
    v7 = v37 + 1;
    *(_QWORD *)(v6 + 4144) += 4096LL;
    if ( (unsigned __int64)(v37 + 1) >= 0x3E8 )
    {
      v34 = qtime64();
      v35 = HIDWORD(v34);
      if ( (unsigned int)(HIDWORD(v34) - *(_DWORD *)(v6 + 4232)) < 5 )
      {
        v7 = 0;
      }
      else
      {
        sub_3A0D8(*(_QWORD *)(v6 + 16), "");
        v7 = 0;
        *(_DWORD *)(v6 + 4232) = v35;
      }
    }
    v4 = *(_QWORD *)(v6 + 4144);
    v5 = 0;
    if ( v4 >= a3 )
      return 0xFFFFFFFFLL;
  }
  while ( (sub_89518(v6, v33) & 1) == 0 )
  {
    if ( (unsigned __int64)++v33 >= *(_QWORD *)(v6 + 4240) )
      goto LABEL_46;
  }
  return 1;
}
// 89080: variable 'v9' is possibly undefined
// 15DC38: using guessed type __int64 (__fastcall *off_15DC38[3])();
// 15DC60: using guessed type void (__fastcall __noreturn *off_15DC60)();
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
