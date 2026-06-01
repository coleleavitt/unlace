__int64 __fastcall sub_7EE840(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, _BOOL8 a5, __int64 a6)
{
  __int64 *v6; // r12
  _QWORD *v7; // rbp
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r14
  unsigned int v11; // eax
  __int64 v13; // rbx
  unsigned int v14; // eax
  _BOOL8 v15; // rsi
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 *v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  const __m128i *v28; // rbp
  _QWORD *v29; // r15
  __m128i v30; // xmm0
  __int64 v31; // rdx
  __int64 v32; // rbx
  unsigned int v33; // eax
  _BOOL8 v34; // rsi
  __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  const __m128i *v38; // rbp
  _QWORD *v39; // r15
  __m128i v40; // xmm0
  __int64 v41; // rdx
  __int64 v42; // rbx
  unsigned int v43; // eax
  _BOOL8 v44; // rsi
  __int64 v45; // rcx
  unsigned __int64 v46; // rbx
  __m128i v47; // [rsp+0h] [rbp-58h] BYREF
  __int64 v48; // [rsp+10h] [rbp-48h]
  __int64 v49; // [rsp+18h] [rbp-40h]

  while ( 1 )
  {
    if ( !a2 )
    {
LABEL_7:
      LODWORD(v10) = 1;
      return (unsigned int)v10;
    }
    v6 = a1;
    v7 = (_QWORD *)a2;
    v8 = (_QWORD *)a3;
    v9 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (a2 & 7) == 0 )
    {
      v10 = (a2 >> 3) & 1;
      if ( ((a2 >> 3) & 1) == 0 )
        break;
    }
LABEL_5:
    v11 = sub_B1AFD0(v9 & 0xFFFFFFFFFFFFFFF0LL);
    a5 = v8 != nullptr;
    a4 = v11;
    a2 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    a1 = v6;
    a3 = v11 * (a5 + ((unsigned __int64)v8 - a5) / v11);
  }
  switch ( *(_BYTE *)(v9 + 16) )
  {
    case 0:
    case 1:
    case 0xC:
      v23 = (unsigned int)sub_B1AFD0(*(_QWORD *)(a2 + 32));
      v20 = v23 * ((v8 != nullptr) + ((unsigned __int64)v8 - (v8 != nullptr)) / v23);
      v18 = *(_QWORD *)(a2 + 32);
      return sub_7EEDC0(v6, v18, v20);
    case 2:
      return sub_7F8290(v6, a2, a3);
    case 3:
      return sub_7F8480(v6, a2, a3);
    case 4:
      return sub_7F8670(v6, a2, a3);
    case 5:
      return sub_7F8860(v6, a2, a3);
    case 6:
      return sub_7F8A50(v6, a2, a3);
    case 7:
      v13 = a3 + 12;
      goto LABEL_10;
    case 8:
      v42 = a3 + 8;
      v43 = sub_B1AFD0(*(_QWORD *)(a2 + 40));
      v44 = v42 != 0;
      v45 = v43;
      v46 = (v42 - v44) / (unsigned __int64)v43;
      v18 = v7[5];
      v19 = v45 * (v44 + v46);
      goto LABEL_11;
    case 9:
      v13 = a3 + 1;
      goto LABEL_10;
    case 0xB:
    case 0x21:
    case 0x25:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
      v13 = a3 + 4;
      goto LABEL_10;
    case 0xE:
    case 0x38:
    case 0x39:
      goto LABEL_16;
    case 0xF:
    case 0x32:
      v24 = *(_QWORD *)(a2 + 24);
      return sub_7EBA80(v6, v24);
    case 0x10:
      if ( !(unsigned __int8)sub_7EDF40(v6, *(_QWORD *)(a2 + 24)) )
        return (unsigned int)v10;
      if ( !*(_QWORD *)(a2 + 32) )
        goto LABEL_7;
      return sub_7F1B90(v6, v8[1]);
    case 0x11:
      if ( !(unsigned __int8)sub_7EE690(v6, *(_QWORD *)(a2 + 40)) )
        return (unsigned int)v10;
      v22 = *(_QWORD *)(a2 + 24);
      return sub_7EDF40(v6, v22);
    case 0x12:
      if ( !(unsigned __int8)sub_7EBA80(v6, *(_QWORD *)(a2 + 32)) )
        return (unsigned int)v10;
      goto LABEL_30;
    case 0x13:
      v24 = sub_B07330(a2);
      return sub_7EBA80(v6, v24);
    case 0x14:
      return sub_7EF1F0(v6, *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 8));
    case 0x15:
      v26 = *(_QWORD *)(a2 + 32);
      if ( v26 && !(unsigned __int8)sub_7EBA80(v6, v26) )
        return (unsigned int)v10;
