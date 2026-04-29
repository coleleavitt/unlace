unsigned __int64 __fastcall sub_86000(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 (__fastcall *a4)(const char *, __int64),
        __int64 a5)
{
  unsigned __int64 *v5; // rax
  unsigned __int64 result; // rax
  char v10; // dl
  int v11; // ebx
  __int64 v12; // r9
  char v13; // dl
  int v14; // edx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // dl
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // [rsp-1F8h] [rbp-200h] BYREF
  __int64 v20; // [rsp-1F0h] [rbp-1F8h] BYREF
  __int64 v21; // [rsp-1E8h] [rbp-1F0h] BYREF
  bool v22; // [rsp-1E0h] [rbp-1E8h] BYREF
  __int64 v23; // [rsp-1D8h] [rbp-1E0h]
  int v24; // [rsp-1D0h] [rbp-1D8h]
  __int64 v25; // [rsp-1C8h] [rbp-1D0h]
  __int128 v26; // [rsp-1C0h] [rbp-1C8h]
  __int64 v27; // [rsp-1B0h] [rbp-1B8h]
  __int128 v28; // [rsp-1A0h] [rbp-1A8h] BYREF
  __int64 v29; // [rsp-190h] [rbp-198h]
  __int64 v30; // [rsp-188h] [rbp-190h]
  __int64 v31; // [rsp-180h] [rbp-188h]
  __int64 v32; // [rsp-178h] [rbp-180h] BYREF
  __int64 v33; // [rsp-168h] [rbp-170h]
  unsigned __int16 v34; // [rsp-160h] [rbp-168h]
  __int16 v35; // [rsp-15Eh] [rbp-166h]
  unsigned __int64 v36; // [rsp-38h] [rbp-40h] BYREF

  v5 = (unsigned __int64 *)&v32;
  v36 = __readfsqword(0x28u);
  v28 = -1;
  v29 = -1;
  v30 = 0;
  v31 = 0;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v36 != v5 );
  if ( !(unsigned int)decode_insn() )
    return -1;
  if ( (_WORD)v30 == 89 )
    goto LABEL_35;
  if ( (unsigned __int16)v30 > 0x59u )
  {
    if ( (unsigned __int16)v30 <= 0xA0u )
    {
      if ( (unsigned __int16)v30 <= 0x9Eu )
        goto LABEL_39;
    }
    else if ( (unsigned __int16)(v30 - 736) > 5u )
    {
      goto LABEL_39;
    }
    v10 = 7;
    if ( (WORD2(v30) & 0x1018) != 0x1010 )
      v10 = ((WORD2(v30) & 0x1018) == 4104 || (v30 & 0x100800000000LL) == 0) + 1;
    v11 = 8;
    v19 = sub_76B80((char *)a1, 4, v10, a4, a5);
    if ( (WORD2(v30) & 0x1018) != 0x1010 )
    {
      if ( (v30 & 0x100800000000LL) == 0 || (v11 = 2, (WORD2(v30) & 0x1018) == 0x1008) )
        v11 = 4;
    }
    if ( !(unsigned __int8)sub_85E60((char *)a1, (__int64)&v28, 0, (__int64 *)&v19, (unsigned int)v11, a3, a4, a5, 0) )
      return -1;
    if ( (unsigned __int16)(v30 - 739) > 2u && (_WORD)v30 != 160 )
      return v19;
    if ( !(unsigned __int8)sub_85E60((char *)a1, (__int64)&v28, v11, &v20, 2, a3, a4, a5, 0) )
      return -1;
    v13 = sub_77030((__int64)&v28, a3, 30, v20, &v21, v12);
    result = v19;
    if ( v13 )
      return v21 + v19;
    return result;
  }
  if ( (_WORD)v30 == 86 )
  {
LABEL_42:
    if ( v35 == -1 )
    {
      v16 = v33 + 16LL * v34;
      result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      if ( v16 == result )
        return result;
      goto LABEL_36;
    }
LABEL_35:
    v16 = v33 + 16 * v28;
    result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    if ( v16 == result )
      return result;
LABEL_36:
    result &= v16;
    if ( v16 != -1 )
      return result;
    return -1;
  }
  if ( (unsigned __int16)v30 <= 0x56u )
  {
    if ( (_WORD)v30 != 16 )
    {
      if ( (unsigned __int16)(v30 - 17) <= 1u )
        goto LABEL_10;
LABEL_39:
      v17 = 7;
      if ( (WORD2(v30) & 0x1018) != 0x1010 )
        v17 = ((WORD2(v30) & 0x1018) == 4104 || (v30 & 0x100800000000LL) == 0) + 1;
      v18 = sub_76B80((char *)a1, 1, v17, a4, a5);
      v15 = *(_QWORD *)(((__int64 (__fastcall *)(const char *, __int64, double))a4)("EFL", a5, 0.0) + 8);
      switch ( (__int16)v30 )
      {
        case 16:
        case 86:
        case 89:
          goto LABEL_35;
        case 53:
        case 69:
          LOBYTE(v15) = (v15 & 0x41) == 0;
          goto LABEL_34;
        case 54:
        case 68:
        case 70:
          LOBYTE(v15) = (v15 & 1) == 0;
          goto LABEL_34;
        case 55:
        case 57:
        case 67:
          goto LABEL_51;
        case 56:
        case 66:
          LOBYTE(v15) = (v15 & 0x41) != 0;
          goto LABEL_34;
        case 58:
        case 59:
        case 60:
          LOBYTE(v15) = v18 == 0;
          goto LABEL_34;
        case 61:
        case 85:
          LOBYTE(v15) = (v15 & 0x40) != 0;
          goto LABEL_34;
        case 62:
        case 75:
          if ( (v15 & 0x40) != 0 || (unsigned __int8)((unsigned int)v15 >> 7) != ((v15 & 0x800) != 0) )
            return -1;
          goto LABEL_35;
        case 63:
        case 74:
          LOBYTE(v15) = (unsigned __int8)((unsigned int)v15 >> 7) == ((v15 & 0x800) != 0);
          goto LABEL_34;
        case 64:
        case 73:
          LODWORD(v15) = ((unsigned int)v15 >> 7) ^ (v15 >> 11) & 1;
          goto LABEL_34;
        case 65:
        case 72:
          if ( (v15 & 0x40) == 0 && (unsigned __int8)((unsigned int)v15 >> 7) == ((v15 & 0x800) != 0) )
            return -1;
          goto LABEL_35;
        case 71:
        case 79:
          LOBYTE(v15) = (v15 & 0x40) == 0;
          goto LABEL_34;
        case 76:
          LOBYTE(v15) = (v15 & 0x800) == 0;
          goto LABEL_34;
        case 77:
        case 83:
          LOBYTE(v15) = (v15 & 4) == 0;
          goto LABEL_34;
        case 78:
          LOBYTE(v15) = !((unsigned __int8)v15 >> 7);
          goto LABEL_34;
        case 80:
          LOBYTE(v15) = (v15 & 0x800) != 0;
          goto LABEL_34;
        case 81:
        case 82:
          v15 >>= 2;
LABEL_51:
          LOBYTE(v15) = v15 & 1;
          goto LABEL_34;
        case 84:
          LOBYTE(v15) = (unsigned __int8)v15 >> 7;
          goto LABEL_34;
        case 108:
        case 109:
        case 110:
        case 111:
          if ( v18 == 1 )
            return -1;
          goto LABEL_35;
        case 112:
        case 113:
        case 114:
        case 115:
          v14 = 1;
          if ( v18 == 1 )
            return -1;
          goto LABEL_33;
        case 116:
        case 117:
        case 118:
        case 119:
          if ( v18 == 1 )
            return -1;
          v14 = 0;
LABEL_33:
          LOBYTE(v15) = ((v15 >> 6) & 1) == v14;
LABEL_34:
          if ( (_BYTE)v15 )
            goto LABEL_35;
          return -1;
        default:
          return -1;
      }
    }
    goto LABEL_42;
  }
LABEL_10:
  v22 = 0;
  v27 = 0xFFFFFFFFLL;
  v23 = -1;
  v24 = -2;
  v25 = -1;
  v26 = 0;
  if ( !(unsigned __int8)sub_77700(a1, &v22, a2, 0, a3, a4, a5) || (result = v25, v24 != -2) )
  {
    if ( v24 >= -1 )
    {
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree();
      }
    }
    return -1;
  }
  return result;
}
