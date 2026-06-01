__int64 __fastcall sub_70EBE0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __m128i a7,
        double a8,
        __m128 a9,
        double a10,
        double a11,
        double a12,
        __m128 a13)
{
  __int64 *v13; // rsi
  __int64 v14; // rbx
  __int64 *v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 result; // rax
  __int64 v20; // rsi
  __int16 v21; // r12
  _QWORD *v22; // rbx
  _QWORD *v23; // r12
  __int64 v24; // r12
  __int64 v25; // rbx
  unsigned int v26; // r12d
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // r13
  __int64 v33; // rbx
  _QWORD v34[9]; // [rsp+0h] [rbp-48h] BYREF

  while ( 1 )
  {
    v34[3] = __readfsqword(0x28u);
    if ( (a2 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
      return 1;
    v13 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v14 = *v13;
    v15 = a1;
    switch ( *(_BYTE *)(*v13 + 16) )
    {
      case 0:
      case 1:
      case 5:
      case 7:
      case 9:
      case 0xB:
      case 0xE:
      case 0x1B:
      case 0x1F:
      case 0x22:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2A:
      case 0x39:
      case 0x3A:
        goto LABEL_7;
      case 2:
      case 3:
        if ( !(unsigned __int8)sub_70EBE0(a1, *(_QWORD *)(v14 + 32)) )
          return 0;
        if ( (*(_BYTE *)(v14 + 19) & 2) != 0 )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 16LL);
          if ( v18 )
            return sub_70DBE0(a1, v18, 0, a6, a7, a8, a9, a10, a11, a12, a13);
        }
        return 1;
      case 4:
        if ( !(unsigned __int8)sub_70EBE0(a1, *(_QWORD *)(v14 + 32)) )
          return 0;
        v18 = *(_QWORD *)(v14 + 40);
        if ( !v18 )
          return 1;
        return sub_70DBE0(a1, v18, 0, a6, a7, a8, a9, a10, a11, a12, a13);
      case 6:
      case 0x27:
        if ( !(unsigned __int8)sub_70EBE0(a1, *(_QWORD *)(v14 + 32)) )
          return 0;
        v18 = *(_QWORD *)(v14 + 40);
        return sub_70DBE0(a1, v18, 0, a6, a7, a8, a9, a10, a11, a12, a13);
      case 8:
        goto LABEL_25;
      case 0xC:
        v17 = *(_QWORD *)(v14 + 56);
        if ( !v17 )
          goto LABEL_7;
        goto LABEL_6;
      case 0xF:
      case 0x33:
        v18 = *(_QWORD *)(v14 + 24);
        return sub_70DBE0(a1, v18, 0, a6, a7, a8, a9, a10, a11, a12, a13);
      case 0x10:
        v26 = sub_70EBE0(a1, *(_QWORD *)(v14 + 24));
        if ( !(_BYTE)v26 )
          return 0;
        if ( !*(_QWORD *)(v14 + 32) )
          return 1;
        v29 = v14 + 48 + 24LL * *(unsigned int *)(v14 + 20);
        if ( v14 + 48 == v29 )
          return v26;
        v30 = v14 + 48;
        while ( 1 )
        {
          result = sub_70F2E0(a1, v30);
          if ( !(_BYTE)result )
            break;
          v30 += 24;
          if ( v29 == v30 )
            return v26;
        }
        return result;
      case 0x11:
        if ( (unsigned __int8)sub_70F270(a1, *(_QWORD *)(v14 + 40)) )
          goto LABEL_14;
        return 0;
      case 0x12:
        v20 = *(_QWORD *)(v14 + 32);
        goto LABEL_24;
      case 0x13:
        v18 = sub_F57B50(*v13);
        return sub_70DBE0(a1, v18, 0, a6, a7, a8, a9, a10, a11, a12, a13);
      case 0x14:
        return sub_70F1F0(a1, *(_QWORD *)(v14 + 32));
      case 0x15:
        v20 = *(_QWORD *)(v14 + 32);
        if ( !v20 )
          goto LABEL_25;
LABEL_24:
        if ( (unsigned __int8)sub_70DBE0(a1, v20, 0, a6, a7, a8, a9, a10, a11, a12, a13) )
          goto LABEL_25;
        return 0;
      case 0x16:
        v26 = sub_70F1F0(a1, *(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFF8LL);
        if ( !(_BYTE)v26 )
          return 0;
        v32 = v14 + 48 + 24LL * *(unsigned int *)(v14 + 20);
        if ( v14 + 48 == v32 )
          return v26;
        v33 = v14 + 48;
        while ( 1 )
        {
          result = sub_70F2E0(a1, v33);
          if ( !(_BYTE)result )
            break;
          v33 += 24;
          if ( v32 == v33 )
            return v26;
        }
        return result;
      case 0x17:
        v17 = *(_QWORD *)(v14 + 40);
        if ( !v17 )
          goto LABEL_7;
        goto LABEL_6;
      case 0x18:
        if ( *(_QWORD *)(v14 + 32) && !(unsigned __int8)((__int64 (*)(void))sub_70F1F0)() )
          return 0;
        goto LABEL_25;
      case 0x19:
      case 0x1E:
      case 0x34:
LABEL_14:
        a2 = *(_QWORD *)(v14 + 24);
        goto LABEL_8;
      case 0x1A:
        return sub_70F420(a1, *v13);
      case 0x1C:
        v24 = v14 + 64 + 32LL * *(_QWORD *)(v14 + 48);
        if ( v14 + 64 == v24 )
          return 1;
        v25 = v14 + 64;
        while ( (*(_BYTE *)v25 & 0xFD) != 1 || (unsigned __int8)sub_70EBE0(a1, *(_QWORD *)(v25 + 8)) )
        {
          v25 += 32;
          if ( v24 == v25 )
            return 1;
        }
        return 0;
      case 0x20:
        v16 = *(_QWORD *)(v14 + 40);
        if ( v16 && !(unsigned __int8)sub_70DBE0(a1, v16, 0, a6, a7, a8, a9, a10, a11, a12, a13) )
          return 0;
        v17 = *(_QWORD *)(v14 + 48);
        if ( !v17 )
          goto LABEL_7;
LABEL_6:
        if ( !(unsigned __int8)sub_70DBE0(a1, v17, 0, a6, a7, a8, a9, a10, a11, a12, a13) )
          return 0;
LABEL_7:
        a2 = *(_QWORD *)(v14 + 32);
        goto LABEL_8;
      case 0x21:
        return sub_70F4F0(a1, *v13);
      case 0x23:
        if ( v14 != *(_QWORD *)(*(_QWORD *)(v14 + 24) & 0xFFFFFFFFFFFFFFF0LL)
          && !(unsigned __int8)sub_70EBE0(a1, *(_QWORD *)(v14 + 24)) )
        {
          return 0;
        }
        v21 = *(_WORD *)(v14 + 18);
        v22 = (_QWORD *)(v14 + 48);
        v23 = (_QWORD *)((char *)v22 + (v21 & 0x3F8));
        if ( v22 == v23 )
          return 1;
        while ( (unsigned __int8)sub_70EBE0(a1, *v22) )
        {
          if ( v23 == ++v22 )
            return 1;
        }
        return 0;
      case 0x2B:
        v31 = *v13;
        while ( (*(_BYTE *)(v31 + 18) & 0x10) != 0 )
        {
          v31 = *(_QWORD *)(*(_QWORD *)(v31 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v31 + 16) - 43 > 1 || !v31 )
            v31 = sub_F63050(v31, v13, a3, a4, a5);
        }
        goto LABEL_86;
      case 0x2C:
        v31 = *v13;
        while ( (*(_BYTE *)(v31 + 18) & 0x10) != 0 )
        {
          v31 = *(_QWORD *)(*(_QWORD *)(v31 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v31 + 16) - 43 > 1 || !v31 )
            v31 = sub_F63050(v31, v13, a3, a4, a5);
        }
LABEL_86:
        a2 = *(_QWORD *)(v31 + 32);
        goto LABEL_8;
      case 0x2D:
        sub_F5E520(v34, *v13);
        return sub_70F2E0(a1, v34);
      case 0x2E:
        if ( (*(_BYTE *)(v14 + 18) & 8) != 0 )
          a2 = *(_QWORD *)(v14 + 48);
        else
          a2 = *(_QWORD *)(v14 + 8);
        goto LABEL_8;
      case 0x31:
        v26 = sub_70F270(a1, *(_QWORD *)(v14 + 32));
        if ( !(_BYTE)v26 )
          return 0;
        v27 = v14 + 48 + 24LL * *(unsigned int *)(v14 + 20);
        if ( v14 + 48 == v27 )
          return v26;
        v28 = v14 + 48;
        while ( 1 )
        {
          result = sub_70F2E0(a1, v28);
          if ( !(_BYTE)result )
            break;
          v28 += 24;
          if ( v27 == v28 )
            return v26;
        }
        return result;
      case 0x36:
        if ( !(unsigned __int8)sub_70EBE0(a1, *(_QWORD *)(v14 + 32)) )
          return 0;
LABEL_25:
        a2 = *(_QWORD *)(v14 + 40);
LABEL_8:
        a1 = v15;
        break;
      default:
        return 1;
    }
  }
}
