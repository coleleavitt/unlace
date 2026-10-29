/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A1934
// Address: 0x00000000000A1934

//----- (00000000000A1934) ----------------------------------------------------
__int64 __fastcall sub_A1934(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall ***a6)(_QWORD, char *, __int64))
{
  __int64 v12; // x8
  __int64 result; // x0
  __int64 v14; // x26
  __int64 v15; // x24
  __int64 v16; // x9
  __int64 v17; // x8
  __int64 v18; // x24
  unsigned int v19; // w9
  unsigned int v20; // w8
  char *v21; // x1
  unsigned int v22; // w25
  __int64 v23; // x8
  unsigned int v24; // w24
  __int64 v25; // x9
  unsigned int v26; // w25
  unsigned int v27; // w1
  char *v28; // x1
  char *v29; // x1
  char *v30; // x1
  char *v31; // x1
  __int64 v32; // x0
  __int64 (__fastcall **v33)(_QWORD, char *, __int64); // x8
  __int64 v34; // x1
  __int64 v35; // x0
  __int64 v36; // x9
  unsigned int v37; // w25
  unsigned int v38; // w1
  char *v39; // x1
  __int64 v40; // x0
  __int64 v41; // x9
  int v42; // w8
  int v43; // w9
  __int64 v44; // x0
  __int64 v45; // x9
  int v46; // w8
  int v47; // w9
  unsigned int v48; // w0
  __int64 v49; // x9
  unsigned __int8 *v50; // x21
  __int64 v51; // x0

  *(_BYTE *)a4 = (*a6)[5](a6, (char *)a1, a2) & 1;
  v12 = a1 + 40LL * (int)a2;
  result = 0;
  v14 = (int)a2;
  v15 = v12 + 40;
  switch ( *(_BYTE *)(v12 + 41) )
  {
    case 1:
      v18 = *(unsigned __int16 *)(a1 + 40 * v14 + 46);
      v19 = v18 - 61;
      v20 = v18 - 163;
      if ( (unsigned int)(v18 - 61) >= 0x20 && (unsigned __int16)(v18 - 163) > 0x1Fu )
      {
        if ( (_DWORD)v18 == 160 )
          goto LABEL_73;
        if ( (unsigned int)v18 >= 0x10 && v19 >= 0x20 )
        {
          if ( ((unsigned int)v18 | 2) == 0x12 )
          {
            v21 = byte_1071D3;
LABEL_93:
            v44 = (**a6)(a6, v21, a5);
            v45 = 8;
            if ( (a3 & 1) != 0 )
              v45 = 4;
            if ( (_DWORD)v18 != 15 )
              v45 = 0;
            v17 = *(_QWORD *)(v44 + 8) + v45;
            goto LABEL_115;
          }
          if ( (unsigned int)(v18 - 129) >= 0x1F && v20 >= 0x20 )
          {
            if ( (_DWORD)v18 == 161 )
            {
              v21 = "SP";
            }
            else
            {
              if ( (_DWORD)v18 != 162 )
              {
                sub_4EC28((__int64)"Bad register number passed to arm.get_register_value: %d", v18);
                v17 = 0;
                goto LABEL_115;
              }
              v21 = "PC";
            }
            goto LABEL_93;
          }
        }
        v21 = (char *)*(&off_15E6A0 + v18);
        goto LABEL_93;
      }
      if ( (unsigned int)v18 < 0x10 || v19 < 0x20 )
        goto LABEL_38;
      if ( ((unsigned int)v18 | 2) == 0x12 )
      {
        v28 = byte_1071D3;
      }
      else if ( (unsigned int)(v18 - 129) < 0x1F || v20 < 0x20 )
      {
LABEL_38:
        v28 = (char *)*(&off_15E6A0 + *(unsigned __int16 *)(a1 + 40 * v14 + 46));
      }
      else if ( (_DWORD)v18 == 161 )
      {
        v28 = "SP";
      }
      else
      {
        if ( (_DWORD)v18 != 162 )
        {
          sub_4EC28((__int64)"Bad register number passed to arm.get_register_value: %d", v18);
          return 0;
        }
        v28 = "PC";
      }
      v32 = (**a6)(a6, v28, a5);
      *(_DWORD *)(a4 + 48) = (unsigned __int64)(v32 - a5) >> 5;
      sub_98928(a4 + 16, v32);
      if ( (*(_DWORD *)(a4 + 16) & 0x80000000) == 0 )
      {
        v33 = *a6;
        v34 = *(unsigned __int8 *)(a1 + 40 * v14 + 45);
        goto LABEL_122;
      }
      return 0;
    case 2:
    case 7:
      v16 = *(_QWORD *)(a1 + 40 * v14 + 56);
      v17 = 0;
      goto LABEL_114;
    case 3:
      v22 = *(unsigned __int16 *)(a1 + 40 * v14 + 46);
      if ( v22 == 160 )
      {
        v23 = 0;
        goto LABEL_53;
      }
      if ( v22 < 0x10 || v22 - 61 < 0x20 )
        goto LABEL_47;
      if ( (v22 | 2) == 0x12 )
      {
        v29 = byte_1071D3;
      }
      else if ( v22 - 129 < 0x1F || v22 - 163 < 0x20 )
      {
LABEL_47:
        v29 = (char *)*(&off_15E6A0 + *(unsigned __int16 *)(a1 + 40 * v14 + 46));
      }
      else if ( v22 == 161 )
      {
        v29 = "SP";
      }
      else
      {
        if ( v22 != 162 )
        {
          sub_4EC28((__int64)"Bad register number passed to arm.get_register_value: %d", v22);
          v23 = 0;
          goto LABEL_53;
        }
        v29 = "PC";
      }
      v35 = (**a6)(a6, v29, a5);
      v36 = 8;
      if ( (a3 & 1) != 0 )
        v36 = 4;
      if ( v22 != 15 )
        v36 = 0;
      v23 = *(_QWORD *)(v35 + 8) + v36;
LABEL_53:
      *(_QWORD *)(a4 + 8) = v23;
      if ( (*(_BYTE *)(a1 + 28) & 0x80) != 0 )
        goto LABEL_73;
      v37 = *(unsigned __int8 *)(a1 + 40 * v14 + 72);
      if ( v37 == 160 )
      {
        v38 = 0;
        goto LABEL_110;
      }
      if ( v37 < 0x10 || v37 - 61 < 0x20 )
        goto LABEL_103;
      if ( (v37 | 2) == 0x12 )
      {
        v39 = byte_1071D3;
      }
      else if ( v37 - 129 < 0x1F || v37 - 163 < 0x20 )
      {
LABEL_103:
        v39 = (char *)*(&off_15E6A0 + *(unsigned __int8 *)(a1 + 40 * v14 + 72));
      }
      else if ( v37 == 161 )
      {
        v39 = "SP";
      }
      else
      {
        if ( v37 != 162 )
        {
          sub_4EC28((__int64)"Bad register number passed to arm.get_register_value: %d", v37);
          v38 = 0;
          goto LABEL_110;
        }
        v39 = "PC";
      }
      v46 = *(_DWORD *)((**a6)(a6, v39, a5) + 8);
      if ( (a3 & 1) != 0 )
        v47 = 4;
      else
        v47 = 8;
      if ( v37 != 15 )
        v47 = 0;
      v38 = v46 + v47;
LABEL_110:
      v48 = sub_A2FDC(a1, v38, a3 & 1, v15, a5, a6);
      v17 = 0;
      if ( (*(_DWORD *)(a1 + 28) & 0x10) != 0 )
        v49 = -(__int64)v48;
      else
        v49 = v48;
      v16 = v49 + *(_QWORD *)(a4 + 8);
      goto LABEL_114;
    case 4:
      v24 = *(unsigned __int16 *)(a1 + 40 * v14 + 46);
      if ( v24 == 160 )
      {
        v25 = 0;
        goto LABEL_71;
      }
      if ( v24 < 0x10 || v24 - 61 < 0x20 )
        goto LABEL_65;
      if ( (v24 | 2) == 0x12 )
      {
        v30 = byte_1071D3;
      }
      else if ( v24 - 129 < 0x1F || v24 - 163 < 0x20 )
      {
LABEL_65:
        v30 = (char *)*(&off_15E6A0 + *(unsigned __int16 *)(a1 + 40 * v14 + 46));
      }
      else if ( v24 == 161 )
      {
        v30 = "SP";
      }
      else
      {
        if ( v24 != 162 )
        {
          sub_4EC28((__int64)"Bad register number passed to arm.get_register_value: %d", v24);
          v25 = 0;
          goto LABEL_71;
        }
        v30 = "PC";
      }
      v40 = (**a6)(a6, v30, a5);
      v41 = 8;
      if ( (a3 & 1) != 0 )
        v41 = 4;
      if ( v24 != 15 )
        v41 = 0;
      v25 = *(_QWORD *)(v40 + 8) + v41;
LABEL_71:
      *(_QWORD *)(a4 + 8) = v25;
      if ( (*(_BYTE *)(a1 + 28) & 0x80) != 0 )
      {
LABEL_73:
        v17 = 0;
      }
      else
      {
        v17 = 0;
        v16 = *(_QWORD *)(a1 + 40 * v14 + 56) + v25;
LABEL_114:
        *(_QWORD *)(a4 + 8) = v16;
      }
      goto LABEL_115;
    case 5:
      v17 = *(_QWORD *)(a1 + 40 * v14 + 48);
      goto LABEL_115;
    case 8:
      v26 = *(unsigned __int16 *)(a1 + 40 * v14 + 46);
      if ( v26 == 160 )
      {
        v27 = 0;
        goto LABEL_86;
      }
      if ( v26 < 0x10 || v26 - 61 < 0x20 )
        goto LABEL_79;
      if ( (v26 | 2) == 0x12 )
      {
        v31 = byte_1071D3;
      }
      else if ( v26 - 129 < 0x1F || v26 - 163 < 0x20 )
      {
LABEL_79:
        v31 = (char *)*(&off_15E6A0 + *(unsigned __int16 *)(a1 + 40 * v14 + 46));
      }
      else if ( v26 == 161 )
      {
        v31 = "SP";
      }
      else
      {
        if ( v26 != 162 )
        {
          sub_4EC28((__int64)"Bad register number passed to arm.get_register_value: %d", v26);
          v27 = 0;
          goto LABEL_86;
        }
        v31 = "PC";
      }
      v42 = *(_DWORD *)((**a6)(a6, v31, a5) + 8);
      if ( (a3 & 1) != 0 )
        v43 = 4;
      else
        v43 = 8;
      if ( v26 != 15 )
        v43 = 0;
      v27 = v42 + v43;
LABEL_86:
      v17 = (unsigned int)sub_A2FDC(a1, v27, a3 & 1, v15, a5, a6);
LABEL_115:
      v50 = (unsigned __int8 *)(a1 + 40 * v14 + 45);
      if ( *(_QWORD *)(a4 + 8) != -1 )
      {
        v51 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, char *, __int64), _QWORD))(*a6)[4])(a6, *v50);
        if ( v51 == 2 )
        {
          v17 = ((unsigned __int16 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, char *, __int64), _QWORD))(*a6)[2])(
                  a6,
                  *(_QWORD *)(a4 + 8));
        }
        else if ( v51 == 1 )
        {
          v17 = ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, char *, __int64), _QWORD))(*a6)[1])(
                  a6,
                  *(_QWORD *)(a4 + 8));
        }
        else
        {
          v17 = ((unsigned int (__fastcall *)(__int64 (__fastcall ***)(_QWORD, char *, __int64), _QWORD))(*a6)[3])(
                  a6,
                  *(_QWORD *)(a4 + 8));
        }
      }
      *(_QWORD *)(a4 + 24) = v17;
      v33 = *a6;
      v34 = *v50;
LABEL_122:
      *(_DWORD *)(a4 + 52) = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, char *, __int64), __int64))v33[4])(
                               a6,
                               v34);
      return 1;
    default:
      return result;
  }
}
// 15E6A0: using guessed type _UNKNOWN *off_15E6A0;
