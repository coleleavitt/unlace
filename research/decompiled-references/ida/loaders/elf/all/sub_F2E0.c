__int64 __fastcall sub_F2E0(__int64 a1, int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  __int64 v7; // rax
  int v9; // ebx
  __int64 v10; // r13
  int dword; // r10d
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 result; // rax
  char v15; // dl
  int v16; // ecx
  int v17; // r15d
  __int64 v18; // r12
  int v19; // r15d
  int v20; // ebx
  char v21; // al
  char v22; // al
  char v23; // dl
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+0h] [rbp-68h]
  int v27; // [rsp+0h] [rbp-68h]
  int v28; // [rsp+0h] [rbp-68h]
  __int64 v29; // [rsp+8h] [rbp-60h]
  __int64 v30; // [rsp+8h] [rbp-60h]
  int v31; // [rsp+8h] [rbp-60h]
  int v32; // [rsp+8h] [rbp-60h]
  __int64 v33; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v34[9]; // [rsp+20h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a2 + 1);
  v7 = *(_QWORD *)(a2 + 3);
  v34[1] = __readfsqword(0x28u);
  v9 = *a2;
  v10 = *(_QWORD *)(a2 + 5);
  v26 = v7;
  dword = get_dword(v6, a2, a3, a4, a5);
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(_QWORD *)(v12 + 328);
  switch ( (char)v9 )
  {
    case 4:
      v16 = v10 + dword;
      goto LABEL_8;
    case 16:
    case 17:
      v29 = *(_QWORD *)(v12 + 328);
      v17 = v26 - (v6 & 0xFFFFFFFC);
      v18 = v17;
      v19 = (unsigned __int16)(get_word(v6) & 0xF801 | v17 & 0x7FE);
      v20 = get_word(v6 + 2) & 0x30 | (v18 >> 21) & 0xF | (v18 >> 5) & 0xFFFFFFC0;
      v21 = getinf_flag(3, 32);
      v13 = v29;
      if ( v21 )
        v16 = (unsigned __int16)v20 | (v19 << 16);
      else
        v16 = v19 | ((unsigned __int16)v20 << 16);
      goto LABEL_8;
    case 27:
      v30 = *(_QWORD *)(v12 + 328);
      v27 = v10 + dword;
      v22 = getinf_flag(3, 32);
      v16 = v27;
      v13 = v30;
      if ( !v22 )
        v16 = (v27 << 16) | HIWORD(v27);
      goto LABEL_8;
    case 51:
      v31 = dword;
      result = 5;
      if ( !a3 )
        return result;
      v23 = sub_54F40(a1, 0, (unsigned int)v34, v6, v26, a3, a5);
      result = 0;
      if ( !v23 )
        return result;
      LODWORD(v10) = v34[0];
      v13 = v6 - v31;
      v16 = v31 + LODWORD(v34[0]) - v6;
      goto LABEL_8;
    case 53:
      sub_40E20(a1, v6, 2);
      return 0;
    case 54:
    case 55:
      goto LABEL_7;
    case 56:
      LODWORD(v10) = dword;
      v16 = dword;
      goto LABEL_8;
    case 57:
      v32 = dword;
      v24 = sub_4A750(a5 + 16, *(_QWORD *)(a5 + 8), 1);
      if ( !v24 )
        return 0;
      sub_424F0(a1, v6, v26, v32, 4, 0, v24, 0);
      return 0;
    case 58:
      v28 = dword;
      v25 = sub_4A750(a5 + 16, *(_QWORD *)(a5 + 8), 1);
      LODWORD(v10) = v25;
      if ( !v25 )
        return 0;
      v13 = v6 - v28;
      v16 = v25 + v28 - v6;
      goto LABEL_8;
    case 59:
      result = 5;
      if ( !a3 )
        return result;
      v15 = sub_54F40(a1, (unsigned int)&v33, (unsigned int)v34, v6, v26, a3, a5);
      result = 0;
      if ( !v15 )
        return result;
      LODWORD(v10) = v34[0];
      v13 = v33;
LABEL_7:
      v16 = v10 - v13;
LABEL_8:
      sub_42050(a1, v6, v10, v16, 0, 4, v13, 0, 0);
      return 0;
    default:
      return 2;
  }
}