LABEL_30:
      v22 = v7[5];
      return sub_7EDF40(v6, v22);
    case 0x16:
      if ( *(_QWORD *)(a3 + 8)
        && *(_QWORD *)(a2 + 32)
        && !(unsigned __int8)sub_7EF1F0(v6, *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 8)) )
      {
        return (unsigned int)v10;
      }
      v27 = *(unsigned int *)(a2 + 20);
      if ( !(_DWORD)v27 )
        goto LABEL_7;
      v28 = (const __m128i *)(a2 + 48);
      v29 = &v8[v27];
      while ( 1 )
      {
        v30 = _mm_loadu_si128(v28);
        v31 = v28[1].m128i_i64[0];
        v49 = v8[4];
        v48 = v31;
        v47 = v30;
        if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64 *, __m128i *, __int64, __int64, _BOOL8, __int64))sub_7EF520)(
                                 v6,
                                 &v47,
                                 v31,
                                 a4,
                                 a5,
                                 a6) )
          return (unsigned int)v10;
        ++v8;
        v28 = (const __m128i *)((char *)v28 + 24);
        if ( v8 == v29 )
          goto LABEL_7;
      }
    case 0x17:
      v21 = *(_QWORD *)(a2 + 40);
      if ( !v21 )
        goto LABEL_16;
      goto LABEL_15;
    case 0x18:
      return sub_7EF9B0(v6, a2, a3);
    case 0x19:
      return sub_7F8C40(v6, a2, a3);
    case 0x1A:
      return sub_7EEF40(v6, a2, a3);
    case 0x1B:
      v13 = a3 + 16;
      goto LABEL_10;
    case 0x1D:
      v32 = a3 + 4;
      v33 = sub_B1AFD0(*(_QWORD *)(a2 + 24));
      v34 = v32 != 0;
      v35 = v33;
      v36 = (v32 - v34) / (unsigned __int64)v33;
      v18 = v7[3];
      v19 = v35 * (v34 + v36);
      goto LABEL_11;
    case 0x1E:
    case 0x1F:
      if ( !(unsigned __int8)sub_7EBA80(v6, *(_QWORD *)(a3 + 16)) )
        return (unsigned int)v10;
      v21 = v8[3];
LABEL_15:
      if ( !(unsigned __int8)sub_7EBA80(v6, v21) )
        return (unsigned int)v10;
LABEL_16:
      v22 = v7[4];
      return sub_7EDF40(v6, v22);
    case 0x20:
      return sub_7EFAB0(v6, a2, a3);
    case 0x22:
      return sub_7F7BE0(v6, a2, a3);
    case 0x24:
      sub_7DEE60(v6, a2, a3);
      goto LABEL_7;
    case 0x26:
      if ( !(unsigned __int8)sub_7EDF40(v6, *(_QWORD *)(a2 + 40)) )
        return (unsigned int)v10;
      v24 = *(_QWORD *)(a2 + 48);
      return sub_7EBA80(v6, v24);
    case 0x27:
      v13 = a3 + 8;
LABEL_10:
      v14 = sub_B1AFD0(*(_QWORD *)(a2 + 32));
      v15 = v13 != 0;
      v16 = v14;
      v17 = (v13 - v15) / (unsigned __int64)v14;
      v18 = v7[4];
      v19 = v16 * (v15 + v17);
LABEL_11:
      v20 = v19;
      return sub_7EEDC0(v6, v18, v20);
    case 0x2C:
      sub_B150D0(&v47, a2);
      LODWORD(v10) = sub_7EE760(v6, (__int64)&v47);
      return (unsigned int)v10;
    case 0x2D:
      if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
        v22 = *(_QWORD *)(a2 + 48);
      else
        v22 = *(_QWORD *)(a2 + 8);
      return sub_7EDF40(v6, v22);
    case 0x30:
      if ( !(unsigned __int8)sub_7EE690(v6, *(_QWORD *)(a2 + 32)) )
        return (unsigned int)v10;
      v37 = *(unsigned int *)(a2 + 20);
      if ( !(_DWORD)v37 )
        goto LABEL_7;
      v38 = (const __m128i *)(a2 + 48);
      v39 = &v8[v37];
      break;
    case 0x33:
    case 0x35:
      v25 = *(__int64 **)(a3 + 16);
      v18 = *v25;
      v20 = (unsigned __int64)(v25 + 1);
      return sub_7EEDC0(v6, v18, v20);
    case 0x3A:
      goto LABEL_5;
    default:
      goto LABEL_7;
  }
  while ( 1 )
  {
    v40 = _mm_loadu_si128(v38);
    v41 = v38[1].m128i_i64[0];
    v49 = v8[2];
    v48 = v41;
    v47 = v40;
    if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64 *, __m128i *))sub_7EF520)(v6, &v47) )
      return (unsigned int)v10;
    ++v8;
    v38 = (const __m128i *)((char *)v38 + 24);
    if ( v39 == v8 )
      goto LABEL_7;
  }
}

