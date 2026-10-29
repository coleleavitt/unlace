__int64 __fastcall sub_717AC0(
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
  _QWORD *v13; // rbp
  _QWORD *v14; // rbx
  __int64 v16; // r13
  __int64 v17; // rax
  const __m128i *v18; // rbp
  _QWORD *v19; // r15
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rbx
  unsigned int v23; // eax
  _BOOL8 v24; // rsi
  __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rsi
  unsigned int v29; // eax
  __int64 v30; // rsi
  __int64 *v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rbx
  unsigned int v34; // eax
  _BOOL8 v35; // rsi
  __int64 v36; // rcx
  unsigned __int64 v37; // rbx
  __int64 v38; // rbx
  unsigned int v39; // eax
  _BOOL8 v40; // rsi
  __int64 v41; // rcx
  unsigned __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  double v46; // xmm4_8
  double v47; // xmm5_8
  int v48[8]; // [rsp+0h] [rbp-88h] BYREF
  __m128i v49; // [rsp+20h] [rbp-68h] BYREF
  __int64 v50; // [rsp+30h] [rbp-58h]
  __int64 v51; // [rsp+38h] [rbp-50h]
  unsigned __int64 v52; // [rsp+48h] [rbp-40h]

  while ( 2 )
  {
    v52 = __readfsqword(0x28u);
    if ( a2 )
    {
      v13 = (_QWORD *)a2;
      v14 = (_QWORD *)a3;
      if ( (a2 & 7) != 0 )
        return sub_718570(a1, a2);
      v16 = (a2 >> 3) & 1;
      if ( ((a2 >> 3) & 1) != 0 )
        return sub_718570(a1, a2);
      switch ( *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) )
      {
        case 0:
        case 1:
        case 0xC:
          v29 = sub_F6C520(*(_QWORD *)(a2 + 32));
          a3 = v29 * ((v14 != nullptr) + ((unsigned __int64)v14 - (v14 != nullptr)) / v29);
          v27 = *(_QWORD *)(a2 + 32);
          a4 = v52 - __readfsqword(0x28u);
          goto LABEL_15;
        case 2:
          return sub_7185C0();
        case 3:
          return sub_718640();
        case 4:
          return sub_7186C0();
        case 5:
          return sub_718740();
        case 6:
          return sub_7187C0();
        case 7:
          v22 = a3 + 12;
          goto LABEL_14;
        case 8:
          v33 = a3 + 8;
          v34 = sub_F6C520(*(_QWORD *)(a2 + 40));
          v35 = v33 != 0;
          v36 = v34;
          v37 = (v33 - v35) / (unsigned __int64)v34;
          v27 = v13[5];
          a3 = v36 * (v35 + v37);
          a4 = v52 - __readfsqword(0x28u);
          goto LABEL_15;
        case 9:
          v22 = a3 + 1;
          goto LABEL_14;
        case 0xB:
        case 0x22:
        case 0x26:
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2C:
          v22 = a3 + 4;
          goto LABEL_14;
        case 0xE:
        case 0x39:
        case 0x3A:
          goto LABEL_19;
        case 0xF:
        case 0x33:
          v30 = *(_QWORD *)(a2 + 24);
          return sub_70DBE0(a1, v30, 0, a6, a7, a8, a9, a10, a11, a12, a13);
        case 0x10:
          if ( !(unsigned __int8)sub_70EBE0(a1, *(_QWORD *)(a2 + 24), a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13) )
            return (unsigned int)v16;
          if ( !*(_QWORD *)(a2 + 32) )
            goto LABEL_11;
          return sub_719220(a1, v14[1]);
        case 0x11:
          if ( !(unsigned __int8)sub_70F270(a1, *(_QWORD *)(a2 + 40), a6, a7, a8, a9, a10, a11, a12, a13) )
            return (unsigned int)v16;
          a2 = *(_QWORD *)(a2 + 24);
          return sub_70EBE0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        case 0x12:
          v32 = *(_QWORD *)(a2 + 32);
          goto LABEL_26;
        case 0x13:
          v30 = sub_F57B50(a2);
          return sub_70DBE0(a1, v30, 0, a6, a7, a8, a9, a10, a11, a12, a13);
        case 0x14:
          return sub_718340(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 8));
        case 0x15:
          v32 = *(_QWORD *)(a2 + 32);
          if ( !v32 )
            goto LABEL_27;
LABEL_26:
          if ( !(unsigned __int8)sub_70DBE0(a1, v32, 0, a6, a7, a8, a9, a10, a11, a12, a13) )
            return (unsigned int)v16;
LABEL_27:
          a2 = v13[5];
          return sub_70EBE0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        case 0x16:
          return sub_718A00();
        case 0x17:
          v28 = *(_QWORD *)(a2 + 40);
          if ( !v28 )
            goto LABEL_19;
          goto LABEL_18;
        case 0x18:
          return sub_718E70();
        case 0x19:
          return sub_718F50();
        case 0x1A:
          return sub_7181C0();
        case 0x1B:
          v22 = a3 + 16;
          goto LABEL_14;
        case 0x1C:
          return sub_70EBE0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        case 0x1E:
          v38 = a3 + 4;
          v39 = sub_F6C520(*(_QWORD *)(a2 + 24));
          v40 = v38 != 0;
          v41 = v39;
          v42 = (v38 - v40) / (unsigned __int64)v39;
          v27 = v13[3];
          a3 = v41 * (v40 + v42);
          a4 = v52 - __readfsqword(0x28u);
          goto LABEL_15;
        case 0x1F:
        case 0x20:
          if ( !(unsigned __int8)sub_70DBE0(a1, *(_QWORD *)(a3 + 16), 0, a6, a7, a8, a9, a10, a11, a12, a13) )
            return (unsigned int)v16;
          v28 = v14[3];
LABEL_18:
          if ( !(unsigned __int8)sub_70DBE0(a1, v28, 0, a6, a7, a8, a9, a10, a11, a12, a13) )
            return (unsigned int)v16;
LABEL_19:
          a2 = v13[4];
          return sub_70EBE0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        case 0x21:
          return sub_718FF0();
        case 0x23:
          return sub_719070();
        case 0x27:
          if ( !(unsigned __int8)sub_70EBE0(a1, *(_QWORD *)(a2 + 32), a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13) )
            return (unsigned int)v16;
          v30 = *(_QWORD *)(a2 + 40);
          return sub_70DBE0(a1, v30, 0, a6, a7, a8, a9, a10, a11, a12, a13);
        case 0x28:
          v22 = a3 + 8;
LABEL_14:
          v23 = sub_F6C520(*(_QWORD *)(a2 + 32));
          v24 = v22 != 0;
          v25 = v23;
          v26 = (v22 - v24) / (unsigned __int64)v23;
          v27 = v13[4];
          a3 = v25 * (v24 + v26);
          a4 = v52 - __readfsqword(0x28u);
          goto LABEL_15;
        case 0x2D:
          sub_F5E520(v48, a2);
          LODWORD(v16) = sub_70F2E0(a1, v48, v43, v44, v45, a6, a7, a8, a9, v46, v47, a12, a13);
          return (unsigned int)v16;
        case 0x2E:
          if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
            a2 = *(_QWORD *)(a2 + 48);
          else
            a2 = *(_QWORD *)(a2 + 8);
          return sub_70EBE0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        case 0x31:
          if ( !(unsigned __int8)sub_70F270(a1, *(_QWORD *)(a2 + 32), a6, a7, a8, a9, a10, a11, a12, a13) )
            return (unsigned int)v16;
          v17 = *(unsigned int *)(a2 + 20);
          if ( !(_DWORD)v17 )
            goto LABEL_11;
          v18 = (const __m128i *)(a2 + 48);
          v19 = &v14[v17];
          break;
        case 0x34:
        case 0x36:
          v31 = *(__int64 **)(a3 + 16);
          v27 = *v31;
          a3 = (__int64)(v31 + 1);
          a4 = v52 - __readfsqword(0x28u);
LABEL_15:
          a2 = v27;
          continue;
        case 0x3B:
          return sub_718570(a1, a2);
        default:
          goto LABEL_11;
      }
      while ( 1 )
      {
        v20 = _mm_loadu_si128(v18);
        v21 = v18[1].m128i_i64[0];
        v51 = v14[2];
        v50 = v21;
        v49 = v20;
        if ( !(unsigned __int8)sub_718840(a1, &v49) )
          break;
        ++v14;
        v18 = (const __m128i *)((char *)v18 + 24);
        if ( v19 == v14 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      LODWORD(v16) = 1;
    }
    return (unsigned int)v16;
  }
}
