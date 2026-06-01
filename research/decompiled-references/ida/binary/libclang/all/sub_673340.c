__int64 __fastcall sub_673340(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v6; // rbp
  __int64 *v7; // rsi
  __int64 v8; // rbx
  __int64 *v9; // rbp
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r13
  __int16 v19; // r12
  _QWORD *v20; // rbx
  _QWORD *v21; // r12
  unsigned int v22; // eax
  _QWORD *v23; // r12
  __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // r13
  __int64 v31; // rsi
  unsigned __int64 v32; // r12
  __int16 v33; // ax
  unsigned __int64 v34; // rdx
  __int64 *v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rdx
  _BYTE v40[48]; // [rsp-48h] [rbp-48h] BYREF
  __int64 v41; // [rsp-18h] [rbp-18h]

  while ( 2 )
  {
    if ( (a2 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
      return 1;
    v7 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v41 = v6;
    v8 = *v7;
    v9 = a1;
    switch ( *(_BYTE *)(*v7 + 16) )
    {
      case 0:
      case 1:
      case 5:
      case 7:
      case 9:
      case 0xB:
      case 0xE:
      case 0x1B:
      case 0x1E:
      case 0x21:
      case 0x25:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x38:
      case 0x39:
        return sub_673BA0(a1, *(_QWORD *)(v8 + 32));
      case 2:
      case 3:
        return sub_6732F0(a1, *v7, a3, a4, a5, a6);
      case 4:
        if ( !(unsigned __int8)sub_673340(a1, *(_QWORD *)(v8 + 32)) )
          return 0;
        v11 = *(_QWORD *)(v8 + 40);
        if ( v11 )
          return sub_672CC0(a1, v11, a3, a4, a5, a6);
        return 1;
      case 6:
        if ( !(unsigned __int8)sub_673340(a1, *(_QWORD *)(v8 + 32)) )
          return 0;
        v11 = *(_QWORD *)(v8 + 40);
        return sub_672CC0(a1, v11, a3, a4, a5, a6);
      case 8:
        goto LABEL_15;
      case 0xC:
        v13 = *(_QWORD *)(v8 + 56);
        if ( !v13 )
          goto LABEL_22;
        goto LABEL_21;
      case 0xF:
      case 0x32:
        v11 = *(_QWORD *)(v8 + 24);
        return sub_672CC0(a1, v11, a3, a4, a5, a6);
      case 0x10:
        v15 = sub_673340(a1, *(_QWORD *)(v8 + 24));
        if ( !(_BYTE)v15 )
          return 0;
        if ( !*(_QWORD *)(v8 + 32) )
          return 1;
        v16 = *(unsigned int *)(v8 + 20);
        v17 = v8 + 48;
        v18 = v17 + 24 * v16;
        if ( v17 == v18 )
          return v15;
        while ( 1 )
        {
          result = sub_673AC0(a1, v17);
          if ( !(_BYTE)result )
            break;
          v17 += 24;
          if ( v18 == v17 )
            return v15;
        }
        return result;
      case 0x11:
        if ( (unsigned __int8)sub_673A50(a1, *(_QWORD *)(v8 + 40)) )
          goto LABEL_10;
        return 0;
      case 0x12:
        if ( (unsigned __int8)sub_672CC0(a1, *(_QWORD *)(v8 + 32), a3, a4, a5, a6) )
          goto LABEL_15;
        return 0;
      case 0x13:
        v11 = sub_B07330(*v7);
        return sub_672CC0(a1, v11, a3, a4, a5, a6);
      case 0x14:
        return sub_6739D0(a1, *(_QWORD *)(v8 + 32));
      case 0x15:
        v31 = *(_QWORD *)(v8 + 32);
        if ( v31 && !(unsigned __int8)sub_672CC0(a1, v31, a3, a4, a5, a6) )
          return 0;
        goto LABEL_15;
      case 0x16:
        v15 = sub_6739D0(a1, *(_QWORD *)(v8 + 32));
        if ( !(_BYTE)v15 )
          return 0;
        v28 = *(unsigned int *)(v8 + 20);
        v29 = v8 + 48;
        v30 = v29 + 24 * v28;
        if ( v29 == v30 )
          return v15;
        while ( 1 )
        {
          result = sub_673AC0(a1, v29);
          if ( !(_BYTE)result )
            break;
          v29 += 24;
          if ( v30 == v29 )
            return v15;
        }
        return result;
      case 0x17:
        v13 = *(_QWORD *)(v8 + 40);
        if ( !v13 )
          goto LABEL_22;
        goto LABEL_21;
      case 0x18:
        if ( *(_QWORD *)(v8 + 32) && !(unsigned __int8)((__int64 (*)(void))sub_6739D0)() )
          return 0;
LABEL_15:
        a2 = *(_QWORD *)(v8 + 40);
        goto LABEL_11;
      case 0x19:
      case 0x1D:
      case 0x33:
LABEL_10:
        a2 = *(_QWORD *)(v8 + 24);
        goto LABEL_11;
      case 0x1A:
        if ( !(unsigned __int8)sub_673340(a1, *(_QWORD *)(v8 + 24)) )
          return 0;
        v22 = *(_DWORD *)(v8 + 20);
        v23 = (_QWORD *)(v8 + 48);
        v24 = v8 + 48 + 8LL * (unsigned __int16)(v22 >> 6);
        if ( v8 + 48 == v24 )
          goto LABEL_86;
        do
        {
          if ( !(unsigned __int8)sub_673340(a1, *v23) )
            return 0;
          ++v23;
        }
        while ( (_QWORD *)v24 != v23 );
        v22 = *(_DWORD *)(v8 + 20);
LABEL_86:
        v32 = (v8 + 4LL * ((*(_BYTE *)(v8 + 23) & 0x10) != 0) + 8LL * (unsigned __int16)(v22 >> 6) + 48 + 7)
            & 0xFFFFFFFFFFFFFFF8LL;
        v33 = (*(_WORD *)(v8 + 22) >> 6) & 0xF;
        if ( (*(_BYTE *)(v8 + 23) & 8) != 0 )
        {
          if ( (_BYTE)v33 == 2 )
          {
            v38 = ((*(_BYTE *)(v32 + 1) & 4) != 0) + 1LL;
            v39 = v38 + (*(_WORD *)v32 & 0x3FF);
            v38 *= 8;
            v39 *= 8;
            v37 = v32 + v39;
            v32 += v38;
            if ( v38 == v39 )
              return 1;
            do
            {
LABEL_98:
              if ( !(unsigned __int8)sub_673340(a1, *(_QWORD *)v32) )
                return 0;
              v32 += 8LL;
            }
            while ( v37 != v32 );
            v33 = (*(_WORD *)(v8 + 22) >> 6) & 0xF;
          }
        }
        else if ( (_BYTE)v33 == 2 )
        {
          v36 = 8LL * (*(_WORD *)v32 & 0x3FF);
          v37 = v32 + v36;
          if ( v36 )
            goto LABEL_98;
          return 1;
        }
        if ( (unsigned int)(unsigned __int8)v33 - 6 <= 2 )
        {
          v34 = (v8
               + 4LL * ((*(_BYTE *)(v8 + 23) & 0x10) != 0)
               + 8LL * (unsigned __int16)(*(_DWORD *)(v8 + 20) >> 6)
               + 48
               + 7)
              & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_BYTE *)(v8 + 23) & 8) != 0 && (*(_BYTE *)(v34 + 1) & 4) != 0 )
            v35 = (__int64 *)(v34 + 16);
          else
            v35 = (__int64 *)(v34 + 8LL * ((*(_BYTE *)(v8 + 23) & 8) != 0));
          v11 = *v35;
          if ( *v35 )
            return sub_672CC0(a1, v11, a3, a4, a5, a6);
        }
        return 1;
      case 0x1F:
        v12 = *(_QWORD *)(v8 + 40);
        if ( v12 && !(unsigned __int8)sub_672CC0(a1, v12, a3, a4, a5, a6) )
          return 0;
        v13 = *(_QWORD *)(v8 + 48);
        if ( !v13 )
          goto LABEL_22;
LABEL_21:
        if ( (unsigned __int8)sub_672CC0(a1, v13, a3, a4, a5, a6) )
        {
LABEL_22:
          a2 = *(_QWORD *)(v8 + 32);
LABEL_11:
          a1 = v9;
          v6 = v41;
          continue;
        }
        return 0;
      case 0x20:
        if ( (unsigned __int8)sub_673340(a1, *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF0LL) )
          goto LABEL_22;
        return 0;
      case 0x22:
        if ( v8 != *(_QWORD *)(*(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFFF0LL)
          && !(unsigned __int8)sub_673340(a1, *(_QWORD *)(v8 + 24)) )
        {
          return 0;
        }
        v19 = *(_WORD *)(v8 + 18);
        v20 = (_QWORD *)(v8 + 48);
        v21 = (_QWORD *)((char *)v20 + (v19 & 0x3F8));
        if ( v20 == v21 )
          return 1;
        while ( (unsigned __int8)sub_673340(a1, *v20) )
        {
          if ( v21 == ++v20 )
            return 1;
        }
        return 0;
      case 0x26:
        if ( !(unsigned __int8)sub_673340(a1, *(_QWORD *)(v8 + 40)) )
          return 0;
        v11 = *(_QWORD *)(v8 + 48);
        return sub_672CC0(a1, v11, a3, a4, a5, a6);
      case 0x2A:
        v14 = *v7;
        while ( (*(_BYTE *)(v14 + 18) & 0x10) != 0 )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v14 + 16) - 42 > 1 )
            v14 = sub_B0D320(v14);
        }
        goto LABEL_83;
      case 0x2B:
        v14 = *v7;
        while ( (*(_BYTE *)(v14 + 18) & 0x10) != 0 )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v14 + 16) - 42 > 1 )
            v14 = sub_B0D320(v14);
        }
LABEL_83:
        a2 = *(_QWORD *)(v14 + 32);
        goto LABEL_11;
      case 0x2C:
        sub_B150D0(v40, *v7);
        return sub_673AC0(a1, v40);
      case 0x2D:
        if ( (*(_BYTE *)(v8 + 18) & 8) != 0 )
          a2 = *(_QWORD *)(v8 + 48);
        else
          a2 = *(_QWORD *)(v8 + 8);
        goto LABEL_11;
      case 0x30:
        v15 = sub_673A50(a1, *(_QWORD *)(v8 + 32));
        if ( !(_BYTE)v15 )
          return 0;
        v25 = *(unsigned int *)(v8 + 20);
        v26 = v8 + 48;
        v27 = v26 + 24 * v25;
        if ( v26 == v27 )
          return v15;
        while ( 1 )
        {
          result = sub_673AC0(a1, v26);
          if ( !(_BYTE)result )
            break;
          v26 += 24;
          if ( v27 == v26 )
            return v15;
        }
        return result;
      case 0x35:
        if ( (unsigned __int8)sub_673340(a1, *(_QWORD *)(v8 + 24)) )
          goto LABEL_22;
        return 0;
      default:
        return 1;
    }
  }
}

