/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_885D4
// Address: 0x00000000000885D4

//----- (00000000000885D4) ----------------------------------------------------
__int64 __fastcall sub_885D4(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x11
  __int64 v6; // x19
  __int64 v7; // x0
  __int64 v8; // x24
  __int64 v9; // x0
  unsigned __int64 v10; // x8
  unsigned __int64 v11; // x9
  _QWORD *v12; // x24
  unsigned __int64 v13; // x14
  __int64 v14; // x10
  __int64 v15; // x9
  __int64 *v16; // x11
  __int64 v17; // x8
  __int64 v18; // x13
  unsigned __int64 v19; // x28
  unsigned __int64 v20; // x27
  unsigned __int64 v21; // x11
  unsigned __int64 v22; // x21
  __int64 v23; // x20
  __int64 v24; // x23
  __int64 v25; // x22
  int v26; // w19
  int v27; // w26
  int v28; // w25
  _QWORD *v29; // x19
  __int64 v30; // x19
  unsigned __int64 v31; // x0
  unsigned __int64 v32; // x19
  __int64 v34; // [xsp+8h] [xbp-D8h]
  __int64 v35; // [xsp+10h] [xbp-D0h]
  unsigned __int64 v36; // [xsp+18h] [xbp-C8h]
  __int64 v38; // [xsp+30h] [xbp-B0h]
  _QWORD *v39; // [xsp+38h] [xbp-A8h]
  __int64 v40; // [xsp+40h] [xbp-A0h]
  unsigned __int64 v41; // [xsp+48h] [xbp-98h]
  unsigned __int64 v43; // [xsp+58h] [xbp-88h]
  _QWORD v44[2]; // [xsp+60h] [xbp-80h] BYREF
  __int64 v45; // [xsp+70h] [xbp-70h]
  __int64 v46; // [xsp+78h] [xbp-68h]

  v3 = (a3 - 1) & 0xFFFFFFFFFFFFF000LL;
  v46 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)(a1 + 4144) = v3;
  if ( v3 + 4096 <= a2 )
    return 0xFFFFFFFFLL;
  v34 = a1 + 48;
  v4 = a1;
  v5 = 0;
  v6 = a3 - v3;
  v39 = (_QWORD *)(a1 + 4152);
  v38 = a1 + 4145;
  while ( 1 )
  {
    v35 = v5;
    if ( (*(_BYTE *)(v4 + 32) & 2) == 0 )
    {
      v44[1] = 0;
      v45 = 0;
      v44[0] = off_15DC38;
      ((void (*)(int, ...))callui)(86, v44, 0);
      v8 = v7;
      v44[0] = &off_15DC60;
      qsem_free(v45);
      if ( v8 )
        return 4294967289LL;
      v3 = *(_QWORD *)(v4 + 4144);
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _QWORD))(**(_QWORD **)(v4 + 16) + 288LL))(
           *(_QWORD *)(v4 + 16),
           v3,
           v34,
           4096,
           *(_QWORD *)(v4 + 40));
    v10 = *(_QWORD *)(v4 + 4144);
    if ( v9 != 4096 )
    {
      *(_QWORD *)(v4 + 4176) = v10;
      return 4294967289LL;
    }
    v11 = a2;
    v12 = *(_QWORD **)(v4 + 4152);
    v36 = v6;
    if ( v10 >= a2 )
      v11 = *(_QWORD *)(v4 + 4144);
    v13 = v11 - v10;
    *(_QWORD *)(v4 + 4240) = v11 - v10;
    if ( v39 != v12 )
    {
      while ( 1 )
      {
        v14 = v12[3];
        v15 = **(_QWORD **)(v4 + 24);
        v16 = (__int64 *)(v15 + 80 * v14);
        v17 = *v16;
        v18 = v16[4];
        v40 = v12[4];
        v41 = v13;
        v19 = v16[1] - v40;
        v20 = v19 >= 4096 - v13 ? 4096 - v13 : v16[1] - v40;
        v21 = v19 - v20;
        v43 = 4096 - v13;
        if ( !v18 )
          break;
        v22 = *(_QWORD *)(v15 + 80 * v14 + 24) + v21;
        if ( v20 )
          goto LABEL_19;
LABEL_33:
        if ( v19 <= v43 )
        {
          **(_QWORD **)(a1 + 8) = v12[2];
          return 1;
        }
        if ( v41 )
        {
LABEL_35:
          v29 = (_QWORD *)*v12;
          *(_QWORD *)v12[1] = *v12;
          *(_QWORD *)(*v12 + 8LL) = v12[1];
          qfree(v12);
          v4 = a1;
          v12 = v29;
          --*(_QWORD *)(a1 + 4168);
        }
        else
        {
          v4 = a1;
          v12[4] = v40 + 4096;
          v12 = (_QWORD *)*v12;
        }
        if ( v39 == v12 )
          goto LABEL_38;
        v13 = *(_QWORD *)(v4 + 4240);
      }
      v22 = 0;
      if ( !v20 )
        goto LABEL_33;
LABEL_19:
      v23 = v17 + v21;
      v24 = 0;
      v25 = 0;
      v26 = *(_DWORD *)(a1 + 32);
      while ( 1 )
      {
        v27 = *(unsigned __int8 *)(v38 - v20 - 1 + v24);
        v28 = *(unsigned __int8 *)(v23 + v24);
        if ( (v26 & 1) == 0 )
        {
          LOBYTE(v27) = toupper(v27);
          LOBYTE(v28) = toupper(v28);
        }
        if ( !v22 )
          break;
        if ( (v26 & 0x20) != 0 )
        {
          if ( (*(_BYTE *)(v22 + v25) & (unsigned __int8)(v27 ^ v28)) != 0 )
            goto LABEL_35;
        }
        else if ( v22 == 255 )
        {
          if ( (_BYTE)v28 != 0xFF )
            break;
        }
        else if ( (unsigned __int8)v27 != (unsigned __int8)v28 && *(_BYTE *)(v22 + v25) )
        {
          goto LABEL_35;
        }
LABEL_32:
        v25 = (int)++v24;
        if ( v20 <= (int)v24 )
          goto LABEL_33;
      }
      if ( (unsigned __int8)v27 != (unsigned __int8)v28 )
        goto LABEL_35;
      goto LABEL_32;
    }
