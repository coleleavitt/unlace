unsigned __int64 __fastcall sub_DCC0(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(_QWORD, __int64), __int64 a4)
{
  char *v6; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int16 v16; // ax
  __int64 v17; // rax
  __int64 v18; // r13
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r13
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r13
  __int128 v31; // [rsp+0h] [rbp-198h] BYREF
  __int64 v32; // [rsp+10h] [rbp-188h]
  __int64 v33; // [rsp+18h] [rbp-180h]
  __int64 v34; // [rsp+20h] [rbp-178h]
  char v35; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int16 v36; // [rsp+2Eh] [rbp-16Ah]
  __int64 v37; // [rsp+38h] [rbp-160h]
  char v38; // [rsp+51h] [rbp-147h]
  unsigned __int16 v39; // [rsp+56h] [rbp-142h]
  unsigned __int64 v40; // [rsp+58h] [rbp-140h]
  __int64 v41; // [rsp+60h] [rbp-138h]
  __int64 v42; // [rsp+88h] [rbp-110h]
  _QWORD v43[6]; // [rsp+168h] [rbp-30h] BYREF

  v43[0] = __readfsqword(0x28u);
  v6 = &v35;
  v31 = -1;
  v32 = -1;
  v33 = 0;
  v34 = 0;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 40;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *((_QWORD *)v6 - 2) = 0;
  }
  while ( v43 != (_QWORD *)v6 );
  if ( (int)decode_insn(&v31, a2, v43, 0.0) <= 0 )
    return -1;
  switch ( (__int16)v33 )
  {
    case 30:
    case 31:
    case 66:
    case 67:
    case 73:
    case 74:
    case 90:
    case 205:
    case 206:
      return v37;
    case 32:
    case 72:
    case 76:
    case 207:
      if ( v36 > 0x1Fu )
      {
        sub_A790((__int64)"Bad register number passed to tricore.get_register_value: %d", v36);
        v9 = *(_QWORD *)(a1 + 32);
        v10 = 0;
      }
      else
      {
        v8 = a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v36), a4);
        v9 = *(_QWORD *)(a1 + 32);
        v10 = *(_QWORD *)(v8 + 8);
        if ( *(_DWORD *)(v9 + 24) != 8 )
          v10 = (int)v10;
      }
      return *(_QWORD *)(v9 + 16) & v10;
    case 68:
      if ( v36 > 0x1Fu )
      {
        sub_A790((__int64)"Bad register number passed to tricore.get_register_value: %d", v36);
        if ( v38 != 1 )
        {
          v18 = 0;
          v19 = v40;
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
            goto LABEL_42;
          goto LABEL_43;
        }
        v20 = v39;
        v18 = 0;
        if ( v39 > 0x1Fu )
        {
          sub_A790((__int64)"Bad register number passed to tricore.get_register_value: %d", v39);
          return v42;
        }
      }
      else
      {
        v18 = *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v36), a4) + 8);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == 8 )
        {
          v19 = v40;
          if ( v38 != 1 )
            goto LABEL_43;
        }
        else
        {
          LODWORD(v19) = v40;
          v18 = (int)v18;
          if ( v38 != 1 )
          {
LABEL_42:
            v19 = (int)v19;
            goto LABEL_43;
          }
        }
        v20 = v39;
        if ( v39 > 0x1Fu )
        {
          sub_A790((__int64)"Bad register number passed to tricore.get_register_value: %d", v39);
          v19 = 0;
          goto LABEL_43;
        }
      }
      v19 = *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8 * v20), a4) + 8);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        goto LABEL_42;
LABEL_43:
      if ( v18 != v19 )
        return -1;
      return v42;
    case 69:
      if ( v36 <= 0x1Fu )
      {
        v29 = *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v36), a4) + 8);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == 8 )
        {
          v30 = v29;
          v29 = v40;
          if ( v38 != 1 )
            goto LABEL_90;
        }
        else
        {
          v30 = (int)v29;
          LODWORD(v29) = v40;
          if ( v38 != 1 )
          {
LABEL_89:
            v29 = (int)v29;
            goto LABEL_90;
          }
        }
        goto LABEL_94;
      }
      sub_A790((__int64)"Bad register number passed to tricore.get_register_value: %d", v36);
      if ( v38 == 1 )
      {
        v30 = 0;
LABEL_94:
        if ( v39 > 0x1Fu )
        {
          sub_A790((__int64)"Bad register number passed to tricore.get_register_value: %d", v39);
          v29 = 0;
          if ( BYTE1(v34) == 7 )
            return v42;
          goto LABEL_91;
        }
        v29 = *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v39), a4) + 8);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
          goto LABEL_89;
        goto LABEL_90;
      }
      v30 = 0;
      v29 = v40;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        goto LABEL_89;