LABEL_38:
    v30 = v36;
    if ( (sub_889D8(v4, v36) & 1) != 0 )
      return 1;
    if ( *(_QWORD *)(v4 + 4216) && *(_QWORD *)(v4 + 4240) < v36 )
      break;
LABEL_43:
    v5 = v35 + 1;
    *(_QWORD *)(v4 + 4144) -= 4096LL;
    if ( (unsigned __int64)(v35 + 1) >= 0x3E8 )
    {
      v31 = qtime64();
      v32 = HIDWORD(v31);
      if ( (unsigned int)(HIDWORD(v31) - *(_DWORD *)(v4 + 4232)) < 5 )
      {
        v5 = 0;
      }
      else
      {
        sub_3A0D8(*(_QWORD *)(v4 + 16), "");
        v5 = 0;
        *(_DWORD *)(v4 + 4232) = v32;
      }
    }
    v3 = *(_QWORD *)(v4 + 4144);
    v6 = 4096;
    if ( v3 + 4096 <= a2 )
      return 0xFFFFFFFFLL;
  }
  while ( (sub_88B58(v4, v30) & 1) == 0 )
  {
    if ( *(_QWORD *)(v4 + 4240) >= (unsigned __int64)--v30 )
      goto LABEL_43;
  }
  return 1;
}
// 88698: variable 'v7' is possibly undefined
// 15DC38: using guessed type __int64 (__fastcall *off_15DC38[3])();
// 15DC60: using guessed type void (__fastcall __noreturn *off_15DC60)();
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