LABEL_90:
      if ( BYTE1(v34) != 7 )
      {
LABEL_91:
        if ( (__int64)v30 >= (__int64)v29 )
          return v42;
        return -1;
      }
      if ( v30 >= v29 )
        return v42;
      return -1;
    case 70:
      v16 = v36;
      if ( v36 > 0x1Fu )
        goto LABEL_97;
      v17 = *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v36), a4) + 8);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        v17 = (int)v17;
      if ( v17 < 0 )
        return -1;
      return v41;
    case 71:
      LOWORD(v13) = v36;
      if ( v36 > 0x1Fu )
        goto LABEL_5;
      v21 = *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v36), a4) + 8);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        v21 = (int)v21;
      if ( v21 <= 0 )
        return -1;
      return v41;
    case 75:
      v16 = v36;
      if ( v36 > 0x1Fu )
      {
LABEL_97:
        sub_A790((__int64)"Bad register number passed to tricore.get_register_value: %d", v16);
        return v41;
      }
      v25 = *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v36), a4) + 8);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        v25 = (int)v25;
      if ( v25 <= 0 )
        return v41;
      return -1;
    case 77:
      if ( v36 <= 0x1Fu )
      {
        v26 = *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v36), a4) + 8);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == 8 )
        {
          v27 = v26;
          v26 = v40;
          if ( v38 != 1 )
            goto LABEL_73;
        }
        else
        {
          v27 = (int)v26;
          LODWORD(v26) = v40;
          if ( v38 != 1 )
          {
LABEL_72:
            v26 = (int)v26;
            goto LABEL_73;
          }
        }
        goto LABEL_77;
      }
      sub_A790((__int64)"Bad register number passed to tricore.get_register_value: %d", v36);
      if ( v38 == 1 )
      {
        v27 = 0;
LABEL_77:
        if ( v39 > 0x1Fu )
        {
          sub_A790((__int64)"Bad register number passed to tricore.get_register_value: %d", v39);
          v26 = 0;
          if ( BYTE1(v34) == 7 )
            return -1;
          goto LABEL_74;
        }
        v26 = *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v39), a4) + 8);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
          goto LABEL_72;
        goto LABEL_73;
      }
      v27 = 0;
      v26 = v40;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        goto LABEL_72;
LABEL_73:
      if ( BYTE1(v34) != 7 )
      {
LABEL_74:
        if ( (__int64)v26 > (__int64)v27 )
          return v42;
        return -1;
      }
      if ( v27 < v26 )
        return v42;
      return -1;
    case 78:
      LOWORD(v13) = v36;
      if ( v36 > 0x1Fu )
        goto LABEL_5;
      v15 = *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v36), a4) + 8);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        v15 = (int)v15;
      if ( v15 >= 0 )
        return -1;
      return v41;
    case 79:
    case 80:
    case 81:
      if ( v36 > 0x1Fu )
      {
        sub_A790((__int64)"Bad register number passed to tricore.get_register_value: %d", v36);
        if ( v38 != 1 )
        {
          v11 = 0;
          v12 = v40;
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
            goto LABEL_16;
          goto LABEL_17;
        }
        v13 = v39;
        v11 = 0;
        if ( v39 > 0x1Fu )
        {
LABEL_5:
          sub_A790((__int64)"Bad register number passed to tricore.get_register_value: %d", (unsigned __int16)v13);
          return -1;
        }
      }
      else
      {
        v11 = *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v36), a4) + 8);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == 8 )
        {
          v12 = v40;
          if ( v38 != 1 )
            goto LABEL_17;
        }
        else
        {
          LODWORD(v12) = v40;
          v11 = (int)v11;
          if ( v38 != 1 )
          {
LABEL_16:
            v12 = (int)v12;
            goto LABEL_17;
          }
        }
        v13 = v39;
        if ( v39 > 0x1Fu )
        {
          sub_A790((__int64)"Bad register number passed to tricore.get_register_value: %d", v39);
          v12 = 0;
          goto LABEL_17;
        }
      }
      v12 = *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8 * v13), a4) + 8);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        goto LABEL_16;
LABEL_17:
      if ( v11 != v12 )
        return v42;
      return -1;
    case 82:
      LOWORD(v13) = v36;
      if ( v36 > 0x1Fu )
        goto LABEL_5;
      v14 = *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v36), a4) + 8);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        v14 = (int)v14;
      if ( BYTE1(v34) != 9 )
        goto LABEL_27;
      if ( !_bittest64(&v14, v40) )
        return -1;
      return v42;
    case 83:
      if ( v36 > 0x1Fu )
      {
        sub_A790((__int64)"Bad register number passed to tricore.get_register_value: %d", v36);
        if ( BYTE1(v34) != 9 )
          return v41;
        return v42;
      }
      v28 = *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v36), a4) + 8);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        v28 = (int)v28;
      if ( BYTE1(v34) == 9 )
      {
        if ( _bittest64(&v28, v40) )
          return -1;
        return v42;
      }
      if ( !v28 )
        return v41;
      return -1;
    case 89:
      LOWORD(v13) = v36;
      if ( v36 > 0x1Fu )
        goto LABEL_5;
      v14 = *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v36), a4) + 8);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        v14 = (int)v14;
LABEL_27:
      if ( v14 )
        return v41;
      return -1;
    case 151:
    case 208:
      return *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 216LL), a4) + 8);
    case 251:
      if ( v36 > 0x1Fu )
      {
        sub_A790((__int64)"Bad register number passed to tricore.get_register_value: %d", v36);
        v23 = *(_QWORD *)(a1 + 32);
        v24 = 0;
      }
      else
      {
        v22 = a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v36), a4);
        v23 = *(_QWORD *)(a1 + 32);
        v24 = *(_QWORD *)(v22 + 8);
        if ( *(_DWORD *)(v23 + 24) != 8 )
          v24 = (int)v24;
      }
      return *(_QWORD *)(v23 + 16) & (v32 + v24) & 0xFFFFFFFFFFFFFFFELL;
    default:
      return -1;
  }
}
